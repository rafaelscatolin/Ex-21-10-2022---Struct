#include <iostream>

using namespace std;

int main () {
	
	struct aluno {
		int ra, falta;
		float P, E;
	} alunos [10];
	
	for (int i=0; i<10; i++) {
		
		cout << "ALUNO " << i + 1 << endl;
		cout << "Digite o RA: ";
		cin >> alunos[i].ra;
		cout << "Digite o numero de faltas: ";
		cin >> alunos[i].falta;
		cout << "Nota parcial: ";
		cin >> alunos[i].P;
		cout << "Nota do exame: ";
		cin >> alunos[i].E;
		cout << endl;
		
	}
	
	cout << " RA " << "\tFaltas " << "\tParcial" << "\tExame" << endl;
	
	for (int i=0; i<10; i++) {
		cout << alunos[i].ra << "\t" << alunos[i].falta << "\t" << alunos[i].P << "\t" << alunos[i].E << endl;
	}
	
	cout << endl << endl;
	
	system ("pause");
	
	return 0;
	
}





