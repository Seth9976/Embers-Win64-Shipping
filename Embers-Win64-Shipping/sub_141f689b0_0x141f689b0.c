// 函数: sub_141f689b0
// 地址: 0x141f689b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg2))
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(arg3))
*arg5 = int.d(zmm6.d * 1.33000004f f* zmm7.d)
void* rax_1 = *(arg1 + 0xa8)
uint32_t rcx

if (rax_1 != 0)
    rcx = zx.d(*(rax_1 + 0x118))
else
    rax_1 = sub_141ee69e0(arg1)
    
    if (rax_1 == 0)
        rcx = data_1439c7a08
    else
        rcx = zx.d(*(rax_1 + 0x118))

zmm6.d = zmm6.d f* 2.66000009f
zmm6.d = zmm6.d f* zmm7.d

if (sub_1423d2320(rcx) != 0)
    int32_t rax_3 = int.d(zmm6.d)
    *arg4 = rax_3
    return rax_3

zmm6.d = zmm6.d f* 0.5f
int32_t rax_4 = int.d(zmm6.d)
*arg4 = rax_4
return rax_4
