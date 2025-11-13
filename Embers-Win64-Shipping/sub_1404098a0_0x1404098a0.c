// 函数: sub_1404098a0
// 地址: 0x1404098a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j = arg7
int64_t r9 = sx.q(arg2)
int64_t rdx = sx.q(arg9)
int64_t rcx = sx.q(arg3)
int32_t i = 0
int64_t var_68 = rdx
int64_t var_50 = r9
int64_t var_58 = rcx

do
    int64_t rsi_1 = r9
    
    if (r9 s< rcx)
        int32_t* r12_2 = arg6 - arg5
        int32_t* rbx_1 = arg5 + (r9 << 2)
        int32_t* var_60_1 = r12_2
        
        while (j s>= rdx.d)
            if (*rbx_1 s< 8 && *(r12_2 + rbx_1) == i)
                int64_t rdi_1 = 0
                
                do
                    uint64_t rax = sub_1403f7340(arg8, 1)
                    j -= 1
                    int64_t r8_2 = sx.q(*(arg1 + 8)) * rdi_1 + rsi_1
                    int32_t rdx_1 = 1 << (0xd - (*rbx_1).b)
                    rdi_1 += 1
                    uint128_t zmm0
                    zmm0.d = _mm_cvtepi32_ps(zx.o(rax.d)).d f- 0.5f
                    uint128_t zmm1
                    zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* zmm0.d
                    zmm1.d = zmm1.d f* 6.10351562e-05f
                    zmm1.d = zmm1.d f+ *(arg4 + (r8_2 << 2))
                    *(arg4 + (r8_2 << 2)) = zmm1.d
                while (rdi_1 s< var_68)
                
                r12_2 = var_60_1
                rcx = var_58
                rdx = zx.q(arg9)
            
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
            
            if (rsi_1 s>= rcx)
                break
        
        r9 = var_50
    
    i += 1
while (i s< 2)
