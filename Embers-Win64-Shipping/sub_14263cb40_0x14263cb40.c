// 函数: sub_14263cb40
// 地址: 0x14263cb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_20 = 0
void* result
int32_t zmm6_1
result, zmm6_1 = sub_140d2dfc0(sub_14263d640(), rax, 0, 0, 0, 0, 0, 0, 0)
void* result_1 = result

if (result != 0 && *arg1 != 0)
    int64_t* rdx_1 = arg1[1]
    
    if (rdx_1 != 0)
        sub_14263aa00(result, rdx_1, arg3)
        result = result_1
        *(result_1 + 0x78) = zmm6_1

return result
