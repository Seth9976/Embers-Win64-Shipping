// 函数: sub_140ae7e60
// 地址: 0x140ae7e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140a1d9d0(arg1, arg2, arg3)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u> r8[1])
    int32_t rax_2
    rax_2.b = arg2[2].b != 0
    int32_t arg_8 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[2].b = arg_8 != 0
else
    void* rax
    rax.b = *rcx != 0
    arg2[2].b = rax.b
    int64_t* rax_1 = arg1[1]
    *rax_1 += 4

sub_140a1d9d0(arg1, &arg2[3], zmm1)
return arg1
