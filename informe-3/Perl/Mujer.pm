package Mujer;
use strict;

sub new{
	my $this=shift;
	my $class =ref($this)||$this;

	my $self={};
	$self -> {NOMBRE}=undef;
	$self -> {EDAD}=0;

	bless $self, $class;
	return ($self);
}
sub setNombre{
	my $self=shift;
	$self->{NOMBRE}=shift if (@_);
	return $self->{NOMBRE};
}
sub setEdad{
	my $self=shift;
	$self->{EDAD}=shift if (@_);
	return $self->{EDAD};
}
1;