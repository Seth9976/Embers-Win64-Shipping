// 函数: sub_140fcb9c0
// 地址: 0x140fcb9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2
int32_t result

if ((arg2 & 0xfffffffd) != 0)
label_140fcb9f4:
    
    if (rsi - 1 u<= 1)
        arg2.b = 1
        result = (*(*arg1 + 0x120))(arg1, arg2, arg3)
    
    if (rsi - 1 u> 1 || result.b != 0)
        result.b = 0
        return result
else
    result, arg2 = (*(*arg1 + 0x120))(arg1, 0)
    
    if (result.b != 0)
        goto label_140fcb9f4

result.b = 1
return result
