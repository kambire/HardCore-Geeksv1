# **hardcore-geeks - Hardcore Mode for AzerothCore**

![AzerothCore](https://img.shields.io/badge/AzerothCore-3.3.5-blue)  
![License](https://img.shields.io/badge/License-MIT-green)  

The **hardcore-geeks** module introduces a hardcore mode to your AzerothCore server. Players start with a limited number of revives and can purchase additional revives with in-game gold.

---

## **Features**
- **Limited Revives**: Players start with a configurable number of revives.
- **Revive Purchases**: Players can buy additional revives with gold.
- **Customizable Messages**: Configure death and revive messages.
- **Easy Configuration**: Modify settings via a `.conf` file.

---

## **Installation**

### 1. Clone the Module
Clone this repository into your `modules` directory:
```bash
cd path/to/azerothcore/modules
git clone https://github.com/yourusername/hardcore-geeks.git
```

### 2. Import Configuration
Copy the configuration file to your server's `etc` directory:
```bash
cp modules/hardcore-geeks/conf/hardcore-geeks.conf.dist etc/worldserver.conf.d/hardcore-geeks.conf
```

### 3. Recompile the Core
Recompile AzerothCore to include the new module:
```bash
cd path/to/azerothcore/build
rm -rf *
cmake ..
make -j$(nproc)
```

---

## **Configuration**
Edit the configuration file (`etc/worldserver.conf.d/hardcore-geeks.conf`) to customize the module:

```ini
[hardcore-geeks]
# Initial number of revives
InitialRevives = 3

# Cost to purchase additional revives (in gold)
ReviveCost = 100

# Death message (use %u for revives left)
DeathMessage = "You have %u revives left. Use .revive to buy more."

# No revives left message
NoRevivesLeftMessage = "You have no revives left! Play carefully!"

# Revive purchased message (use %u for cost and revives left)
RevivePurchasedMessage = "You have purchased a revive for %u gold. Revives left: %u."
```

---

## **Commands**
- **.revive**: Purchase an additional revive (costs gold).

---

## **License**
This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

---

## **Credits**
- Developed by **[Geeks Team]**.
- [AzerothCore](https://www.azerothcore.org/) Framework.

---

## **Support**
If you encounter any issues or have questions, feel free to open an issue on the [GitHub repository](https://github.com/kambire/hardcore-geeks).

---

Enjoy your hardcore experience with **hardcore-geeks**! 🎮

---

¡Con esto, tu módulo estará listo para ser publicado y compartido con la comunidad! 😊
