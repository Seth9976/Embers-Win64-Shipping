// 函数: sub_14095b150
// 地址: 0x14095b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
int64_t rcx = sx.q(arg5)
uint128_t zmm5 = zx.o(0)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx.d))
uint128_t result = _mm_cvtepi32_ps(zx.o(rdi.d))
zmm1.d = zmm1.d f/ result.d

if (not(zmm1.d f< 0f))
    zmm5 = __minss_xmmss_memss(zmm1.d, 0x3f800000)

uint128_t zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0)

if (arg3 s> 0)
    int64_t r9 = rdi << 2
    void* rbx_1 = arg1 + 0x14
    int32_t r13_1 = 0
    int64_t rax_2 = rcx << 2
    int32_t* rax_3 = arg2
    uint64_t i_1 = zx.q(arg3)
    int64_t r8 = rax_2
    int64_t r15_1 = 0
    int32_t* var_50_1 = rax_3
    uint64_t i_2 = i_1
    uint64_t i
    
    do
        if (rcx.d s> 0)
            int32_t r11_1 = (rdi - 1).d
            uint64_t j_1 = zx.q(rcx.d)
            int32_t* r9_1 = rax_3
            uint64_t j
            
            do
                int64_t k = 1
                float zmm4 = zmm5.d f* *(rbx_1 - 0x14)
                *r9_1 = zmm4
                
                if (rdi.d s> 1 && r11_1 u>= 8 && (&arg2[1] u> arg1 + (sx.q(r11_1 + r13_1) << 2)
                        || &arg2[sx.q(r11_1)] u< rbx_1 - 0x10))
                    float zmm2[0x4] = zx.o(0)
                    float zmm3[0x4] = zx.o(0)
                    int32_t rcx_3 = r11_1 & 0x80000007
                    
                    if (rcx_3 s< 0)
                        rcx_3 = ((rcx_3 - 1) | 0xfffffff8) + 1
                    
                    void* rax_10 = rbx_1
                    
                    do
                        k += 8
                        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(*(rax_10 - 0x10), zmm6))
                        result = *rax_10
                        rax_10 += 0x20
                        zmm3 = _mm_add_ps(zmm3, _mm_mul_ps(zmm6, result))
                    while (k s< sx.q(rdi.d - rcx_3))
                    
                    float temp0_8[0x4] = _mm_add_ps(zmm2, zmm3)
                    zmm1.q = temp0_8 u>> 0x40
                    zmm1 = _mm_add_ps(zmm1, temp0_8)
                    result = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                    zmm1.d = zmm1.d f+ result.d
                    zmm1.d = zmm1.d f+ zmm4
                    *r9_1 = zmm1.d
                
                if (k s< rdi)
                    zmm1 = *r9_1
                    void* rcx_7 = arg1 + ((r15_1 + k) << 2)
                    int64_t k_2 = rdi - k
                    int64_t k_1
                    
                    do
                        result.d = zmm5.d f* *rcx_7
                        rcx_7 += 4
                        zmm1.d = zmm1.d f+ result.d
                        k_1 = k_2
                        k_2 -= 1
                    while (k_1 != 1)
                    *r9_1 = zmm1.d
                
                r9_1 = &r9_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rax_3 = var_50_1
            r9 = rdi << 2
            rcx = zx.q(arg5)
            i_1 = i_2
            r8 = rax_2
        
        rax_3 += r8
        r13_1 += rdi.d
        r15_1 += rdi
        var_50_1 = rax_3
        rbx_1 += r9
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return result
