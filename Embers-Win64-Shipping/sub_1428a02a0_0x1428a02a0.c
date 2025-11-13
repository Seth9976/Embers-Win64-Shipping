// 函数: sub_1428a02a0
// 地址: 0x1428a02a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rdi = arg2
int32_t rax_1 = sub_1428a33d0(nullptr, arg2, nullptr, *(*(arg1 + 0x20) + 0x14))

if (rax_1 == 0)
    return zx.q(rax_1 + 1)

*(arg1 + 0xac) = 0

if (rdi == 0)
    rdi = sub_142898ea0(*(arg1 + 0x98), 0)

*(arg1 + 0xb8) = rdi
*(arg1 + 0xb0) = rax_1
jump(*(arg1 + 0x38))
