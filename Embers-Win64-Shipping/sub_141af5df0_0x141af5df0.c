// 函数: sub_141af5df0
// 地址: 0x141af5df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg2[1]
*arg1 = 0xbf800000
*(arg1 + 5) = 0
int64_t r11 = 0
double zmm2[0x2] = zx.o(0)
int64_t rax = 0

if (r10.b == 1)
    rax = 4

int64_t rax_1 = *arg2

if (rax_1.b == 0)
    r11 = 4

uint32_t rcx_1 = (arg4 u>> 0x20).d
void* rsi = *arg3
int32_t r10_3 =
    (r10 u>> 0x20).d + *(rax + &data_14302eb90) - ((rax_1 u>> 0x20).d + *(r11 + &data_14302eb88))
int32_t arg_8
arg_8.q = r10_3.q
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* 0f
zmm2[0] = float.d(sx.q(r10_3) * sx.q(rcx_1))
int64_t temp0_1 = _mm_cvtps_pd(zmm0.q)
zmm2[0] = zmm2[0] f+ temp0_1
zmm0 = _mm_cvtepi32_pd(zx.q(arg4.d))
zmm2[0] = zmm2[0] f/ zmm0.q
*arg1 = _mm_cvtpd_ps(zmm2).d

if (rsi != 0)
    void* rax_6 = sub_141a6dde0()
    void* rdx_2 = *(rsi + 0x10)
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30
            && rsi + 0x30 != &arg1[1])
        if (*(arg1 + 5) != 0)
            *(arg1 + 5) = 0
        
        arg1[1].b = *(rsi + 0x30)
        *(arg1 + 5) = 1

return arg1
