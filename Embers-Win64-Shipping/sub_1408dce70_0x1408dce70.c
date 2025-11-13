// 函数: sub_1408dce70
// 地址: 0x1408dce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg1 + 0x150))(arg1, arg3, 1)
else
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 1

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg2 + 4) = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[4], 4)
return arg1
