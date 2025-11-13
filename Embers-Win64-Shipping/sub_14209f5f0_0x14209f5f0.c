// 函数: sub_14209f5f0
// 地址: 0x14209f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r10_1 = sx.q(arg2)

if (r10_1.d s>= *(arg1 + 0x78))
    return 

int32_t rcx = *(arg1 + 0x78)
int32_t rax_2 = rcx - r10_1.d

if (rax_2 != 1)
    memmove(r10_1 * 0x38 + *(arg1 + 0x70), sx.q((r10_1 + 1).d) * 0x38 + *(arg1 + 0x70), 
        (rax_2 - 1) * 0x38)
    rcx = *(arg1 + 0x78)

*(arg1 + 0x78) = rcx - 1
sub_1407c4070(arg1 + 0x70)
sub_14207d710(arg1 + 0x70, *(arg1 + 0x88), 1)
