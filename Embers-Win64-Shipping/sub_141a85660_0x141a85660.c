// 函数: sub_141a85660
// 地址: 0x141a85660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int128_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x50
    int32_t i
    
    do
        *(rbx_1 - 0x50) = *(rdi_1 + rbx_1 - 0x50)
        *(rbx_1 - 0x40) = *(rdi_1 + rbx_1 - 0x40)
        *(rbx_1 - 0x30) = *(rdi_1 + rbx_1 - 0x30)
        *(rbx_1 - 0x20) = *(rdi_1 + rbx_1 - 0x20)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        sub_14090a0d0(rbx_1 + 0x18, rdi_1 + 0x18 + rbx_1)
        *(rbx_1 + 0x28) = *(rdi_1 + rbx_1 + 0x28)
        rbx_1 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
