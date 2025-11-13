// 函数: sub_141c56f70
// 地址: 0x141c56f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = arg1[2].d
void* rax = *arg1

if (not(zmm1[0] f>= 0f))
    zmm1 = zx.o(0)
else if (not(zmm1[0] f< 1f))
    zmm1 = 0x3f800000

zmm1[0] = zmm1[0] f- *(rax + 0x250)
uint32_t result[0x4] = __andps_xmmxud_memxud(zmm1, data_142d3f770)

if (not(result[0] f<= 9.99999994e-09f))
    *(rax + 0x32c) |= 4
    *(rax + 0x250) = zmm1[0]

return result
