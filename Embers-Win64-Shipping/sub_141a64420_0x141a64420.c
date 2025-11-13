// 函数: sub_141a64420
// 地址: 0x141a64420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140d3a3a0(&arg_8, nullptr)
*(arg1 + 0x28) = arg_8
*(arg1 + 0x30) = 0
void* result = sub_140d2bce0(arg1 + 0x38)
void* result_1 = result

if (result != 0)
    void* rax_1 = sub_141a6e550()
    result = sub_140be1130(*(result_1 + 0x10), rax_1)
    
    if (result.b != 0)
        sub_140d3a3a0(arg1 + 0x28, result_1)
        result = sub_140d21950(result_1, sub_141a6e550())
        *(arg1 + 0x30) = result

return result
