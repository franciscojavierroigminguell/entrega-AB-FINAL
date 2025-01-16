 ClasePaciente
#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include historial.h

class Paciente {
private:
    std::string nombre;
    std::string id;  // Número de identificación
    std::string fechaIngreso;
    std::vector<Historial> historialClinico;

public:
    Paciente(std::string nombre, std::string id, std::string fechaIngreso)
        : nombre(nombre), id(id), fechaIngreso(fechaIngreso) {}

    void agregarHistorial(const Historial& hist);
    void mostrarHistorial() const;
    std::string getId() const { return id; }
    std::string getNombre() const { return nombre; }
    std::string getFechaIngreso() const { return fechaIngreso; }
};

#endif // PACIENTE_H

ClaseMedico

#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <vector>

class Medico {
private:
    std::string nombre;
    std::string especialidad;
    bool disponible;

public:
    Medico(std::string nombre, std::string especialidad)
        : nombre(nombre), especialidad(especialidad), disponible(true) {}

    void asignarEspecialidad(const std::string& especialidad);
    void cambiarDisponibilidad(bool disponible);
    std::string getEspecialidad() const { return especialidad; }
    std::string getNombre() const { return nombre; }
    bool getDisponibilidad() const { return disponible; }
};

#endif // MEDICO_H

3 ClaseCita
#ifndef CITA_H
#define CITA_H

#include <string>
#include paciente
#include medico

class Cita {
private:
    Paciente paciente;
    Medico medico;
    std::string fecha;
    std::string hora;
    bool urgente;

public:
    Cita(Paciente paciente, Medico medico, std::string fecha, std::string hora, bool urgente)
        : paciente(paciente), medico(medico), fecha(fecha), hora(hora), urgente(urgente) {}

    void mostrarCita() const;
    bool esUrgente() const { return urgente; }
    std::string getFecha() const { return fecha; }
    std::string getHora() const { return hora; }
    Paciente getPaciente() const { return paciente; }
    Medico getMedico() const { return medico; }
};

#endif // CITA_H

ClaseHistorial
#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <string>

class Historial {
private:
    std::string fecha;
    std::string descripcion;

public:
    Historial(std::string fecha, std::string descripcion)
        : fecha(fecha), descripcion(descripcion) {}

    void mostrarHistorial() const;
    std::string getFecha() const { return fecha; }
    std::string getDescripcion() const { return descripcion; }
};

#endif // HISTORIAL_H

ClaseServicio
#ifndef SERVICIOS_H
#define SERVICIOS_H

#include <string>

class Servicio {
private:
    std::string nombre;
    double costo;

public:
    Servicio(std::string nombre, double costo)
        : nombre(nombre), costo(costo) {}

    std::string getNombre() const { return nombre; }
    double getCosto() const { return costo; }
};
#endif // SERVICIOS_H
