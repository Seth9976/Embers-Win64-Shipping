// 函数: sub_140f4fb60
// 地址: 0x140f4fb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x398)
char result = *(arg1 + 0x2c)

if (*(rbx + 0x2c) == result)
    return result

*(rbx + 0x2c) = result
(*(*rbx + 0x228))(rbx)
return sub_140e19ef0(rbx, 1) __tailcall
