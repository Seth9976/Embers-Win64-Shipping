// 函数: sub_141d8e7a0
// 地址: 0x141d8e7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        *rbx = &data_143238800
        int64_t rcx = rbx[5]
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = rbx[3]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = rbx[1]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *rbx = &data_142e1f570
        rbx = &rbx[8]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
