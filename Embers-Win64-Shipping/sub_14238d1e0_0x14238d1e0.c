// 函数: sub_14238d1e0
// 地址: 0x14238d1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14239a380(arg1 + 0x10)

if (*(arg1 + 0x20) == 0 && arg2 != 0)
    void*** arg_8
    void**** rax_1 = sub_1423ac710(&arg_8, *(arg1 + 8))
    
    if (arg1 + 0x20 != rax_1)
        int64_t* rcx_2 = *(arg1 + 0x20)
        *(arg1 + 0x20) = *rax_1
        *rax_1 = nullptr
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1)
                (**rcx_2)(rcx_2, 1)
    
    void*** rcx_3 = arg_8
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            void** r8_1 = *rcx_3
            (*r8_1)(rcx_3, 1, r8_1)

int64_t result = *(arg1 + 0x20)
*(arg1 + 0x28) = 0
return result
