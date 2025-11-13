// 函数: sub_14087b9e0
// 地址: 0x14087b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x24
    int32_t i
    
    do
        *(rbx_1 - 0x24) = *(rdi_1 + rbx_1 - 0x24)
        *(rbx_1 - 0x14) = *(rdi_1 + rbx_1 - 0x14)
        int32_t rax_1 = *rbx_1
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *rbx_1 ^= (rax_1 ^ *(rdi_1 + rbx_1)) & 1
        int32_t rcx_3 = ((*rbx_1 ^ *(rdi_1 + rbx_1)) & 2) ^ *rbx_1
        *rbx_1 = rcx_3
        *rbx_1 = ((rcx_3 ^ *(rdi_1 + rbx_1)) & 4) ^ rcx_3
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        sub_14081d8c0(rbx_1 + 0x14, rdi_1 + 0x14 + rbx_1)
        rbx_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
