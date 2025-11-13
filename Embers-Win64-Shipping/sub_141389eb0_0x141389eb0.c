// 函数: sub_141389eb0
// 地址: 0x141389eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x68)
int64_t* rbx = *(arg1 + 0x60)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x60)

if (rbx != 0)
    sub_140a74f90(rbx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
