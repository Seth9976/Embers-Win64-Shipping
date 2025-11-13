// 函数: sub_14094ea30
// 地址: 0x14094ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

while (*(arg2 + 0x38) != 0)
    int64_t* rcx = *(arg2 + 0x38)
    *(arg2 + 0x38) = *rcx
    j_sub_140a74f90(rcx)

int32_t i_1 = *(arg2 + 0x28)
int64_t* rbx_1 = *(arg2 + 0x20)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[6]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = *(arg2 + 0x20)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

j_sub_140a74f90(arg2)
