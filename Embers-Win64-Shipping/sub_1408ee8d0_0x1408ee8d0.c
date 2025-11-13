// 函数: sub_1408ee8d0
// 地址: 0x1408ee8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x64
    int32_t i
    
    do
        *(rbx_1 - 0x5c) = *(rdi_1 + rbx_1 - 0x5c)
        *(rbx_1 - 0x54) = *(rdi_1 + rbx_1 - 0x54)
        *(rbx_1 - 0x50) = *(rdi_1 + rbx_1 - 0x50)
        sub_1408ee6a0(rbx_1 - 0x44, &rdi_1[-0x11] + rbx_1)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1 += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
