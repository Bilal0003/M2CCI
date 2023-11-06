#include <iostream>
#include <vector>

int main() {
    int N = 6;
    std::vector<std::vector<int>> M(N, std::vector<int>(N, 0));

    M[0][0] = 1;

    for (int i = 1; i < N; i++) {
        M[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            M[i][j] = M[i - 1][j] + M[i - 1][j - 1];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << M[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
