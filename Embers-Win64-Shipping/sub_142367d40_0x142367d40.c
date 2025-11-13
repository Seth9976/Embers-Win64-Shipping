// 函数: sub_142367d40
// 地址: 0x142367d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int32_t arg_8 = 0
int128_t zmm6 = zx.o(0)
uint32_t zmm2[0x4]

if (sub_141dc8140(arg2, rdx, &arg_8) != 0)
    zmm2 = arg_8
else
    zmm2 = arg1[1].d

char rax_2 = *(arg1 + 0x1c)

if (rax_2 == 2)
    return zmm2[0]

if (rax_2 == 1)
    zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f770)

float zmm1 = arg1[2].d
float zmm3 = *(arg1 + 0xc)

if (not(zmm1 <= zmm3))
    zmm6.d = arg1[3].d.d f- *(arg1 + 0x14)
    zmm6.d = zmm6.d f/ (zmm1 - zmm3)

if (zmm2[0] f>= zmm3)
    zmm1 = _mm_min_ss(zmm1, zmm2[0])
else
    zmm1 = zmm3

return (zmm1 - zmm3) f* zmm6.d f+ *(arg1 + 0x14)
