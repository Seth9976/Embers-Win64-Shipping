// 函数: sub_141ff61d0
// 地址: 0x141ff61d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x78
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1[-0xe] = &data_142d6a040
        int64_t rcx_2 = rbx_1[-3]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_1405ae180(&rbx_1[-0xd])
        rbx_1 = &rbx_1[0x12]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
