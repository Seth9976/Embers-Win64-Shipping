// 函数: sub_141c284a0
// 地址: 0x141c284a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 0x10) = *(rbx_1 + rdi_1 - 0x10)
        *(rbx_1 - 0xc) = *(rdi_1 + rbx_1 - 0xc)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        sub_140597df0(rbx_1 + 0x10, &rdi_1[4] + rbx_1)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        *(rbx_1 + 0x28) = *(rdi_1 + rbx_1 + 0x28)
        *(rbx_1 + 0x2c) ^= (*(rdi_1 + rbx_1 + 0x2c) ^ *(rbx_1 + 0x2c)) & 1
        *(rbx_1 + 0x30) ^= (*(rdi_1 + rbx_1 + 0x30) ^ *(rbx_1 + 0x30)) & 1
        *(rbx_1 + 0x34) = *(rdi_1 + rbx_1 + 0x34)
        *(rbx_1 + 0x38) ^= (*(rbx_1 + rdi_1 + 0x38) ^ *(rbx_1 + 0x38)) & 1
        *(rbx_1 + 0x3c) = *(rbx_1 + rdi_1 + 0x3c)
        *(rbx_1 + 0x40) = *(rbx_1 + rdi_1 + 0x40)
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
