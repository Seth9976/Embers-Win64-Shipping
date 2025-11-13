// 函数: sub_1413e2130
// 地址: 0x1413e2130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
label_1413e219d:
    
    if (*(arg1 + 0x70) != 0)
        int64_t* rcx_4 = *(arg1 + 0x68)
        (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
        *(arg1 + 0x70) = 0
    
    return 

int64_t* rcx = *(arg1 + 0x70)

if (rcx == 0)
    bool z_1
    
    if (0 == *(arg1 + 0x60))
        *(arg1 + 0x60) = 0
        z_1 = true
    else
        *(arg1 + 0x60)
        z_1 = false
    
    if (not(z_1))
        sub_1413df470(arg1 + 8)
        *(arg1 + 0x60) -= 1
    
    goto label_1413e219d

if ((*(*rcx + 0x18))(rcx, arg1) == 0)
    goto label_1413e219d

sub_1413df470(arg1 + 8)
*(arg1 + 0x60) -= 1
int64_t* rcx_2 = *(arg1 + 0x68)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    *(arg1 + 0x70) = 0
    return 

*(arg1 + 0x70) = 0
