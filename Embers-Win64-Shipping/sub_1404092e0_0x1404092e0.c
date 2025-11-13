// 函数: sub_1404092e0
// 地址: 0x1404092e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j = arg8
int64_t r9 = sx.q(arg2)
int64_t rdx = sx.q(arg10)
int32_t i = 0
int64_t rcx = sx.q(arg3)
int64_t var_68 = r9
int64_t var_80 = rdx
int32_t i_1 = 0
int64_t var_70 = rcx

do
    int64_t rbp_1 = r9
    
    if (r9 s< rcx)
        int32_t* rax = arg7 - arg6
        int32_t* rdi_1 = arg6 + (r9 << 2)
        int32_t* var_78_1 = rax
        
        while (j s>= rdx.d)
            if (*rdi_1 s< 8 && *(rax + rdi_1) == i)
                int64_t rsi_1 = 0
                
                do
                    int32_t rbx_1
                    rbx_1.b = 0f f<= *(arg5 + ((sx.q(*(arg1 + 8)) * rsi_1 + rbp_1) << 2))
                    sub_1403fe100(arg9, rbx_1, 1)
                    char rcx_3 = 0xd - (*rdi_1).b
                    j -= 1
                    int64_t r8_3 = sx.q(*(arg1 + 8)) * rsi_1 + rbp_1
                    uint128_t zmm0
                    zmm0.d = _mm_cvtepi32_ps(zx.o(rbx_1)).d f- 0.5f
                    rsi_1 += 1
                    uint128_t zmm1
                    zmm1.d = _mm_cvtepi32_ps(zx.o(1 << rcx_3)).d f* zmm0.d
                    zmm1.d = zmm1.d f* 6.10351562e-05f
                    zmm1.d = zmm1.d f+ *(arg4 + (r8_3 << 2))
                    *(arg4 + (r8_3 << 2)) = zmm1.d
                while (rsi_1 s< var_80)
                
                i = i_1
                rax = var_78_1
                rcx = var_70
                rdx = zx.q(arg10)
            
            rbp_1 += 1
            rdi_1 = &rdi_1[1]
            
            if (rbp_1 s>= rcx)
                break
        
        r9 = var_68
    
    i += 1
    i_1 = i
while (i s< 2)
