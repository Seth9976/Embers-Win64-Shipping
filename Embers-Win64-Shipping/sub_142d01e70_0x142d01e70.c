// 函数: sub_142d01e70
// 地址: 0x142d01e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f478e8
int32_t i_1 = data_143f478f0

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_143f478e8

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
