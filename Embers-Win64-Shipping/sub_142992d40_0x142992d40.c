// 函数: sub_142992d40
// 地址: 0x142992d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg3

if (arg1 != arg2)
    void* r8 = arg1 + 0x18
    int64_t* r10_2 = result - arg1
    
    do
        *(r10_2 + r8 - 8) = 0
        *(r10_2 + r8) = 0
        int128_t zmm0 = *(r8 - 0x18)
        r8 += 0x30
        *result = zmm0
        result[1] = *(r8 - 0x38)
        *(r8 - 0x38) = 0
        result = &result[3]
        *(r8 - 0x30) = 0xf
        *(r8 - 0x48) = 0
        *(r10_2 + r8 - 0x28) = *(r8 - 0x28)
        *(r10_2 + r8 - 0x24) = *(r8 - 0x24)
        *(r10_2 + r8 - 0x20) = *(r8 - 0x20)
        *(r10_2 + r8 - 0x1c) = *(r8 - 0x1c)
    while (r8 - 0x18 != arg2)

sub_142991430(result, result)
return result
