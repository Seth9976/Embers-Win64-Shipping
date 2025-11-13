// 函数: sub_141e55120
// 地址: 0x141e55120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_20 = 0
void* result = sub_140d2dfc0(sub_142470ff0(), rax, 0, 0, 0, 0, 0, 0, 0)
sub_1405b0be0(result + 0x30, arg2)
sub_140780c40(result + 0x40, arg3)
int64_t r8 = *result
*(result + 0x70) = 0
(*(r8 + 0x270))(result, arg1, r8)
return result
