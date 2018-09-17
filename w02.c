# include <stdio.h>
unsigned int a = 2222111000;
char * b = &a;

int printInt(int val){
	int currByteNum;
	char * currByteVal = &val;
	
	// ----- Test ------
	//printf("%hhx\n", currByteVal);
	//printf("%hhx\n", currByteVal++);
	//printf("%hhx\n", currByteVal);
	
	//currByteVal = &val;
	//printf("%hhx\n", *currByteVal);
	//printf("%hhx\n", *currByteVal++);
	//printf("%hhx\n", *currByteVal);
	//---- End of Test ---
	
	for(currByteNum = 0; currByteNum < sizeof(val); currByteNum++){
		printf("Byte %d : %hhx\n", currByteNum, *currByteVal);
		currByteVal++;
	}
	return 0;
}

int incrementOne(int val){
	int currByteNum;
	char * currByteVal = &val;
	
	for (currByteNum = 0; currByteNum < sizeof(val); currByteNum++){
		*currByteVal += 1;
		printf("Change %d : %x : %u\n", currByteNum, val, val);
		currByteVal++;
	}
	return 1;
}

int incrementSixteen(int val){
	int currByteNum;
	char * currByteVal = &val;
	
	for (currByteNum = 0; currByteNum < sizeof(val); currByteNum++){
		*currByteVal += 16;
		printf("Change %d : %x : %u\n", currByteNum, val, val);
		currByteVal++;
	}
	return 1;
}

int main(){	
	printf("Original Decimal: \n%u\n", a);
	printf("Original Hex: \n%x\n", a);
	printf("Location: \n%p\n", a);
	printf("\nSeperated:\n");
	
	printInt(a);
	printf("\nIncremented with 1:\n");
	
	incrementOne(a);
	printf("\nIncremented with 16: \n");
	
	incrementSixteen(a);
	printf("\n");
	
	return 1;
}
