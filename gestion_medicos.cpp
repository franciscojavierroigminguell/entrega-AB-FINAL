Gestióndemédicos
#include medico.h
#include <vector>

void agregarMedico(std::vector<Medico>& medicos, const Medico& medico) {
    medicos.push_back(medico);
}

Medico* buscarMedicoPorEspecialidad(std::vector<Medico>& medicos, const std::string& especialidad) {
    for (auto& medico : medicos) {
        if (medico.getEspecialidad() == especialidad) {
            return &medico;
        }
    }
    return nullptr;
}