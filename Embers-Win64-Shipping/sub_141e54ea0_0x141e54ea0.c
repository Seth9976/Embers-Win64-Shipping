// 函数: sub_141e54ea0
// 地址: 0x141e54ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_142470d20(), rax, 0, 0, 0, 0, 0, 0, 0)
int64_t rsi = sx.q(*(result + 0x38))
int32_t rcx_2 = (rsi + 1).d
*(result + 0x38) = rcx_2

if (rcx_2 s> *(result + 0x3c))
    sub_1405a4f90(result + 0x30)

*(*(result + 0x30) + rsi * 0x10) = *arg2
sub_140780c40(result + 0x40, arg3)
int64_t rax_3 = *result
*(result + 0x70) = 0
(*(rax_3 + 0x270))(result, arg1)
return result
