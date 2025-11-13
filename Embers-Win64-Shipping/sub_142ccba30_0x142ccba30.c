// 函数: sub_142ccba30
// 地址: 0x142ccba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143e2a250
int32_t i_1 = data_143e2a258

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            int32_t temp1_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_143e2a250

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
