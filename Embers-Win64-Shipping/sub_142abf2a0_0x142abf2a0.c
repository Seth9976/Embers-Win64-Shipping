// 函数: sub_142abf2a0
// 地址: 0x142abf2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

sub_142a48100(arg1 + 8, arg2)
*(arg1 + 0x1a8) = arg1 + 0x48
sub_142abf3b0(arg1, arg3)

if (*arg3 s> 0)
    return 

void* rcx_2 = *(arg1 + 0x198)
int16_t rax_2 = *(rcx_2 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(rcx_2 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

int32_t rdx_1 = *(arg1 + 0x1a0)

if (rdx_1 == rax_4)
label_142abf367:
    void* rcx_6 = *(arg1 + 0x198)
    int16_t rax_11 = *(rcx_6 + 8)
    int32_t rax
    
    if (rax_11 s< 0)
        rax = *(rcx_6 + 0xc)
    else
        rax = sx.d(rax_11) s>> 5
    
    int32_t rdx_4 = *(arg1 + 0x1a0)
    
    if (rdx_4 != rax && sub_142a486d0(rcx_6, rdx_4) != 0xffffffff)
        *arg3 = 0x10013
    
    return 

if (sub_142a486d0(rcx_2, rdx_1) != 0x3b)
    goto label_142abf367

sub_142ac0290(arg1 + 0x198)
void* rcx_4 = *(arg1 + 0x198)
int16_t rax_6 = *(rcx_4 + 8)
int32_t rax_8

if (rax_6 s< 0)
    rax_8 = *(rcx_4 + 0xc)
else
    rax_8 = sx.d(rax_6) s>> 5

int32_t rdx_2 = *(arg1 + 0x1a0)

if (rdx_2 == rax_8)
    goto label_142abf367

if (sub_142a486d0(rcx_4, rdx_2) == 0xffffffff)
    goto label_142abf367

*(arg1 + 0x1b0) = 1
*(arg1 + 0x1a8) = arg1 + 0xf0
sub_142abf3b0(arg1, arg3)

if (*arg3 s<= 0)
    goto label_142abf367
