// 函数: sub_141defc30
// 地址: 0x141defc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = zx.o(0)

if (not(arg2[0] < 0f))
    zmm0 = __minss_xmmss_memss(arg2[0], 0x3f800000)

void* r8 = *arg1
char rdx = *(arg1 + 0x24)
*(arg1 + 0xc) = zmm0[0]
int64_t result
float zmm0_1
zmm0_1, result = sub_141de16d0(zmm0, rdx, r8)
arg1[2].d = zmm0_1
arg1[3].d = (arg1[4].d f- *(arg1 + 0x1c)) * zmm0_1 f+ *(arg1 + 0x1c)
return result
