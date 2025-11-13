// 函数: sub_1427264e0
// 地址: 0x1427264e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int32_t* r10_1 = arg2 + 4
    int32_t* r8 = arg3 - arg2
    int32_t i
    
    do
        r10_1[-1] = *(r8 + r10_1 - 4)
        *r10_1 = *(r8 + r10_1)
        r10_1[1] = *(r8 + r10_1 + 4)
        *(r10_1 + 8) = *(r8 + r10_1 + 8)
        r10_1[4] = *(r8 + r10_1 + 0x10)
        *(r10_1 + 0x14) = *(r8 + r10_1 + 0x14)
        r10_1[7] = *(r8 + r10_1 + 0x1c)
        *(r10_1 + 0x20) = *(r8 + r10_1 + 0x20)
        r10_1[0xa].b = *(r8 + r10_1 + 0x28)
        *(r10_1 + 0x2c) = *(r8 + r10_1 + 0x2c)
        int32_t rax_9 = r10_1[0xd] ^ *(r8 + r10_1 + 0x34)
        r10_1 = &r10_1[0xf]
        r10_1[-2] ^= rax_9 & 1
        int32_t rcx_3 = ((r10_1[-2] ^ *(r8 + r10_1 - 8)) & 2) ^ r10_1[-2]
        r10_1[-2] = rcx_3
        r10_1[-2] = ((rcx_3 ^ *(r8 + r10_1 - 8)) & 4) ^ rcx_3
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
