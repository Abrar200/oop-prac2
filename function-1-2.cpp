int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                // Check if diagonal elements are 1
                if (array[i][j] != 1) {
                    return 0;
                }
            } else {
                // Check if non-diagonal elements are 0
                if (array[i][j] != 0) {
                    return 0;
                }
            }
        }
    }
    // If we've made it through all checks, it's an identity matrix
    return 1;
}
