// 函数: sub_1422a3c90
// 地址: 0x1422a3c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x34) = arg2
*(arg1 + 0x38) = arg3
sub_14228fdd0(arg1, arg3)
void* rcx = *(arg1 + 0x20)

if ((rcx.b & 1) != 0)
    rcx = (rcx s>> 1) + arg1 + 0x20

int64_t rax_1 = (*(*rcx + 8))(rcx, zx.q(*(arg1 + 0x34)), 0)

if (*(arg1 + 0x34) == 0)
    *(arg1 + 0x28) = 0
    return rax_1

void* rcx_2 = *(arg1 + 0x20)

if ((rcx_2.b & 1) != 0)
    rcx_2 = (rcx_2 s>> 1) + arg1 + 0x20

int64_t rax_3 = (*(*rcx_2 + 0x30))(rcx_2)
*(arg1 + 0x28) = rax_3
return rax_3
