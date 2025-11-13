// 函数: sub_142b98690
// 地址: 0x142b98690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x10)

if (rax != 0)
    rax(arg2)

int64_t rdx = *(*(arg3 + 0x18) + 0x60)

if (rdx != 0)
    rdx(arg2)

int64_t rdx_1 = *(arg2 + 0x38)

if (rdx_1 != 0)
    (*(arg1 + 0x10))(arg1, rdx_1)

*(arg2 + 0x38) = 0
jump(*(arg1 + 0x10))
