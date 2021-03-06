package com.kylecorry.frc.vision.distance;

import com.kylecorry.frc.vision.targeting.Target;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.*;

public class FixedAngleCameraDistanceEstimatorTest {

    private Target target;

    private DistanceEstimator distanceEstimator;

    @Before
    public void setUp() throws Exception {
        target = new Target(0, 10, 10, -90, null);
        distanceEstimator = new FixedAngleCameraDistanceEstimator(10, 1, 10);
    }

    @Test
    public void getDistance() {
        assertEquals(24.727296793, distanceEstimator.getDistance(target), 0.01);
    }
}