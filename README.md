# RFID_DisplayOLED

Repositório para salvar programa funcional utilizando o Display OLE e Módulo RFID

![image](https://user-images.githubusercontent.com/101602056/235198361-b76f9317-bb5e-43c9-9cd0-af37dfae9771.png)

O módulo RFID FI-R300T será utilizado neste projeto, a tabela a seguir mostra as recomendações de operação: 

![image](https://user-images.githubusercontent.com/101602056/235917938-8f8c51bd-20d4-4aee-aae7-4fd905e80506.png)

Utilizando o osciloscópio foi verificado que o nível de tensão do Tx do módulo era de 3,6V, essa tensão é superior ao suportado pelo ESP32 que trabalha na faixa de 3V3, portanto foi montado um divisor de tensão para diminuir a tensão para aproximadamente 3V3. 

![image](https://user-images.githubusercontent.com/101602056/235919336-6be9d3e6-eabe-4b2a-a6e2-9c9d79a45004.png)

# RFID 

Para realizar a leitura da TAG envie o comando Q via serial com as instruções \r\n
* Serial2.print("Q\r\n");

# PIN OUT ESP32 38 pinos

![ESP32-básico-pinout](https://user-images.githubusercontent.com/101602056/235232991-eac5c2de-e2bb-4813-b9b1-8c859ec85699.jpg)

# Circuito montado 

![image](https://user-images.githubusercontent.com/101602056/235908544-1131aa3c-99f0-4535-a750-06cb1ed3697a.png)

# Para subir para o Git no terminal do powershell

* git status 
* git add .
* git commit -m "Escreva o seu comentário para identificar o seu commit, o que tem de novo no seu código, com áspas"
* git push -u origin master

# Teste com código de leitura 

![image](https://user-images.githubusercontent.com/101602056/235915492-ce890871-c24c-41c1-9973-dfdd109dd6cf.png)

# Tabela sobre o tamanho da trilha em uma PCB

![image](https://github.com/VictorRavani/RFID_DisplayOLED/assets/101602056/f272eee9-58a4-4234-bf1e-330ecbaa5967)




