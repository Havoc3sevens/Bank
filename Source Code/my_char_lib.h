int charlen (char *inputchar) {
    int countchar = 0;
    for(int i = 0; inputchar[i]; i++) {
        countchar += 1;
    }
    return countchar;
}

int comparechar(char *inputchar1, char *inputchar2) {
    int samechars = 1;
    if (charlen(inputchar1) != charlen(inputchar2) ){
        return 0;
    } else {
        for(int i = 0; inputchar1[i]; i++) {
            if (inputchar1[i] != inputchar2[i]) {
                samechars = 0;
                break;
            }
        }
        return samechars;   
    }
}