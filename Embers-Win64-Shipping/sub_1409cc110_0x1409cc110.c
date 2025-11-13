// 函数: sub_1409cc110
// 地址: 0x1409cc110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 8)
int64_t* r11 = *rax
int32_t* r8_1 = sx.q(arg3) * 0xd0 + *(r11[2] + sx.q(rax[1].d) * 0x10)

if (arg4 == 1)
    r8_1 = &r8_1[0xd]
else if (arg4 == 2)
    r8_1 = &r8_1[0x1a]
else if (arg4 == 3)
    r8_1 = &r8_1[0x27]

int64_t rcx_1 = sx.q(*r8_1) * 3
int64_t rax_3 = *r11
uint128_t zmm1 = zx.o(*(rax_3 + (rcx_1 << 2)))
int32_t result = *(rax_3 + (rcx_1 << 2) + 8)
arg2[1] = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg2[2] = result.d
*arg2 = zmm1.d
return result
