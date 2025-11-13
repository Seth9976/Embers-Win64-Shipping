// 函数: sub_141ae7070
// 地址: 0x141ae7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0xd8
    int32_t i
    
    do
        sub_141adb020(rbx_1 - 0xd8, &rdi_1[-0x36] + rbx_1)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rbx_1 + rdi_1 + 4)
        *(rbx_1 + 8) = *(rbx_1 + rdi_1 + 8)
        *(rbx_1 + 0xc) = *(rbx_1 + rdi_1 + 0xc)
        *(rbx_1 + 0x10) = *(rbx_1 + rdi_1 + 0x10)
        *(rbx_1 + 0x18) = *(rbx_1 + rdi_1 + 0x18)
        *(rbx_1 + 0x1c) = *(rbx_1 + rdi_1 + 0x1c)
        *(rbx_1 + 0x24) = *(rbx_1 + rdi_1 + 0x24)
        *(rbx_1 + 0x28) = *(rbx_1 + rdi_1 + 0x28)
        *(rbx_1 + 0x30) = *(rbx_1 + rdi_1 + 0x30)
        *(rbx_1 + 0x34) = *(rbx_1 + rdi_1 + 0x34)
        *(rbx_1 + 0x3c) = *(rbx_1 + rdi_1 + 0x3c)
        *(rbx_1 + 0x40) = *(rbx_1 + rdi_1 + 0x40)
        *(rbx_1 + 0x44) = *(rbx_1 + rdi_1 + 0x44)
        *(rbx_1 + 0x48) = *(rbx_1 + rdi_1 + 0x48)
        *(rbx_1 + 0x4c) ^= (*(rbx_1 + 0x4c) ^ *(rbx_1 + rdi_1 + 0x4c)) & 1
        char rcx_1 = ((*(rbx_1 + 0x4c) ^ *(rbx_1 + rdi_1 + 0x4c)) & 2) ^ *(rbx_1 + 0x4c)
        *(rbx_1 + 0x4c) = rcx_1
        char rax_13 = ((rcx_1 ^ *(rbx_1 + rdi_1 + 0x4c)) & 4) ^ rcx_1
        *(rbx_1 + 0x4c) = rax_13
        char rcx_2 = ((rax_13 ^ *(rbx_1 + rdi_1 + 0x4c)) & 8) ^ rax_13
        *(rbx_1 + 0x4c) = rcx_2
        char rax_14 = ((rcx_2 ^ *(rbx_1 + rdi_1 + 0x4c)) & 0x10) ^ rcx_2
        *(rbx_1 + 0x4c) = rax_14
        char rcx_3 = ((rax_14 ^ *(rbx_1 + rdi_1 + 0x4c)) & 0x20) ^ rax_14
        *(rbx_1 + 0x4c) = rcx_3
        char rax = ((rcx_3 ^ *(rbx_1 + rdi_1 + 0x4c)) & 0x40) ^ rcx_3
        *(rbx_1 + 0x4c) = rax
        *(rbx_1 + 0x4c) = ((rax ^ *(rbx_1 + rdi_1 + 0x4c)) & 0x7f) ^ *(rbx_1 + rdi_1 + 0x4c)
        rbx_1 += 0x128
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
