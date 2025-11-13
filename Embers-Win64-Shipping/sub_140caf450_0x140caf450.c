// 函数: sub_140caf450
// 地址: 0x140caf450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* r8 = *rcx
int32_t arg_18

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_18
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_18 = *r8
    *rcx += 4

int64_t* rcx_2 = arg1[1]
int32_t arg_8 = 0
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *rdx_1
    *rcx_2 += 4

int64_t rax_6 = sx.q(arg_18)

if (rax_6.d s>= 0 && rax_6.d s< arg1[-7].d)
    int32_t arg_1c = arg_8
    arg_18 = *(arg1[-8] + (rax_6 << 2))
    *arg2 = arg_18.q
    return arg1

arg_8.q = 0
*arg2 = arg_8.q
*(arg1 + 0x29) |= 3
return arg1
