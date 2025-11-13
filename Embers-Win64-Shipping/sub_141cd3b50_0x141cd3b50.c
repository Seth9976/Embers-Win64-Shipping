// 函数: sub_141cd3b50
// 地址: 0x141cd3b50
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

int512_t zmm1 = sub_1409ad4d0(arg1, arg2 + 0x18, arg3)
sub_1408d9160(arg1, arg2 + 0x28, zmm1)
int64_t* rcx_4 = arg1[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg2 + 0x10) = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x10, zmm1)
    return arg1

(*(*arg1 + 0x150))(arg1, arg2 + 0x10, 4)
return arg1
