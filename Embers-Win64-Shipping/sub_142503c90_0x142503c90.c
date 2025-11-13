// 函数: sub_142503c90
// 地址: 0x142503c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int32_t zmm4 = (zx.o(0)).d
float zmm1[0x4] = 0x3f800000
int64_t rcx_1
rcx_1.b = result != 0
bool cond:2 = arg4[0] f< zmm4
*(arg2 + 0x20) = rcx_1 + result
int64_t zmm2

zmm2 = cond:2 ? 0xbf800000 : 0x3f800000

if (not(arg_10[0] f>= zmm4))
    zmm1 = 0xbf800000

*arg3 = (_mm_unpacklo_ps(zmm1, zmm2)).q
return result
