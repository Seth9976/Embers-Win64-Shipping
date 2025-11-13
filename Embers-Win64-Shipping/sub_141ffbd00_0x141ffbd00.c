// 函数: sub_141ffbd00
// 地址: 0x141ffbd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_14246e380(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 0x40) = 0
*(result + 0x60) = arg2
sub_140597df0(result + 0x48, arg3)
int64_t r8 = *result
*(result + 0x58) = arg4
(*(r8 + 0x270))(result, arg1, r8)
return result
