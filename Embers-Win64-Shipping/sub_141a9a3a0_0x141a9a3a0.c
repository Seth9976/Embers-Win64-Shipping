// 函数: sub_141a9a3a0
// 地址: 0x141a9a3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int64_t* rsi

if ((*(arg1 + 0x123) & 8) == 0 || (*(arg1 + 0x13d) & 2) == 0)
    result = sub_141e1c5a0(arg1 + 0x10, arg2)
    rsi = &arg2[1]
else if (*(arg1 + 0x13c) != 0 || *(arg1 + 0x510) s<= 0)
    sub_141e1c5a0(arg1 + 0x10, arg2)
    rsi = &arg2[1]
    sub_141a87c50(arg1 + 0x508, rsi)
    result = sub_141a87a30(arg1 + 0x550, &arg2[0xa])
else
    rsi = &arg2[1]
    sub_141a87bd0(rsi, arg1 + 0x508)
    result = sub_141a87b00(&arg2[0xa], arg1 + 0x550)

if ((*(arg1 + 0x123) & 4) != 0 && (*(arg1 + 0x13d) & 2) == 0)
    sub_141a87c50(arg1 + 0x4c0, rsi)
    result = sub_141a914e0(arg1 + 0x378, *(arg1 + 0x4d0))
    *(arg1 + 0x4d0) = arg1 + 0x378

return result
