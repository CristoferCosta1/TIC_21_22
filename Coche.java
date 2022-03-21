package MiCodigo;

public class Coche extends Vehiculo{
	private String marca;
	public Coche(String identificador, String medio) {
		super(identificador, medio);
		// TODO Auto-generated constructor stub
	}
	/**
	 * @return the marca
	 */
	public String getMarca() {
		return marca;
	}
	/**
	 * @param marca the marca to set
	 */
	public void setMarca(String marca) {
		this.marca = marca;
	}

}
