// 函数: sub_141c88f80
// 地址: 0x141c88f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141c7f990(arg1 + 0x100, arg2)
int64_t* rcx_1 = arg2[1]

if (rcx_1 != 0)
    result = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (result == 1 && rcx_1 != 0)
        jump(*(*rcx_1 + 8))

return result
