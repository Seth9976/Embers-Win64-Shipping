// 函数: sub_141b848a0
// 地址: 0x141b848a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[3]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

int32_t i_1 = arg1[1].d
void* rcx_1 = *arg1

if (i_1 != 0)
    int64_t* rbx_1 = rcx_1 + 8
    int32_t i
    
    do
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            int32_t temp2_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = *arg1

if (rcx_1 == 0)
    return 

return sub_140a74f90(rcx_1) __tailcall
