// 函数: sub_14222ac70
// 地址: 0x14222ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        *rbx = &data_143306af0
        int64_t rcx = rbx[8]
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = rbx[6]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *rbx = &data_142e3e610
        rbx = &rbx[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
