package MiCodigo;

public class Fecha {
	public Fecha(int dia, int mes, int anio) {
		super();
		this.dia = dia;
		this.mes = mes;
		this.anio = anio;
	}
	private int dia;
	private int mes;
	private int anio;
	/**
	 * @return the dia
	 */
	public int getDia() {
		return dia;
	}
	/**
	 * @param dia the dia to set
	 */
	public void setDia(int dia) {
		this.dia = dia;
	}
	/**
	 * @return the mes
	 */
	public int getMes() {
		return mes;
	}
	/**
	 * @param mes the mes to set
	 */
	public void setMes(int mes) {
		this.mes = mes;
	}
	/**
	 * @return the anio
	 */
	public int getAnio() {
		return anio;
	}
	/**
	 * @param anio the anio to set
	 */
	public void setAnio(int anio) {
		this.anio = anio;
	}
	boolean esPosterior(Fecha nuevaFecha){
		boolean loEs;
		loEs=false;
		if(this.getAnio()>nuevaFecha.getAnio()) loEs=true;
		else
			if(this.getAnio()==nuevaFecha.getAnio()) 
				if(this.getMes()>nuevaFecha.getMes())
					loEs=true;
				
				else 
					if(this.getMes()==nuevaFecha.getMes())
						if(this.getDia()>nuevaFecha.getDia())
							loEs=true;
					
				
		
		
		
	
		return loEs;			
		
		
	}

}
