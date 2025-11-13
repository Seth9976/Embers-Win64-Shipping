// 函数: sub_142459a50
// 地址: 0x142459a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    int64_t* rbx_1 = arg2 + 0xa0
    int32_t i
    
    do
        sub_1405cd980(&rbx_1[-0x14], &rdi_1[-0x14] + rbx_1)
        sub_1405cd980(&rbx_1[-0xa], &rdi_1[-0xa] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1[1].d = *(rdi_1 + rbx_1 + 8)
        rbx_1 = &rbx_1[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
