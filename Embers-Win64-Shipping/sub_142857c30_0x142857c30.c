// 函数: sub_142857c30
// 地址: 0x142857c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0

if (arg2 == 0 || *(arg2 + 0x90) == 0)
    return 0

if (arg3 != 0)
    sub_1428a5c40(*(arg1 + 0x378))

int64_t* rax = sub_1428a8d10(*(arg1 + 0x28), arg2)
int64_t* rbp_1 = rax

if (rax != 0)
    rdi = 1
    int64_t* rax_1 = sub_1428a8790(*(arg1 + 0x28), rax)
    rbp_1 = rax_1
    sub_1428576f0(arg1, rax_1)

*(arg2 + 0xf0) = 1

if (arg3 != 0)
    sub_1428a5d00(*(arg1 + 0x378))

int64_t rax_2 = *(arg1 + 0x58)

if (rax_2 != 0)
    rax_2(arg1, arg2)

if (rdi != 0)
    sub_1428574d0(rbp_1)

return zx.q(rdi)
