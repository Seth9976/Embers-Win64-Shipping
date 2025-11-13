// 函数: sub_142992de0
// 地址: 0x142992de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg3

if (arg1 != arg2)
    void* r8 = arg1 + 0x10
    int64_t* r10_2 = result - arg1
    
    do
        *result = 0
        *(r10_2 + r8 - 8) = 0
        *(r10_2 + r8) = 0
        int64_t rax_1 = *(r8 - 0x10)
        r8 += 0x18
        *result = rax_1
        result = &result[3]
        *(r10_2 + r8 - 0x20) = *(r8 - 0x20)
        *(r10_2 + r8 - 0x18) = *(r8 - 0x18)
        __builtin_memset(r8 - 0x28, 0, 0x18)
    while (r8 - 0x10 != arg2)

sub_1429914c0(result, result)
return result
