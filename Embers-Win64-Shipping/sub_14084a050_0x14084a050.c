// 函数: sub_14084a050
// 地址: 0x14084a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x358)
void* rdi = arg1 + 0x2d0
void* rsi = *(arg3 + 0x98)
void* r14 = arg3
void* rbp = *(arg3 + 0xa0)
int64_t rbx = sx.q(arg2)
arg3.b = 1
int32_t r12 = (rbx + 1).d
int32_t rdx = r12

if (rax s>= r12)
    rdx = rax

sub_14085b630(rdi, rdx, arg3.b)
void* rax_1 = *(rdi + 0x80)

if (rax_1 != 0)
    rdi = rax_1

void* rdi_1 = rdi + (rbx << 5)
void* rax_4 = *(rdi_1 + 8)

if (rax_4 != 0)
    *(rax_4 + 8) -= 1

*(rdi_1 + 0x1c) = arg5
*rdi_1 = r14
*(rdi_1 + 8) = rsi
*(rdi_1 + 0x10) = rbp
*(rdi_1 + 0x18) = arg4
int64_t rsi_1

if (rsi == 0)
    rsi_1 = 0
else
    *(rsi + 8) += 1
    rsi_1 = *(rsi + 0xc8)

int64_t rdi_2

if (rbp == 0)
    rdi_2 = 0
else
    rdi_2 = *(rbp + 0xc8)

int32_t rax_6 = *(arg1 + 0x2c8)
void* rbx_1 = arg1 + 0x100

if (rax_6 s>= r12)
    r12 = rax_6

sub_14085b550(rbx_1, r12, 1)
void* rax_7 = *(rbx_1 + 0x1c0)
int32_t rcx_2 = *(r14 + 0x58)

if (rax_7 != 0)
    rbx_1 = rax_7

void* rbx_2 = rbx_1 + rbx * 0x70
void* rax_9 = rbp + 0x38

if (rbp == 0)
    rax_9 = nullptr

*(rbx_2 + 0x18) = rax_9
*(rbx_2 + 0x20) = r14 + 0x40
*(rbx_2 + 0x30) = r14 + 0x50
*(rbx_2 + 0x38) = r14 + 0x54
*rbx_2 = rsi_1
*(rbx_2 + 0x28) = r14 + 0x60
*(rbx_2 + 8) = rdi_2
*(rbx_2 + 0x10) = 0xffffffff
*(rbx_2 + 0x14) = arg4
*(rbx_2 + 0x40) = rcx_2
return r14 + 0x60
