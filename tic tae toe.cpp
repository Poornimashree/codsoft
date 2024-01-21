#include<iostream>
#include<string.h> 
using namespace std;

int main() {
  int p1, p2, i, j, k = 1, turn=0, flg=0;
  
  char a[3][3], d1 ='X', d2 ='O';

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      a[i][j] = '-';
    }
  }
  
  
  turn = 0;
  while(turn<=8)
  {
	 if(turn == 0 || turn == 2 || turn == 4 || turn == 6 || turn == 8)
	 {
	   player1Entry:
		cout<<"player1 turn : ";
	 cin>>p1;
		
		if (p1 == 1) {
		  if (a[0][0] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[0][0] = d1;
		  }
		}

		if (p1 == 2) {
		  if (a[0][1] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[0][1] = d1;
		  }
		}

		if (p1 == 3) {
		  if (a[0][2] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[0][2] = d1;
		  }
		}

		if (p1 == 4) {
		  if (a[1][0] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[1][0] = d1;
		  }
		}

		if (p1 == 5) {
		  if (a[1][1] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[1][1] = d1;
		  }
		}

		if (p1 == 6) {
		  if (a[1][2] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[1][2] = d1;
		  }
		}

		if (p1 == 7) {
		  if (a[2][0] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[2][0] =d1;
		  }

		}

		if (p1 == 8) {
		  if (a[2][1] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[2][1] = d1;
		  }
		}

		if (p1 == 9) {
		  if (a[2][2] != '-') {
			cout<<"enter someother position since value is already there";
			goto player1Entry;
		  } else {
			a[2][2] = d1;
		  }
		}		
	 }
	 else if(turn == 1 || turn == 3 || turn == 5 || turn == 7)
	 {
	   
	   player2Entry:
	
		cout<<"player2 turn : ";
		cin>>p2;
		
		
		if (p2 == 1) {
		  if (a[0][0] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[0][0] = d2;

		  }
		}
		if (p2 == 2) {
		  if (a[0][1] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[0][1] = d2;
		  }
		}
		if (p2 == 3) {
		  if (a[0][2] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[0][2] = d2;
		  }
		}
		if (p2 == 4) {
		  if (a[1][0] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[1][0] = d2;
		  }
		}

		if (p2 == 5) {
		  if (a[1][1] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[1][1] = d2;
		  }
		}

		if (p2 == 6) {
		  if (a[1][2] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[1][2] = d2;
		  }
		}
		if (p2 == 7) {
		  if (a[2][0] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[2][0] = d2;
		  }

		}
		if (p2 == 8) {
		  if (a[2][1] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[2][1] = d2;
		  }
		}
		if (p2 == 9) {
		  if (a[2][2] != '-') {
			cout<<"enter someother position since value is already there";
			goto player2Entry;
		  } else {
			a[2][2] = d2;
		  }
		}   
	 }
	 
	 
	 	 
	  for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		  cout<<a[i][j];
		}
		cout<<"\n";
	  }
  
  
	 
	 if(turn >= 4)
	 {
	  if (((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && (a[0][2] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      }   
      else if (((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && (a[1][2] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]) && (a[2][2] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && (a[2][0] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && (a[2][1] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]) && (a[2][2] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && (a[2][2] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]) && (a[2][0] == 'X'))==1) {
        cout<<"player 1 is winner";
        goto endgame;
      } else if (((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && (a[0][2] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && (a[1][2] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]) && (a[2][2] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && (a[2][0] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && (a[2][1] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]) && (a[2][2] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && (a[2][2] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      } else if (((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]) && (a[2][0] == 'O'))==1) {
        cout<<"player 2 is winner";
        goto endgame;
      }
	 }  
    turn++;
  }
  endgame:
  	
    cout<<"Thank You for playing";
}
