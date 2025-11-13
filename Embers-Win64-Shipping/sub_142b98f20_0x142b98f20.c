// 函数: sub_142b98f20
// 地址: 0x142b98f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int32_t r13 = 0

if (arg1[0xc].d != 0x6f75746c)
    int64_t rax
    rax.b = 1
    return rax

if (arg3 != 0)
    r12 = *arg3
    r13 = arg3[1]

int32_t var_38
sub_142b94c20(&arg1[0x13], &var_38)
int32_t rdx_1 = var_38
int32_t rcx_2 = r12 s>> 6
int32_t r12_1 = r12 & 0x3f
int32_t rsi_2 = (rdx_1 s>> 6) + rcx_2
int32_t var_30
int32_t r14_2 = (var_30 s>> 6) + rcx_2
int32_t rax_2 = r13 s>> 6
int32_t r13_1 = r13 & 0x3f
int32_t rdx_3 = (rdx_1 & 0x3f) + r12_1
int32_t var_34
int32_t r8_2 = (var_34 & 0x3f) + r13_1
int32_t r9_2 = (var_30 & 0x3f) + r12_1
var_38 = rdx_3
int32_t var_2c
int32_t rcx_5 = (var_2c & 0x3f) + r13_1
int32_t rdi_2 = (var_2c s>> 6) + rax_2
int32_t rbp_2 = (var_34 s>> 6) + rax_2
int32_t rbp_3
int32_t rsi_3
int32_t rdi_3
int32_t r14_3
int32_t r15_3

if (arg2 == 2)
    r15_3 = 1
    rsi_3 = rsi_2 + ((rdx_3 + 0x1f) s>> 6)
    r14_3 = r14_2 + ((r9_2 + 0x20) s>> 6)
    
    if (rsi_3 == r14_3)
        if (((r9_2 - 0x20) & 0x3f) + ((rdx_3 + 0x1f) & 0x3f) u>= 0x3f)
            r14_3 += 1
        else
            rsi_3 -= 1
    
    rbp_3 = rbp_2 + ((r8_2 + 0x1f) s>> 6)
    rdi_3 = rdi_2 + ((rcx_5 + 0x20) s>> 6)
    
    if (rbp_3 == rdi_3)
        if (((rcx_5 - 0x20) & 0x3f) + ((r8_2 + 0x1f) & 0x3f) u>= 0x3f)
            rdi_3 += 1
        else
            rbp_3 -= 1
else
    if (arg2 == 3)
        r15_3 = 5
        sub_142b99400(&var_38, arg1, 3)
        rdx_3 = var_38
    else if (arg2 == 4)
        r15_3 = 6
        sub_142b99400(&var_38, arg1, 4)
        rdx_3 = var_38
    else
        r15_3 = 2
    
    rsi_3 = rsi_2 + (rdx_3 s>> 6)
    r14_3 = r14_2 + ((r9_2 + 0x3f) s>> 6)
    rbp_3 = rbp_2 + (r8_2 s>> 6)
    rdi_3 = rdi_2 + ((rcx_5 + 0x3f) s>> 6)

uint64_t rcx_8 = zx.q(r14_3 - rsi_3)
uint64_t r8_8 = zx.q(rdi_3 - rbp_3)
int32_t rax_21

if (r15_3 == 1)
    rax_21 = (rcx_8 + 0xf).d s>> 3 & 0xfffffffe
else if (r15_3 == 5)
    rcx_8 = zx.q((rcx_8 * 3).d)
    rax_21 = (rcx_8 + 3).d & 0xfffffffc
else
    if (r15_3 == 6)
        r8_8 = zx.q((r8_8 * 3).d)
    
    rax_21 = rcx_8.d

arg1[0x12].d = rsi_3
*(arg1 + 0x94) = rdi_3
arg1[0x10].w = 0x100
*(arg1 + 0x82) = r15_3.b
*(arg1 + 0x6c) = rcx_8.d
arg1[0xd].d = r8_8.d
arg1[0xe].d = rax_21

if (rsi_3 s< 0xffff8000 || r14_3 s> 0x7fff || rbp_3 s< 0xffff8000 || rdi_3 s> 0x7fff)
    rax_21.b = 1
else
    rax_21.b = 0

return rax_21
