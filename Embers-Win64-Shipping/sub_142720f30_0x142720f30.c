// 函数: sub_142720f30
// 地址: 0x142720f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg1 == 0)
    return 0

int64_t arg_18 = 0
void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_14272a1f0(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 0x30) = 0
*(result + 0x68) = arg1
sub_14263aa00(result, arg1 + 0x2a0, 0xc0)
*(result + 0x70) = arg2
return result
