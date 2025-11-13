// 函数: sub_140f8fc50
// 地址: 0x140f8fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 8)

if (result == 0 || *(arg1 + 0x58) == 0)
    return result

*(arg1 + 0x5c) = arg2
*(arg1 + 0x60) = arg3
return sub_140f8fc70(result, arg2.b, arg3) __tailcall
