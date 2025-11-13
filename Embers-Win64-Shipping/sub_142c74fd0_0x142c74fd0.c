// 函数: sub_142c74fd0
// 地址: 0x142c74fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg2 + 0x164)
int32_t* rdx = 0x314
int32_t* rax_1

if (r9 == 2)
    rax_1 = 0x314
    
    if (*(arg2 + 0x240) != -1)
        rax_1 = 0x33c

int32_t rcx

if (r9 != 2 || *(rax_1 + arg2) == r9)
    rcx = *(arg2 + 0x360)
else
    rcx = *(arg2 + 0x3a8)

if (r9 == 2 && *(arg2 + 0x240) != -1)
    rdx = 0x33c

int32_t rdi

if (r9 != 2 || *(rdx + arg2) == r9)
    rdi = *(arg2 + 0x364)
else
    rdi = *(arg2 + 0x3ac)

if (rdi == 0)
    rdi = rcx << 0x10

if (rcx == 4)
    *arg1 |= 0x2000000
else if (rcx == 5)
    *arg1 |= 0x4000000
    *arg1 |= 0x2000000
else
    if (rcx == 6)
        goto label_142c75086
    
    if (rcx == 7)
        sub_14284dc40(*(arg2 + (sx.q(arg3) + 0x12) * 0x28), 0x7c, 0x304, nullptr)
        *arg1 |= 0x8000000
    label_142c75086:
        *arg1 |= 0x10000000
        *arg1 |= 0x4000000
        *arg1 |= 0x2000000

if (rdi != 0x10000)
    if (rdi == 0x40000)
        *arg1 |= 0x10000000
        *arg1 |= 0x8000000
    else if (rdi == 0x50000)
        *arg1 |= 0x8000000
    else if (rdi != 0x60000)
        return 0

*arg1 |= 0x20000000
return 0
