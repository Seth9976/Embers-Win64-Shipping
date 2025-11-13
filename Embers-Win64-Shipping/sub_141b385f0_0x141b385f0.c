// 函数: sub_141b385f0
// 地址: 0x141b385f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    char* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x24
    int32_t i
    
    do
        *(rbx_1 - 0x1c) = *(rdi_1 + rbx_1 - 0x1c)
        *(rbx_1 - 0x14) = *(rdi_1 + rbx_1 - 0x14)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        sub_1405af700(rbx_1 + 0x14, &rdi_1[0x14] + rbx_1)
        *(rbx_1 + 0xb4) = *(rdi_1 + rbx_1 + 0xb4)
        *(rbx_1 + 0xb5) = *(rdi_1 + rbx_1 + 0xb5)
        *(rbx_1 + 0xb8) ^= (*(rbx_1 + 0xb8) ^ *(rdi_1 + rbx_1 + 0xb8)) & 1
        int32_t rax_10 = *(rbx_1 + 0xb8)
        int32_t rcx_4 = ((rax_10 ^ *(rdi_1 + rbx_1 + 0xb8)) & 2) ^ rax_10
        *(rbx_1 + 0xb8) = rcx_4
        *(rbx_1 + 0xb8) = ((rcx_4 ^ *(rdi_1 + rbx_1 + 0xb8)) & 4) ^ rcx_4
        rbx_1 += 0xe0
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
