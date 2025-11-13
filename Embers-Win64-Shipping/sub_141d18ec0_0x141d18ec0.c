// 函数: sub_141d18ec0
// 地址: 0x141d18ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 4
int64_t* rcx = arg1[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int64_t* rcx_2 = arg1[1]
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u<= rcx_2[1])
    *arg2 = *rdx_2
    int64_t* rax_5 = arg1[1]
    *rax_5 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, arg2, 4)
return arg1
