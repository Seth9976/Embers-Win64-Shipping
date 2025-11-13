// 函数: sub_140647590
// 地址: 0x140647590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rsi_1 = arg3 - arg2
    int32_t* rbx_1 = arg2 + 0x38
    int32_t i
    
    do
        sub_140597df0(&rbx_1[-0xe], rsi_1 - 0x38 + rbx_1)
        sub_140627710(&rbx_1[-0xa], rsi_1 - 0x28 + rbx_1)
        sub_140597df0(&rbx_1[-4], rsi_1 - 0x10 + rbx_1)
        *rbx_1 ^= (*rbx_1 ^ *(rsi_1 + rbx_1)) & 1
        int32_t rcx_6 = ((*rbx_1 ^ *(rsi_1 + rbx_1)) & 2) ^ *rbx_1
        *rbx_1 = rcx_6
        int32_t rdx_9 = ((rcx_6 ^ *(rsi_1 + rbx_1)) & 4) ^ rcx_6
        *rbx_1 = rdx_9
        *rbx_1 = ((rdx_9 ^ *(rsi_1 + rbx_1)) & 8) ^ rdx_9
        rbx_1 = &rbx_1[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
