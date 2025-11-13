// 函数: sub_141e22b30
// 地址: 0x141e22b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[6]

if (rax != 0)
    *(rax + 0x94)

uint32_t zmm2[0x4] = arg1[7].d
uint32_t zmm1[0x4]

if (__andps_xmmxud_memxud(zmm2, data_142d3f770)[0] f> 9.99999994e-09f)
    zmm1 = *(arg1 + 0x3c)
    zmm1[0] = zmm1[0] f/ zmm2[0]
else
    zmm1 = zx.o(0)

float zmm0_1
int32_t zmm6_1
float zmm7_1
zmm0_1, zmm6_1, zmm7_1 = sub_141e3b530(&arg1[8], zmm1, zx.o(0))
zmm0_1 = zmm0_1 * zmm7_1

if (zmm0_1 f>= zmm6_1)
    return *(arg1 + 0x1c)

(*(*arg1 + 0xf8))(arg1)
return zmm0_1 f- *(arg1 + 0x1c)
