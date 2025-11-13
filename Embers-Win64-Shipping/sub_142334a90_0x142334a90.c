// 函数: sub_142334a90
// 地址: 0x142334a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = *arg1 + 0x28
    int32_t i
    
    do
        sub_1423077e0(&rbx_1[6])
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = rbx_1[-2]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[0x1d]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_14085a9b0(arg1, arg2)
