// 函数: sub_141c89930
// 地址: 0x141c89930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg2
int32_t result = sub_141c815c0(arg1 + 0x100, &arg_8, arg3)
int64_t* rcx_1 = *(arg2 + 8)

if (rcx_1 != 0)
    result = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (result == 1 && rcx_1 != 0)
        jump(*(*rcx_1 + 8))

return result
