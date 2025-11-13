// 函数: sub_141f7c220
// 地址: 0x141f7c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_141f7c380(arg1, arg2, arg3)
(*(*arg1 + 0x130))(arg1, &arg2[0xa])
int64_t* r8 = arg1[1]
int32_t* rcx_1 = *r8

if (&rcx_1[1] u> r8[1])
    int32_t rax_3
    rax_3.b = arg2[0xc].b != 0
    int32_t arg_8 = rax_3
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[0xc].b = arg_8 != 0
else
    void* rax_1
    rax_1.b = *rcx_1 != 0
    arg2[0xc].b = rax_1.b
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4

int64_t* rcx_3 = arg1[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    arg2[0xd] = *r8_1
    int64_t* rax_8 = arg1[1]
    *rax_8 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xd], zmm1)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[0xd], 4)
return arg1
