// 函数: sub_1423b9830
// 地址: 0x1423b9830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
int32_t rdi = 0
*(arg1 + 0xc) = 4
__builtin_memset(&arg1[2], 0, 0x18)
arg1[5] = -0x3810000020000000
__builtin_memset(&arg1[6], 0, 0x14)
*arg1 = &data_14333b538
*(arg1 + 0x44) = 0
*(arg1 + 0x46) = 0
arg1[9] = arg2
arg1[0xa] = arg2[0x1b]
arg1[0xb].w = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
*(arg1 + 0xe4) = 0xe
arg1[0x1d] = 0
void* rcx = arg1[9]
char rax_1 = *(rcx + 0x5f)
uint32_t rax_2

if (rax_1 != 0x11)
    rax_2 = 0

if (rax_1 == 0x11 || rax_1 == 0x16)
    rax_2 = 1

*(arg1 + 0x5c) = rax_2

if ((*(rcx + 0x60) & 1) == 0)
    rax_2.b = *(rcx + 0x5c) - 6

if ((*(rcx + 0x60) & 1) != 0 || (rax_2.b & 0xfb) == 0)
    rax_2.b = 0
else
    rax_2.b = 1

*(arg1 + 0x45) = rax_2.b
*(arg1 + 0x46) = arg2[0xc].b & 1
void* rax_4 = *(rcx + 0xd0)
int32_t rbp

if (rax_4 == 0)
    rbp = 0
else
    rbp = *(rax_4 + 0x14)

int32_t rcx_3

if (arg2[0x1a] == 0)
    rcx_3 = 0
else
    char rax_6 = (*(*arg2 + 0x318))(arg2)
    void* rcx_2 = arg2[0x1a]
    
    if (rax_6 == 0)
        rcx_3 = *(rcx_2 + 0x20)
    else
        rcx_3 = *(*(rcx_2 + 0x28) + 4)

if (arg3 s>= rbp)
    rbp = arg3

arg1[0xc].d = rcx_3 - rbp
*(arg2 + 0x3c) = arg3.b

if (arg2[0x1a] != 0)
    char rax_9 = (*(*arg2 + 0x318))(arg2)
    void* rdi_1 = arg2[0x1a]
    
    if (rax_9 == 0)
        rdi = *(rdi_1 + 0x20)
    else
        rdi = *(*(rdi_1 + 0x28) + 4)

void* r14_1 = &arg1[0xd]
int64_t r15 = sx.q(*(r14_1 + 0x78))
int32_t rax_11 = r15.d + rdi
*(r14_1 + 0x78) = rax_11

if (rax_11 s> *(r14_1 + 0x7c))
    sub_1423b4cf0(r14_1, r15.d)

void* rax_12 = *(r14_1 + 0x70)
void* rcx_7 = r14_1

if (rax_12 != 0)
    rcx_7 = rax_12

memset(rcx_7 + (r15 << 3), 0, sx.q(rdi) << 3)
void* rax_13 = *(r14_1 + 0x70)
int64_t rdx_1 = sx.q(arg1[0xc].d)

if (rax_13 != 0)
    r14_1 = rax_13

sub_1423cb230(arg2[0x1a], rdx_1.d, r14_1 + (rdx_1 << 3))
return arg1
