// 函数: sub_14238d2d0
// 地址: 0x14238d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x150)
int64_t rbp = sx.q(arg2)
int64_t r11 = sx.q(arg4)
void* rbx_1 = rbp * 0x430 + rax[2]
void* r14 = *(*rax + (rbp << 3))
void* rax_2 = *(r14 + 0x28)
void* r8 = r14 + 0x10

if (rax_2 != 0)
    r8 = rax_2

void* r10_2 = (rbp << 7) + *(arg1 + 0x160)
void* rcx = r10_2 + 0x30
void* rdi = r8 + r11 * 0x18
void* rax_4 = *(rcx + 0x10)

if (rax_4 != 0)
    rcx = rax_4

void* rax_5 = *(arg7 + 0x68)
void* rdx = rcx + r11 * 0x10
void* rcx_1 = arg7

if (rax_5 != 0)
    rcx_1 = rax_5

if (data_143a2ffa0 == 0 || *(rdx + 0xc) s< 0)
    rax_5.b = 0
else
    rax_5.b = 1

*(arg7 + 0x9c) &= 0xffffe07f
int32_t rax_8

if (rax_5.b == 0)
    *(rcx_1 + 0x10) = r14 + 0x178
    *(rcx_1 + 0x40) = *(rdi + 4)
    rax_8 = *(rdi + 8)
else
    *(rcx_1 + 0x10) = *(r10_2 + 0x60)
    *(rcx_1 + 0x40) = *(rdx + 8)
    rax_8 = *(rdx + 0xc)

int32_t r8_1 = 0
*(rcx_1 + 0x44) = rax_8
*(arg7 + 0x78) = 0
void* rdx_1 = arg7
void* rax_11 = *(arg7 + 0x68)

if (rax_11 != 0)
    rdx_1 = rax_11

void* result

if (*(r10_2 + 0x50) == 0)
    result = *(rbx_1 + 0x200)
else
    result = *(r10_2 + 0x58)
    rbx_1 += 0x210

*(rdx_1 + 0x28) = result

if (*(rdx_1 + 0x44) u<= 0)
    result.b = 0
else
    *(arg7 + 0x9a) = rbp.b
    
    if ((*(arg1 + 0x628) & 2) != 0 || (*(arg1 + 0x35) & 1) != 0)
        r8_1 = 1
    
    int32_t rcx_4 = (*(arg7 + 0x9c) & 0xfffffffe) | r8_1
    *(arg7 + 0x88) = r10_2
    int32_t rcx_5 = rcx_4 & 0xfffffffb
    *(arg7 + 0x78) = rbx_1
    *(arg7 + 0x9c) = ((zx.d(arg5) << 0xd ^ rcx_5) & 0xe000) ^ rcx_5
    *(arg7 + 0x80) = arg6
    *(rdx_1 + 0x50) = *(rdi + 0xc)
    *(rdx_1 + 0x54) = *(rdi + 0x10)
    sub_142397f70(arg1, rbp.d, 0, arg7)
    result.b = 1

return result
