// 函数: sub_14209b3e0
// 地址: 0x14209b3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1570(arg1)
void* const rdi = arg1[0x1c]
void* rax_1
int64_t rax_2
void* rdx_1

if (rdi != 0)
    rax_1 = sub_14256a090()
    rdx_1 = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

int64_t rax_4 = *arg1
arg1[0x44] = rdi
jump(*(rax_4 + 0x668))
