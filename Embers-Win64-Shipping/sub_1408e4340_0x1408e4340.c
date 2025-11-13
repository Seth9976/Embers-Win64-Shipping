// 函数: sub_1408e4340
// 地址: 0x1408e4340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg2
float zmm6[0x4] = arg3

while (true)
    int32_t r10_1 = *(arg1 + 0x80)
    
    if (r10_1 != 0)
        zmm6 = _mm_max_ss((**(arg1 + 0x78))[0], zmm6[0])
    
    if (arg4 == 0)
    label_1408e448b:
        int32_t i = 0
        int128_t* rax
        int32_t r15_1
        float zmm0[0x4]
        
        if (r10_1 u<= 1)
            r15_1 = 0
        else
            zmm3[0] = zmm3[0] f+ *(arg1 + 0xc8)
            int32_t* r9 = *(arg1 + 0x78)
            r15_1 = r10_1 - 1
            int32_t r8_1 = 0
            
            if (not(zmm3[0] f>= r9[sx.q(r15_1) * 0xa]))
                if (zmm3[0] f<= *r9)
                    r15_1 = 0
                else
                    if (r15_1 s> 0)
                        while (r15_1 s> r8_1)
                            int32_t temp0_10
                            int32_t temp1_1
                            temp0_10:temp1_1 = sx.q(r8_1 + 1 + r15_1)
                            rax = zx.q((temp1_1 - temp0_10) s>> 1)
                            zmm0 = r9[sx.q(rax.d) * 0xa]
                            int32_t rcx_8 = (rax - 1).d
                            zmm0[0] - zmm3[0]
                            
                            if (zmm0[0] <= zmm3[0])
                                rcx_8 = r15_1
                            
                            if (zmm0[0] <= zmm3[0])
                                r8_1 = rax.d
                            
                            r15_1 = rcx_8
                            
                            if (rcx_8 s<= 0)
                                break
                    
                    r15_1 = r8_1
        
        int32_t r8_2
        
        if (r10_1 u<= 1)
            r8_2 = 0
        else
            zmm6[0] = zmm6[0] f+ *(arg1 + 0xc8)
            r8_2 = r10_1 - 1
            int32_t r9_1 = 0
            int32_t* r10_2 = *(arg1 + 0x78)
            
            if (not(zmm6[0] f>= r10_2[sx.q(r8_2) * 0xa]))
                if (zmm6[0] f<= *r10_2)
                    r8_2 = 0
                else
                    if (r8_2 s> 0)
                        while (r8_2 s> r9_1)
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(r9_1 + 1 + r8_2)
                            rax = zx.q((temp3_1 - temp2_1) s>> 1)
                            zmm0 = r10_2[sx.q(rax.d) * 0xa]
                            int32_t rcx_11 = (rax - 1).d
                            zmm0[0] - zmm6[0]
                            
                            if (zmm0[0] <= zmm6[0])
                                rcx_11 = r8_2
                            
                            if (zmm0[0] <= zmm6[0])
                                r9_1 = rax.d
                            
                            r8_2 = rcx_11
                            
                            if (rcx_11 s<= 0)
                                break
                    
                    r8_2 = r9_1
        
        if (*(arg1 + 0x70) s> 0)
            zmm6 = zx.o(0)
            int64_t rbp_2 = 0
            zmm6[0] = float.s(zx.q(r8_2))
            
            do
                int64_t rcx_12 = *(arg1 + 0x68)
                
                if (not(zmm6[0] f< *(rcx_12 + rbp_2 + 4)))
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(r15_1))
                    
                    if (not(zmm0[0] f> *(rcx_12 + rbp_2 + 8)))
                        int64_t r14_1 = sx.q(arg5[1].d)
                        int32_t rax_12 = (r14_1 + 1).d
                        arg5[1].d = rax_12
                        
                        if (rax_12 s> *(arg5 + 0xc))
                            sub_1405a4cf0(arg5)
                        
                        *(*arg5 + (r14_1 << 2)) = i
                
                i += 1
                rbp_2 += 0x30
            while (i s< *(arg1 + 0x70))
        
        return 
    
    float zmm4[0x4] = *(arg1 + 0x28)
    zmm6[0] = zmm6[0] - zmm3[0]
    
    if (zmm6[0] >= zmm4[0])
        int32_t i_1 = 0
        
        if (*(arg1 + 0x70) s> 0)
            do
                int64_t rbp_1 = sx.q(arg5[1].d)
                int32_t rax_3 = (rbp_1 + 1).d
                arg5[1].d = rax_3
                
                if (rax_3 s> *(arg5 + 0xc))
                    sub_1405a4cf0(arg5)
                
                *(*arg5 + (rbp_1 << 2)) = i_1
                i_1 += 1
            while (i_1 s< *(arg1 + 0x70))
        
        return 
    
    arg2 = 0x3f800000
    arg2[0] = 1f / zmm4[0]
    arg3 = arg2
    arg3[0] = arg3[0] * zmm3[0]
    int32_t rcx = int.d(arg3[0])
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx))[0] == arg3[0]))
        arg3 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))
    
    arg2[0] = arg2[0] * zmm6[0]
    arg3[0] = arg3[0] * zmm4[0]
    int32_t rcx_2 = int.d(arg2[0])
    zmm3[0] = zmm3[0] - arg3[0]
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2))[0] == arg2[0]))
        arg2 =
            _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2[0].q)) & 1)))
    
    arg2[0] = arg2[0] * zmm4[0]
    zmm6[0] = zmm6[0] - arg2[0]
    
    if (zmm6[0] >= zmm3[0])
        goto label_1408e448b
    
    sub_1408e4340(arg1, zmm3, zmm4, 0, arg5)
    arg4 = 0
    zmm3 = zx.o(0)
