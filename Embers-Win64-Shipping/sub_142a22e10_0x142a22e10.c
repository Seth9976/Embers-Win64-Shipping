// 函数: sub_142a22e10
// 地址: 0x142a22e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0xf00)
int32_t rbp = *(arg1 + 0xdf0)
int32_t rax = *(r10 + 4)
int32_t arg_8 = rax
uint32_t rbx
uint32_t rsi

if (*(r10 + 0xa) == 0)
    rbx = zx.d(arg_8:2.w)
    rsi = zx.d(arg_8.w)
else
    if (sx.d((rax u>> 0x10).w) s>= *(arg1 + 0xf84) - 0x98)
        rbx = sx.d(arg_8:2.w)
        
        if (rbx s> *(arg1 + 0xf88) + 0x90)
            rbx.w = *(arg1 + 0xf88) + 0x80
            arg_8:2.w = rbx.w
    else
        rbx.w = *(arg1 + 0xf84) - 0x80
        arg_8:2.w = rbx.w
    
    rsi = sx.d(arg_8.w)
    
    if (rsi s< *(arg1 + 0xf8c) - 0x98)
        rsi.w = *(arg1 + 0xf8c) - 0x80
        arg_8.w = rsi.w
    else if (rsi s> *(arg1 + 0xf90) + 0x90)
        rsi.w = *(arg1 + 0xf90) + 0x80
        arg_8.w = rsi.w

int32_t r9 = sx.d(rsi.w)
int128_t* rcx_5 = (sx.q(rbx.w) s>> 3) + sx.q((r9 s>> 3) * rbp) + *(arg1 + 0xe18)

if ((arg_8 & 0x70007) == 0)
    sub_1403adc70(rcx_5, rbp, arg2, arg5)
else
    (*(arg1 + 0xfb0))(rcx_5, zx.q(rbp), zx.q(sx.d(rbx.w)) & 7, zx.q(r9) & 7, arg2, arg5)

int16_t rcx_6 = *(arg1 + 0xdd8)
int32_t rbp_1 = rbp s>> 1
rsi.w += rsi.w s>> 0xf | 1
rbx.w += rbx.w s>> 0xf | 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.w)
int16_t r8_4 = ((temp1 - temp0) s>> 1).w & rcx_6
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbx.w)
int32_t rsi_1 = sx.d(r8_4)
int16_t rax_23 = ((temp3 - temp2) s>> 1).w & rcx_6
arg_8.w = r8_4
arg_8:2.w = rax_23
int32_t r14 = sx.d(rax_23)
int64_t rcx_11 = sx.q((rsi_1 s>> 3) * rbp_1 + (r14 s>> 3))
int64_t* r10_2 = *(arg1 + 0xe20) + rcx_11
int64_t* r15_1 = *(arg1 + 0xe28) + rcx_11

if ((arg_8 & 0x70007) == 0)
    sub_1403add80(r10_2, rbp_1, arg3, arg6)
    return sub_1403add80(r15_1, rbp_1, arg4, arg6)

int32_t rsi_2 = rsi_1 & 7
int32_t r14_1 = r14 & 7
(*(arg1 + 0xfa8))(r10_2, rbp_1, zx.q(r14_1), zx.q(rsi_2), arg3, arg6)
return (*(arg1 + 0xfa8))(r15_1, zx.q(rbp_1), zx.q(r14_1), zx.q(rsi_2), arg4, arg6)
