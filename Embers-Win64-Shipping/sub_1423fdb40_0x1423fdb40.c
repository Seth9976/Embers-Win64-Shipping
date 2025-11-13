// 函数: sub_1423fdb40
// 地址: 0x1423fdb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t* rsi = *arg2

if (rsi != 0)
    int64_t* rax_1 = j_sub_140a82f30(8)
    int64_t* rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_2 = *rsi
        *rdi_1 = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 0x44) += 1
    
    void arg_8
    
    if (arg1 != &arg_8)
        int64_t* rsi_1 = *arg1
        *arg1 = rdi_1
        
        if (rsi_1 != 0)
            int64_t* rcx = *rsi_1
            
            if (rcx != 0)
                int32_t rax_3 = *(rcx + 0x44)
                *(rcx + 0x44) -= 1
                
                if (rax_3 == 1 && rcx != 0)
                    (**rcx)(rcx, 1)
            
            j_sub_140a74f90(rsi_1)
    else if (rdi_1 != 0)
        int64_t* rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            int32_t rax_5 = *(rcx_1 + 0x44)
            *(rcx_1 + 0x44) -= 1
            
            if (rax_5 == 1 && rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
        
        j_sub_140a74f90(rdi_1)

return arg1
