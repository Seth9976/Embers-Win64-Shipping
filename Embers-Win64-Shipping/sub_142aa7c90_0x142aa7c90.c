// 函数: sub_142aa7c90
// 地址: 0x142aa7c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x28)
int64_t* rcx_3

if (rcx == 3)
label_142aa7cb4:
    rcx_3 = *(arg1 + 8)
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
else if (rcx == 4)
    rcx_3 = *(arg1 + 8)
    
    if (rcx_3 != 0)
        if (rcx_3[-1] == 0)
            j_sub_140a74f90(&rcx_3[-1])
        else
            (**rcx_3)(rcx_3, 3)
else if (rcx == 6)
    goto label_142aa7cb4
int64_t* rdi = *(arg1 + 0x18)
*(arg1 + 0x28) = 2
*(arg1 + 8) = 0

if (rdi != 0)
    if (*(rdi + 0xc) != 0)
        sub_142a7dcd0(*rdi)
    
    sub_142a47920(rdi)

int64_t* rcx_6 = *(arg1 + 0x20)
*(arg1 + 0x18) = 0

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

*(arg1 + 0x20) = 0
