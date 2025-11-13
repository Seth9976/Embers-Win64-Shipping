// 函数: sub_141025d40
// 地址: 0x141025d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa4) = arg4
uint64_t rax = *(arg3 + 0x10)

if (*(rax + 0xfd) == 0)
    rax.b = 0
else
    int32_t rbx_1 = *arg2
    rax = sub_141021240(*(rax + 0xa8))
    int32_t rbx_2
    bool cond:0_1
    
    if (rax.d == 0x13)
        rbx_2 = rbx_1 - 0x15
        cond:0_1 = rbx_1 == 0x15
    label_141025d9a:
        
        if (cond:0_1 || rbx_2 != 1)
            rax.b = 1
        else
            rax.b = 0
    else
        if (rax.d == 0x2c)
            rbx_2 = rbx_1 - 0x2e
            cond:0_1 = rbx_1 == 0x2e
            goto label_141025d9a
        
        rax.b = 1

*(arg1 + 0xa0) = rax.b
uint64_t rax_1 = *(arg3 + 0x10)

if (*(rax_1 + 0xfd) == 0)
    rax_1.b = 0
else
    int32_t rbx_3 = *arg2
    rax_1 = sub_141021240(*(rax_1 + 0xa8))
    
    if (rax_1.d == 0x13)
        if (rbx_3 == 0x15 || rbx_3 != 0x16)
            rax_1.b = 0
        else
            rax_1.b = 1
    else if (rax_1.d != 0x2c || rbx_3 == 0x2e || rbx_3 != 0x2f)
        rax_1.b = 0
    else
        rax_1.b = 1

*(arg1 + 0xa1) = rax_1.b
*(arg1 + 0xa2) = arg5
*(arg1 + 0x40) = arg3
void* rdi = *(arg3 + 0x10)
void* rdx = *(rdi + 0x28)
void* rcx_2 = rdx + 0x28

if (rdx == 0)
    rcx_2 = rdi + 0x30

*(arg1 + 0x48) = rcx_2
*(arg1 + 0x60) = *arg2
*(arg1 + 0x70) = *(arg2 + 0x10)
int16_t rsi_1 = 1
*(arg1 + 0x80) = *(arg2 + 0x20)

if (*(rdi + 0x88) != 4)
    rsi_1 = *(rdi + 0xa4)

int32_t rbx_5 = *(rdi + 0xa8)
int16_t var_28
sub_141008b90(&var_28, arg1 + 0x60, zx.q(rbx_5))
char rdi_1 = *(rdi + 0xa6)
char var_20 = rdi_1
int16_t var_1e = rsi_1
int32_t rax_4 = sub_141021240(rbx_5)
char r8_1

if (rax_4 != 0x13)
    r8_1 = 1

if (rax_4 == 0x13 || rax_4 == 0x2c)
    r8_1 = 2

char var_1c = r8_1
int16_t rdx_2
int16_t var_26

if (*(arg1 + 0x64) != 8)
    rdx_2 = var_26
else
    rdx_2 = 1
    int16_t var_26_1 = 1
int16_t r9 = var_28
int64_t r10 = 0
char var_24
char var_1b = var_24
int16_t var_1a = rdx_2 - r9
char var_23
char var_22
char var_21

if (var_24 == 0 && var_23 == rdi_1 && r9 == 0 && rdx_2 == rsi_1 && var_22 == 0 && var_21 == r8_1)
    int32_t rcx_8 = zx.d(rsi_1) * zx.d(var_21) * zx.d(rdi_1)
    
    if (rcx_8 u< 0xff)
        var_28.d = 0x10000
        var_22.w = 0x100
        char var_24_1 = 0
        char var_23_1 = rcx_8.b

*(arg1 + 0x50) = var_28.o

if (*(arg1 + 0x64) != 0xb)
    r10 = *(*(arg3 + 0x10) + 0x20)

return sub_141010dc0(*(*(*(arg1 + 0x20) + 0x20) + 0x18), r10, arg1 + 0x60, *(arg1 + 0x28))
    __tailcall
