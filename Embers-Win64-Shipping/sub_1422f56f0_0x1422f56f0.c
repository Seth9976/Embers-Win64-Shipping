// 函数: sub_1422f56f0
// 地址: 0x1422f56f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x90) += 1
*(arg1 + 0xa0) = arg2
void*** rcx = *(arg1 + 0x98)

if (arg2 == 0)
    sub_140a4fc50(rcx)
    *(arg1 + 0x98) = 0
    uint64_t result = sub_1422e1ae0(arg1 + 0x10)
    *(arg1 + 0x90) -= 1
    return result

if (rcx == 0)
    rcx.b = 1
    void*** rax_1 = sub_140a491d0(rcx.b)
    rcx = rax_1
    *(arg1 + 0x98) = rax_1

(*rcx)[3](rcx)
jump(*(**(arg1 + 0xa0) + 0x10))
