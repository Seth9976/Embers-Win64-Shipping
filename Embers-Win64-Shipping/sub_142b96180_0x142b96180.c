// 函数: sub_142b96180
// 地址: 0x142b96180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

if (arg2 != 0)
    if (arg2 == 0x756e6963)
        return sub_142b98700(arg1) __tailcall
    
    goto label_142b961a7

if (*(arg1 + 0x38) != arg2)
label_142b961a7:
    int64_t* rcx_1 = *(arg1 + 0x40)
    
    if (rcx_1 == 0)
        return 0x26
    
    void* r9_2 = &rcx_1[sx.q(*(arg1 + 0x38))]
    
    if (rcx_1 u< r9_2)
        do
            void* rax_6 = *rcx_1
            
            if (*(rax_6 + 8) == arg2)
                *(arg1 + 0x88) = rax_6
                return 0
            
            rcx_1 = &rcx_1[1]
        while (rcx_1 u< r9_2)

return 6
