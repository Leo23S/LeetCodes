int maxSubArray(int* nums, int numsSize) {
    int i;
	int resposta = nums[0];
	int soma = nums[0];

	for (i = 0; i < numsSize; i++){
			if (soma + nums[i] > nums[i]){
                soma += nums[i];
            }else{
                soma = nums[i];
            }
			if(soma > resposta){
				resposta = soma;
			}
		}
	return resposta;
}