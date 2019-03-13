#!/usr/bin/perl
package Estudiante;
use strict;

sub new{bless{},shift}
sub DESTROY {}
sub setCarnet{
	my $carnet=shift;
	$carnet->{carnet}=shift;
}
sub setNombre{
	my $nombre=shift;
	$nombre->{nombre}=shift;
}
sub setCursosAsignados{
	my $cursosAsignados=shift;
	$cursosAsignados={cursosAsignados}=shift;
}
sub getCarnet{
	my $carnet=shift;
	$carnet->{carnet};
}
sub getNombre{
	my $nombre=shift;
	$nombre->{nombre};
}
sub getCursosAsignados{
	my $cursosAsignados=shift;
	$cursosAsignados->{cursosAsignados};
}