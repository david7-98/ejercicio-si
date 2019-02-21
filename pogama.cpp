void LeerStruct (Alumno &a) {

	int num;
	
	do {
		cout << ¿Cuántos alumnos desea? 
		cin >> num;
	} while (num < 0);

	for (int i = 1; i <= num; i++) {
		cout << "Alumno: " << i << endl;
		cout << "Nombre: ";
		cin >> a.nombre;
		cout << "Edad: ";
		cin >> a.edad;
	}
}

void imprimeAlumno(const Alumno &alu){
	cout << alu.nombre << " " << alu.edad << endl;
}
