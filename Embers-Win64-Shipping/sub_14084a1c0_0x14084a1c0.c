// 函数: sub_14084a1c0
// 地址: 0x14084a1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x358)
void* rdi = arg1 + 0x2d0
int64_t rbx = sx.q(arg2)
void* rbp = arg3
arg3.b = 1
int32_t rsi = (rbx + 1).d
int32_t rdx = rsi

if (rax s>= rsi)
    rdx = rax

sub_14085b630(rdi, rdx, arg3.b)
void* rax_1 = *(rdi + 0x80)
void* r15 = *(rbp + 0x10)

if (rax_1 != 0)
    rdi = rax_1

void* rdi_1 = rdi + (rbx << 5)
void* rax_4 = *(rdi_1 + 8)

if (rax_4 != 0)
    *(rax_4 + 8) -= 1

*(rdi_1 + 0x1c) = arg5
*rdi_1 = r15
*(rdi_1 + 8) = rbp
*(rdi_1 + 0x10) = 0
*(rdi_1 + 0x18) = arg4
*(rbp + 8) += 1
int32_t rax_6 = *(arg1 + 0x2c8)
void* rbx_1 = arg1 + 0x100

if (rax_6 s>= rsi)
    rsi = rax_6

sub_14085b550(rbx_1, rsi, 1)
void* rax_7 = *(rbx_1 + 0x1c0)
int32_t rcx_2 = *(r15 + 0x58)

if (rax_7 != 0)
    rbx_1 = rax_7

void* rbx_2 = rbx_1 + rbx * 0x70
*rbx_2 = *(rbp + 0xc8)
*(rbx_2 + 8) = 0
*(rbx_2 + 0x18) = 0
*(rbx_2 + 0x20) = 0
*(rbx_2 + 0x30) = r15 + 0x50
*(rbx_2 + 0x38) = r15 + 0x54
*(rbx_2 + 0x28) = r15 + 0x60
*(rbx_2 + 0x10) = 0xffffffff
*(rbx_2 + 0x14) = arg4
*(rbx_2 + 0x40) = rcx_2
return r15 + 0x60
