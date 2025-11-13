// 函数: sub_141f2b420
// 地址: 0x141f2b420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xa8)
int128_t zmm6 = arg2

if (result == 0)
    result = sub_141ee69e0(arg1)
    
    if (result == 0)
        return result

arg2.d = (*(result + 0x520)).d f- *(arg1 + 0x26c)
result.b = _mm_max_ss(*(result + 0x530) + 9.99999975e-05f, zmm6.d) f>= arg2.d
return result
