// 函数: sub_141369810
// 地址: 0x141369810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1] & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

if (result == 1)
    result = sub_14128e090(*arg1)
    
    if (result.b == 0)
        return result

result.b = 1
return result
