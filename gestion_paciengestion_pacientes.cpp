Gestión de Pacientes 
#include paciente

// Funciones para agregar, eliminar y buscar pacientes
void agregarPaciente(std::vector<Paciente>& pacientes, const Paciente& paciente) {
    pacientes.push_back(paciente);
}
Paciente* buscarPacientePorId(std::vector<Paciente>& pacientes, const std::string& id) {
    for (auto& paciente : pacientes) {
        if (paciente.getId() == id) {
            return &paciente;
        }
    }
    return nullptr;
}
void eliminarPaciente(std::vector<Paciente>& pacientes, const std::string& id) {
    pacientes.erase(std::remove_if(pacientes.begin(), pacientes.end(),
    [&id](const Paciente& p) { return p.getId() == id; }),
    pacientes.end());
}