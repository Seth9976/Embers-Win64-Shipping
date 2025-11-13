// 函数: sub_1408dc2f0
// 地址: 0x1408dc2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408dce70(sub_1408dce70(arg1, arg2, arg3), &arg2[8], arg3)
int64_t* r8 = arg1[1]
int32_t* rcx_1 = *r8

if (&rcx_1[1] u> r8[1])
    int32_t rax_4
    rax_4.b = arg2[0x10] != 0
    int32_t arg_8 = rax_4
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[0x10] = arg_8 != 0
    return arg1

void* rax_1
rax_1.b = *rcx_1 != 0
arg2[0x10] = rax_1.b
int64_t* rax_2 = arg1[1]
*rax_2 += 4
return arg1
