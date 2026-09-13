int maxSubArray( int *nums, int numsSize ) {
	int i;
	int j;
	int resposta = 0;
	int soma;

	for (i = 0; i < numsSize; i++){
		soma = 0;
		for (j = i; j < numsSize; j++){
			soma += nums[j];
			if(soma > resposta || resposta == 0){
				resposta = soma;
			}
		}

	}
	return resposta;
}