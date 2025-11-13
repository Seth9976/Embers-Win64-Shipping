// 函数: sub_141e54d10
// 地址: 0x141e54d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_20 = 0
void* result = sub_140d2dfc0(sub_142471440(), rax, 0, 0, 0, 0, 0, 0, 0)
sub_140780c40(result + 0x40, arg2)
sub_140780c40(result + 0x50, arg3)
int64_t r8 = *result
*(result + 0x70) = 1
(*(r8 + 0x270))(result, arg1, r8)
return result
