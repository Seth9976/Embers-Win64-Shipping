// 函数: sub_1420d7170
// 地址: 0x1420d7170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = (zx.o(0)).d
arg4[0] - 0f
bool cond:0 = arg4[0] >= 0f
bool cond:1 = arg4[0] >= 0f
bool cond:2 = arg4[0] < 0f
float temp0[0x4] = _mm_min_ss(arg4[0], 0x3f800000)
int32_t zmm5

if (cond:0)
    zmm5 = temp0[0]
else
    zmm5 = (zx.o(0)).d

*arg1 = (1f f- zmm5) * *arg3 f+ zmm5 f* *arg2

if (cond:1)
    arg4 = temp0
else
    arg4 = zx.o(0)

float zmm0 = 1f - arg4[0]
arg4[0] = arg4[0] * arg2[1]
arg1[1] = zmm0 * arg3[1] + arg4[0]

if (not(cond:2))
    zmm1 = temp0[0]

arg1[2] = (1f f- zmm1) * arg3[2] f+ zmm1 f* arg2[2]
return arg1
