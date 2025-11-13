// 函数: sub_14238f3f0
// 地址: 0x14238f3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x150)
int64_t rbp = sx.q(arg2)
void* rsi_1 = rbp * 0x430 + r8[2]
void* r11_2 = (rbp << 7) + *(arg1 + 0x160)
void* r10 = *(*r8 + (rbp << 3))

if (data_143a2ff91 == 0 || (*(arg1 + 0x35) & 1) == 0 || (*(r10 + 0x44) & 8) == 0)
    arg2.b = 0
    
    if ((*(r10 + 0x44) & 2) == 0)
        int64_t rax
        rax.b = 0
        return rax
else
    arg2.b = 1

void* rcx = arg5
void* rax_1 = *(arg5 + 0x68)

if (rax_1 != 0)
    rcx = rax_1

int64_t rax_3

if (*(r11_2 + 0x50) == 0)
    *(arg5 + 0x78) = rsi_1
    rax_3 = *(rsi_1 + 0x200)
else
    *(arg5 + 0x78) = rsi_1 + 0x210
    rax_3 = *(r11_2 + 0x58)

*(rcx + 0x28) = rax_3
void* rax_4 = *(r10 + 0x1f8)
void* rax_5

if (rax_4 == 0 || arg2.b == 0)
    rax_5 = r10 + 0x1b8
else
    rax_5 = rax_4 + 0x40

*(rcx + 0x10) = rax_5
int32_t r8_1 = 0
*(rcx + 0x40) = 0
*(rcx + 0x44) = *(r10 + 0x48)
*(rcx + 0x50) = 0
*(rcx + 0x54) = *(r10 + 0x12c) - 1
*(arg5 + 0x9a) = rbp.b

if (((*(arg1 + 0x628) & 2) != 0 || (*(arg1 + 0x35) & 1) != 0) && arg2.b == 0)
    r8_1 = 1

*(arg5 + 0x9c) &= 0xfffffffe
int32_t rcx_3 = (*(arg5 + 0x9c) | r8_1) & 0xffff007f
*(arg5 + 0x88) = r11_2
*(arg5 + 0x9c) = rcx_3 | (zx.d(arg4) & 7) << 0xd
int64_t* rax_12 = sub_14210f630(0)
int64_t rdx = *rax_12
int64_t rax_13 = (*(rdx + 0x280))(rax_12, rdx)
*(arg5 + 0x9c) &= 0xffffffc7
*(arg5 + 0x80) = rax_13
sub_142397f70(arg1, rbp.d, arg6, arg5)
void* rax_14
rax_14.b = 1
return rax_14
