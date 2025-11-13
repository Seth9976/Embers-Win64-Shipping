// 函数: sub_141cd3770
// 地址: 0x141cd3770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg2 + 0xc) = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0xc, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0xc, 4)

int512_t zmm1 = sub_14090ae90(arg1, arg2 + 0x18, arg3)
int64_t* rcx_3 = arg1[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    *(arg2 + 0x28) = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x28, zmm1)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x28, 4)

int64_t* rcx_5 = arg1[1]
int32_t* r8_2 = *rcx_5

if (&r8_2[1] u<= rcx_5[1])
    *(arg2 + 0x10) = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x10, zmm1)
    return arg1

(*(*arg1 + 0x150))(arg1, arg2 + 0x10, 4)
return arg1
