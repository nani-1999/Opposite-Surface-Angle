float Yaw = GetRotation().Yaw;
if (Yaw < 0) Yaw += 180;
else if (Yaw > 0) Yaw += -180;
else Yaw = 0;