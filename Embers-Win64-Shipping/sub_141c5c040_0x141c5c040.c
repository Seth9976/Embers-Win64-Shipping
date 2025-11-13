// 函数: sub_141c5c040
// 地址: 0x141c5c040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
label_141c5c0b6:
    
    if (*(arg1 + 0x88) != 0)
        int64_t* rcx_4 = *(arg1 + 0x80)
        (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
        *(arg1 + 0x88) = 0
    
    return 

int64_t* rcx = *(arg1 + 0x88)

if (rcx == 0)
    bool z_1
    
    if (0 == *(arg1 + 0x78))
        *(arg1 + 0x78) = 0
        z_1 = true
    else
        *(arg1 + 0x78)
        z_1 = false
    
    if (not(z_1))
        sub_141c5a860(arg1 + 8)
        *(arg1 + 0x78) -= 1
    
    goto label_141c5c0b6

if ((*(*rcx + 0x18))(rcx, arg1) == 0)
    goto label_141c5c0b6

sub_141c5a860(arg1 + 8)
*(arg1 + 0x78) -= 1
int64_t* rcx_2 = *(arg1 + 0x80)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    *(arg1 + 0x88) = 0
    return 

*(arg1 + 0x88) = 0
