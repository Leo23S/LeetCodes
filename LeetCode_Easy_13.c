int romanToInt(char* s) {
    int num=0, i=0;
    
    while(s[i] != '\0'){
        switch (s[i]){
                case 'I':
                    if (s[i+1] == 'V' || s[i+1] == 'X' || s[i+1] == 'I'){
                        i++;
                    }else if (i > 1 && s[i-2] == 'I'){
                        num += 3;
                        i++;
                    }else if (i > 0 && s[i-1] == 'I'){
                        num += 2;
                        i++;
                    } else {
                        num++;
                        i++;
                    }
                    break;
                case 'V':
                    if (i > 0 && s[i-1] == 'I' ){
                        num += 4;
                        i++;
                    } else {
                        num += 5;
                        i++;
                    }
                    break;
                case 'X':
                    if (s[i+1] == 'L' || s[i+1] == 'C'){
                        i++;
                    }else if (i > 0 && s[i-1] == 'I'){
                        num += 9;
                        i++;
                    }else {
                        num += 10;
                        i++;
                    }
                    break;
                case 'L':
                    if (i > 0 && s[i-1] == 'X' ){
                        num +=40;
                        i++;
                    } else {
                        num += 50;
                        i++;
                    }
                    break;
                case 'C':
                    if (s[i+1] == 'D' || s[i+1] == 'M'){
                        i++;
                    }else if (i > 0 && s[i-1] == 'X'){
                        num += 90;
                        i++;
                    }else {
                        num += 100;
                        i++;
                    }
                    break;
                case 'D':
                    if (i > 0 && s[i-1] == 'C' ){
                        num +=400;
                        i++;
                    } else {
                        num += 500;
                        i++;
                    }
                    break;
                case 'M':
                    if (i > 0 && s[i-1] == 'C' ){
                        num +=900;
                        i++;
                    } else {
                        num += 1000;
                        i++;
                    }
                    break;
            }
    }
    return num;
}