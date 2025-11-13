// 函数: sub_14255aeb0
// 地址: 0x14255aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int128_t* r10_1 = arg2 + 0x30
    int128_t* r8 = arg3 - arg2
    int32_t i
    
    do
        r10_1[-3].q = *(r8 + r10_1 - 0x30)
        r10_1[-2] = *(r8 + r10_1 - 0x20)
        r10_1[-1] = *(r8 + r10_1 - 0x10)
        *r10_1 = *(r8 + r10_1)
        r10_1[1].q = *(r8 + r10_1 + 0x10)
        *(r10_1 + 0x18) = *(r8 + r10_1 + 0x18)
        *(r10_1 + 0x1c) = *(r8 + r10_1 + 0x1c)
        *(r10_1 + 0x24) = *(r8 + r10_1 + 0x24)
        *(r10_1 + 0x28) = *(r8 + r10_1 + 0x28)
        r10_1[3].d = *(r8 + r10_1 + 0x30)
        *(r10_1 + 0x34) = *(r8 + r10_1 + 0x34)
        *(r10_1 + 0x38) = *(r8 + r10_1 + 0x38)
        int32_t rax_7 = *(r10_1 + 0x3c) ^ *(r8 + r10_1 + 0x3c)
        r10_1 = &r10_1[7]
        *(r10_1 - 0x34) ^= rax_7 & 1
        int32_t rcx_3 = ((*(r10_1 - 0x34) ^ *(r8 + r10_1 - 0x34)) & 2) ^ *(r10_1 - 0x34)
        *(r10_1 - 0x34) = rcx_3
        int32_t rax_12 = ((*(r8 + r10_1 - 0x34) ^ rcx_3) & 4) ^ rcx_3
        *(r10_1 - 0x34) = rax_12
        int32_t rcx_7 = ((*(r8 + r10_1 - 0x34) ^ rax_12) & 8) ^ rax_12
        *(r10_1 - 0x34) = rcx_7
        *(r10_1 - 0x34) = ((*(r8 + r10_1 - 0x34) ^ rcx_7) & 0x10) ^ rcx_7
        i = arg4
        arg4 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
