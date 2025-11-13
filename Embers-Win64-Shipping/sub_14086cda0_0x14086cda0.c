// 函数: sub_14086cda0
// 地址: 0x14086cda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rsi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x30
    int32_t i
    
    do
        *(rbx_1 - 0x30) = *(rsi_1 + rbx_1 - 0x30)
        sub_1407e5020(rbx_1 - 0x28, rsi_1 - 0x28 + rbx_1)
        sub_1407e5020(rbx_1 - 0x18, rsi_1 - 0x18 + rbx_1)
        *(rbx_1 - 8) = *(rsi_1 + rbx_1 - 8)
        *rbx_1 ^= (*rbx_1 ^ *(rsi_1 + rbx_1)) & 1
        int32_t rcx_5 = ((*rbx_1 ^ *(rsi_1 + rbx_1)) & 2) ^ *rbx_1
        *rbx_1 = rcx_5
        int32_t rax_8 = ((rcx_5 ^ *(rsi_1 + rbx_1)) & 4) ^ rcx_5
        *rbx_1 = rax_8
        int32_t rcx_9 = ((rax_8 ^ *(rsi_1 + rbx_1)) & 8) ^ rax_8
        *rbx_1 = rcx_9
        int32_t rdx_7 = ((rcx_9 ^ *(rsi_1 + rbx_1)) & 0x10) ^ rcx_9
        *rbx_1 = rdx_7
        *rbx_1 = ((rdx_7 ^ *(rsi_1 + rbx_1)) & 0x20) ^ rdx_7
        sub_1405af100(rbx_1 + 8, rsi_1 + 8 + rbx_1)
        rbx_1 += 0x88
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
