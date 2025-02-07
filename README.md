markdown
Copy

# 🎮 Hardcore Geeks - AzerothCore Module 🔥  
**¡La experiencia definitiva para jugadores que aman el desafío!**  

![AzerothCore Compatible](https://img.shields.io/badge/AzerothCore-3.3.5-blue) 
![License: MIT](https://img.shields.io/badge/License-MIT-green) 
![GitHub Release](https://img.shields.io/badge/Version-1.0.0-red)

## 📜 Descripción  
Un módulo revolucionario que transforma tu servidor WoW en una experiencia Hardcore extrema con:  
✅ Sistema de vidas limitadas  
✅ Multiplicadores de XP personalizables  
✅ Muerte permanente con consecuencias reales  
✅ Completo sistema anti-cheat integrado  

![Hardcore Geeks Preview](https://via.placeholder.com/800x400.png?text=Hardcore+Geeks+Gameplay+Preview)

## ✨ Características Principales  
| Función                  | Descripción                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| 🎯 **Vidas Limitadas**    | 3 muertes máximas (configurable) antes de bloqueo permanente               |
| ⚡ **XP Personalizado**   | Multiplicador de experiencia desde 0.1x hasta 5x                           |
| 💀 **Muerte Definitiva**  | Conversión a fantasma con restricciones de juego completas                  |
| 📢 **Sistema de Alertas** | Mensajes globales personalizables con códigos de color RGB                  |
| 🛡️ **Modo GM Seguro**     | Herramientas especiales para Game Masters sin afectar el balance del juego  |
| 🔒 **Protección Total**   | Bloqueo de resurrecciones, comercio y uso de objetos en estado de muerte    |

## 🛠️ Instalación  
1. Clona el repositorio en tu carpeta de módulos:
```bash
git clone https://github.com/tu-usuario/hardcore-geeks.git modules/hardcore-geeks

    Importa la estructura SQL:

sql
Copy

# Usar el archivo: modules/hardcore-geeks/sql/custom/character_hardcore.sql

    Recompila el core:

bash
Copy

mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/azeroth-server/ -DSCRIPTS="hardcore-geeks"
make -j$(nproc)
make install

    Configura en worldserver.conf:

ini
Copy

[HardcoreGeeks]
Enable = 1
MaxDeaths = 3
XPRate = 0.25
# ... (Ver config-hardcore-geeks.conf.dist para todas las opciones)

⚙️ Configuración Avanzada
Clave	Valores	Descripción
GhostAura	ID de hechizo	Personaliza el efecto visual del fantasma
MessageColor	"R G B"	Color RGB para mensajes del sistema
DeathMessage	Texto con %s	Mensaje de muerte global personalizado
DisableNPCInteraction	0/1	Bloquear comercio con NPCs

Ejemplo de Configuración Extrema:
ini
Copy

[HardcoreGeeks]
Enable = 1
MaxDeaths = 1
XPRate = 0.1
DeathMessage = "|cFFFFA500¡EL IMPLACABLE %s HA CAÍDO EN BATALLA!|r"

❓ FAQ

Q: ¿Cómo resetear las muertes de un jugador?
sql
Copy

UPDATE character_hardcore SET deaths = 0, permanent_death = 0 WHERE guid = [CHARACTER_GUID];

Q: ¿Es compatible con otros módulos de clases?
✅ Sí, configurar ApplyToAllClasses = 1 para mejor compatibilidad

Q: ¿Los GMs pueden saltarse las restricciones?
✅ Sí, usando IgnoreGMs = 1 y AllowGMResurrect = 1
🤝 Contribuir

¡Aceptamos Pull Requests! Sigue estos pasos:

    Haz fork del repositorio

    Crea tu branch (git checkout -b feature/NewAwesomeFeature)

    Commit tus cambios (git commit -am 'Add some NewAwesomeFeature')

    Push al branch (git push origin feature/NewAwesomeFeature)

    Abre un Pull Request

📄 Licencia

MIT License - Ver LICENSE para detalles

⚠️ ¿Listo para el verdadero desafío?
¡Haz tu servidor legendario con el módulo que está revolucionando el WoW privado!

⭐ ¡Dale una estrella en GitHub si te gusta el proyecto!
Copy


Este README incluye:  
1. Diseño moderno con badges y tablas  
2. Secciones claramente organizadas  
3. Instrucciones detalladas de instalación  
4. Ejemplos prácticos de configuración  
5. FAQ para solución rápida de problemas  
6. Sistema de contribución estándar  
7. Compatibilidad con markdown de GitHub  
8. Llamados a la acción visualmente atractivos
