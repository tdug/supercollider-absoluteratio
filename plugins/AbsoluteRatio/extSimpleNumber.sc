+ SimpleNumber {
    absRatio { |other=1.0| ^(this > other).if({other / this}, {this / other}) }
}