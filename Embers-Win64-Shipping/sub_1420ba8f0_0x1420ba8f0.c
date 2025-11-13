// 函数: sub_1420ba8f0
// 地址: 0x1420ba8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x50)
int64_t r10 = sx.q(arg2)
int32_t rax_1 = r8 - r10.d

if (rax_1 != 1)
    memmove(r10 * 0x38 + *(arg1 + 0x48), sx.q((r10 + 1).d) * 0x38 + *(arg1 + 0x48), 
        (rax_1 - 1) * 0x38)
    r8 = *(arg1 + 0x50)

*(arg1 + 0x50) = r8 - 1
sub_1407c4070(arg1 + 0x48)
return sub_14207d710(arg1 + 0x48, *(arg1 + 0x60), 1) __tailcall
