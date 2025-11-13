// 函数: sub_140874500
// 地址: 0x140874500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    int32_t* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        sub_140873a90(&rbx_1[-8], &rdi_1[-8] + rbx_1)
        *rbx_1 ^= (*rbx_1 ^ *(rdi_1 + rbx_1)) & 1
        int32_t rcx_4 = ((*(rdi_1 + rbx_1) ^ *rbx_1) & 2) ^ *rbx_1
        *rbx_1 = rcx_4
        *rbx_1 = ((*(rdi_1 + rbx_1) ^ rcx_4) & 4) ^ rcx_4
        rbx_1[1] = *(rdi_1 + rbx_1 + 4)
        rbx_1[2] = *(rdi_1 + rbx_1 + 8)
        rbx_1[3] = *(rdi_1 + rbx_1 + 0xc)
        rbx_1 = &rbx_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
