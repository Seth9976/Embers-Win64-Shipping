// 函数: sub_142606700
// 地址: 0x142606700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg4
int16_t* r13 = arg3
void* rax = data_143b50290(zx.q(arg4 << 4), 1)
void* rdi = rax
int32_t rax_1 = 0
int32_t var_44 = 0

if (rbx s> 0)
    int16_t* rdx_1 = rdi + 2
    float zmm4_1 = 1f / arg10
    int32_t* rsi_1 = arg6
    
    do
        *(rdx_1 + 0xa) = rax_1
        int32_t rdi_1 = 0
        int32_t r11_1 = 1
        int16_t rax_3 = *(arg1 + zx.q(*r13) * 6)
        rdx_1[2] = rax_3
        rdx_1[-1] = rax_3
        int16_t rbx_1 = *(arg1 + zx.q(*r13) * 6 + 2)
        rdx_1[3] = rbx_1
        *rdx_1 = rbx_1
        int16_t rax_6 = *(arg1 + zx.q(*r13) * 6 + 4)
        rdx_1[4] = rax_6
        rdx_1[1] = rax_6
        
        if (arg5 s> 1)
            void* r10_1 = &r13[1]
            
            do
                int16_t rax_7 = *r10_1
                
                if (rax_7 == data_143b502a0)
                    rdi_1 = r11_1
                    break
                
                uint64_t rcx_8 = zx.q(rax_7) * 3
                int16_t r8 = *(arg1 + (rcx_8 << 1))
                int16_t rax_9 = *(arg1 + (rcx_8 << 1) + 2)
                int16_t r9 = *(arg1 + (rcx_8 << 1) + 4)
                
                if (r8 u< rdx_1[-1])
                    rdx_1[-1] = r8
                
                if (rax_9 u>= rbx_1)
                    rbx_1 = *rdx_1
                else
                    *rdx_1 = rax_9
                    rbx_1 = rax_9
                
                if (r9 u< rdx_1[1])
                    rdx_1[1] = r9
                
                if (r8 u> rdx_1[2])
                    rdx_1[2] = r8
                
                if (rax_9 u> rdx_1[3])
                    rdx_1[3] = rax_9
                
                if (r9 u> rdx_1[4])
                    rdx_1[4] = r9
                
                r11_1 += 1
                r10_1 += 2
            while (r11_1 s< arg5)
        
        int32_t i = 0
        
        if (*(rsi_1 + 9) u> 0)
            do
                char* r9_4 = zx.q((rsi_1[1] + i) << 2) + arg8
                uint32_t rcx_9 = zx.d(*r9_4)
                uint128_t zmm2
                
                if (rcx_9 s>= rdi_1)
                    arg2.d =
                        (*(arg7 + (zx.q((*rsi_1 - rdi_1 + rcx_9) * 3) << 2) + 4)).d f- *(arg9 + 4)
                    arg2.d = arg2.d f/ arg11
                    zmm2 = arg2
                    int32_t rcx_10 = int.d(zmm2.d)
                    
                    if (rcx_10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_10)).d f== zmm2.d))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_10
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
                    
                    int32_t rcx_12 = int.d(arg2.d)
                    int16_t r8_1 = (int.d(zmm2.d)).w
                    
                    if (rcx_12 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_12)).d f== arg2.d))
                        arg2 = _mm_cvtepi32_ps(zx.o(rcx_12
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1) ^ 1)))
                    
                    int16_t rax_19 = (int.d(arg2.d)).w
                    
                    if (r8_1 u< *rdx_1)
                        *rdx_1 = r8_1
                    
                    if (rax_19 u> rdx_1[3])
                        rdx_1[3] = rax_19
                
                uint32_t rax_20 = zx.d(r9_4[1])
                
                if (rax_20 s>= rdi_1)
                    arg2.d =
                        (*(arg7 + (zx.q((rax_20 - rdi_1 + *rsi_1) * 3) << 2) + 4)).d f- *(arg9 + 4)
                    arg2.d = arg2.d f/ arg11
                    zmm2 = arg2
                    int32_t rcx_14 = int.d(zmm2.d)
                    
                    if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14)).d f== zmm2.d))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_14
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
                    
                    int32_t rcx_16 = int.d(arg2.d)
                    int16_t r8_2 = (int.d(zmm2.d)).w
                    
                    if (rcx_16 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_16)).d f== arg2.d))
                        arg2 = _mm_cvtepi32_ps(zx.o(rcx_16
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1) ^ 1)))
                    
                    int16_t rax_29 = (int.d(arg2.d)).w
                    
                    if (r8_2 u< *rdx_1)
                        *rdx_1 = r8_2
                    
                    if (rax_29 u> rdx_1[3])
                        rdx_1[3] = rax_29
                
                uint32_t rax_30 = zx.d(r9_4[2])
                
                if (rax_30 s>= rdi_1)
                    arg2.d =
                        (*(arg7 + (zx.q((rax_30 - rdi_1 + *rsi_1) * 3) << 2) + 4)).d f- *(arg9 + 4)
                    arg2.d = arg2.d f/ arg11
                    zmm2 = arg2
                    int32_t rcx_18 = int.d(zmm2.d)
                    
                    if (rcx_18 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_18)).d f== zmm2.d))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_18
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
                    
                    int32_t rcx_20 = int.d(arg2.d)
                    int16_t r8_3 = (int.d(zmm2.d)).w
                    
                    if (rcx_20 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_20)).d f== arg2.d))
                        arg2 = _mm_cvtepi32_ps(zx.o(rcx_20
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1) ^ 1)))
                    
                    int16_t rax_39 = (int.d(arg2.d)).w
                    
                    if (r8_3 u< *rdx_1)
                        *rdx_1 = r8_3
                    
                    if (rax_39 u> rdx_1[3])
                        rdx_1[3] = rax_39
                
                i += 1
            while (i s< zx.d(*(rsi_1 + 9)))
        
        arg2.d = _mm_cvtepi32_ps(zx.o(*rdx_1)).d f* arg11
        arg2.d = arg2.d f* zmm4_1
        int32_t rcx_22 = int.d(arg2.d)
        
        if (rcx_22 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_22)).d f== arg2.d))
            arg2 =
                _mm_cvtepi32_ps(zx.o(rcx_22 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))
        
        *rdx_1 = (int.d(arg2.d)).w
        arg2.d = _mm_cvtepi32_ps(zx.o(rdx_1[3])).d f* arg11
        arg2.d = arg2.d f* zmm4_1
        int32_t rcx_24 = int.d(arg2.d)
        
        if (rcx_24 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_24)).d f== arg2.d))
            arg2 = _mm_cvtepi32_ps(zx.o(rcx_24
                + ((_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1) ^ 1)))
        
        r13 = &r13[sx.q(arg5 * 2)]
        rsi_1 = &rsi_1[3]
        rbx = arg4
        rdx_1[3] = (int.d(arg2.d)).w
        rdx_1 = &rdx_1[8]
        rax_1 = var_44 + 1
        var_44 = rax_1
    while (rax_1 s< rbx)
    
    rdi = rax

int32_t var_48 = 0
sub_142616940(rdi, rbx, 0, rbx, &var_48, arg12)

if (rdi != 0)
    data_143b50298(rdi, arg2)

return zx.q(var_48)
