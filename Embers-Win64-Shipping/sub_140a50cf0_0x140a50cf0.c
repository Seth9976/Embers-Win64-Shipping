// 函数: sub_140a50cf0
// 地址: 0x140a50cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a45450(arg1, arg3)
uint8_t result = (*(*arg1 + 0x208))(arg1, arg2)

if (result == 0)
    *(arg1 + 0x29) |= 1

if (result != 0 || arg1[0x1b].b != result)
    arg1[0x15] = arg2
else
    result = (arg1[0x14].d u>> 5).b
    arg1[0x15] = arg2
    
    if ((result & 1) == 0)
        arg1[0x1b].b = 0

return result
