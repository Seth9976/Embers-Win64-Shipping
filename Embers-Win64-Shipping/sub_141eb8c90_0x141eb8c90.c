// 函数: sub_141eb8c90
// 地址: 0x141eb8c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (((*(*arg2 + 0x4c8))(arg2) - 1) & 0xfffffffd) != 0)
    return 

int32_t rbp_1 = *(arg2 + 0xc)
uint64_t rax
void* rcx_1

if (*(arg1 + 0x48) != 0)
    rax = *(arg1 + 0x40)
    rcx_1 = arg1 + 0x20
    
    if (rax != 0)
        rcx_1 = rax

if (*(arg1 + 0x48) != 0 && *rcx_1 == rbp_1)
    return 

uint64_t rbx_2 = arg1 + 0x20
int64_t rsi_1 = sx.q(*(rbx_2 + 0x28))
int32_t rax_3 = (rsi_1 + 1).d
*(rbx_2 + 0x28) = rax_3

if (rax_3 s> *(rbx_2 + 0x2c))
    sub_14083a280(rbx_2, rsi_1.d)

rax = *(rbx_2 + 0x20)

if (rax != 0)
    rbx_2 = rax

*(rbx_2 + (rsi_1 << 2)) = rbp_1
*(arg1 + 0x1e) = 0
