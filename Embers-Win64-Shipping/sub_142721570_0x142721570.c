// 函数: sub_142721570
// 地址: 0x142721570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(arg2)
int32_t rcx = *(arg1 + 0xc4)
int32_t result = rcx & 1

if (result == r8)
    return result

int512_t zmm1
zmm1.o = zx.o(0)
*(arg1 + 0xc4) = (rcx & 0xfffffffe) | r8

if (arg2 != 0 && not(0f f>= *(arg1 + 0xbc)))
    int128_t zmm0_1
    zmm0_1.d = sub_140a50670().d f* *(arg1 + 0xbc)
    zmm0_1.d = zmm0_1.d f+ 9.99999975e-05f
    zmm1.o = zmm0_1

jump(*(*arg1 + 0x458))
