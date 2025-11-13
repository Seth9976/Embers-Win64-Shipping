// 函数: sub_14238b8b0
// 地址: 0x14238b8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
label_14238b92f:
    
    if (*(arg1 + 0x138) != 0)
        int64_t* rcx_4 = *(arg1 + 0x130)
        (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
        *(arg1 + 0x138) = 0
    
    return 

int64_t* rcx = *(arg1 + 0x138)

if (rcx == 0)
    bool z_1
    
    if (0 == *(arg1 + 0x128))
        *(arg1 + 0x128) = 0
        z_1 = true
    else
        *(arg1 + 0x128)
        z_1 = false
    
    if (not(z_1))
        sub_142389df0(arg1 + 8)
        *(arg1 + 0x128) -= 1
    
    goto label_14238b92f

if ((*(*rcx + 0x18))(rcx, arg1) == 0)
    goto label_14238b92f

sub_142389df0(arg1 + 8)
*(arg1 + 0x128) -= 1
int64_t* rcx_2 = *(arg1 + 0x130)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    *(arg1 + 0x138) = 0
    return 

*(arg1 + 0x138) = 0
