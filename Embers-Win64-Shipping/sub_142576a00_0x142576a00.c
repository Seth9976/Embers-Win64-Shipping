// 函数: sub_142576a00
// 地址: 0x142576a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    char* rbx_1 = arg2 + 0x28
    int32_t i
    
    do
        sub_140627710(&rbx_1[-0x28], rdi_1 - 0x28 + rbx_1)
        sub_140597df0(&rbx_1[-0x10], rdi_1 - 0x10 + rbx_1)
        *rbx_1 ^= (*rbx_1 ^ *(rdi_1 + rbx_1)) & 1
        char rcx_2 = ((*rbx_1 ^ *(rdi_1 + rbx_1)) & 2) ^ *rbx_1
        *rbx_1 = rcx_2
        char rax_2 = ((rcx_2 ^ *(rdi_1 + rbx_1)) & 4) ^ rcx_2
        *rbx_1 = rax_2
        char rcx_3 = ((rax_2 ^ *(rdi_1 + rbx_1)) & 8) ^ rax_2
        *rbx_1 = rcx_3
        char rax_3 = ((rcx_3 ^ *(rdi_1 + rbx_1)) & 0x10) ^ rcx_3
        *rbx_1 = rax_3
        char rcx_4 = ((rax_3 ^ *(rdi_1 + rbx_1)) & 0x20) ^ rax_3
        *rbx_1 = rcx_4
        char rax_4 = ((rcx_4 ^ *(rdi_1 + rbx_1)) & 0x40) ^ rcx_4
        *rbx_1 = rax_4
        *rbx_1 = ((rax_4 ^ *(rdi_1 + rbx_1)) & 0x7f) ^ *(rdi_1 + rbx_1)
        rbx_1[1] ^= (*(rdi_1 + rbx_1 + 1) ^ rbx_1[1]) & 1
        rbx_1 = &rbx_1[0x30]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
