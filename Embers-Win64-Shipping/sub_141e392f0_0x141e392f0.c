// 函数: sub_141e392f0
// 地址: 0x141e392f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
char* r8_1 = *rcx_2

if (&r8_1[1] u> rcx_2[1])
    (*(*arg1 + 0x150))(arg1, &arg2[1], 1)
    return arg1

arg2[1].b = *r8_1
int64_t* rax_6 = arg1[1]
*rax_6 += 1
return arg1
