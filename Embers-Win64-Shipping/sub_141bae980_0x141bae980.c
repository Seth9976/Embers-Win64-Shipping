// 函数: sub_141bae980
// 地址: 0x141bae980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_141c18780()
    void* r8_1 = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int32_t var_18
        sub_141baf8d0(&var_18, arg2, r8_1, arg1 + 8, 0)
        int32_t rcx_2
        rcx_2.b = sub_140b5b8a0(var_18, 0) == 0
        int32_t var_14
        int64_t var_10
        bool rax_4
        
        if ((var_14 != 0 | rcx_2.b) == 0 || var_10 == 0)
            rax_4 = false
        else
            rax_4 = true
        
        if (rax_4 != 0)
            return sub_141bae740(&var_18)

return 0
