int maxSubArray(int* nums, int numsSize) {
    int i;
	int j;
	int resposta = 0;
	int soma;
    int zero = 0;

	for (i = 0; i < numsSize; i++){
		soma = 0;
		for (j = i; j < numsSize; j++){
			soma += nums[j];
            if (nums[j] == 0){
                zero = 1;
            }
			if(soma > resposta || resposta == 0){
				resposta = soma;
			}
		}

	}
    if (zero == 1 && resposta < 0){
        resposta = 0;
    }
	return resposta;
}