package com.company;

public class Congelados extends Productos{
    protected int temperatura;

    Congelados(){
        temperatura=0;
    }

    //Constructor
public Congelados ( String caducidad, int lote,int temperatura){
    super(caducidad,lote);
    this.temperatura=temperatura;
    }
int getTemperatura(){
        return this.temperatura;
}
}
