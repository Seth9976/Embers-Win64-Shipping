// 函数: sub_141ed4950
// 地址: 0x141ed4950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141e7aa60(*arg1, arg1[1])

if (result != 0)
    if (*(result + 0x185) != 2)
        *(result + 0x185) = 1
        return sub_141c45d50(result + 0x1ac, arg1[2].d) __tailcall
    
    int128_t zmm6 = arg1[2].d
    
    if (not(zmm6.d f>= sub_141c39c40(result + 0x1ac)))
        sub_141c45d50(result + 0x1ac, zmm6.d)

return result
