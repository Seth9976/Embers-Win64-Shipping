// 函数: sub_141759920
// 地址: 0x141759920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 f<= *(arg3 + 0x9c))
    return 0

int64_t rbx = sx.q(*(arg1 + 0x1850))
void* rdi = arg1 + 0xe40
int32_t rax = (rbx + 1).d
*(rdi + 0xa10) = rax

if (rax s> *(rdi + 0xa14))
    sub_141750150(rdi, rbx.d)

void* rdx_2 = *(rdi + 0xa00)
int64_t rbx_2 = rbx * 0x140
void* rcx_1 = rdi

if (rdx_2 != 0)
    rcx_1 = rdx_2

sub_1417042c0(rcx_1 + rbx_2, arg3)
void* rcx_3 = *(rdi + 0xa00)

if (rcx_3 != 0)
    rdi = rcx_3

return rbx_2 + rdi
