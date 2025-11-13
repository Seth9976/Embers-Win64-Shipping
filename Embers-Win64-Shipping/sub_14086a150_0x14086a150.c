// 函数: sub_14086a150
// 地址: 0x14086a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = sub_1405f7040(*(arg2 + 0x408))

if (result != 0)
    int32_t arg_10
    sub_140865b30(arg1 + 0x4d0, &arg_10, result)
    int64_t rax = sx.q(arg_10)
    
    if (rax.d == 0xffffffff)
        result = nullptr
    else
        result = rax * 0x50 + *(arg1 + 0x4d0)
    
    void* rcx_2 = result + 8
    
    if (result == 0)
        rcx_2 = nullptr
    
    if (rcx_2 != 0)
        return sub_140861480(rcx_2, arg2)

return result
