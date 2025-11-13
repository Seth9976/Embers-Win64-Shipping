// 函数: sub_141b3ef90
// 地址: 0x141b3ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbx = arg2

if (arg4 != 0)
    int64_t* rsi_1 = arg3 - arg2
    int32_t i
    
    do
        *rbx = *(rsi_1 + rbx)
        sub_1405af700(&rbx[1], &rsi_1[1] + rbx)
        rbx = &rbx[0x15]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
