// 函数: sub_141ba1880
// 地址: 0x141ba1880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
int64_t var_50 = 0
void* result
int512_t zmm2
int128_t zmm6_1
result, zmm2, zmm6_1 = sub_140d2dfc0(sub_141c1b030(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 8) |= 0x1000000

if (arg2 == 0)
    *arg1 = 0
    return result

zmm2.o = zmm6_1
var_50.d = arg6
void* rax_5 = sub_141bc7550(arg2, arg3, sub_140d3a3a0(result + 0x38, (*(*arg2 + 0x150))(arg2)), 
    arg4, arg5, 0, 0)

if (rax_5 != 0)
    sub_141b6d430(rax_5 + 0x760, &arg_8, result, sub_141bbe1d0)

*arg1 = rax_5
return result
