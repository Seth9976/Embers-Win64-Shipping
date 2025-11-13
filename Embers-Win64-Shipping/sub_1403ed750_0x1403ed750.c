// 函数: sub_1403ed750
// 地址: 0x1403ed750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_138
void* result = __security_cookie ^ &var_138
void* result_1 = result
int64_t rdi = sx.q(arg5)
int32_t zmm4 = arg3.d
int32_t i_1 = 0
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x88)
int64_t i = 0
__builtin_memset(&var_138, 0, 0x88)
void var_148
void var_140
double zmm0[0x2]
uint128_t zmm1

if (arg4 s> 0)
    do
        result = nullptr
        double zmm3 = _mm_cvtps_pd(*(arg2 + (i << 2)))
        
        if (rdi.d s> 0)
            do
                zmm1 = zx.o(*(&var_a8:8 + (result << 3)))
                zmm0 = zx.o(0)
                result += 2
                zmm0[0] = fconvert.d(zmm4)
                arg3 = (zmm1.q - zmm3) * zmm0[0]
                zmm0 = zx.o(0)
                zmm0[0] = fconvert.d(zmm4)
                int64_t var_b8
                arg3 = arg3 f+ (&var_b8)[result]
                (&var_b8)[result] = zmm3
                zmm3 = zmm3 f* var_a8.q f+ *(&var_148 + (result << 3))
                void var_b0
                *(&var_b0 + (result << 3)) = arg3
                *(&var_148 + (result << 3)) = zmm3
                zmm3 = (*(&var_a8 + (result << 3)) - arg3) * zmm0[0]
                *(&var_140 + (result << 3)) = arg3 f* var_a8.q f+ *(&var_140 + (result << 3))
                zmm3 = zmm3 f+ zmm1.q
            while (result s< rdi)
        
        *(&var_a8 + (rdi << 3)) = zmm3
        i += 1
        *(&var_138 + (rdi << 3)) = zmm3 f* var_a8.q f+ *(&var_138 + (rdi << 3))
    while (i s< sx.q(arg4))

int32_t r8 = (rdi + 1).d

if (r8 s> 0 && r8 u>= 4)
    int64_t rcx = sx.q(r8 - 1)
    
    if (arg1 u<= &var_138 + (rcx << 3))
        result = &var_138
    
    if (arg1 u> &var_138 + (rcx << 3) || arg1 + (rcx << 2) u< &var_138)
        int32_t rax_4 = r8 & 0x80000003
        
        if (rax_4 s< 0)
            rax_4 = ((rax_4 - 1) | 0xfffffffc) + 1
        
        do
            int64_t i_3 = sx.q(i_1)
            *(arg1 + (i_3 << 2)) = (_mm_cvtpd_ps(*(&var_138 + (i_3 << 3)))).q
            result = zx.q(i_1 + 2)
            i_1 += 4
            int64_t rcx_1 = sx.q(result.d)
            *(arg1 + (rcx_1 << 2)) = (_mm_cvtpd_ps(*(&var_138 + (rcx_1 << 3)))).q
        while (i_1 s< r8 - rax_4)

int64_t i_2 = sx.q(i_1)
int64_t rdx = sx.q(r8)

if (i_2 s< rdx)
    result = rdx - i_2
    
    if (result s>= 4)
        result = arg1 + 8 + (i_2 << 2)
        
        do
            zmm0 = zx.o(*(&var_138 + (i_2 << 3)))
            zmm1 = zx.o(*(&var_138:8 + (i_2 << 3)))
            i_2 += 4
            result += 0x10
            zmm0 = _mm_cvtpd_ps(zmm0)
            zmm1 = _mm_cvtpd_ps(zmm1)
            *(result - 0x18) = zmm0[0].d
            zmm0 = zx.o(*(&var_148 + (i_2 << 3)))
            *(result - 0x14) = zmm1.d
            zmm1 = zx.o(*(&var_140 + (i_2 << 3)))
            zmm0 = _mm_cvtpd_ps(zmm0)
            zmm1 = _mm_cvtpd_ps(zmm1)
            *(result - 0x10) = zmm0[0].d
            *(result - 0xc) = zmm1.d
        while (i_2 s< rdx - 3)
    
    while (i_2 s< rdx)
        zmm0 = zx.o(*(&var_138 + (i_2 << 3)))
        i_2 += 1
        *(arg1 + (i_2 << 2) - 4) = _mm_cvtpd_ps(zmm0)[0].d

__security_check_cookie(result_1 ^ &var_138)
return result
