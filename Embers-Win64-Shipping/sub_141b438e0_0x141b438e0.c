// 函数: sub_141b438e0
// 地址: 0x141b438e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0xfc
    int32_t i
    
    do
        *(rbx_1 - 0xf4) = *(rdi_1 + rbx_1 - 0xf4)
        *(rbx_1 - 0xec) = *(rdi_1 + rbx_1 - 0xec)
        *(rbx_1 - 0xe8) = *(rdi_1 + rbx_1 - 0xe8)
        sub_141b42a70(rbx_1 - 0xdc, &rdi_1[-0x37] + rbx_1)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1 += 0x100
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
