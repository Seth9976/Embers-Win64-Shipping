// 函数: sub_142546ae0
// 地址: 0x142546ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rsi_1 = arg3 - arg2
    void* rdi_1 = arg2 + 0xa6
    int32_t i
    
    do
        *(rdi_1 - 0xa6) = *(rdi_1 + rsi_1 - 0xa6)
        *(rdi_1 - 0xa2) = *(rdi_1 + rsi_1 - 0xa2)
        sub_142528410(rdi_1 - 0x9e, rsi_1 - 0x9e + rdi_1)
        *(rdi_1 - 0x16) = *(rdi_1 + rsi_1 - 0x16)
        *(rdi_1 - 0x12) = *(rdi_1 + rsi_1 - 0x12)
        *(rdi_1 - 0xe) = *(rdi_1 + rsi_1 - 0xe)
        *(rdi_1 - 0xa) = *(rdi_1 + rsi_1 - 0xa)
        *(rdi_1 - 6) = *(rdi_1 + rsi_1 - 6)
        *(rdi_1 - 2) = *(rdi_1 + rsi_1 - 2)
        *(rdi_1 - 1) = *(rdi_1 + rsi_1 - 1)
        *rdi_1 ^= (*rdi_1 ^ *(rdi_1 + rsi_1)) & 1
        char rcx_1 = ((*rdi_1 ^ *(rdi_1 + rsi_1)) & 2) ^ *rdi_1
        *rdi_1 = rcx_1
        char rax_11 = ((rcx_1 ^ *(rdi_1 + rsi_1)) & 4) ^ rcx_1
        *rdi_1 = rax_11
        char rcx_2 = ((rax_11 ^ *(rdi_1 + rsi_1)) & 8) ^ rax_11
        *rdi_1 = rcx_2
        char rax_12 = ((rcx_2 ^ *(rdi_1 + rsi_1)) & 0x10) ^ rcx_2
        *rdi_1 = rax_12
        char rcx_3 = ((rax_12 ^ *(rdi_1 + rsi_1)) & 0x20) ^ rax_12
        *rdi_1 = rcx_3
        char rax_13 = ((rcx_3 ^ *(rdi_1 + rsi_1)) & 0x40) ^ rcx_3
        *rdi_1 = rax_13
        *rdi_1 = ((rax_13 ^ *(rdi_1 + rsi_1)) & 0x7f) ^ *(rdi_1 + rsi_1)
        *(rdi_1 + 1) ^= (*(rdi_1 + rsi_1 + 1) ^ *(rdi_1 + 1)) & 1
        char rcx_4 = ((*(rdi_1 + rsi_1 + 1) ^ *(rdi_1 + 1)) & 2) ^ *(rdi_1 + 1)
        *(rdi_1 + 1) = rcx_4
        char rax_15 = ((*(rdi_1 + rsi_1 + 1) ^ rcx_4) & 4) ^ rcx_4
        *(rdi_1 + 1) = rax_15
        char rcx_5 = ((*(rdi_1 + rsi_1 + 1) ^ rax_15) & 8) ^ rax_15
        *(rdi_1 + 1) = rcx_5
        *(rdi_1 + 1) = ((*(rdi_1 + rsi_1 + 1) ^ rcx_5) & 0x10) ^ rcx_5
        rdi_1 += 0xa8
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
