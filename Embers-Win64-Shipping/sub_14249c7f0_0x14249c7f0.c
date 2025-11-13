// 函数: sub_14249c7f0
// 地址: 0x14249c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x14
    int32_t i
    
    do
        *(rbx_1 - 0x14) = *(rdi_1 + rbx_1 - 0x14)
        *(rbx_1 - 0xc) = *(rdi_1 + rbx_1 - 0xc)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        sub_140597df0(rbx_1 + 0xc, rdi_1 + 0xc + rbx_1)
        *(rbx_1 + 0x1c) = *(rdi_1 + rbx_1 + 0x1c)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        *(rbx_1 + 0x24) = *(rdi_1 + rbx_1 + 0x24)
        *(rbx_1 + 0x28) ^= (*(rdi_1 + rbx_1 + 0x28) ^ *(rbx_1 + 0x28)) & 1
        int32_t rcx_4 = ((*(rbx_1 + 0x28) ^ *(rdi_1 + rbx_1 + 0x28)) & 2) ^ *(rbx_1 + 0x28)
        *(rbx_1 + 0x28) = rcx_4
        *(rbx_1 + 0x28) = ((rcx_4 ^ *(rdi_1 + rbx_1 + 0x28)) & 4) ^ rcx_4
        *(rbx_1 + 0x2c) = *(rdi_1 + rbx_1 + 0x2c)
        *(rbx_1 + 0x34) = *(rdi_1 + rbx_1 + 0x34)
        *(rbx_1 + 0x3c) = *(rdi_1 + rbx_1 + 0x3c)
        *(rbx_1 + 0x44) = *(rdi_1 + rbx_1 + 0x44)
        rbx_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
