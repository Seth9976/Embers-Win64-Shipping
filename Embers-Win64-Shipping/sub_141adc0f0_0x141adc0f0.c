// 函数: sub_141adc0f0
// 地址: 0x141adc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0xd8
    int32_t i
    
    do
        sub_141adb020(rbx_1 - 0xd8, rdi_1 - 0xd8 + rbx_1)
        *(rbx_1 - 0x10) = *(rbx_1 + rdi_1 - 0x10)
        *rbx_1 = *(rbx_1 + rdi_1)
        *(rbx_1 + 8) = *(rbx_1 + rdi_1 + 8)
        *(rbx_1 + 0xc) = *(rbx_1 + rdi_1 + 0xc)
        *(rbx_1 + 0x10) = *(rbx_1 + rdi_1 + 0x10)
        *(rbx_1 + 0x14) = *(rbx_1 + rdi_1 + 0x14)
        *(rbx_1 + 0x18) = *(rbx_1 + rdi_1 + 0x18)
        *(rbx_1 + 0x1c) = *(rbx_1 + rdi_1 + 0x1c)
        *(rbx_1 + 0x24) = *(rbx_1 + rdi_1 + 0x24)
        *(rbx_1 + 0x34) = *(rbx_1 + rdi_1 + 0x34)
        *(rbx_1 + 0x35) = *(rbx_1 + rdi_1 + 0x35)
        *(rbx_1 + 0x36) = *(rbx_1 + rdi_1 + 0x36)
        *(rbx_1 + 0x37) ^= (*(rbx_1 + rdi_1 + 0x37) ^ *(rbx_1 + 0x37)) & 1
        char rcx_1 = ((*(rbx_1 + rdi_1 + 0x37) ^ *(rbx_1 + 0x37)) & 2) ^ *(rbx_1 + 0x37)
        *(rbx_1 + 0x37) = rcx_1
        char rax_12 = ((rcx_1 ^ *(rbx_1 + rdi_1 + 0x37)) & 4) ^ rcx_1
        *(rbx_1 + 0x37) = rax_12
        char rcx_2 = ((rax_12 ^ *(rbx_1 + rdi_1 + 0x37)) & 8) ^ rax_12
        *(rbx_1 + 0x37) = rcx_2
        char rax_13 = ((rcx_2 ^ *(rbx_1 + rdi_1 + 0x37)) & 0x10) ^ rcx_2
        *(rbx_1 + 0x37) = rax_13
        char rcx_3 = ((rax_13 ^ *(rbx_1 + rdi_1 + 0x37)) & 0x20) ^ rax_13
        *(rbx_1 + 0x37) = rcx_3
        char rax_14 = ((rcx_3 ^ *(rbx_1 + rdi_1 + 0x37)) & 0x40) ^ rcx_3
        *(rbx_1 + 0x37) = rax_14
        *(rbx_1 + 0x37) = ((rax_14 ^ *(rbx_1 + rdi_1 + 0x37)) & 0x7f) ^ *(rbx_1 + rdi_1 + 0x37)
        *(rbx_1 + 0x38) ^= (*(rbx_1 + 0x38) ^ *(rbx_1 + rdi_1 + 0x38)) & 1
        char rax = *(rbx_1 + 0x38)
        *(rbx_1 + 0x38) = ((rax ^ *(rbx_1 + rdi_1 + 0x38)) & 2) ^ rax
        rbx_1 += 0x118
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
