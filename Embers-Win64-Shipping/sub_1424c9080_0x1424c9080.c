// 函数: sub_1424c9080
// 地址: 0x1424c9080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        *(rbx_1 - 0x20) = *(rdi_1 + rbx_1 - 0x20)
        sub_140627710(rbx_1 - 0x18, &rdi_1[-6] + rbx_1)
        *rbx_1 ^= (*(rdi_1 + rbx_1) ^ *rbx_1) & 1
        int32_t rcx_4 = ((*(rdi_1 + rbx_1) ^ *rbx_1) & 2) ^ *rbx_1
        *rbx_1 = rcx_4
        int32_t rdx_5 = ((*(rdi_1 + rbx_1) ^ rcx_4) & 4) ^ rcx_4
        *rbx_1 = rdx_5
        *rbx_1 = ((*(rdi_1 + rbx_1) ^ rdx_5) & 8) ^ rdx_5
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        *(rbx_1 + 0xc) = *(rdi_1 + rbx_1 + 0xc)
        rbx_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
