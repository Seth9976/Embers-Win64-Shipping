// 函数: sub_142ae8e30
// 地址: 0x142ae8e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x48)
int64_t rdi = arg3
uint64_t rsi = arg2

if (*arg6 s> 0)
    return 0

if (arg4 == 0 && arg5 != 0)
    *arg6 = 1

if (rsi s> rdi)
    *arg6 = 8
    return 0

int16_t rax_3 = *(rbx + 8)
int32_t rbp_1

if (rax_3 s< 0)
    rbp_1 = *(rbx + 0xc)
else
    rbp_1 = sx.d(rax_3) s>> 5

void* r14 = nullptr
int64_t rax_4 = sx.q(rbp_1)

if (rsi s< 0)
    rsi = 0
else if (rsi s> rax_4)
    rsi = rax_4

if (rdi s< 0)
    rdi = 0
else if (rdi s> rax_4)
    rdi = rax_4

if (rsi.d s< rbp_1)
    rsi = zx.q(sub_142a4a130(rbx, rsi.d))

if (rdi.d s< rbp_1)
    rdi = zx.q(sub_142a4a130(rbx, rdi.d))

sub_142a49390(rbx, rsi.d, rdi.d - rsi.d, arg4, 0, arg5)
int16_t rcx_3 = *(rbx + 8)
int32_t rax_8

if (rcx_3 s< 0)
    rax_8 = *(rbx + 0xc)
else
    rax_8 = sx.d(rcx_3) s>> 5

if ((rcx_3.b & 0x11) == 0)
    r14 = rbx + 0xa
    
    if ((rcx_3.b & 2) == 0)
        r14 = *(rbx + 0x18)

*(arg1 + 0x2c) = rax_8
*(arg1 + 0x1c) = rax_8
int32_t result = rax_8 - rbp_1
*(arg1 + 0x10) = sx.q(rax_8)
*(arg1 + 0x30) = r14
*(arg1 + 0x28) = result + rdi.d
return result
