// 函数: sub_142240350
// 地址: 0x142240350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4

if (arg2 s>= *(arg1 + 0x168))
    return 

int64_t r10_1 = sx.q(arg2)
int32_t* rdx_2 = r10_1 * 0x60 + *(arg1 + 0x50)
arg4.d = rdx_2[0x10].d f- *arg3
int128_t zmm4
zmm4.d = rdx_2[0x11].d f- arg3[1]
int128_t zmm5
zmm5.d = rdx_2[0x12].d f- arg3[2]
int128_t zmm0
zmm0.d = arg4.d f* arg4.d
int128_t zmm1
zmm1.d = zmm5.d f* zmm5.d
float zmm2 = zmm4.d f* zmm4.d f+ zmm0.d f+ zmm1.d
float temp0_1 = _mm_sqrt_ss(zmm2, zmm2)

if (temp0_1 > arg5)
    return 

if (not(temp0_1 <= 0f))
    zmm0.d = 1f / temp0_1
    arg4.d = arg4.d f* zmm0.d
    zmm4.d = zmm4.d f* zmm0.d
    zmm5.d = zmm5.d f* zmm0.d

if (arg6 == 1)
    zmm1.d = 1f - temp0_1 / arg5
    zmm1.d = zmm1.d f* zmm6.d
    zmm6 = zmm1

arg4.d = arg4.d f* zmm6.d
zmm4.d = zmm4.d f* zmm6.d
zmm5.d = zmm5.d f* zmm6.d

if (((arg7 - 1) & 0xfffffffd) == 0)
    zmm0 = arg4
    zmm1 = zmm4
    zmm2 = zmm5.d
else
    zmm0 = rdx_2[3]
    zmm1.d = zmm0.d f* zmm4.d
    zmm2 = zmm0.d f* zmm5.d
    zmm0.d = zmm0.d f* arg4.d

if (arg7 - 2 u> 1)
    int64_t rax_2 = *(arg1 + 0x80)
    int64_t rcx_1 = r10_1 * 3
    zmm0.d = zmm0.d f+ *(rax_2 + (rcx_1 << 2))
    zmm1.d = zmm1.d f+ *(rax_2 + (rcx_1 << 2) + 4)
    zmm2 = zmm2 f+ *(rax_2 + (rcx_1 << 2) + 8)
    *(rax_2 + (rcx_1 << 2)) = zmm0.d
    *(rax_2 + (rcx_1 << 2) + 4) = zmm1.d
    *(rax_2 + (rcx_1 << 2) + 8) = zmm2
    return 

zmm0.d = zmm0.d f+ *rdx_2
zmm1.d = zmm1.d f+ rdx_2[1]
zmm2 = zmm2 f+ rdx_2[2]
*rdx_2 = zmm0.d
rdx_2[1] = zmm1.d
rdx_2[2] = zmm2
