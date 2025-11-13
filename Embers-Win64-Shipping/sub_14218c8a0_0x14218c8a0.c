// 函数: sub_14218c8a0
// 地址: 0x14218c8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = *arg1 + 8
    int32_t i
    
    do
        int64_t* rcx = *rbx_1
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
            *rbx_1 = 0
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a5410(arg1, arg2)
