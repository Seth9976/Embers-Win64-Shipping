// 函数: sub_141a84f20
// 地址: 0x141a84f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408d9160(arg1, arg2, arg3)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u> r8[1])
    int32_t rax_3
    rax_3.b = arg2[3].b != 0
    int32_t arg_8 = rax_3
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[3].b = arg_8 != 0
    return arg1

void* rax
rax.b = *rcx != 0
arg2[3].b = rax.b
int64_t* rax_1 = arg1[1]
*rax_1 += 4
return arg1
