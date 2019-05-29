int sum(int input[], int n) {
    if(n==0){ 
    return 0;
    }
    
    int small_output = sum(input+1,n-1);
    int output = input[0]+small_output;
    return output;

}

int main(){
    
}
