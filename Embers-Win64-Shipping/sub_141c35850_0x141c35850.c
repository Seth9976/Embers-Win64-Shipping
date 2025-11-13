// 函数: sub_141c35850
// 地址: 0x141c35850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x60)
uint32_t zmm6[0x4] = arg2
uint32_t zmm0[0x4]
int128_t zmm7

if (rdx == 1)
    zmm7 = 0x3f800000
else if (rdx == 2)
    zmm7.d = 1f f/ *(arg1 + 0xc8)
    zmm7.d = zmm7.d f- 1f
else if (rdx == 3)
    zmm7 = 0xbf800000
else
    zmm0 = 0x3f800000
    zmm0[0] = 1f f/ *(arg1 + 0xc8)
    zmm7.d = 1f f- zmm0[0]

arg2 = *(arg1 + 0xcc)

if (not(arg2[0] f<= 0f))
    zmm0 = *(arg1 + 0xc4)
    float zmm2 = zmm0[0] f- arg2[0]
    
    if (not(zmm6[0] f<= zmm2))
        zmm0[0] = zmm0[0] f+ arg2[0]
        
        if (not(zmm6[0] f>= zmm0[0]))
            uint64_t rsi_1 = 0
            **(arg1 + 0x88) = zmm2
            zmm0 = *(arg1 + 0xcc)
            zmm0[0] = zmm0[0] f+ *(arg1 + 0xc4)
            void* rax_2 = *(arg1 + 0x88)
            uint64_t var_58 = 0
            *(rax_2 + 8) = _mm_min_ss(zmm0[0], 0)[0]
            *(*(arg1 + 0x88) + 4) = 0
            *(*(arg1 + 0x88) + 0xc) = zmm7.d
            int64_t rbx_1 = sx.q(*(arg1 + 0x90))
            int64_t rdi_1 = *(arg1 + 0x88)
            int32_t var_50_1 = rbx_1.d
            uint64_t rdi_2
            int128_t* r10_1
            
            if (rbx_1.d != 0)
                sub_1406387e0(&var_58, rbx_1.d, 0)
                rsi_1 = var_58
                memcpy(rsi_1, rdi_1, (rbx_1 << 3).d)
                rbx_1 = zx.q(var_50_1)
                r10_1 = rsi_1
                rdi_2 = rsi_1
            else
                rdi_2 = 0
                r10_1 = nullptr
            
            int64_t rbx_2 = sx.q(rbx_1.d)
            zmm7 = zx.o(0)
            
            if (rbx_2 s> 0)
                int64_t r9_1 = 0
                
                do
                    int64_t i = 0
                    float zmm4 = 1f
                    int32_t zmm3
                    
                    if (rbx_2 s>= 4)
                        int64_t rdx_5 = 2
                        void* r8_3 = rsi_1 + 0x10
                        
                        do
                            if (r9_1 != i)
                                arg2 = *r10_1
                                zmm3 = *(r8_3 - 0x10)
                                arg2[0] = arg2[0] f- zmm3
                                
                                if (not(_mm_and_ps(arg2, 0x7fffffff)[0] f>= 9.99999994e-09f))
                                    arg2 = 0x322bcc77
                                
                                zmm6[0] = zmm6[0] f- zmm3
                                zmm6[0] = zmm6[0] f/ arg2[0]
                                zmm4 = zmm4 f* zmm6[0]
                            
                            if (r9_1 != rdx_5 - 1)
                                arg2 = *r10_1
                                zmm3 = *(r8_3 - 8)
                                arg2[0] = arg2[0] f- zmm3
                                
                                if (not(_mm_and_ps(arg2, 0x7fffffff)[0] f>= 9.99999994e-09f))
                                    arg2 = 0x322bcc77
                                
                                zmm6[0] = zmm6[0] f- zmm3
                                zmm6[0] = zmm6[0] f/ arg2[0]
                                zmm4 = zmm4 f* zmm6[0]
                            
                            if (r9_1 != rdx_5)
                                arg2 = *r10_1
                                zmm3 = *r8_3
                                arg2[0] = arg2[0] f- zmm3
                                
                                if (not(_mm_and_ps(arg2, 0x7fffffff)[0] f>= 9.99999994e-09f))
                                    arg2 = 0x322bcc77
                                
                                zmm6[0] = zmm6[0] f- zmm3
                                zmm6[0] = zmm6[0] f/ arg2[0]
                                zmm4 = zmm4 f* zmm6[0]
                            
                            if (r9_1 != rdx_5 + 1)
                                arg2 = *r10_1
                                zmm3 = *(r8_3 + 8)
                                arg2[0] = arg2[0] f- zmm3
                                
                                if (not(_mm_and_ps(arg2, 0x7fffffff)[0] f>= 9.99999994e-09f))
                                    arg2 = 0x322bcc77
                                
                                zmm6[0] = zmm6[0] f- zmm3
                                zmm6[0] = zmm6[0] f/ arg2[0]
                                zmm4 = zmm4 f* zmm6[0]
                            
                            i += 4
                            r8_3 += 0x20
                            rdx_5 += 4
                        while (i s< rbx_2 - 3)
                    
                    for (; i s< rbx_2; i += 1)
                        if (r9_1 != i)
                            arg2 = *r10_1
                            zmm3 = *(rsi_1 + (i << 3))
                            arg2[0] = arg2[0] f- zmm3
                            
                            if (not(_mm_and_ps(arg2, 0x7fffffff)[0] f>= 9.99999994e-09f))
                                arg2 = 0x322bcc77
                            
                            zmm6[0] = zmm6[0] f- zmm3
                            zmm6[0] = zmm6[0] f/ arg2[0]
                            zmm4 = zmm4 f* zmm6[0]
                    
                    zmm4 = zmm4 f* *(rdi_2 - rsi_1 + r10_1 + 4)
                    r9_1 += 1
                    r10_1 += 8
                    zmm7.d = zmm7.d f+ zmm4
                while (r9_1 s< rbx_2)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)

arg2 = *(arg1 + 0xc4)
arg2[0] = arg2[0] f- zmm6[0]
arg2[0] = arg2[0] f* zmm7.d
arg2 = _mm_min_ss(arg2[0], 0)
arg2[0] = arg2[0] f* 0.0500000007f
return powf(0x41200000[0], arg2[0]) __tailcall
