package com.kylecorry.frc.vision;

public class TargetGroup {
	private Target first, second;

	public TargetGroup(Target first, Target second) {
		this.first = first;
		this.second = second;
	}

	public Target getFirstTarget() {
		return first;
	}

	public Target getSecondTarget() {
		return second;
	}

	public double getWidth() {
		double minLeft = Math.min(first.getPosition().x, second.getPosition().x);
		double maxRight = Math.max(first.getPosition().x + first.getWidth(),
				second.getPosition().x + second.getWidth());
		return maxRight - minLeft;
	}

	public double getHeight() {
		double minTop = Math.min(first.getPosition().y, second.getPosition().y);
		double maxBottom = Math.max(first.getPosition().y + first.getHeight(),
				second.getPosition().y + second.getHeight());
		return maxBottom - minTop;
	}

	public Position getPosition() {
		double minLeft = Math.min(first.getPosition().x, second.getPosition().x);
		double minTop = Math.min(first.getPosition().y, second.getPosition().y);
		return new Position(minLeft, minTop);
	}

	public Position getCenterPosition() {
		return new Position(getPosition().x + getWidth() / 2.0, getPosition().y + getHeight() / 2.0);
	}

	public double computeDistance(int imageWidth, double targetActualWidth, double cameraViewAngle) {
		double normalizedWidth;
		normalizedWidth = 2 * getWidth() / imageWidth;
		return targetActualWidth / (normalizedWidth * Math.tan(Math.toRadians(cameraViewAngle / 2)));
	}

	public double computeAngle(int imageWidth, double cameraViewAngle) {
		double aimingCoordinate = (getCenterPosition().x / imageWidth) * 2 - 1;
		return aimingCoordinate * cameraViewAngle / 2;
	}
}
