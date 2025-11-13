// 函数: sub_141a73250
// 地址: 0x141a73250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1, 4)

int512_t zmm1 = sub_141a705e0(arg2, &arg1[1])
int64_t* rcx_3 = arg2[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    arg1[2] = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
    rax_6.b = 1
    return rax_6

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[2], zmm1)
    int64_t* rax_9
    rax_9.b = 1
    return rax_9

(*(*arg2 + 0x150))(arg2, &arg1[2], 4)
int64_t rax_8
rax_8.b = 1
return rax_8
