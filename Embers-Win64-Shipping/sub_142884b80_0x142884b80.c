// 函数: sub_142884b80
// 地址: 0x142884b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0
int32_t rax = atoi(arg2)

if (rax s< 0)
    return 0

void* rcx_1 = *(arg1 + 0x18)
int64_t rdi = sx.q(rax)

if (rcx_1 != 0)
    rbx = sub_14284e720(rcx_1, rdi)

void* rcx_2 = *(arg1 + 0x20)

if (rcx_2 == 0)
    return zx.q(rbx)

return sub_142850710(rcx_2, rdi) __tailcall
