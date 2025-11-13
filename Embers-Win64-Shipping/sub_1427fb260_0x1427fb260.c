// 函数: sub_1427fb260
// 地址: 0x1427fb260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg3[0] <= 0.999899983f
*arg5 = 0
int128_t zmm7 = arg4

if (not(cond:0))
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    return arg1

arg4 = arg2[3]
float zmm0[0x4] = *arg2
float var_38
float var_34
float var_30

if (arg4.d f< 0f)
    var_38 = (zmm0 ^ 0x80000000)[0]
    arg4 ^= 0x80000000
    var_30 = (arg2[2] ^ 0x80000000).d
    var_34 = (arg2[1] ^ 0x80000000)[0]
else
    var_38 = zmm0[0]
    var_30 = arg2[2][0]
    var_34 = arg2[1].d

int32_t var_2c = arg4.d
float zmm5[0x4] = var_38
float zmm6[0x4] = var_34
arg4 = var_30
zmm5[0] = zmm5[0] * zmm5[0]
zmm6[0] = zmm6[0] * zmm6[0]
int128_t zmm1
zmm1.d = arg4.d f* arg4.d
zmm6[0] = zmm6[0] + zmm5[0]
arg3[0] = arg3[0] * arg3[0]
zmm6[0] = zmm6[0] f+ zmm1.d
bool rax_5 = zmm6[0] > arg3[0]
*arg5 = rax_5

if (rax_5 == 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    return arg1

float temp0[0x4] = _mm_sqrt_ss(0, zmm6[0])
zmm6[0] = zmm6[0] * arg3[0]
zmm1.d = 1f / temp0[0]
zmm5[0] = zmm5[0] * arg3[0]
zmm6[0] = zmm6[0] f* zmm1.d
arg4.d = arg4.d f* arg3[0]
zmm5[0] = zmm5[0] f* zmm1.d
arg4.d = arg4.d f* zmm1.d
arg1[1] = zmm6[0]
arg1[3] = zmm7.d
*arg1 = zmm5[0]
arg1[2] = arg4.d
return arg1
