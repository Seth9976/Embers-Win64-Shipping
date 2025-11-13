// 函数: sub_142576d80
// 地址: 0x142576d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    int64_t* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        sub_140780b40(&rbx_1[-4], &rdi_1[-4] + rbx_1)
        sub_140780c40(&rbx_1[-2], &rdi_1[-2] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1[1] = *(rdi_1 + rbx_1 + 8)
        rbx_1[2].b = *(rdi_1 + rbx_1 + 0x10)
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
