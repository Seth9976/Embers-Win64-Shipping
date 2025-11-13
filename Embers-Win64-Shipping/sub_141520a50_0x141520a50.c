// 函数: sub_141520a50
// 地址: 0x141520a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    int32_t* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        sub_140597df0(&rbx_1[-8], &rdi_1[-8] + rbx_1)
        sub_140597df0(&rbx_1[-4], &rdi_1[-4] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1 = &rbx_1[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
