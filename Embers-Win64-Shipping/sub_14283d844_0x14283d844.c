// 函数: sub_14283d844
// 地址: 0x14283d844
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t* rsi_1 = arg1
int32_t rdi_1 = 0
uint128_t zmm7 = _mm_cvtepi32_pd(zx.q(arg3))
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg2))

do
    double zmm0 = float.d(rdi_1) f/ zmm6.q
    rdi_1 += 1
    *rsi_1 =
        0xfff40000 - int.d((sin((zmm0 + zmm0) * 3.1415926535897931) + 1.0) f* zmm7.q * -0.5 * 128.0)
    rsi_1 = &rsi_1[1]
while (rdi_1 s< arg2)
