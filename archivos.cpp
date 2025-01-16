4. Manejo de Archivos (archivos.cpp)
#include <fstream>
#include "paciente.h"
#include "medico.h"
#include "cita.h"

void guardarPacientes(const std::vector<Paciente>& pacientes, const std::string& archivo) {
    std::ofstream file(archivo);
    for (const auto& paciente : pacientes) {
        file << paciente.getId() << ";" << paciente.getNombre() << ";" << paciente.getFechaIngreso() << "\n";
    }
    file.close();
}

void cargarPacientes(std::vector<Paciente>& pacientes, const std::string& archivo) {
    std::ifstream file(archivo);
    std::string id, nombre, fechaIngreso;
    while (file >> id >> nombre >> fechaIngreso) {
        pacientes.push_back(Paciente(nombre, id, fechaIngreso));
    }
    file.close();
}
