// 函数: sub_14202d640
// 地址: 0x14202d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4f]
(*(*rcx + 0x708))(rcx)
int64_t result = (*(*arg1 + 0x7a0))(arg1)

if (result.b != 0)
    result = sub_141dc8400(arg1)
    
    if (result != 0)
        jump(*(*sub_141dc8400(arg1) + 0x2f8))

return result
