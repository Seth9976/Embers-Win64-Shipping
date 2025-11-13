// 函数: sub_140ea2280
// 地址: 0x140ea2280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm7[0x2] = arg3
int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t rax_2 = rdi << 4
int64_t result = rax_2 + *arg1

if (rax_2 != neg.q(*arg1))
    *result = zmm7.q
    *(result + 8) = arg2.d

int32_t rdi_1 = arg1[1].d
int32_t rdi_2 = rdi_1 - 1
int128_t zmm9 = zx.o(0)
uint128_t zmm6 = zx.o(0)

if (rdi_1 - 1 s>= 0)
    result = zx.q(rdi_2 + 1)
    int64_t rsi_2 = sx.q(rdi_2) << 4
    int64_t r15_1 = rsi_2
    int64_t r14_2 = sx.q(result.d) << 4
    int32_t temp4_1
    
    do
        int64_t rcx = *arg1
        arg2 = zx.o(*(rsi_2 + rcx))
        zmm7[0] = zmm7[0] f- arg2.q
        
        if (zmm7[0] f<= arg1[3])
            if (arg2.q f< zmm6.q || not(zmm6.q f!= 0.0))
                zmm6 = arg2
            
            zmm9.d = zmm9.d f+ *(rsi_2 + rcx + 8)
        else
            int32_t rdx_2 = arg1[1].d
            int32_t rax_4 = rdx_2 - rdi_2
            
            if (rax_4 != 1)
                memmove(rcx + r15_1, r14_2 + rcx, (rax_4 - 1) << 4)
                rdx_2 = arg1[1].d
            
            arg1[1].d = rdx_2 - 1
            result = sub_1405a5010(arg1)
        
        r14_2 -= 0x10
        r15_1 -= 0x10
        rsi_2 -= 0x10
        temp4_1 = rdi_2
        rdi_2 -= 1
    while (temp4_1 - 1 s>= 0)

if (rdi_1 - 1 s< 0 || zmm6.q f<= 0.0)
    zmm7 = zx.o(0)
else
    zmm7[0] = zmm7[0] f- zmm6.q

if (zmm7[0] <= 0.0)
    arg1[2].d = 0
else
    double zmm0[0x2] = zx.o(0)
    zmm0[0] = fconvert.d(zmm9.d)
    zmm0[0] = zmm0[0] / zmm7[0]
    arg1[2].d = _mm_cvtpd_ps(zmm0)[0].d

return result
