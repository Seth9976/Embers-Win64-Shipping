// 函数: sub_140909570
// 地址: 0x140909570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg3

if (arg1 != arg2)
    void* r8 = arg1 + 0x18
    int64_t* rax_2 = result - arg1
    
    do
        *(rax_2 + r8 - 8) = 0
        *(rax_2 + r8) = 0
        int128_t zmm0 = *(r8 - 0x18)
        r8 += 0x20
        *result = zmm0
        result[1] = *(r8 - 0x28)
        *(r8 - 0x28) = 0
        result = &result[2]
        *(r8 - 0x20) = 0xf
        *(r8 - 0x38) = 0
    while (r8 - 0x18 != arg2)

sub_1409091b0(result, result)
return result
