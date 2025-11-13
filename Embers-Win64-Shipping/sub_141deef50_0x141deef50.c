// 函数: sub_141deef50
// 地址: 0x141deef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
char rdx = *(arg1 + 0x24)
int64_t result
float zmm0_1
uint32_t zmm6[0x4]

if (0f f< arg1[1].d)
    *(arg1 + 0xc) = 0
    zmm0_1, result = sub_141de16d0(zx.o(0), rdx, r8)
    zmm6 = 0x3f800000
    zmm6[0] = 1f f- *(arg1 + 0xc)
    zmm6 = __andps_xmmxud_memxud(zmm6, data_142d3f770)
    zmm6[0] = zmm6[0] f* arg1[1].d
else
    *(arg1 + 0xc) = 0x3f800000
    zmm0_1, result, zmm6 = sub_141de16d0(0x3f800000, rdx, r8)

arg1[2].d = zmm0_1
arg1[3].d = (arg1[4].d f- *(arg1 + 0x1c)) * zmm0_1 f+ *(arg1 + 0x1c)
*(arg1 + 0x14) = zmm6[0]
*(arg1 + 0x26) = 0x100
*(arg1 + 0x25) = 0
return result
