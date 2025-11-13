// 函数: sub_141733fb0
// 地址: 0x141733fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg3
int32_t* rbx = arg2
int128_t zmm7 = *arg2
float zmm12[0x4] = *arg1
float zmm0[0x4]

if (not(zmm7.d f< zmm12[0]) && not(zmm7.d f> *(arg1 + 8)))
    zmm0 = *(arg2 + 4)

char r10

if (zmm7.d f< zmm12[0] || zmm7.d f> *(arg1 + 8) || zmm0[0] f< *(arg1 + 4)
        || zmm0[0] f> *(arg1 + 0xc))
    r10 = 0
else
    r10 = 1

float zmm6[0x4] = *arg3

if (not(zmm6[0] < zmm12[0]) && not(zmm6[0] f> *(arg1 + 8)))
    zmm0 = *(arg3 + 4)

if (zmm6[0] < zmm12[0] || zmm6[0] f> *(arg1 + 8) || zmm0[0] f< *(arg1 + 4)
        || zmm0[0] f> *(arg1 + 0xc))
    arg3.b = 0
else
    arg3.b = 1

int32_t result

if (r10 == 0 || arg3.b == 0)
    float zmm8[0x4] = *(rdi + 4)
    int128_t zmm9 = *(arg2 + 4)
    zmm6[0] = zmm6[0] f- zmm7.d
    zmm8[0] = zmm8[0] f- zmm9.d
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    
    if (_mm_cvtps_pd(zmm6[0].q)[0].q f>= 0.0001)
        int64_t i = 0
        int32_t rdx = 1
        int64_t arg_8
        int32_t arg_18
        int32_t arg_1c
        float zmm1[0x4]
        
        do
            zmm0 = i != 0 ? zmm8 : zmm6
            
            if (zmm0[0] != 0f)
                *(&arg_8 + i) = 0
                
                zmm1 = i != 0 ? zmm8 : zmm6
                
                zmm0 = 0x3f800000
                zmm0[0] = 1f / zmm1[0]
            else
                *(&arg_8 + i) = 1
                zmm0 = zx.o(0)
            
            int32_t* rax = &arg_1c
            
            if (i == 0)
                rax = &arg_18
            
            *rax = zmm0[0]
            
            zmm0 = rdx != 0 ? zmm8 : zmm6
            
            if (zmm0[0] != 0f)
                *(&arg_8:1 + i) = 0
                
                zmm1 = rdx != 0 ? zmm8 : zmm6
                
                zmm0 = 0x3f800000
                zmm0[0] = 1f / zmm1[0]
            else
                *(&arg_8:1 + i) = 1
                zmm0 = zx.o(0)
            
            int32_t* rax_1 = &arg_1c
            
            if (rdx == 0)
                rax_1 = &arg_18
            
            rdx += 2
            i += 2
            *rax_1 = zmm0[0]
        while (i s< 2)
        
        if (r10 != 0)
            float zmm0_1[0x4]
            zmm0_1, result = sub_141734850(arg1, rbx, &arg_18)
            zmm6[0] = zmm6[0] * zmm0_1[0]
            zmm8[0] = zmm8[0] * zmm0_1[0]
            zmm6[0] = zmm6[0] f+ zmm7.d
            zmm8[0] = zmm8[0] f+ zmm9.d
            *rdi = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
            result.b = 1
        else if (arg3.b == 0)
            float zmm4[0x4] = arg_1c
            int32_t r8_2 = 0
            float zmm3[0x4] = arg_18
            int64_t i_1 = 0
            int32_t arg_10 = 0x7f7fffff
            int32_t arg_14 = 0x7f7fffff
            int32_t arg_20 = 0x7f7fffff
            int32_t arg_24 = 0x7f7fffff
            float zmm2[0x4]
            
            do
                if (*(&arg_8 + i_1) == 0)
                    zmm0 = i_1 != 0 ? zmm8 : zmm6
                    
                    if (zmm0[0] <= 0f)
                        zmm0 = i_1 != 0 ? zmm8 : zmm6
                        
                        if (not(zmm0[0] >= 0f))
                            int32_t* rax_5 = rbx
                            
                            if (i_1 != 0)
                                rax_5 = arg2 + 4
                            
                            if (i_1 != 0)
                                zmm0 = *(arg1 + 4)
                            else
                                zmm0 = zmm12
                            
                            if (not(zmm0[0] f> *rax_5))
                                int32_t* rax_6
                                
                                if (i_1 != 0)
                                    zmm1 = *(arg1 + 0xc)
                                    rax_6 = arg2 + 4
                                else
                                    zmm1 = *(arg1 + 8)
                                    rax_6 = rbx
                                
                                zmm0 = *rax_6
                                zmm0[0] = zmm0[0] - zmm1[0]
                                zmm0 = _mm_max_ss(zmm0[0], 0)
                                
                                zmm1 = i_1 != 0 ? zmm4 : zmm3
                                
                                zmm0[0] = zmm0[0] * zmm1[0]
                                (&arg_10)[i_1] = zmm0[0]
                                int32_t* rax_7
                                
                                if (i_1 != 0)
                                    zmm1 = *(arg1 + 4)
                                    rax_7 = arg2 + 4
                                    zmm2 = zmm4
                                else
                                    rax_7 = rbx
                                    zmm1 = zmm12
                                    zmm2 = zmm3
                                
                                zmm0 = *rax_7
                                zmm0[0] = zmm0[0] - zmm1[0]
                                zmm0[0] = zmm0[0] * zmm2[0]
                                (&arg_20)[i_1] = zmm0[0]
                    else
                        int32_t* rax_4 = rbx
                        
                        if (i_1 != 0)
                            rax_4 = arg2 + 4
                        
                        if (i_1 != 0)
                            zmm0 = *(arg1 + 0xc)
                        else
                            zmm0 = *(arg1 + 8)
                        
                        zmm2 = *rax_4
                        
                        if (not(zmm2[0] > zmm0[0]))
                            if (i_1 != 0)
                                zmm0 = *(arg1 + 4)
                            else
                                zmm0 = zmm12
                            
                            zmm0[0] = zmm0[0] - zmm2[0]
                            zmm0 = _mm_max_ss(zmm0[0], 0)
                            
                            zmm1 = i_1 != 0 ? zmm4 : zmm3
                            
                            zmm0[0] = zmm0[0] * zmm1[0]
                            (&arg_10)[i_1] = zmm0[0]
                            
                            if (i_1 != 0)
                                zmm0 = *(arg1 + 0xc)
                            else
                                zmm0 = *(arg1 + 8)
                            
                            if (i_1 != 0)
                                zmm0[0] = zmm0[0] - zmm2[0]
                                zmm0[0] = zmm0[0] * zmm4[0]
                            else
                                zmm0[0] = zmm0[0] - zmm2[0]
                                zmm0[0] = zmm0[0] * zmm3[0]
                            
                            (&arg_20)[i_1] = zmm0[0]
                else
                    int32_t* rax_2 = rbx
                    
                    if (i_1 != 0)
                        rax_2 = arg2 + 4
                    
                    if (i_1 != 0)
                        zmm0 = *(arg1 + 4)
                    else
                        zmm0 = zmm12
                    
                    if (not(zmm0[0] f> *rax_2))
                        int32_t* rax_3
                        
                        if (i_1 != 0)
                            zmm0 = *(arg1 + 0xc)
                            rax_3 = arg2 + 4
                        else
                            zmm0 = *(arg1 + 8)
                            rax_3 = rbx
                        
                        if (not(zmm0[0] f< *rax_3))
                            (&arg_10)[i_1] = 0
                
                if (*(&arg_8:1 + i_1) == 0)
                    zmm0 = r8_2 != 0xffffffff ? zmm8 : zmm6
                    
                    if (zmm0[0] <= 0f)
                        zmm0 = r8_2 != 0xffffffff ? zmm8 : zmm6
                        
                        if (not(zmm0[0] >= 0f))
                            int32_t* rdx_6 = rbx
                            
                            if (r8_2 != 0xffffffff)
                                rdx_6 = arg2 + 4
                            
                            if (r8_2 != 0xffffffff)
                                zmm0 = *(arg1 + 4)
                            else
                                zmm0 = zmm12
                            
                            if (not(zmm0[0] f> *rdx_6))
                                int32_t* rdx_7 = arg2 + 4
                                
                                if (r8_2 == 0xffffffff)
                                    rdx_7 = rbx
                                
                                if (r8_2 != 0xffffffff)
                                    zmm0 = *(arg1 + 0xc)
                                else
                                    zmm0 = *(arg1 + 8)
                                
                                zmm1 = *rdx_7
                                zmm1[0] = zmm1[0] - zmm0[0]
                                zmm1 = _mm_max_ss(zmm1[0], 0)
                                
                                zmm0 = r8_2 != 0xffffffff ? zmm4 : zmm3
                                
                                zmm0[0] = zmm0[0] * zmm1[0]
                                int32_t* rdx_8 = arg2 + 4
                                
                                if (r8_2 == 0xffffffff)
                                    rdx_8 = rbx
                                
                                (&arg_14)[i_1] = zmm0[0]
                                
                                if (r8_2 != 0xffffffff)
                                    zmm2 = *(arg1 + 4)
                                else
                                    zmm2 = zmm12
                                
                                zmm1 = r8_2 != 0xffffffff ? zmm4 : zmm3
                                
                                zmm0 = *rdx_8
                                goto label_141734554
                    else
                        int32_t* rdx_5 = rbx
                        
                        if (r8_2 != 0xffffffff)
                            rdx_5 = arg2 + 4
                        
                        if (r8_2 != 0xffffffff)
                            zmm0 = *(arg1 + 0xc)
                        else
                            zmm0 = *(arg1 + 8)
                        
                        zmm2 = *rdx_5
                        
                        if (not(zmm2[0] > zmm0[0]))
                            if (r8_2 != 0xffffffff)
                                zmm1 = *(arg1 + 4)
                            else
                                zmm1 = zmm12
                            
                            zmm1[0] = zmm1[0] - zmm2[0]
                            zmm1 = _mm_max_ss(zmm1[0], 0)
                            
                            zmm0 = r8_2 != 0xffffffff ? zmm4 : zmm3
                            
                            zmm0[0] = zmm0[0] * zmm1[0]
                            (&arg_14)[i_1] = zmm0[0]
                            
                            if (r8_2 != 0xffffffff)
                                zmm0 = *(arg1 + 0xc)
                            else
                                zmm0 = *(arg1 + 8)
                            
                            zmm1 = r8_2 != 0xffffffff ? zmm4 : zmm3
                            
                        label_141734554:
                            zmm0[0] = zmm0[0] - zmm2[0]
                            zmm0[0] = zmm0[0] * zmm1[0]
                            (&arg_24)[i_1] = zmm0[0]
                else
                    int32_t* rdx_3 = rbx
                    
                    if (r8_2 != 0xffffffff)
                        rdx_3 = arg2 + 4
                    
                    if (r8_2 != 0xffffffff)
                        zmm0 = *(arg1 + 4)
                    else
                        zmm0 = zmm12
                    
                    if (not(zmm0[0] f> *rdx_3))
                        int32_t* rdx_4 = arg2 + 4
                        
                        if (r8_2 == 0xffffffff)
                            rdx_4 = rbx
                        
                        if (r8_2 != 0xffffffff)
                            zmm0 = *(arg1 + 0xc)
                        else
                            zmm0 = *(arg1 + 8)
                        
                        if (not(zmm0[0] f< *rdx_4))
                            (&arg_14)[i_1] = 0
                
                r8_2 += 2
                i_1 += 2
            while (i_1 s< 2)
            
            zmm3 = arg_14
            zmm0 = _mm_and_ps(arg_10, 0x7fffffff)
            zmm2 = arg_24
            zmm3 = _mm_max_ss(_mm_and_ps(zmm3, 0x7fffffff)[0], zmm0[0])
            zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
            zmm0 = _mm_and_ps(arg_20, 0x7fffffff)
            zmm2 = _mm_min_ss(zmm2[0], zmm0[0])
            
            if (zmm2[0] >= zmm3[0])
                zmm6[0] = zmm6[0] * zmm3[0]
                zmm6[0] = zmm6[0] * zmm2[0]
                zmm2[0] = zmm2[0] * zmm8[0]
                zmm6[0] = zmm6[0] f+ zmm7.d
                zmm8[0] = zmm8[0] * zmm3[0]
                zmm2[0] = zmm2[0] f+ zmm9.d
                *rdi = (_mm_unpacklo_ps(zmm6, zmm2[0].q)).q
                zmm6[0] = zmm6[0] f+ *rbx
                zmm8[0] = zmm8[0] f+ *(arg2 + 4)
                *rbx = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
                result.b = 1
            else
                result.b = 0
        else
            arg_8 = (_mm_unpacklo_ps(arg_18 ^ data_142d3f780, (arg_1c ^ data_142d3f780)[0].q)).q
            zmm0, result = sub_141734850(arg1, rdi, &arg_8)
            zmm6[0] = zmm6[0] * zmm0[0]
            zmm8[0] = zmm8[0] * zmm0[0]
            zmm6[0] = zmm6[0] - zmm6[0]
            zmm8[0] = zmm8[0] - zmm8[0]
            *rbx = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
            result.b = 1
    else
        result.b = 0
else
    result.b = 1

return result
