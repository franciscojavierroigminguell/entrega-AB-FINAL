Gestión de citas
#include cita.h
#include <vector>
#include <algorithm>

// Función para ordenar citas por fecha
void ordenarCitasPorFecha(std::vector<Cita>& citas) {
    std::sort(citas.begin(), citas.end(), [](const Cita& a, const Cita& b) {
        return a.getFecha() < b.getFecha();
    });