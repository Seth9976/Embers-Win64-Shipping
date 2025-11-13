// 函数: sub_141040890
// 地址: 0x141040890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        int32_t rax_1 = *(rcx + 0x14)
        *(rcx + 0x14) -= 1
        
        if (rax_1 == 1)
            int64_t* rdi_1 = *(arg1 + 8)
            
            if (rdi_1 != 0)
                sub_14100eba0(rdi_1)
                j_sub_140a74f90(rdi_1)
    
    *(arg1 + 8) = 0
    void* rax_2 = *(arg2 + 8)
    
    if (rax_2 != 0)
        *(arg1 + 8) = rax_2
        *(rax_2 + 0x14) += 1

return arg1
