// 函数: sub_1418c5bc0
// 地址: 0x1418c5bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x148)

if (*(*(arg1 + 0x140) + 0x1560) != rax)
    *(arg1 + 0x150) = 1
    return rax

void* rcx = *(arg1 + 0x240)

if (*(rcx + 0x78) != 0)
    sub_1418c86c0(rcx, 0, 0)
    rcx = *(arg1 + 0x240)

*(arg1 + 0x150) = 1
sub_1418c8030(rcx, nullptr)
int64_t rax_1 = sub_1418c2ee0(*(arg1 + 0x240))
*(arg1 + 0x150) = 0
return rax_1
