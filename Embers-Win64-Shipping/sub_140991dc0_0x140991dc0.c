// 函数: sub_140991dc0
// 地址: 0x140991dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0

if (arg2 == 0)
    return 

void* rax_1 = sub_142798920()
void* rdx = arg2[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void var_18
sub_142786b00(&var_18, arg2, 0)
rax = sub_142790a80(&var_18)
int64_t rbx_1 = rax

if (rax == 0)
    return 

int64_t rax_2 = sub_140d41340()
void* rcx_3 = *(rbx_1 + 0x10)
int64_t rdx_2 = sx.q(*(rax_2 + 0x38))

if (rdx_2.d s> *(rcx_3 + 0x38) || *(*(rcx_3 + 0x30) + (rdx_2 << 3)) != rax_2 + 0x30)
    rbx_1 = 0

*arg3 = rbx_1
