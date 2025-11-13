// 函数: sub_1406620a0
// 地址: 0x1406620a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x108)

if (rcx == 0)
    return arg1

if (arg3 == 0)
    return sub_140fc31d0(rcx, arg2, 1)

*(rcx + 0x578) = *arg2
void* rax_1 = *(arg1 + 0x108)
*(rax_1 + 0x588) = 1
return rax_1
