// 函数: sub_141d34860
// 地址: 0x141d34860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x58)

if (rbx == 0)
    return 

int64_t* rcx = *(arg1 + 0x60)
void* rax_2 = (*(*rcx + 0x10))(rcx)
int64_t r8_1 = sx.q(rbx[1].d) * 3
int64_t rdx_1 = *(*rbx + 0x28)
*(rax_2 + 0x10) = *(rdx_1 + (r8_1 << 2))
*(rax_2 + 0x18) = *(rdx_1 + (r8_1 << 2) + 8)
*(rax_2 + 0x20) = *(*(*rbx + 0x68) + sx.q(rbx[1].d) * 0x10)
int64_t rdx_4 = sx.q(rbx[1].d) * 3
int64_t rcx_5 = *(*rbx + 0x1b8)
*(rax_2 + 0xa8) = *(rcx_5 + (rdx_4 << 2))
*(rax_2 + 0xb0) = *(rcx_5 + (rdx_4 << 2) + 8)
int64_t rdx_5 = sx.q(rbx[1].d) * 3
int64_t rcx_6 = *(*rbx + 0x1d0)
*(rax_2 + 0xb4) = *(rcx_6 + (rdx_5 << 2))
*(rax_2 + 0xbc) = *(rcx_6 + (rdx_5 << 2) + 8)
*(rax_2 + 0x1f0) = *(sx.q(rbx[1].d) + *(*rbx + 0x398))
