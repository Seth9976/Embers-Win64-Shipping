// 函数: sub_141ae7380
// 地址: 0x141ae7380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* r10_1 = arg2 + 0x31
    void* r8 = arg3 - arg2
    int32_t i
    
    do
        *(r10_1 - 0x29) = *(r8 + r10_1 - 0x29)
        uint128_t zmm0 = *(r8 + r10_1 - 0x21)
        r10_1 += 0xc8
        *(r10_1 - 0xe9) = zmm0
        *(r10_1 - 0xd9) = *(r8 + r10_1 - 0xd9)
        *(r10_1 - 0xc9) = *(r8 + r10_1 - 0xc9)
        *(r10_1 - 0xc8) ^= (*(r8 + r10_1 - 0xc8) ^ *(r10_1 - 0xc8)) & 1
        char rcx = ((*(r10_1 - 0xc8) ^ *(r8 + r10_1 - 0xc8)) & 2) ^ *(r10_1 - 0xc8)
        *(r10_1 - 0xc8) = rcx
        char rdx = ((*(r8 + r10_1 - 0xc8) ^ rcx) & 4) ^ rcx
        *(r10_1 - 0xc8) = rdx
        *(r10_1 - 0xc8) = ((*(r8 + r10_1 - 0xc8) ^ rdx) & 8) ^ rdx
        *(r10_1 - 0xc5) = *(r8 + r10_1 - 0xc5)
        *(r10_1 - 0xc1) = *(r8 + r10_1 - 0xc1)
        *(r10_1 - 0xb9) = *(r8 + r10_1 - 0xb9)
        *(r10_1 - 0xa9) = *(r8 + r10_1 - 0xa9)
        *(r10_1 - 0x99) = *(r8 + r10_1 - 0x99)
        *(r10_1 - 0x89) = *(r8 + r10_1 - 0x89)
        *(r10_1 - 0x79) = *(r8 + r10_1 - 0x79)
        *(r10_1 - 0x71) = *(r8 + r10_1 - 0x71)
        *(r10_1 - 0x69) = *(r8 + r10_1 - 0x69)
        *(r10_1 - 0x59) = *(r8 + r10_1 - 0x59)
        *(r10_1 - 0x49) = *(r8 + r10_1 - 0x49)
        *(r10_1 - 0x39) = *(r8 + r10_1 - 0x39)
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
