# DRIVER_HSE_STM32F407VG
HSE (High-Speed External) en mode Low-Level (LL) pour STM32.
HSE (High-Speed External) en mode Low-Level (LL) pour STM32.

🔹 1. HSI (High-Speed Internal) 
Le HSI est une horloge interne à XX MHz, activée par défaut au démarrage du microcontrôleur. Il est utilisé pour le démarrage rapide et en secours lorsque le HSE n’est pas disponible.

📌 1.1 Registres liés au HSI
Les principaux registres de configuration du HSI sont :
Registre Description : 
 RCC_CR (Clock Control Register) Active/Désactive le HSI et indique son état. 
 RCC_CFGR (Clock Configuration Register) Définit le HSI comme source d’horloge principale. 
 RCC_CIR (Clock Interrupt Register) Gère les interruptions liées au HSI. 

📌 1.2 Détails du registre RCC_CR (Clock Control Register)
Ce registre contrôle l’activation du HSI :
 Bit Nom Description 0 HSION Met en marche (1) ou arrête (0) le HSI. 
 1 HSIRDY Indique si le HSI est stable (1 prêt, 0 non prêt). 
 [7:3] HSITRIM Permet d’ajuster la fréquence du HSI pour un meilleur étalonnage.
 [15:8] HSICAL Valeur d’étalonnage automatique fournie par l’usine. 
📌 1.3 Activation du HSI en mode Low-Level (LL)
En STM32, l’activation du HSI avec les fonctions LL se fait ainsi :
// Activer HSI
LL_RCC_HSI_Enable();

// Attendre que le HSI soit prêt
while(LL_RCC_HSI_IsReady() == 0);
🔹 2. HSE (High-Speed External) – 4 à 26 MHz
Le HSE est une horloge externe qui utilise un quartz ou une source d’horloge externe pour offrir une meilleure précision et stabilité.

📌 2.1 Registres liés au HSE
Les registres principaux pour gérer le HSE sont :
 Registre Description : 
 RCC_CR Active/Désactive le HSE et vérifie son état. RCC_CFGR Configure le HSE comme source d’horloge principale. 
RCC_CIR Gère les interruptions liées au HSE
 📌 2.2 Détails du registre RCC_CR
Le registre RCC_CR permet de contrôler l’activation du HSE :
 Bit Nom Description 
 16 HSEON Active (1) ou désactive (0) le HSE.
 17 HSERDY Indique si le HSE est stable (1 prêt, 0 non prêt).
 18 HSEBYP Permet d’utiliser une horloge externe au lieu d’un quartz (1). 
 📌 2.3 Activation du HSE en mode Low-Level (LL)
Avec les fonctions LL, on peut activer le HSE de cette manière :
