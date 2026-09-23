char* predictPartyVictory(char* senate) {
    char *res;
    char *ban;
    res = NULL;
    int n = strlen(senate);

    while (res == NULL){
        for (int i = 0; i < n; i++){
            if (senate[i] == 'R'){
                if ( ( ban = strchr( (senate + i), 'D' ) ) == NULL ){
                    if ( ( ban = strchr( senate, 'D' ) ) == NULL ){
                        res = malloc(sizeof("Radiant"));
                        strcpy(res, "Radiant");
                    } else {
                        ban[0] = '0';
                    }
                } else {
                    ban[0] = '0';
                }
            } else if (senate[i] == 'D'){
                if ( ( ban = strchr( (senate + i), 'R' ) ) == NULL ){
                    if ( ( ban = strchr( senate, 'R' ) ) == NULL ){
                        res = malloc(sizeof("Dire"));
                        strcpy(res, "Dire");
                    } else {
                        ban[0] = '0';
                    }
                } else {
                    ban[0] = '0';
                }
            }
        }
    }
    return res;
}
