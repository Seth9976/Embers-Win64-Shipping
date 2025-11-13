// 函数: sub_1420030c0
// 地址: 0x1420030c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = *arg1
void* const r15 = &data_14329c308
int32_t r13 = arg1[1]
int64_t i_1 = 4
int32_t arg_c
int64_t j_1
uint128_t result
uint128_t zmm1
uint128_t zmm2
int64_t i

do
    void* const rbp_1 = &data_14329c318
    j_1 = 3
    int64_t j
    
    do
        result = *r15
        float zmm3 = *rbp_1 * 0.0625f
        int32_t rdx
        
        if (r12 s>= r13)
            rdx = *arg1
            zmm2.d = _mm_cvtepi32_ps(zx.o(rdx)).d f* result.d
            zmm2.d = zmm2.d f+ 0.5f
            int32_t rcx_2 = int.d(zmm2.d)
            
            if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm2.d))
                zmm2 = _mm_cvtepi32_ps(zx.o(rcx_2
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
            
            zmm1.d = zmm2.d f* zmm3
        else
            zmm1.d = _mm_cvtepi32_ps(zx.o(arg1[1])).d f* result.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rcx = int.d(zmm1.d)
            
            if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1.d))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
            
            rdx = *arg1
            zmm2.d = zmm1.d f* zmm3
        
        result = _mm_cvtepi32_ps(zx.o(rdx))
        
        if (not(zmm2.d f>= result.d))
            result = _mm_cvtepi32_ps(zx.o(arg1[1]))
            
            if (not(zmm1.d f>= result.d) && not(zmm2.d f< 1280f) && not(zmm1.d f< 720f))
                int64_t rbx_1 = sx.q(arg2[1].d)
                arg_c = int.d(zmm1.d)
                int32_t rax_7 = (rbx_1 + 1).d
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    result = sub_1405a4d70(arg2)
                
                *(*arg2 + (rbx_1 << 3)) = int.d(zmm2.d).q
        
        rbp_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    r15 += 4
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg2[1].d == j_1.d)
    zmm1 = _mm_cvtepi32_ps(zx.o(arg1[1]))
    
    if (not(zmm1.d f<= 720f))
        result = _mm_cvtepi32_ps(zx.o(*arg1))
    
    int32_t arg_8
    
    if (zmm1.d f<= 720f || result.d f<= 1280f)
        zmm2.d = _mm_cvtepi32_ps(zx.o(*arg1)).d f+ 0.5f
        int32_t rcx_6 = int.d(zmm2.d)
        
        if (rcx_6 != 0x80000000)
            result = _mm_cvtepi32_ps(zx.o(rcx_6))
            
            if (not(result.d f== zmm2.d))
                zmm2 = _mm_cvtepi32_ps(zx.o(rcx_6
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
        
        zmm1.d = zmm1.d f+ 0.5f
        zmm2.d = zmm2.d f* 0.833333313f
        int32_t rcx_8 = int.d(zmm1.d)
        arg_8 = int.d(zmm2.d)
        
        if (rcx_8 != 0x80000000)
            result = _mm_cvtepi32_ps(zx.o(rcx_8))
            
            if (not(result.d f== zmm1.d))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_8
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
        
        zmm1.d = zmm1.d f* 0.833333313f
        arg_c = int.d(zmm1.d)
    else
        arg_8 = 0x500
        arg_c = 0x2d0
    
    arg2[1].d = 1
    
    if (*(arg2 + 0xc) s< 1)
        result = sub_1405a4d70(arg2)
    
    **arg2 = arg_8.q

return result
