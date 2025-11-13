// 函数: sub_141c40490
// 地址: 0x141c40490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg2[1].d

if (rdx == 0)
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) s<= 0xffffffff)
        return sub_140775b10(arg4, rdx) __tailcall
    
    return 

*(arg1 + 0x5c0) = 0

if (rdx s> *(arg1 + 0x5c4))
    sub_140775b10(arg1 + 0x5b8, rdx)

int32_t rcx_4 = arg2[1].d + *(arg1 + 0x5c0)
*(arg1 + 0x5c0) = rcx_4

if (rcx_4 s> *(arg1 + 0x5c4))
    sub_140775270(arg1 + 0x5b8)

memcpy(*(arg1 + 0x5b8), *arg2, arg2[1].d << 2)
int32_t rcx_7 = arg2[1].d
int32_t temp0_1 = divs.dp.d(sx.q(rcx_7), arg3)

if (rcx_7 == 0)
    int32_t rax = *(arg4 + 0xc)
    arg4[1].d = 0
    
    if (rax s< 0 && rax != 0)
        return sub_140775b10(arg4, 0) __tailcall
    
    return 

if (*(arg1 + 0x5c8) == 0 && *(arg1 + 0x5c9) == 0)
    int32_t rbx_2 = temp0_1 * arg5
    arg4[1].d = 0
    
    if (rbx_2 s> *(arg4 + 0xc))
        sub_140775b10(arg4, rbx_2)
    
    return sub_14074a020(arg4, rbx_2) __tailcall

*(arg1 + 0x580) = 0

if (temp0_1 s> *(arg1 + 0x584))
    sub_140775b10(arg1 + 0x578, temp0_1)

*(arg1 + 0x590) = 0

if (temp0_1 s> *(arg1 + 0x594))
    sub_140775b10(arg1 + 0x588, temp0_1)

int32_t rax_7 = *(arg1 + 0x580) + temp0_1
*(arg1 + 0x580) = rax_7

if (rax_7 s> *(arg1 + 0x584))
    sub_140775270(arg1 + 0x578)

int32_t rax_8 = *(arg1 + 0x590) + temp0_1
*(arg1 + 0x590) = rax_8

if (rax_8 s> *(arg1 + 0x594))
    sub_140775270(arg1 + 0x588)

char rax_9 = *(arg1 + 0x5c9)
int32_t var_38

if (*(arg1 + 0x5c8) == 0)
    if (rax_9 != 0)
        var_38.q = arg1 + 0x588
        sub_141c3fd80(arg1 + 0x300, arg1 + 0x5b8, arg3, arg1 + 0x578, var_38)
else if (rax_9 != 0)
    *(arg1 + 0x540) = 0
    
    if (temp0_1 s> *(arg1 + 0x544))
        sub_140775b10(arg1 + 0x538, temp0_1)
    
    *(arg1 + 0x550) = 0
    
    if (temp0_1 s> *(arg1 + 0x554))
        sub_140775b10(arg1 + 0x548, temp0_1)
    
    *(arg1 + 0x560) = 0
    
    if (temp0_1 s> *(arg1 + 0x564))
        sub_140775b10(arg1 + 0x558, temp0_1)
    
    *(arg1 + 0x570) = 0
    
    if (temp0_1 s> *(arg1 + 0x574))
        sub_140775b10(arg1 + 0x568, temp0_1)
    
    int32_t rax_10 = *(arg1 + 0x540) + temp0_1
    *(arg1 + 0x540) = rax_10
    
    if (rax_10 s> *(arg1 + 0x544))
        sub_140775270(arg1 + 0x538)
    
    int32_t rax_11 = *(arg1 + 0x550) + temp0_1
    *(arg1 + 0x550) = rax_11
    
    if (rax_11 s> *(arg1 + 0x554))
        sub_140775270(arg1 + 0x548)
    
    int32_t rax_12 = *(arg1 + 0x560) + temp0_1
    *(arg1 + 0x560) = rax_12
    
    if (rax_12 s> *(arg1 + 0x564))
        sub_140775270(arg1 + 0x558)
    
    int32_t rax_13 = *(arg1 + 0x570) + temp0_1
    *(arg1 + 0x570) = rax_13
    
    if (rax_13 s> *(arg1 + 0x574))
        sub_140775270(arg1 + 0x568)
    
    var_38.q = arg1 + 0x568
    sub_141c3f700(arg1 + 0x38, arg1 + 0x5b8, arg3, arg1 + 0x558, var_38)
    var_38.q = arg1 + 0x548
    sub_141c3fd80(arg1 + 0x300, arg1 + 0x5b8, arg3, arg1 + 0x538, var_38)
    sub_141c47000(arg1 + 0x558, arg1 + 0x538, arg1 + 0x578)
    sub_141c47000(arg1 + 0x568, arg1 + 0x548, arg1 + 0x588)
else
    var_38.q = arg1 + 0x588
    sub_141c3f700(arg1 + 0x38, arg1 + 0x5b8, arg3, arg1 + 0x578, var_38)
sub_141c3beb0(arg1, arg1 + 0x578, arg1 + 0x588, arg4, arg5)
