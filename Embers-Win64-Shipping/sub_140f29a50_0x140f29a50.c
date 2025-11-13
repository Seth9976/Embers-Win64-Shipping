// 函数: sub_140f29a50
// 地址: 0x140f29a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    return 0xffffffff

int64_t rbx = sx.q(*(arg1 + 0x18))
int32_t rax_1 = (rbx + 1).d
*(arg1 + 0x18) = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_140638870(arg1 + 0x10)

*(*(arg1 + 0x10) + (rbx << 3)) = arg2
int64_t rax_3 = *(arg1 + 8)

if (rax_3 != 0 && *(arg2 + 0x18) != rax_3)
    *(arg2 + 0x18) = rax_3
    sub_140de7bf0(arg2 + 0x10)

return zx.q(rbx.d)
