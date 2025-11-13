// 函数: sub_140f7e570
// 地址: 0x140f7e570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(sub_140e66040(data_143e29f28) f> *(arg1 + 0x418)))
    void* rcx_1 = *(arg1 + 0x3c0)
    
    if (rcx_1 != 0 && sub_140f4a5f0(rcx_1) != 0)
        int64_t var_28 = data_143e1e020
        int64_t var_20_1 = data_143e1e028
        void* rax_4 = data_143e1e030
        void* var_18_1 = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        if (sub_140f4a520(arg4, &var_28) != 0)
            *arg2 = 1
            __builtin_memset(&arg2[8], 0, 0x34)
            return arg2

*arg2 = 1
__builtin_memset(&arg2[8], 0, 0x30)
*(arg2 + 0x38) = 2
return arg2
