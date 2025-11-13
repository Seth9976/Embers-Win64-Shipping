// 函数: sub_1424d2d00
// 地址: 0x1424d2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg2 + 0x58)

if (i_1 != *(arg3 + 0x58))
label_1424d2d41:
    *arg4 = 0
    char* rax_3
    rax_3.b = 1
    return rax_3

int32_t* rax_1 = *(arg3 + 0x50)

if (i_1 != 0)
    int32_t* rdx_1 = *(arg2 + 0x50) - rax_1
    int32_t i
    
    do
        if (*(rdx_1 + rax_1) != *rax_1)
            goto label_1424d2d41
        
        rax_1 = &rax_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg4 = 1
char* rax_2
rax_2.b = 1
return rax_2
