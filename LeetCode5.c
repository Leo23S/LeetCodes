char* longestPalindrome(char* s) {
    char *Last_letter, *AUX_Pointer, *AUX_Pointer2;
    char Palindrom_Temp[1000], Palindrom[1000];
    int i, j, check=0;
    Last_letter = NULL;
    AUX_Pointer = NULL;
    Palindrom[0] = '\0';

    for(i=0; s[i] != '\0'; i++){
        AUX_Pointer2 = &s[i+1];
        check = 0;
        Last_letter = strchr(AUX_Pointer2, s[i]);
        AUX_Pointer2 = (Last_letter+1);
        while ((AUX_Pointer = strchr(AUX_Pointer2, s[i])) != NULL){
            Last_letter = AUX_Pointer;
            AUX_Pointer2 = (Last_letter+1);
        }
        for (AUX_Pointer2 = &s[i], j=0; AUX_Pointer2 != Last_letter; AUX_Pointer2++, j++){
            if (AUX_Pointer2 != (Last_letter-j)){
                AUX_Pointer2 = Last_letter;
                check = 0;
            }else{
                check = 1;
            }
        }
        if (check == 1){
            for(j=0; (Last_letter-j) != &s[i]; j++){
                Palindrom_Temp[j] = *(Last_letter-j);
            }
            Palindrom_Temp[j+1] = '\0';
        }
        if (strlen(Palindrom_Temp) > strlen(Palindrom)){
            strcpy(Palindrom, Palindrom_Temp);
        }
    }
    return Palindrom;
}