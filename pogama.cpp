//Holi


/**

* @brief Mateo eres malisimo jugando al Apex
* @param ya ves loco


*/


void algoritmoDeOrdenacion (Alumno &array[], int util_array){

	int aux = 0;

	for(int i = 0; i < util_array; i++){

		for(int j = 0; j < util_array; j++){

			if(array.edad[i] < array.edad[j]){

				aux = array.edad[i];
				array.edad[i] = array.edad[j];
				array.edad[j] = aux;

			}

		}
	}

}

void imprimeAlumno(const Alumno &alu){
	cout << alu.nombre << " " << alu.edad << endl;
}

