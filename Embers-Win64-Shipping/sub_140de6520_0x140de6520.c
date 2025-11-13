// 函数: sub_140de6520
// 地址: 0x140de6520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    return 0xffffffff

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax_1 = (rdi + 1).d
*(arg1 + 0x18) = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_140638870(arg1 + 0x10)

*(*(arg1 + 0x10) + (rdi << 3)) = arg2
int64_t rax_3 = *(arg1 + 8)

if (rax_3 != 0 && *(arg2 + 8) != rax_3)
    *(arg2 + 8) = rax_3
    sub_140de7bf0(arg2)

return zx.q(rdi.d)
