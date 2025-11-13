// 函数: sub_142660650
// 地址: 0x142660650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142657070(arg1, 0)

if (result == 0 && (arg1[0xd].b & 1) != 0)
    result = (*(*arg1 + 0x2d8))(arg1)
    
    if (result.b == 1)
        return sub_142657070(arg1, 1) __tailcall

return result
