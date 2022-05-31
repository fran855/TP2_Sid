# TP2_Sid

## CLASES
- Archivo_lectura
- Archivo_escritura
- Lectura (virtual)
    - Novela
        - Novela_historica
    - Poema
    - Cuento
- Escritor

## Open Issues
- Implementé la obtención del escritor (en la clase Escritor y en el Parser de lecturas [v2]) pero hay problemas en procesar datos si no me equivoco y algunas implementaciones de ese archivo

## OBSERVACIONES
### Fran
- Hice CLA estática pero creo que estaría bueno que sea dinámica (más adelante)
- La lista podría ser doblemente enlazada
- Cambiamos el enum genero por un typedef (genero_t al estilo AlgoI)
- Implementé Nodo con templates y adapté Lista (en proceso)
- Armé el parser de escritores pero hay problemas cuando genera los nuevos nodos (elemento pide los datos de una en el constructor) [NO FUNCIONA]
- Nueva rama: archivos_desarrollo para poder editar el parser de escritores

| Objeto | Estado     |
|:------:|:----------:|
|Escritor|  OK        |
| Lista  | OK|
| Nodo   | OK|
|Parser  | OK         |
| Valgrin | OK |

Compilación: g++ main_prueba_escritores.cpp parser_escritores.cpp escritor.cpp -o main
Ejecución: ./main "prueba_escritores.txt"

### Lean
- Implemente cuento, novela, novela historica (en proceso)
- Implementacion en proceso de parser_lecturas
