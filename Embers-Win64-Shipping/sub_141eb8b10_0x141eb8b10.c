// 函数: sub_141eb8b10
// 地址: 0x141eb8b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rbx_1 = arg1 + 0x50
int32_t rsi_1 = *(arg2 + 0xc)
int64_t rdi_1 = sx.q(*(rbx_1 + 0x18))
int32_t rax_1 = (rdi_1 + 1).d
*(rbx_1 + 0x18) = rax_1

if (rax_1 s> *(rbx_1 + 0x1c))
    sub_140dbc4b0(rbx_1, rdi_1.d)

void* rax = *(rbx_1 + 0x10)

if (rax != 0)
    rbx_1 = rax

*(rbx_1 + (rdi_1 << 2)) = rsi_1
