// 函数: sub_141be1a50
// 地址: 0x141be1a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x6e0)

if (rcx != 0)
    int32_t i_1 = arg2[1].d
    int64_t rdi_1 = *arg2
    void* var_18 = nullptr
    int32_t i_2 = i_1
    
    if (i_1 != 0)
        sub_140808f70(&var_18, i_1, 0)
        void* rcx_2 = var_18
        int64_t* rdi_2 = rdi_1 - rcx_2
        void* rax_1 = rcx_2 + 8
        int32_t i
        
        do
            *(rax_1 - 8) = *(rdi_2 + rax_1 - 8)
            *rax_1 = *(rdi_2 + rax_1)
            void* rcx_5 = *(rdi_2 + rax_1 + 8)
            *(rax_1 + 8) = rcx_5
            
            if (rcx_5 != 0)
                *(rcx_5 + 8) += 1
            
            rax_1 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = *(arg1 + 0x6e0)
    else
        int32_t var_c_1 = 0
    
    sub_141be1980(rcx, &var_18)

return sub_141b85bc0(arg1 + 0x6b0, arg2) __tailcall
