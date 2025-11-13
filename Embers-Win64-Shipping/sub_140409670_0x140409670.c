// 函数: sub_140409670
// 地址: 0x140409670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg5)
int64_t r11 = sx.q(arg8)
void* const result = &data_143700700
int128_t zmm8 = zx.o(0)
int64_t rbp = sx.q(arg2)
int64_t var_68 = 0
int128_t zmm7

if (r10.d == 0)
    result = &__dos_header
    zmm7 = *((r11 << 2) + 0x1437006e8)
    zmm8 = *((r11 << 2) + &data_1437006d8)
else
    zmm7 = 0x3e199800

int64_t rsi = rbp
int32_t rdx_1 = arg6[1].d << 3
arg8 = rdx_1

while (rbp.d s< arg3)
    int32_t r12_1 = 0
    int64_t rdi_1 = 0
    
    do
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = __bsr_gprv_memv(arg6[4].d)
        int32_t rax_2 = rdx_1 - (arg6[3].d - temp0_1 - 1)
        int32_t rcx_4
        
        if (rax_2 s>= 0xf)
            int32_t rax_3 = 0x14
            
            if (rbp.d s< 0x14)
                rax_3 = rbp.d
            
            int64_t rax_5 = sx.q(rax_3 * 2)
            int32_t rax_6 = sub_14040bc00(arg6, 
                zx.d(*(rax_5 + (r10 + (r11 << 1)) * 0x2a + &data_143700700)) << 7, 
                zx.d(*(rax_5 + (r10 + (r11 << 1)) * 0x2a + &data_143700700 + 1)) << 6)
            rdx_1 = arg8
            rcx_4 = rax_6
        else if (rax_2 s>= 2)
            int32_t rax_7 = sub_1403f73c0(arg6, &data_1437006f8, 2)
            rdx_1 = arg8
            rcx_4 = neg.d(rax_7 & 1) ^ rax_7 s>> 1
        else if (rax_2 s< 1)
            rcx_4 = -1
        else
            rdx_1 = arg8
            rcx_4 = neg.d(sub_1403f72f0(arg6, 1))
        
        int64_t rax_11 = sx.q(*(arg1 + 8)) * rdi_1
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rcx_4))
        int64_t rax_12 = rax_11 + rsi
        float zmm0 = *(arg4 + (rax_12 << 2))
        
        if (not(-9f <= zmm0))
            zmm0 = -9f
        
        float zmm1 = *(&var_68 + (rdi_1 << 2))
        *(arg4 + (rax_12 << 2)) = zmm0
        r12_1 += 1
        void* rax_14 = sx.q(*(arg1 + 8)) * rdi_1
        rdi_1 += 1
        result = rax_14 + rsi
        zmm0 = zmm8.d f* *(arg4 + (result << 2)) + zmm1
        zmm1 = zmm1 f+ zmm2.d
        zmm0 = zmm0 f+ zmm2.d
        zmm2.d = zmm2.d f* zmm7.d
        *(arg4 + (result << 2)) = zmm0
        void var_6c
        *(&var_6c + (rdi_1 << 2)) = zmm1 f- zmm2.d
    while (r12_1 s< arg7)
    
    rbp = zx.q(rbp.d + 1)
    rsi += 1

return result
