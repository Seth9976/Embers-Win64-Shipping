// 函数: sub_141c46cb0
// 地址: 0x141c46cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) += 1
*(arg1 + 0x28) = arg2
void*** rcx = *(arg1 + 0x20)

if (arg2 == 0)
    sub_140a4fc50(rcx)
    *(arg1 + 0x20) = 0
    return sub_141c36c20(arg1) __tailcall

if (rcx == 0)
    rcx.b = 1
    void*** rax_1 = sub_140a491d0(rcx.b)
    rcx = rax_1
    *(arg1 + 0x20) = rax_1

(*rcx)[3](rcx)
jump(*(**(arg1 + 0x28) + 0x10))
