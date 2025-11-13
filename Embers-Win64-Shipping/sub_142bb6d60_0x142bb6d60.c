// 函数: sub_142bb6d60
// 地址: 0x142bb6d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t* rdi = *(rax + 0x300)
int64_t rax_1 = sub_142b922e0(*(*(rax + 0x90) + 8), "pshinter")
int64_t rdx

if (rax_1 != 0 && rdi != 0)
    rdx = *rdi

int64_t rdi_1

if (rax_1 == 0 || rdi == 0 || rdx == 0)
    rdi_1 = 0
else
    rdi_1 = rdx(rax_1)

sub_142b95d30(*arg1, arg2)

if (rdi_1 != 0)
    (*(rdi_1 + 8))(*arg1[7], zx.q(*(arg1 + 0x1c)), zx.q(arg1[4].d), 0, 0)

return 0
