// 函数: sub_14228ac80
// 地址: 0x14228ac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* r8 = *rcx
uint32_t arg_8
bool cond:0

if (&r8[1] u> rcx[1])
    arg_8 = zx.d(*arg2) & 1
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    cond:0 = arg_8 != 0
else
    int32_t rdx_1 = *r8
    *rcx = &r8[1]
    cond:0 = rdx_1 != 0

int32_t rax_2
rax_2.b = cond:0
int32_t rcx_4 = (*arg2 & 0xfffffffe) | rax_2
*arg2 = rcx_4
int64_t* r8_1 = arg1[1]
int32_t* rdx_3 = *r8_1
bool cond:2

if (&rdx_3[1] u> r8_1[1])
    int64_t rax_7 = *arg1
    arg_8 = rcx_4 u>> 1 & 1
    (*(rax_7 + 0x150))(arg1, &arg_8, 4)
    cond:2 = arg_8 != 0
else
    int32_t rcx_5 = *rdx_3
    *r8_1 = &rdx_3[1]
    cond:2 = rcx_5 != 0

int32_t rax_8
rax_8.b = cond:2
*arg2 &= 0xfffffffd
*arg2 |= rax_8 * 2
int64_t* rcx_9 = arg1[1]
int32_t* r8_2 = *rcx_9

if (&r8_2[1] u<= rcx_9[1])
    *(arg2 + 0x14) = *r8_2
    int64_t* rax_12 = arg1[1]
    *rax_12 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x14], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x14], 4)

int64_t* rdx_6 = arg1[1]
int32_t* r8_3 = *rdx_6
bool cond:3

if (&r8_3[1] u> rdx_6[1])
    int64_t rax_16 = *arg1
    arg_8 = *arg2 u>> 2 & 1
    (*(rax_16 + 0x150))(arg1, &arg_8, 4)
    cond:3 = arg_8 != 0
else
    int32_t rcx_13 = *r8_3
    *rdx_6 = &r8_3[1]
    cond:3 = rcx_13 != 0

int64_t rax_17
rax_17.b = cond:3
int32_t rcx_17 = (rax_17 << 2).d | (*arg2 & 0xfffffffb)
*arg2 = rcx_17

if (arg1[8].d s>= 0x1cd)
    int64_t* rdx_8 = arg1[1]
    int32_t* r8_4 = *rdx_8
    bool cond:5_1
    
    if (&r8_4[1] u> rdx_8[1])
        int64_t rax_22 = *arg1
        arg_8 = rcx_17 u>> 3 & 1
        (*(rax_22 + 0x150))(arg1, &arg_8, 4)
        cond:5_1 = arg_8 != 0
    else
        int32_t rcx_18 = *r8_4
        *rdx_8 = &r8_4[1]
        cond:5_1 = rcx_18 != 0
    
    int64_t rsi
    rsi.b = cond:5_1
    *arg2 &= 0xfffffff7
    *arg2 |= (rsi << 3).d

int64_t* rcx_22 = arg1[1]
int32_t* r8_5 = *rcx_22

if (&r8_5[1] u<= rcx_22[1])
    *(arg2 + 4) = *r8_5
    int64_t* rax_26 = arg1[1]
    *rax_26 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

int64_t* rcx_24 = arg1[1]
int32_t* r8_6 = *rcx_24

if (&r8_6[1] u<= rcx_24[1])
    *(arg2 + 8) = *r8_6
    int64_t* rax_30 = arg1[1]
    *rax_30 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

int64_t* rcx_26 = arg1[1]
int32_t* r8_7 = *rcx_26

if (&r8_7[1] u<= rcx_26[1])
    *(arg2 + 0xc) = *r8_7
    int64_t* rax_34 = arg1[1]
    *rax_34 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xc], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xc], 4)

int64_t* rcx_28 = arg1[1]
int32_t* r8_8 = *rcx_28

if (&r8_8[1] u<= rcx_28[1])
    *(arg2 + 0x10) = *r8_8
    int64_t* rax_38 = arg1[1]
    *rax_38 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x10], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[0x10], 4)
return arg1
