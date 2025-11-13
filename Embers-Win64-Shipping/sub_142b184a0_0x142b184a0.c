// 函数: sub_142b184a0
// 地址: 0x142b184a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

sub_142a48100(arg1 + 0x28, arg2)
char rax_1 = (*(arg1 + 0x30)).b
void* r14_1

if ((rax_1 & 0x11) == 0)
    r14_1 = arg1 + 0x32
    
    if ((rax_1 & 2) == 0)
        r14_1 = *(arg1 + 0x40)
else
    r14_1 = nullptr

void* rcx_1 = *(*(arg1 + 0x10) + 0x10)
uint8_t rbp_2 = (*(rcx_1 + 0x18) u>> 1).b & 1
int64_t rbx_1
int64_t arg_18
int64_t rax

if ((not.b(*(rcx_1 + 0x18)) & 1) == 0)
    rax = j_sub_142a7dd00(0x210)
    arg_18 = rax
    
    if (rax == 0)
        rbx_1 = 0
    else
        int16_t rax_8 = *(arg1 + 0x30)
        int32_t rcx_5
        
        if (rax_8 s< 0)
            rcx_5 = *(arg1 + 0x34)
        else
            rcx_5 = sx.d(rax_8) s>> 5
        
        rbx_1 = sub_142b17ef0(rax, *(*(arg1 + 0x10) + 8), rbp_2, r14_1, r14_1, 
            r14_1 + (sx.q(rcx_5) << 1))
else
    rax = j_sub_142a7dd00(0x1a0)
    arg_18 = rax
    rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = 0
    else
        int16_t rax_4 = *(arg1 + 0x30)
        int32_t rdx_1
        
        if (rax_4 s< 0)
            rdx_1 = *(arg1 + 0x34)
        else
            rdx_1 = sx.d(rax_4) s>> 5
        
        int64_t* rcx_2 = *(*(arg1 + 0x10) + 8)
        *rbx_1 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
        *(rbx_1 + 8) = *rcx_2
        *(rbx_1 + 0x10) = rcx_2
        *(rbx_1 + 0x18) = 0
        *(rbx_1 + 0x20) = rbx_1 + 0x30
        *(rbx_1 + 0x28) = 0x28
        *(rbx_1 + 0x2c) = 0
        *rbx_1 = &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
        *(rbx_1 + 0x170) = 0
        *(rbx_1 + 0x178) = 0
        *(rbx_1 + 0x180) = 0xffffffff
        *(rbx_1 + 0x184) = rbp_2
        *(rbx_1 + 0x198) = r14_1 + (sx.q(rdx_1) << 1)
        *(rbx_1 + 0x188) = r14_1
        *(rbx_1 + 0x190) = r14_1

if (rbx_1 == 0)
    *arg3 = 7
    return 

int64_t* rcx_8 = *(arg1 + 8)

if (rcx_8 != 0)
    (**rcx_8)(rcx_8, 1)

*(arg1 + 8) = rbx_1
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
