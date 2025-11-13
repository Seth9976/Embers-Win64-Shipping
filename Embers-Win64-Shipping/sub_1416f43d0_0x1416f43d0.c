// 函数: sub_1416f43d0
// 地址: 0x1416f43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
uint32_t zmm8[0x4] = arg3

if (0f f< *(arg5 + 0x9c))
    return 

float* rax = nullptr

if (*(arg1 + 0xc) u>= 2)
    rax = arg1

if (rax == 0)
    return 

int64_t* rcx_1 = *(*(*arg1 + 0x80) + (sx.q(arg1[1].d) << 3))
void var_58
rax = (*(*rcx_1 + 0x28))(rcx_1, &var_58)
arg3 = rax[4]
float zmm0 = rax[3] - *rax
arg3[0] = arg3[0] f- rax[1]
arg2.d = rax[5].d f- rax[2]

if (zmm0 f>= arg3[0] || not(zmm0 f< arg2.d))
    zmm0 = _mm_min_ss(arg2.d, arg3[0])

int128_t zmm3
zmm3.d = data_1439b8d4c.d f* zmm0

if (not(zmm6.d f> 0f))
    *(arg5 + 0xd8) = 0
else if (not(zmm6.d f> 1f))
    if ((*(arg5 + 0x9c) ^ 0x80000000).d f> zmm3.d)
        zmm0 = *(arg5 + 0x84) * *arg4
        arg3 = *(arg5 + 0x88)
        arg3[0] = arg3[0] f* arg4[1]
        arg2.d = (*(arg5 + 0x8c)).d f* arg4[2]
        arg3[0] = arg3[0] f+ zmm0
        *(arg5 + 0x9c) = (zmm3 ^ 0x80000000).d
        arg3[0] = arg3[0] f+ arg2.d
        uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(arg3, data_142d3f770)
        temp0_2[0] = temp0_2[0] f* zmm8[0]
        *(arg5 + 0xd8) = zmm3.d f/ temp0_2[0] f+ zmm6.d
    else
        *(arg5 + 0xd8) = 0x3f800000
