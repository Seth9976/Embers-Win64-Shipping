// 函数: sub_142a401f0
// 地址: 0x142a401f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x28) & 0xfffffffffffffffc) != 0)
    int64_t* i_2
    int64_t rax_1
    int64_t rdx
    
    do
        rdx = *(arg2 + 0x28)
        i_2 = rdx & 0xfffffffffffffffc
        rax_1 = rdx
        
        if (rax_1 == *(arg2 + 0x28))
            *(arg2 + 0x28) = zx.q(rdx.d) & 3
        else
            rax_1 = *(arg2 + 0x28)
    while (rdx != rax_1)
    
    if (i_2 != 0)
        int64_t* i = *i_2
        int64_t rcx_2 = 1
        int64_t* i_1 = i_2
        
        for (; i != 0; i = *i)
            i_1 = i
            rcx_2 += 1
        
        *i_1 = *(arg2 + 0x18)
        *(arg2 + 0x18) = i_2
        *(arg2 + 0x20)
        *(arg2 + 0x20) += neg.q(rcx_2)
        *(arg2 + 0x10) -= rcx_2

int64_t rax_6 = *(arg2 + 0x18)

if (rax_6 != 0 && *(arg2 + 8) == 0)
    *(arg2 + 8) = rax_6
    *(arg2 + 0x18) = 0
    *(arg2 + 7) = 0

void** rax_7 = sub_142a40880(arg1, *(arg2 + 0x30))
char rcx_4 = *(arg2 + 6)
bool cond:0 = rax_7[2] == 0x200010
*(arg2 + 0x38) = arg1
*(arg2 + 6) = cond:0 | (rcx_4 & 0xfe)
*(arg2 + 0x40) = *rax_7
*(arg2 + 0x48) = 0
void* rcx_6 = *rax_7

if (rcx_6 == 0)
    rax_7[1] = arg2
else
    *(rcx_6 + 0x48) = arg2

*rax_7 = arg2
int64_t result = sub_142a40530(arg1, rax_7)
*(arg1 + 0xb40) += 1
return result
