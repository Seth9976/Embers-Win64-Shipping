// 函数: sub_141a52920
// 地址: 0x141a52920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax = sub_140d3c6e0(&arg1[0x16])

if (rax != 0)
    return rax

void* rax_1 = sub_140d2bce0(arg1)
void* const rbx_1 = rax_1
void* rax_2
int64_t rax_3
void* rdx_1

if (rax_1 != 0)
    rax_2 = sub_141a77ca0()
    rdx_1 = *(rbx_1 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rax_1 == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rbx_1 = nullptr

sub_140d3a3a0(&arg1[0x16], rbx_1)
return rbx_1
