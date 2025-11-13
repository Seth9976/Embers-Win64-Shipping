// 函数: sub_141ccca40
// 地址: 0x141ccca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
int64_t* result = QueryPerformanceCounter(&performanceCount)
int64_t zmm1 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (not(zmm1 f- *(arg1 + 0x50) f< *(arg1 + 0x48)))
    int32_t i = 0
    *(arg1 + 0x50) = zmm1
    
    if (*(arg1 + 0x30) s> 0)
        int64_t* r14_1 = nullptr
        int32_t r15_1 = 1
        
        do
            int64_t rcx_1 = *(arg1 + 0x28)
            int64_t* rsi_1 = *(r14_1 + rcx_1)
            
            if (*(arg1 + 0x3c) u>= rsi_1[5].d)
                int32_t rdx_1 = *(arg1 + 0x30)
                int32_t rax_2 = rdx_1 - i
                
                if (rax_2 != 1)
                    memmove(rcx_1 + (sx.q(i) << 3), rcx_1 + (sx.q(r15_1) << 3), (rax_2 - 1) << 3)
                    rdx_1 = *(arg1 + 0x30)
                
                *(arg1 + 0x30) = rdx_1 - 1
                sub_1405c53d0(arg1 + 0x28)
                i -= 1
                r15_1 -= 1
                r14_1 -= 8
                j_sub_140a74f90(*rsi_1)
                int64_t* rbx_2 = rsi_1[7]
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                result = j_sub_140a74f90(rsi_1)
            else
                void* rbx_1 = *(arg1 + 8)
                result = j_sub_140a82f30(0x10)
                
                if (result != 0)
                    *result = 0
                    result[1] = rsi_1
                    void** rcx_2 = *(rbx_1 + 0x240)
                    *(rbx_1 + 0x240) = result
                    *rcx_2 = result
            
            i += 1
            r15_1 += 1
            r14_1 = &r14_1[1]
        while (i s< *(arg1 + 0x30))

return result
