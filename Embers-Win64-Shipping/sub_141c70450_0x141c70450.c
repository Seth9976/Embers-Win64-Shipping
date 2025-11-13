// 函数: sub_141c70450
// 地址: 0x141c70450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x78) += 1
*(arg1 + 0x88) = arg2
void*** rcx = *(arg1 + 0x80)

if (arg2 == 0)
    sub_140a4fc50(rcx)
    *(arg1 + 0x80) = 0
    int64_t result = sub_141c5a860(arg1 + 8)
    *(arg1 + 0x78) -= 1
    return result

if (rcx == 0)
    rcx.b = 1
    void*** rax_1 = sub_140a491d0(rcx.b)
    rcx = rax_1
    *(arg1 + 0x80) = rax_1

(*rcx)[3](rcx)
jump(*(**(arg1 + 0x88) + 0x10))
