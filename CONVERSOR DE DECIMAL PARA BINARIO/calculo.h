
int ascii;


int convr_binario(){
    int i;
    int n_1 = 0;
    int n_2 = 0;
    int n_3 = 0;
    int n_4 = 0;
    int n_5 = 0;
    int n_6 = 0;
    int n_7 = 0;
    int n_8 = 0;

for(i = 0; i <= 8; i++) {
     if(ascii >= 128) {
        if(ascii == 128) {
            n_1++;
            break;
        } else {
            ascii -= 128;
            n_1++;
        }
    } else if(ascii >= 64) {
        if(ascii == 64) {
            n_2++;
            break;
        } else {
            ascii -= 64;
            n_2++;
        }
    } else if(ascii >= 32) {
        if(ascii == 32) {
            n_3++;
            break;
        } else {
            ascii -= 32;
            n_3++;
        }
    } else if(ascii >= 16) {
        if(ascii == 16) {
            n_4++;
            break;
        } else {
            ascii -= 16;
            n_4++;
        }
    } else if(ascii >= 8) {
        if(ascii == 8) {
            n_5++;
            break;
        } else {
            ascii -= 8;
            n_5++;
        }
    } else if(ascii >= 4) {
        if(ascii == 4) {
            n_6++;
            break;
        } else {
            ascii -= 4;
            n_6++;
        }
    } else if(ascii >= 2) {
        if(ascii == 2) {
            n_7++;
            break;
        } else {
            ascii -= 2;
            n_7++;
        }
    } else if(ascii >= 1) {
        if(ascii == 1) {
            n_8++;
            break;
        } else {
            ascii -= 1;
            n_8++;
        }
    }
}


    printf("%d%d%d%d%d%d%d%d \n", n_1,n_2,n_3,n_4,n_5,n_6,n_7,n_8);
    
};


