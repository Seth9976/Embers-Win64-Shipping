// 函数: sub_140a433d0
// 地址: 0x140a433d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
label_140a4343f:
    
    if (*(arg1 + 0x20) != 0)
        int64_t* rcx_4 = *(arg1 + 0x18)
        (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
        *(arg1 + 0x20) = 0
    
    return 

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    bool z_1
    
    if (0 == *(arg1 + 0x10))
        *(arg1 + 0x10) = 0
        z_1 = true
    else
        *(arg1 + 0x10)
        z_1 = false
    
    if (not(z_1))
        int64_t* rcx_3 = *(arg1 + 8)
        (*(*rcx_3 + 0x18))(rcx_3)
        *(arg1 + 0x10) -= 1
    
    goto label_140a4343f

if ((*(*rcx + 0x18))(rcx, arg1) == 0)
    goto label_140a4343f

int64_t* rcx_1 = *(arg1 + 8)
(*(*rcx_1 + 0x18))(rcx_1)
*(arg1 + 0x10) -= 1
int64_t* rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    *(arg1 + 0x20) = 0
    return 

*(arg1 + 0x20) = 0
