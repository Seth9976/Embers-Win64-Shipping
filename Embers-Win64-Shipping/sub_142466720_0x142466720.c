// 函数: sub_142466720
// 地址: 0x142466720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    int64_t* rbx_1 = arg2 + 8
    int32_t i
    
    do
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1[1] = *(rdi_1 + rbx_1 + 8)
        rbx_1[2] = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0x18)
        sub_140780b40(&rbx_1[5], &rdi_1[5] + rbx_1)
        rbx_1[7] = *(rdi_1 + rbx_1 + 0x38)
        sub_142465690(&rbx_1[8], &rdi_1[8] + rbx_1)
        rbx_1[0xc].d = *(rdi_1 + rbx_1 + 0x60)
        rbx_1[0xd] = *(rdi_1 + rbx_1 + 0x68)
        rbx_1 = &rbx_1[0xf]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
