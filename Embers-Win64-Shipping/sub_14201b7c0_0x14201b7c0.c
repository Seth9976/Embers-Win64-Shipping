// 函数: sub_14201b7c0
// 地址: 0x14201b7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0
sub_142152790(arg1)
sub_140745b20(arg1 + 0x68)
int32_t i_2 = *(arg1 + 0x30)
int64_t* rbx = *(arg1 + 0x28)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x28)

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = *(arg1 + 0x20)
int64_t* rbx_1 = *(arg1 + 0x18)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = *(arg1 + 0x18)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t* rcx_5 = *(arg1 + 8)

if (rcx_5 != 0)
    int32_t temp2_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
