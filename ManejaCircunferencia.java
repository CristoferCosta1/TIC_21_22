package MiCodigo;

public class ManejaCircunferencia {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circunferencia circunferencia1;
		Circunferencia circunferencia2;
		circunferencia1=new Circunferencia(7,9,4.5);
		System.out.println("CIRCULO 1: ");
		System.out.println("Coordenada X de centro: "+circunferencia1.getCoordX());
		System.out.println("Coordenada Y de centro: "+circunferencia1.getCoordY());
		System.out.println("Radio: "+circunferencia1.getRadio());
		System.out.println("Area: "+circunferencia1.devuelveArea());
		System.out.println("Longitud: "+circunferencia1.devuelveLongitud());
	}

}
