// 函数: sub_1428ec9c0
// 地址: 0x1428ec9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rcx = **arg1
int32_t rbx = *rcx
int32_t* rdx = **arg2
int32_t rax_2 = rbx
int32_t rdi = *rdx

if (rbx s> rdi)
    rax_2 = rdi

int32_t result = memcmp(*(rcx + 8), *(rdx + 8), sx.q(rax_2))

if (result != 0)
    return result

return rbx - rdi
