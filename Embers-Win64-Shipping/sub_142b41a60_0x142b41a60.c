// 函数: sub_142b41a60
// 地址: 0x142b41a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

int16_t arg_18

if (sub_142b42a00(arg1, arg2, arg3).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b44d50(arg1, arg2, arg3).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b444f0(arg1, arg2, arg3).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b44600(arg1, arg2).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

int32_t rcx_7 = arg1[0x18]

if (rcx_7 != 4)
    sub_142b448a0(rcx_7, arg2)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b41dc0(arg1, arg2, arg3).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b42960(arg1, arg2).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b44c60(arg1, arg2, arg3).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

int32_t rcx_15 = arg1[0x26]

if (((rcx_15 - 1) & 0xfffffffb) != 0)
    sub_142b44fb0(rcx_15, arg2)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

int32_t rcx_17 = arg1[0x27]

if (rcx_17 != 0 && rcx_17 != 7)
    sub_142b44af0(rcx_17, arg2)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b41360(arg1, arg2).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (sub_142b44a60(arg1, arg2, arg3).b != 0)
    arg_18 = 0x20
    sub_142a48d70(arg2, &arg_18, 0, 1)

if (*arg3 s> 0)
    return 

if (arg1[0x1c] != 0xfffffffe || *(arg1 + 0xc0) != 0 || *(arg1 + 0xc8) != 0 || *(arg1 + 0xd0) != 0)
    *arg3 = 0x10
    return 

uint32_t rax = zx.d(*(arg2 + 8))
int32_t rcx_24

if (rax.w s< 0)
    rcx_24 = *(arg2 + 0xc)
else
    rcx_24 = sx.d(rax.w) s>> 5

if (rcx_24 s<= 0)
    return 

int32_t rcx_26

if (rax.w s< 0)
    rcx_26 = *(arg2 + 0xc)
else
    rcx_26 = sx.d(rax.w) s>> 5

if ((*(arg2 + 8) & 1) != 0 && rcx_26 == 1)
    sub_142a4afe0(arg2)
    return 

int32_t rdx_24

if (rax.w s< 0)
    rdx_24 = *(arg2 + 0xc)
else
    rdx_24 = sx.d(rax.w) s>> 5

if (rcx_26 - 1 u>= rdx_24)
    return 

if (rcx_26 - 1 s> 0x3ff)
    rax.w |= 0xffe0
    *(arg2 + 0xc) = rcx_26 - 1
else
    rax.w &= 0x1f
    int32_t rcx_28
    rcx_28.w = (rcx_26 - 1).w << 5
    rax.w |= rcx_28.w

*(arg2 + 8) = rax.w
