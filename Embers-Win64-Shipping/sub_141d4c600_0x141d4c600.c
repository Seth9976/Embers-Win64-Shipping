// 函数: sub_141d4c600
// 地址: 0x141d4c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3
void* rdi = arg1
uint64_t result

if (arg2 - 1 u<= 7)
    uint64_t j_2 = zx.q(arg5)
    
    if ((j_2 - 1).d u<= 7)
        float* r15_1 = *((&data_143a231a0)[zx.q((j_2 - 1).d)] + (zx.q(arg2 - 1) << 3))
        
        if (r15_1 != 0)
            if (arg3 != 0)
                do
                    i -= 1
                    float* rcx_1 = r15_1
                    
                    if (j_2.d != 0)
                        uint64_t j_1 = j_2
                        uint64_t j
                        
                        do
                            *arg4 = 0
                            uint32_t r8 = 0
                            float zmm0
                            
                            if (arg2 u>= 4)
                                int32_t zmm1 = (zx.o(0)).d
                                void* rdx = rdi + 8
                                result = zx.q(((arg2 - 4) u>> 2) + 1)
                                uint64_t k_3 = zx.q(result.d)
                                r8 = (result << 2).d
                                uint64_t k
                                
                                do
                                    zmm0 = *(rdx - 8) * *rcx_1 f+ zmm1
                                    *arg4 = zmm0
                                    zmm1 = *(rdx - 4) f* rcx_1[1] f+ zmm0
                                    *arg4 = zmm1
                                    zmm0 = rcx_1[2] f* *rdx f+ zmm1
                                    *arg4 = zmm0
                                    zmm1 = *(rdx + 4)
                                    rdx += 0x10
                                    zmm1 = zmm1 f* rcx_1[3]
                                    rcx_1 = &rcx_1[4]
                                    zmm1 = zmm1 f+ zmm0
                                    *arg4 = zmm1
                                    k = k_3
                                    k_3 -= 1
                                while (k != 1)
                            
                            if (r8 u< arg2)
                                float* rdx_1 = rdi + (zx.q(r8) << 2)
                                uint64_t k_2 = zx.q(arg2 - r8)
                                uint64_t k_1
                                
                                do
                                    zmm0 = *rcx_1
                                    rcx_1 = &rcx_1[1]
                                    zmm0 = zmm0 * *rdx_1
                                    rdx_1 = &rdx_1[1]
                                    *arg4 = zmm0 f+ *arg4
                                    k_1 = k_2
                                    k_2 -= 1
                                while (k_1 != 1)
                            
                            arg4 = &arg4[1]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    rdi += zx.q(arg2) << 2
                while (i != 0)
            
            result.b = 1
            return result

result.b = 0
return result
