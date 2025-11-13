// 函数: sub_1423fdc20
// 地址: 0x1423fdc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0

if (arg2 != 0)
    void* rax_1 = sub_1425b89f0()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rax_4 = j_sub_140a82f30(8)
        int64_t* rdi_1 = rax_4
        
        if (rax_4 == 0)
            rdi_1 = nullptr
        else
            void* rax_5 = *(arg2 + 0x58)
            *rdi_1 = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 0x44) += 1
        
        void arg_8
        
        if (arg1 != &arg_8)
            int64_t* rsi_1 = *arg1
            *arg1 = rdi_1
            
            if (rsi_1 != 0)
                int64_t* rcx_1 = *rsi_1
                
                if (rcx_1 != 0)
                    int32_t rax_6 = *(rcx_1 + 0x44)
                    *(rcx_1 + 0x44) -= 1
                    
                    if (rax_6 == 1 && rcx_1 != 0)
                        (**rcx_1)(rcx_1, 1)
                
                j_sub_140a74f90(rsi_1)
        else if (rdi_1 != 0)
            int64_t* rcx_2 = *rdi_1
            
            if (rcx_2 != 0)
                int32_t rax_8 = *(rcx_2 + 0x44)
                *(rcx_2 + 0x44) -= 1
                
                if (rax_8 == 1 && rcx_2 != 0)
                    (**rcx_2)(rcx_2, 1)
            
            j_sub_140a74f90(rdi_1)

return arg1
