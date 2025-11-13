// 函数: sub_1422abc50
// 地址: 0x1422abc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x38) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x38, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x38, 4)

int64_t* rcx_2 = arg2[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u<= rcx_2[1])
    void* rax_4
    rax_4.b = *rdx_1 != 0
    *(arg1 + 0x3c) = rax_4.b
    int64_t* rax_5 = arg2[1]
    *rax_5 += 4
    return rax_5

int32_t rax_6
rax_6.b = *(arg1 + 0x3c) != 0
int32_t arg_8 = rax_6
(*(*arg2 + 0x150))(arg2, &arg_8, 4)
bool cond:2 = arg_8 != 0
*(arg1 + 0x3c) = cond:2
return cond:2
