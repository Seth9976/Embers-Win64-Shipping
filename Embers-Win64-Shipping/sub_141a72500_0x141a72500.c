// 函数: sub_141a72500
// 地址: 0x141a72500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg2[0x10].b

if ((result & 1) != 0)
    int64_t* rcx = arg2
    
    if ((result & 2) == 0)
        rcx = *arg2
    
    arg2[0x10].b = result & 0xfe
    result = (**rcx)(rcx, 0)
    
    if ((arg2[0x10].b & 2) == 0)
        return sub_140a74f90(*arg2) __tailcall

return result
