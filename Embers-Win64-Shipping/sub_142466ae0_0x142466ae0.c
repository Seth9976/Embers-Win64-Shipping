// 函数: sub_142466ae0
// 地址: 0x142466ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    int64_t* rbx_1 = arg2 + 8
    int32_t i
    
    do
        *rbx_1 = *(rdi_1 + rbx_1)
        sub_140780b40(&rbx_1[1], &rdi_1[1] + rbx_1)
        rbx_1[3] = *(rdi_1 + rbx_1 + 0x18)
        sub_142465690(&rbx_1[4], &rdi_1[4] + rbx_1)
        rbx_1[8].d = *(rdi_1 + rbx_1 + 0x40)
        *(rbx_1 + 0x44) = *(rdi_1 + rbx_1 + 0x44)
        rbx_1[9].b = *(rdi_1 + rbx_1 + 0x48)
        *(rbx_1 + 0x49) = *(rdi_1 + rbx_1 + 0x49)
        rbx_1 = &rbx_1[0xb]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
