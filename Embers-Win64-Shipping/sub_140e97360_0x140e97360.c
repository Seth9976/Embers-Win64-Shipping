// 函数: sub_140e97360
// 地址: 0x140e97360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            int32_t temp0_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            int32_t temp2_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
