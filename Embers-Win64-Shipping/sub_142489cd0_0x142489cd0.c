// 函数: sub_142489cd0
// 地址: 0x142489cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        *(rbx_1 + 0xc) = *(rdi_1 + rbx_1 + 0xc)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0x18)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        *(rbx_1 + 0x28) = *(rdi_1 + rbx_1 + 0x28)
        *(rbx_1 + 0x30) = *(rdi_1 + rbx_1 + 0x30)
        *(rbx_1 + 0x31) = *(rdi_1 + rbx_1 + 0x31)
        sub_141ff71c0(rbx_1 + 0x38, &rdi_1[0xe] + rbx_1)
        *(rbx_1 + 0x70) = *(rdi_1 + rbx_1 + 0x70)
        *(rbx_1 + 0x78) = *(rdi_1 + rbx_1 + 0x78)
        *(rbx_1 + 0x7c) = *(rdi_1 + rbx_1 + 0x7c)
        *(rbx_1 + 0x84) = *(rdi_1 + rbx_1 + 0x84)
        rbx_1 += 0x98
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
