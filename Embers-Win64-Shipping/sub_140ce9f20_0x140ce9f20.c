// 函数: sub_140ce9f20
// 地址: 0x140ce9f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = sub_140cc16a0(&arg1[2], sub_140d41340())
void* rcx_1

if (rax_1 != 0)
    rcx_1 = arg1[2]

int32_t rcx_5

if (rax_1 == 0 || rcx_1 == 0 || (*(*(rcx_1 + 0x10) + 0xd0) & 8) == 0)
    (*(*arg1 + 0x108))(arg1)
    rcx_5 = 0
else
    int32_t rbx_1 = *(rcx_1 + 0x58)
    int32_t rax_4 = (*(*arg1 + 0x108))(arg1)
    rcx_5 = (rax_4 - 1 + rbx_1) & neg.d(rax_4)

*(arg1 + 0x4c) = rcx_5
return zx.q(*(arg1 + 0x3c) * arg1[7].d + rcx_5)
