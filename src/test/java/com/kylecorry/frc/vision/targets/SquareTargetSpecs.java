package com.kylecorry.frc.vision.targets;

import com.kylecorry.frc.vision.targets.TargetSpecs;

public class SquareTargetSpecs implements TargetSpecs {

    @Override
    public double getWidth() {
        return 20;
    }

    @Override
    public double getHeight() {
        return 20;
    }

    @Override
    public double getArea() {
        return getWidth() * getHeight();
    }
}
