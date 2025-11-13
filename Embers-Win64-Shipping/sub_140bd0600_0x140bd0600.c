// 函数: sub_140bd0600
// 地址: 0x140bd0600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int32_t* rdx = *rcx

if (&rdx[1] u<= rcx[1])
    *arg3 = *rdx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg3, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg3, 4)

int32_t arg_10

if ((*arg3 & 0x2000) == 0)
    int64_t* rcx_3 = arg2[1]
    int32_t* rdx_3 = *rcx_3
    
    if (&rdx_3[1] u> rcx_3[1])
        int32_t* rdx_4 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_4, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_4, 4)
    else
        arg_10 = *rdx_3
        *rcx_3 += 4
    
    *arg4 = sx.q(arg_10)
else
    sub_14090dc80(arg2, arg4, arg5)

int64_t* rcx_5 = arg2[1]
int64_t* rdx_5 = *rcx_5
int64_t* rax_10

if (&rdx_5[1] u<= rcx_5[1])
    *arg6 = *rdx_5
    rax_10 = arg2[1]
    *rax_10 += 8
else if ((*(arg2 + 0x29) & 0x20) != 0)
    rax_10 = sub_140b540d0(arg2, arg6, arg5)
else
    rax_10 = (*(*arg2 + 0x150))(arg2, arg6, 8)

if ((*arg3 & 0x8000) == 0)
    return rax_10

int64_t* rcx_8 = arg2[1]
arg_10.w = 0xffff
int16_t* rdx_7 = *rcx_8

if (&rdx_7[1] u<= rcx_8[1])
    int16_t rax_13 = *rdx_7
    arg_10.w = rax_13
    *rcx_8 += 2
    return rax_13

int16_t* rdx_8 = &arg_10

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54000(arg2, rdx_8, arg5)

return (*(*arg2 + 0x150))(arg2, rdx_8, 2)
