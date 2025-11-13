// 函数: sub_142152720
// 地址: 0x142152720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    return 

*(arg1 + 0x18) = 0
int64_t* rbx_1 = *(arg1 + 8)
int32_t i_1 = *(arg1 + 0x10)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx_1
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)
