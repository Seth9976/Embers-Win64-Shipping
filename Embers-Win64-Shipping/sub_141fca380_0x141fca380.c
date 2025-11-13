// 函数: sub_141fca380
// 地址: 0x141fca380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x98) s<= 0)
    if (*(arg1 + 0xb0c) != 0)
        goto label_141fca3cf
    
    goto label_141fca3b3

void* rcx = **(arg1 + 0x90)

if ((rcx == 0 || *(rcx + 0x134) == 1) && *(arg1 + 0xb0c) == 0)
label_141fca3b3:
    void* rax_2 = *(arg1 + 0x88)
    
    if (rax_2 != 0 && *(rax_2 + 0x134) != 1)
        goto label_141fca3cf
else
label_141fca3cf:
    sub_140599090(arg1 + 0x9d8)
    int64_t* rcx_2 = *(arg1 + 0x88)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x2a8))(rcx_2, 0)
        *(*(arg1 + 0x88) + 0x134) = 1
        sub_14213f9e0(*(arg1 + 0x88))
    else if (*(arg1 + 0x98) s> rcx_2.d)
        int64_t* rcx_3 = **(arg1 + 0x90)
        
        if (rcx_3 != 0)
            sub_14213f9e0(rcx_3)
    
    int64_t* rcx_4 = *(arg1 + 0x770)
    (*(*rcx_4 + 0x10))(rcx_4)

sub_141faaf40(arg1)
bool cond:1 = *(arg1 + 0x10e4) == 0
*(arg1 + 0x10e0) = 0

if (not(cond:1))
    sub_1405947f0(arg1 + 0x10d8, 0)

return sub_141fc5140(arg1) __tailcall
