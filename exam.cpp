#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
vector<string> grid;
vector<vector<bool>> visited;
bool found = false;

// Movement Priority: Right, Left, Up, Down
int dr[] = {0, 0, -1, 1};
int dc[] = {1, -1, 0, 0};

bool dfs(int r, int c) {
    // If we reached the Destination
    if (grid[r][c] == 'D') {
        found = true;
        return true;
    }

    visited[r][c] = true;

    // Try all 4 directions in the specific order
    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        // Bounds check, wall check, and visited check
        if (nr >= 0 && nr < N && nc >= 0 && nc < M && 
            grid[nr][nc] != '#' && !visited[nr][nc]) {
            
            if (dfs(nr, nc)) {
                if (grid[r][c] != 'R' && grid[r][c] != 'D') {
                    grid[r][c] = 'X';
                }
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> N >> M)) return 0;

    grid.resize(N);
    visited.assign(N, vector<bool>(M, false));

    string full_maze;
    string temp;
    while (cin >> temp) {
        full_maze += temp;
    }

    int startR, startC;
    for (int i = 0; i < N; i++) {
        grid[i] = full_maze.substr(i * M, M);
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == 'R') {
                startR = i;
                startC = j;
            }
        }
    }

    dfs(startR, startC);

    for (int i = 0; i < N; i++) {
        cout << grid[i];
    }
    cout << endl;

    return 0;
}