// 函数: sub_141fe57b0
// 地址: 0x141fe57b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int128_t __saved_zmm6 = arg5
int64_t r8 = arg1[8]
arg5 = zx.o(0)
int32_t arg_8 = 0
uint32_t zmm2[0x4]

if ((*(rax + 0x290))(arg4, arg3, r8, &arg_8, __saved_zmm6) != 0)
    zmm2 = arg_8
else
    zmm2 = arg1[7].d

char rax_2 = arg1[0xb].b

if (rax_2 == 2)
    return zmm2[0]

if (rax_2 == 1)
    zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f770)

float zmm1 = *(arg1 + 0x4c)
float zmm3 = arg1[9].d

if (not(zmm1 <= zmm3))
    arg5.d = (*(arg1 + 0x54)).d f- arg1[0xa].d
    arg5.d = arg5.d f/ (zmm1 - zmm3)

if (zmm2[0] f>= zmm3)
    zmm1 = _mm_min_ss(zmm1, zmm2[0])
else
    zmm1 = zmm3

return (zmm1 - zmm3) f* arg5.d f+ arg1[0xa].d
