int main(){
	for(int n = 0; n < 51; n++){ //for every number from 1 through 50
		int s = 0;
		for(int i = 0; i <= 7;i++) //check each (8) bit in the number
			s += n >> i & 1; //sum to s if 1
		if(!(s & 1)) //check if the parity bit is 0
			printf("%u\n",n);
	}
}

//compact version is at 103 bytes: int main(){for(int n=0;n<51;n++){int s=0;for(int i=0;i<=7;i++)s+=n>>i&1;if(!(s & 1))printf("%u\n",n);}}
