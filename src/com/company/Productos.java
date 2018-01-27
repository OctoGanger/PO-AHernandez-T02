package com.company;

public class Productos {
//Atributos
    protected String caducidad;
    protected int lote;

    //Métodos
    public Productos() {
        this.caducidad = "";
        lote = 0;
    }

    public Productos (String caducidad, int lote){
        this.caducidad=caducidad;
        this.lote=lote;

    }
public String getCaducidad(){
        return this.caducidad;
}
public int getLote(){
        return this.lote;
}
    }

