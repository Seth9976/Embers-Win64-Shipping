// 函数: sub_141a903f0
// 地址: 0x141a903f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
            *rbx_1 = 0
        
        rbx_1 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
