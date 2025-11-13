// 函数: sub_141ec0df0
// 地址: 0x141ec0df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x20)

if (rbx == 0)
    return 

void* rax_1 = sub_14249be50()
void* rdx_1 = rbx[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t* rcx_1 = rbx[0xc4]

if (rcx_1 == 0)
    return 

int64_t rdx_2 = rbx[0xc3]

if (rdx_2 == 0)
    return 

(*(*rcx_1 + 0x260))(rcx_1, rdx_2)
rbx[0xc3]
jump(*(*rbx + 0xdd0))
