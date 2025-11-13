// 函数: sub_1408ce330
// 地址: 0x1408ce330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = *arg1 + 0x20
    int32_t i
    
    do
        sub_140745b20(&rbx_1[2])
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a52a0(arg1, arg2)
