void addCharAtIndex(char arr[], int i, char newChar) {
    int len = strlen(arr);

    if (i < 0 || i > len) {
        printf("Invalid index i.\n");
        return;
    }

    // Shift characters to the right of index i by one position
    for (int j = len; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Set the character at index i to the new character
    arr[i] = newChar;
}
