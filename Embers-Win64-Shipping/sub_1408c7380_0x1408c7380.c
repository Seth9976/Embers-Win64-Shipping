// 函数: sub_1408c7380
// 地址: 0x1408c7380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    char* rdi_1 = arg3 - arg2
    char* rbx_1 = arg2 + 0x410
    int32_t i
    
    do
        sub_1408c6ed0(&rbx_1[-0x410], &rdi_1[-0x410] + rbx_1)
        sub_1408c6ed0(&rbx_1[-0x208], &rdi_1[-0x208] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1[1] = *(rdi_1 + rbx_1 + 1)
        rbx_1[2] = *(rdi_1 + rbx_1 + 2)
        rbx_1[3] = *(rdi_1 + rbx_1 + 3)
        rbx_1[4] = *(rdi_1 + rbx_1 + 4)
        rbx_1[5] = *(rdi_1 + rbx_1 + 5)
        rbx_1 = &rbx_1[0x418]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
