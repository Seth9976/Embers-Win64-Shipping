// 函数: sub_1420d7090
// 地址: 0x1420d7090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = (zx.o(0)).d
float zmm6[0x4] = arg4
float temp0 = _mm_min_ss(arg4[0], 0x3f800000)
int32_t zmm4

if (zmm6[0] >= 0f)
    zmm4 = temp0
else
    zmm4 = (zx.o(0)).d

arg4 = 0x3f800000
arg4[0] = 1f f- zmm4
zmm4 = zmm4 f* arg2[1]
arg4[0] = arg4[0] f* arg3[1]
arg4[0] = arg4[0] f+ zmm4

if (arg4[0] >= -180f)
    arg4 = __minss_xmmss_memss(arg4[0], 0x43340000)
else
    arg4 = 0xc3340000

bool cond:0 = zmm6[0] >= 0f
arg1[1] = arg4[0]
float zmm5

if (cond:0)
    zmm5 = temp0
else
    zmm5 = (zx.o(0)).d

arg4 = 0x3f800000
arg4[0] = 1f - zmm5
zmm5 = zmm5 * *arg2
arg4[0] = arg4[0] f* *arg3
arg4[0] = arg4[0] + zmm5

if (arg4[0] >= -180f)
    arg4 = __minss_xmmss_memss(arg4[0], 0x43340000)
else
    arg4 = 0xc3340000

bool cond:1 = zmm6[0] < 0f
*arg1 = arg4[0]

if (not(cond:1))
    zmm1 = temp0

float zmm0 = (1f f- zmm1) f* arg3[2] f+ zmm1 f* arg2[2]

if (zmm0 >= -180f)
    arg1[2] = __minss_xmmss_memss(zmm0, 0x43340000)
    return arg1

arg1[2] = 0xc3340000
return arg1
