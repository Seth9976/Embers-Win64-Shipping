// 函数: sub_142a709e0
// 地址: 0x142a709e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x24)

if (r8 == 0)
    int64_t result
    result.b = 1
    return result

int32_t r8_1 = r8 - 0x15
int64_t rdx

if (r8 == 0x15)
    rdx = 0
else
    int32_t temp1_1 = r8_1
    r8_1 -= 1
    
    if (temp1_1 == 1)
        rdx = 1
    else
        int32_t temp2_1 = r8_1
        r8_1 -= 1
        
        if (temp2_1 == 1)
            rdx = 2
        else
            int32_t temp3_1 = r8_1
            r8_1 -= 1
            
            if (temp3_1 == 1)
                rdx = 4
            else
                if (r8_1 != 1)
                    abort()
                    noreturn
                
                rdx = 3

(*(*arg2 + 8))(arg2, rdx, r8_1)
uint128_t zmm6 = arg3

if (*(arg1 + 0x21) != 0)
    arg3 = sub_142a4b9b0(arg3.q)
    zmm6.q f- arg3.q

char r10_1

if (*(arg1 + 0x21) != 0 && (is_unordered.q(zmm6.q, arg3.q) || not(zmm6.q f== arg3.q)))
    r10_1 = 0
else
    if (*(arg1 + 8) == 1)
        zmm6 = fmod(zmm6.q, _mm_cvtepi32_pd(zx.q(*(arg1 + 0xc))).q)
    
    void* rdx_1 = *(arg1 + 0x18)
    
    if (rdx_1 != 0)
        int64_t rax_2 = sx.q(*(rdx_1 + 8))
        r10_1 = 0
        int32_t r9_1 = 0
        
        if (rax_2.d s> 0)
            int64_t rcx_1 = 0
            
            do
                int32_t rax_3
                
                if (rcx_1 s>= 0)
                    rax_3 = *(rdx_1 + 8)
                
                int32_t r8_2
                
                if (rcx_1 s< 0 || rax_3 s<= 0 || rax_3 - r9_1 s<= 0)
                    r8_2 = 0
                else
                    r8_2 = *(*(rdx_1 + 0x18) + (rcx_1 << 2))
                
                if (not(zmm6.q f< _mm_cvtepi32_pd(zx.q(r8_2)).q))
                    int32_t rax_7
                    
                    if (rcx_1 + 1 s>= 0)
                        rax_7 = *(rdx_1 + 8)
                    
                    int32_t r8_3
                    
                    if (rcx_1 + 1 s< 0 || rax_7 s<= 0 || rax_7 - r9_1 - 1 s<= 0)
                        r8_3 = 0
                    else
                        r8_3 = *(*(rdx_1 + 0x18) + (rcx_1 << 2) + 4)
                    
                    if (_mm_cvtepi32_pd(zx.q(r8_3)).q f>= zmm6.q)
                        goto label_142a70b44_1
                
                r9_1 += 2
                rcx_1 += 2
            while (rcx_1 s< rax_2)
    else
        int32_t rax_1 = *(arg1 + 0x10)
        
        if (rax_1 == 0xffffffff)
        label_142a70b44:
            r10_1 = 1
        else
            arg3 = _mm_cvtepi32_pd(zx.q(rax_1))
            zmm6.q f- arg3.q
            
            if (is_unordered.q(zmm6.q, arg3.q))
                r10_1 = 0
            else if (zmm6.q f== arg3.q)
            label_142a70b44_1:
                r10_1 = 1
            else
                r10_1 = 0

if (*(arg1 + 0x20) != 0)
    r10_1 ^= 1

return zx.q(r10_1)
