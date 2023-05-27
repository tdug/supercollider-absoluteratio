AbsoluteRatio : UGen {
	*ar { |x,y=1.0| ^this.multiNew('audio', x, y); }
	/* TODO
	*kr { |x,y=1| ^this.multiNew('control', x, y); }
	*ir { |x,y=1| ^this.multiNew('scalar', x, y); }
	*/
}
