// 函数: sub_14242e880
// 地址: 0x14242e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x88)
*(arg1 + 0x78) = 0

if (result != 0)
    int32_t rax = *(result + 0xc)
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    *(rax_7 + 8) &= 0xbfffffff
    result = *(arg1 + 0x88)
    *(result + 8) &= 0xfffffffd
    *(arg1 + 0x88) = 0

if (*(arg1 + 0x90) != 0)
    void* rcx_4 = *(arg1 + 0x80)
    
    if (rcx_4 != 0)
        result = sub_140d21d80(rcx_4)
        
        if (result != 0)
            int64_t rbx_1 = *(result + 0x18)
            result = *(arg1 + 0x80)
            void* r15_1 = *(result + 0x38)
            
            if (r15_1 != 0)
                int32_t i = 0
                
                if (*(r15_1 + 0x98) s> 0)
                    int64_t** r14_1 = nullptr
                    
                    do
                        int64_t* rdi_2 = *(r14_1 + *(r15_1 + 0x90))
                        
                        if (rdi_2 != 0)
                            void* rax_9 = (*(*rdi_2 + 0x268))(rdi_2)
                            
                            if (rax_9 != 0)
                                rdi_2 = *(rax_9 + 0x1a30)
                            
                            result = sub_142155520(rdi_2, rbx_1)
                        
                        i += 1
                        r14_1 = &r14_1[1]
                    while (i s< *(r15_1 + 0x98))
    
    *(arg1 + 0x80) = 0
    *(arg1 + 0x90) = 0

return result
