// 函数: sub_141e3e2f0
// 地址: 0x141e3e2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x88))

if (result.d != 0)
    float zmm0 = *arg2
    float zmm1 = *arg3
    
    if (not(zmm0 == zmm1))
        int32_t i = 0
        int128_t zmm6
        int128_t var_38_1 = zmm6
        
        if (zmm1 >= zmm0)
            if (result.d s> 0)
                int64_t r14_2 = 0
                
                do
                    void* r15_4 = *(arg1 + 0x80) + r14_2
                    zmm6.d = sub_141e24dc0(r15_4, 0).d f+ *(r15_4 + 0x34)
                    int32_t zmm0_4
                    zmm0_4, zmm6 = sub_141e40fb0(r15_4)
                    
                    if (not(zmm6.d f> *arg3) && not(zmm0_4 f<= *arg2))
                        int64_t rbp_2 = sx.q(arg4[1].d)
                        int32_t rax_3 = (rbp_2 + 1).d
                        arg4[1].d = rax_3
                        
                        if (rax_3 s> *(arg4 + 0xc))
                            sub_1405a4f90(arg4)
                        
                        result = (rbp_2 << 4) + *arg4
                        *result = r15_4
                        *(result + 8) = arg1
                    
                    i += 1
                    r14_2 += 0xb8
                while (i s< *(arg1 + 0x88))
        else if (result.d s> 0)
            int64_t r14_1 = 0
            
            do
                void* r15_2 = *(arg1 + 0x80) + r14_1
                zmm6.d = sub_141e24dc0(r15_2, 0).d f+ *(r15_2 + 0x34)
                int32_t zmm0_2
                zmm0_2, zmm6 = sub_141e40fb0(r15_2)
                
                if (not(zmm6.d f>= *arg2) && not(zmm0_2 f< *arg3))
                    int64_t rbp_1 = sx.q(arg4[1].d)
                    int32_t rax = (rbp_1 + 1).d
                    arg4[1].d = rax
                    
                    if (rax s> *(arg4 + 0xc))
                        sub_1405a4f90(arg4)
                    
                    result = (rbp_1 << 4) + *arg4
                    *result = r15_2
                    *(result + 8) = arg1
                
                i += 1
                r14_1 += 0xb8
            while (i s< *(arg1 + 0x88))

return result
