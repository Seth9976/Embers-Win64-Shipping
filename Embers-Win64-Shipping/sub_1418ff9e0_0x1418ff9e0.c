// 函数: sub_1418ff9e0
// 地址: 0x1418ff9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa0)
void*** r10 = nullptr

if (arg3 != 0)
    if (rax != 0)
        int32_t var_18_2 = 0
        r10 = sub_1418f1fd0(rax, *(arg1 + 0x58), arg3, arg3 + 0x20, *(arg3 + 0x18), zx.d(arg4), 0)
else if (rax != 0)
    int32_t var_18_1 = 0
    r10 = sub_1418f1fd0(rax, *(arg1 + 0x58), nullptr, nullptr, 0, zx.d(arg4), 0)

*arg2 = r10

if (r10 != 0)
    r10[1].d += 1

return arg2
