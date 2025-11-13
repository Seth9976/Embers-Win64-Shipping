// 函数: sub_1425d5af0
// 地址: 0x1425d5af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0xc
    int32_t i
    
    do
        *(rbx_1 - 0xc) = *(rdi_1 + rbx_1 - 0xc)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        sub_140627690(rbx_1 + 0xc, &rdi_1[3] + rbx_1)
        *(rbx_1 + 0x1c) = *(rdi_1 + rbx_1 + 0x1c)
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
