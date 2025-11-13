// 函数: sub_141ef1240
// 地址: 0x141ef1240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0x11].b)

if ((result.b & 4) != 0)
    sub_140920c10(&data_143a2d6b0, arg1)
    (*(*arg1 + 0x2f8))(arg1)
    result = zx.q(arg1[0x11].b)

result.b &= 5

if (result.b == 1)
    result = arg1[0x15]
    
    if (*(result + 0x1f8) != 0)
        result = (*(*arg1 + 0x300))(arg1)
        
        if (result.b != 0)
            (*(*arg1 + 0x2f0))(arg1)
            return sub_140920c10(&data_143a2d698, arg1) __tailcall

return result
