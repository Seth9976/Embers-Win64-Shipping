// 函数: sub_141708de0
// 地址: 0x141708de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = *arg2 << 8 | zx.d(*(arg2 + 3))
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

if ((arg1[5].b & 1) != 0)
    int32_t rcx_2 = arg_8
    *(arg2 + 3) = 0
    *arg2 &= 0xff000000
    *arg2 |= rcx_2 u>> 8
    *(arg2 + 3) = rcx_2.b

return arg1
