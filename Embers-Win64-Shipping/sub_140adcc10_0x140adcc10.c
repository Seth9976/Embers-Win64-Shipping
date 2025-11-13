// 函数: sub_140adcc10
// 地址: 0x140adcc10
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

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg1[1] = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
    rax_6.b = 1
    return rax_6

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[1], arg3)
    int64_t* rax_9
    rax_9.b = 1
    return rax_9

(*(*arg2 + 0x150))(arg2, &arg1[1], 4)
int64_t rax_8
rax_8.b = 1
return rax_8
