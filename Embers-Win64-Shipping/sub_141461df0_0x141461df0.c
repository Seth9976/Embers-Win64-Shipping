// 函数: sub_141461df0
// 地址: 0x141461df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 6)
    if (arg1 == 2 || arg1 == 5)
        if (arg2 == 0)
            return 1
        
        if (((*(sx.q(arg2) * 0x14 + &data_143f025fc) u>> 0x13).b & 1) != 0)
            return 1
    else if (arg1 != 2 && arg1 s> 0xffffffff && arg1 s< 5)
        return (*(sx.q(arg2) * 0x14 + &data_143f025fc) u>> 0x13).b & 1
else if (arg2 u<= 0x10 && test_bit(0x10015, arg2))
    return 1

return 0
