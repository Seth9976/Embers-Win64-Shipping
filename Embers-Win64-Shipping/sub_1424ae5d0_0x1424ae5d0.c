// 函数: sub_1424ae5d0
// 地址: 0x1424ae5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x14
    int32_t i
    
    do
        sub_140597df0(rbx_1 - 0x14, rdi_1 - 0x14 + rbx_1)
        *(rbx_1 - 4) = *(rbx_1 + rdi_1 - 4)
        *rbx_1 ^= (*rbx_1 ^ *(rbx_1 + rdi_1)) & 1
        int32_t rcx_4 = ((*rbx_1 ^ *(rbx_1 + rdi_1)) & 2) ^ *rbx_1
        *rbx_1 = rcx_4
        int32_t rax_7 = ((rcx_4 ^ *(rbx_1 + rdi_1)) & 4) ^ rcx_4
        *rbx_1 = rax_7
        int32_t rcx_8 = ((rax_7 ^ *(rbx_1 + rdi_1)) & 8) ^ rax_7
        *rbx_1 = rcx_8
        *rbx_1 = ((rcx_8 ^ *(rbx_1 + rdi_1)) & 0x10) ^ rcx_8
        *(rbx_1 + 4) = *(rbx_1 + rdi_1 + 4)
        sub_140597df0(rbx_1 + 0xc, rdi_1 + 0xc + rbx_1)
        sub_140597df0(rbx_1 + 0x1c, rdi_1 + 0x1c + rbx_1)
        sub_140597df0(rbx_1 + 0x2c, rdi_1 + 0x2c + rbx_1)
        sub_140597df0(rbx_1 + 0x3c, rdi_1 + 0x3c + rbx_1)
        *(rbx_1 + 0x4c) ^= (*(rbx_1 + 0x4c) ^ *(rbx_1 + rdi_1 + 0x4c)) & 1
        *(rbx_1 + 0x4c) ^= (*(rbx_1 + 0x4c) ^ *(rbx_1 + rdi_1 + 0x4c)) & 2
        *(rbx_1 + 0x50) = *(rbx_1 + rdi_1 + 0x50)
        *(rbx_1 + 0x60) ^= (*(rbx_1 + rdi_1 + 0x60) ^ *(rbx_1 + 0x60)) & 1
        *(rbx_1 + 0x64) = *(rbx_1 + rdi_1 + 0x64)
        *(rbx_1 + 0x68) = *(rbx_1 + rdi_1 + 0x68)
        *(rbx_1 + 0x6c) = *(rbx_1 + rdi_1 + 0x6c)
        *(rbx_1 + 0x70) = *(rbx_1 + rdi_1 + 0x70)
        *(rbx_1 + 0x74) = *(rbx_1 + rdi_1 + 0x74)
        *(rbx_1 + 0x78) = *(rbx_1 + rdi_1 + 0x78)
        *(rbx_1 + 0x7c) = *(rbx_1 + rdi_1 + 0x7c)
        *(rbx_1 + 0x80) = *(rbx_1 + rdi_1 + 0x80)
        *(rbx_1 + 0x84) ^= (*(rbx_1 + rdi_1 + 0x84) ^ *(rbx_1 + 0x84)) & 1
        *(rbx_1 + 0x88) = *(rbx_1 + rdi_1 + 0x88)
        *(rbx_1 + 0x8c) ^= (*(rbx_1 + rdi_1 + 0x8c) ^ *(rbx_1 + 0x8c)) & 1
        *(rbx_1 + 0x90) = *(rbx_1 + rdi_1 + 0x90)
        *(rbx_1 + 0x94) = *(rbx_1 + rdi_1 + 0x94)
        rbx_1 += 0xb0
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
