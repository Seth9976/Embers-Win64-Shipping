// 函数: sub_1403e06d0
// 地址: 0x1403e06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t i_12 = zx.q(arg11)
int32_t* rsi = arg2 - 4
int32_t i_10 = (i_12 + 2).d
int16_t* rdi = arg1
int64_t rax_3 = sx.q(i_10) * 2
int64_t rcx = rax_3 + 0xf

if (rcx u<= rax_3)
    rcx = 0xffffffffffffff0

int64_t rcx_1 = rcx & 0xfffffffffffffff0
__chkstk(rcx_1)
void var_d8
void* rsp_1 = &var_d8 - rcx_1

if (i_10 s> 0)
    int16_t* r8 = arg3 - 4
    uint64_t i_5 = zx.q(i_10)
    uint64_t i
    
    do
        int32_t rax_5 = sx.d(*r8)
        int32_t rdx = sx.d(*(arg2 - arg3 + r8))
        int32_t rcx_2 = rdx + rax_5
        int32_t rdx_1 = rdx - rax_5
        int32_t rax_6 = rcx_2
        rcx_2.w &= 1
        *(rsi - arg3 + r8 + 4) = (rax_6 s>> 1).w + rcx_2.w
        int32_t rcx_5 = (rdx_1 s>> 1) + (rdx_1 & 1)
        
        if (rcx_5 s> 0x7fff)
            rcx_5 = 0x7fff
        else if (rcx_5 s< 0xffff8000)
            rcx_5 = -0x8000
        
        *(rsp_1 + 0x30 - arg3 + r8 + 4) = rcx_5.w
        r8 = &r8[1]
        i = i_5
        i_5 -= 1
    while (i != 1)

*rsi = *(rdi + 4)
*(rsp_1 + 0x30) = *(rdi + 8)
int64_t rbx_2 = sx.q(i_12.d) * 2
*(rdi + 4) = *(rbx_2 + rsi)
*(rdi + 8) = *(rbx_2 + rsp_1 + 0x30)
int64_t rax_13 = rbx_2 + 0xf

if (rax_13 u<= rbx_2)
    rax_13 = 0xffffffffffffff0

int64_t rax_14 = rax_13 & 0xfffffffffffffff0
__chkstk(rax_14)
void* rsp_2 = rsp_1 - rax_14
int64_t rax_15 = rbx_2 + 0xf

if (rax_15 u<= rbx_2)
    rax_15 = 0xffffffffffffff0

int64_t rax_16 = rax_15 & 0xfffffffffffffff0
__chkstk(rax_16)
void* rsp_3 = rsp_2 - rax_16

if (i_12.d s> 0)
    void* r9_1 = rsi + 2
    uint64_t i_6 = i_12
    uint64_t i_1
    
    do
        int32_t rax_17 = sx.d(*(r9_1 - 2))
        uint64_t rcx_7 = zx.q(sx.d(*r9_1))
        r9_1 += 2
        int16_t rdx_8 = ((((rax_17 + (rcx_7 << 1).d + sx.d(*r9_1)) s>> 1) + 1) s>> 1).w
        *(r9_1 + rsp_2 + 0x30 - rsi - 4) = rdx_8
        *(r9_1 + rsp_3 + 0x30 - rsi - 4) = *(r9_1 - 2) - rdx_8
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

int64_t rax_20 = rbx_2 + 0xf

if (rax_20 u<= rbx_2)
    rax_20 = 0xffffffffffffff0

int64_t rax_21 = rax_20 & 0xfffffffffffffff0
__chkstk(rax_21)
void* rsp_4 = rsp_3 - rax_21
int64_t rax_22 = rbx_2 + 0xf

if (rax_22 u<= rbx_2)
    rax_22 = 0xffffffffffffff0

int64_t rax_23 = rax_22 & 0xfffffffffffffff0
__chkstk(rax_23)
void* rsp_5 = rsp_4 - rax_23

if (i_12.d s> 0)
    void* r9_2 = rsp_1 + 0x32
    uint64_t i_7 = i_12
    uint64_t i_2
    
    do
        int32_t rax_24 = sx.d(*(r9_2 - 2))
        uint64_t rcx_9 = zx.q(sx.d(*r9_2))
        r9_2 += 2
        int16_t rdx_13 = ((((rax_24 + (rcx_9 << 1).d + sx.d(*r9_2)) s>> 1) + 1) s>> 1).w
        *(rsp_4 + 0x30 - (rsp_1 + 0x30) + r9_2 - 4) = rdx_13
        *(rsp_5 + 0x30 - (rsp_1 + 0x30) + r9_2 - 4) = *(r9_2 - 2) - rdx_13
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

uint64_t r12_2 = zx.q(arg10)
int16_t rax_29 = 0x28f
int32_t rbx_5
rbx_5.b = i_12.d == (r12_2 * 5).d * 2

if (rbx_5 != 0)
    rax_29 = 0x148

int32_t rcx_10 = sx.d(arg8)
int32_t rax_30 = sx.d(rax_29)
int32_t rcx_11 = rcx_10 * rcx_10
int32_t r15_4 = ((zx.d(rcx_11.w) * rax_30) s>> 0x10) + (rcx_11 s>> 0x10) * rax_30
*(rsp_5 + 0x28) = r15_4
int16_t var_9c = r15_4.w
*(rsp_5 + 0x20) = i_12.d
int16_t var_70
int32_t rax_31 = sub_1403e69d0(&var_70, rsp_2 + 0x30, rsp_4 + 0x30, &rdi[6])
*(rsp_5 + 0x28) = r15_4
var_a8 = rax_31
*(rsp_5 + 0x20) = i_12.d
int32_t var_78
int32_t rax_32 = sub_1403e69d0(&var_78, rsp_3 + 0x30, rsp_5 + 0x30, &rdi[0xa])
uint64_t rdx_16 = zx.q(sx.d(var_70))
int32_t var_a4 = rax_32
int32_t rax_34 = 0x258
uint64_t r15_5 = 0x10000
int32_t rdx_17 = rdx_16.d + var_78 + (rdx_16 << 1).d

if (rdx_17 s< 0x10000)
    r15_5 = zx.q(rdx_17)

if (rbx_5 != 0)
    rax_34 = 0x4b0

int32_t rbx_7 = arg7 - rax_34

if (rbx_7 s< 1)
    rbx_7 = 1

int32_t rax_35 = sub_1403e0590(rbx_7, (r15_5 + (zx.q((r15_5 + 0x68000).d) << 1)).d, 0x13)
*arg6 = rax_35
int32_t var_a0
int32_t rbx_8
int32_t r8_5

if (rax_35 s>= sx.d(r12_2.w) * 0x384 + 0x7d0)
    rbx_8 = 0x4000
    var_a0 = 0x4000
    arg6[1] = rbx_7 - rax_35
    r8_5 = 0x4000
else
    int32_t rcx_19 = sx.d((sx.d(r12_2.w) * 0x384 + 0x7d0).w)
    int32_t rax_36 = (r15_5 * 3).d
    int32_t r8_4 = rbx_7 - (sx.d(r12_2.w) * 0x384 + 0x7d0)
    arg6[1] = r8_4
    *arg6 = sx.d(r12_2.w) * 0x384 + 0x7d0
    int32_t rax_40 = sub_1403e0590(r8_4 * 2 - (sx.d(r12_2.w) * 0x384 + 0x7d0), 
        ((zx.d(rax_36.w) * rcx_19) s>> 0x10) + ((rax_36 + 0x10000) s>> 0x10) * rcx_19, 0x10)
    rbx_8 = 0x4000
    r8_5 = rax_40
    var_a0 = 0x4000
    
    if (rax_40 s> 0x4000)
        r8_5 = 0x4000
    else if (rax_40 s< 0)
        r8_5 = 0

int32_t rdx_24 = sx.d(rdi[0xe])
int32_t r8_6 = r8_5 - rdx_24
rdi[0xe] = ((zx.d(r8_6.w) * sx.d(var_9c)) s>> 0x10).w + (r8_6 s>> 0x10).w * var_9c + rdx_24.w
*arg5 = 0
uint64_t r10_3
int32_t rdx_31
char* r8_9

if (arg9 == 0)
    int16_t r9_6 = rdi[0xf]
    uint64_t r8_8 = zx.q(rbx_7)
    
    if (r9_6 != 0)
    label_1403e0baa:
        int32_t rax_56
        
        if ((r8_8 << 3).d s>= (sx.d(r12_2.w) * 0x384 + 0x7d0) * 0xb)
            rax_56 = sx.d(rdi[0xe])
        
        if ((r8_8 << 3).d s< (sx.d(r12_2.w) * 0x384 + 0x7d0) * 0xb
                || ((zx.d(r15_5.w) * rax_56) s>> 0x10) + (r15_5.d s>> 0x10) * rax_56 s< 0x148)
            int32_t rcx_35 = sx.d(rdi[0xe])
            var_a8 = (sx.d(var_a8.w) * rcx_35) s>> 0xe
            var_a4 = (sx.d(var_a4.w) * rcx_35) s>> 0xe
            sub_1403e6c00(&var_a8, arg4)
            rbx_8 = 0
            var_a8.q = 0
            var_a0 = rbx_8
            goto label_1403e0c54
        
    label_1403e0c04:
        int16_t rax_63 = rdi[0xe]
        
        if (rax_63 s> 0x3ccd)
            sub_1403e6c00(&var_a8, arg4)
            goto label_1403e0c54
        
        int32_t rcx_38 = sx.d(rax_63)
        var_a8 = (sx.d(var_a8.w) * rcx_38) s>> 0xe
        var_a4 = (sx.d(var_a4.w) * rcx_38) s>> 0xe
        sub_1403e6c00(&var_a8, arg4)
        rbx_8 = sx.d(rdi[0xe])
        var_a0 = rbx_8
        goto label_1403e0c54
    
    int32_t rcx_28
    
    if ((r8_8 << 3).d s>= (sx.d(r12_2.w) * 0x384 + 0x7d0) * 0xd)
        rcx_28 = sx.d(rdi[0xe])
    
    if ((r8_8 << 3).d s>= (sx.d(r12_2.w) * 0x384 + 0x7d0) * 0xd
            && ((zx.d(r15_5.w) * rcx_28) s>> 0x10) + (r15_5.d s>> 0x10) * rcx_28 s>= 0x333)
        if (r9_6 == 0)
            goto label_1403e0c04
        
        goto label_1403e0baa
    
    int32_t rcx_29 = sx.d(rdi[0xe])
    var_a8 = (sx.d(var_a8.w) * rcx_29) s>> 0xe
    var_a4 = (sx.d(var_a4.w) * rcx_29) s>> 0xe
    sub_1403e6c00(&var_a8, arg4)
    rdx_31 = rbx_7
    r8_9 = arg5
    *arg6 = rdx_31
    arg6[1] = 0
    rbx_8 = 0
    var_a0 = 0
    *r8_9 = 1
    var_a8.q = 0
label_1403e0c67:
    r10_3 = zx.q(arg10)
    rdi[0x10] += i_12.w - (r10_3.w << 3)
    
    if (sx.d(rdi[0x10]) s>= (r10_3 * 5).d)
        rdi[0x10] = 0x2710
        goto label_1403e0caa
    
    *r8_9 = 0
label_1403e0cb0:
    
    if (arg6[1] s< 1)
        int32_t rax_72 = rdx_31 - 1
        arg6[1] = 1
        
        if (rax_72 s< 1)
            rax_72 = 1
        
        *arg6 = rax_72
else
    rbx_8 = 0
    var_a8.q = 0
    var_a0 = 0
    sub_1403e6c00(&var_a8, arg4)
label_1403e0c54:
    r8_9 = arg5
    rdx_31 = rbx_7
    
    if (*r8_9 == 1)
        goto label_1403e0c67
    
    r10_3 = zx.q(arg10)
    rdi[0x10] = 0
label_1403e0caa:
    
    if (*r8_9 == 0)
        goto label_1403e0cb0
int32_t rcx_42 = sx.d(*rdi)
int32_t r8_10 = sx.d(rdi[1])
int32_t r9_7 = sx.d(rdi[0xf])
uint32_t i_11 = (r10_3 << 3).d
char* var_98
var_98.d = i_11
void* var_90
var_90.d = neg.d(rcx_42)
int32_t r13_3 = r9_7 << 0xa
int32_t var_9c_1 = neg.d(r8_10)
int32_t rdx_38 = sx.d((divs.dp.d(0:0x10000, i_11)).w)
int32_t rcx_48 = neg.d((((sx.d(var_a8.w - rcx_42.w) * rdx_38) s>> 0xf) + 1) s>> 1)
int32_t rax_77 = rbx_8 - r9_7
void* var_80
var_80.d = neg.d((((sx.d(var_a4.w - r8_10.w) * rdx_38) s>> 0xf) + 1) s>> 1)

if (i_11 s> 0)
    int32_t rbx_9 = var_90.d
    void* r8_13 = rsp_1 + 0x30 - rsi - 2
    void* r11_7 = &rsi[1]
    void* var_48_1 = r8_13
    uint64_t i_9 = zx.q(i_11)
    uint64_t i_3
    
    do
        int32_t rcx_60 = sx.d(*(r11_7 - 2))
        int32_t r8_14 = sx.d(*(r8_13 + r11_7))
        int32_t rdx_40 = var_9c_1 + var_80.d
        int32_t r9_11 = (sx.d(*(r11_7 - 4)) << 9) + (sx.d(*r11_7) << 9) + (rcx_60 << 0xa)
        int32_t rax_88 = sx.d(rdx_40.w)
        r13_3 += ((zx.d(rax_77.w) * rdx_38) s>> 0x10 << 0xa) + (((rax_77 s>> 0x10) * rdx_38) << 0xa)
        rbx_9 += rcx_48
        var_9c_1 = rdx_40
        int32_t rdx_41 = sx.d(rbx_9.w)
        int32_t r10_11 = ((((rcx_60 & 0x1f) << 0xb) * rax_88) s>> 0x10)
            + (rcx_60 << 0xb s>> 0x10) * rax_88 + ((zx.d(r9_11.w) * rdx_41) s>> 0x10)
            + ((zx.d(r13_3.w) * r8_14) s>> 0x10)
        int32_t r10_16 =
            (((r10_11 + (r9_11 s>> 0x10) * rdx_41 + (r13_3 s>> 0x10) * r8_14) s>> 7) + 1) s>> 1
        
        if (r10_16 s> 0x7fff)
            r10_16 = 0x7fff
        else if (r10_16 s< 0xffff8000)
            r10_16 = -0x8000
        
        r8_13 = var_48_1
        *(arg3 - rsi - 6 + r11_7) = r10_16.w
        r11_7 += 2
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)
    rdi = arg1
    i_12 = zx.q(arg11)
    rbx_8 = var_a0
    i_11 = var_98.d

int32_t r11_9 = rbx_8 << 0xa

if (i_11 s< i_12.d)
    void* r9_15 = rsi + ((sx.q(i_11) + 2) << 1)
    uint64_t i_8 = zx.q(i_12.d - i_11)
    int32_t r15_8 = sx.d((neg.d(var_a4)).w)
    int32_t r13_4 = sx.d((neg.d(var_a8)).w)
    uint64_t i_4
    
    do
        int32_t rcx_66 = sx.d(*(r9_15 - 2))
        int32_t rdx_43 = sx.d(*(r9_15 + rsp_1 + 0x30 - rsi - 2))
        int32_t r8_19 = (sx.d(*(r9_15 - 4)) << 9) + (sx.d(*r9_15) << 9) + (rcx_66 << 0xa)
        int32_t rax_112 = ((((rcx_66 & 0x1f) << 0xb) * r15_8) s>> 0x10)
            + (rcx_66 << 0xb s>> 0x10) * r15_8 + ((zx.d(r8_19.w) * r13_4) s>> 0x10)
            + (r8_19 s>> 0x10) * r13_4 + ((rdx_43 * zx.d(r11_9.w)) s>> 0x10)
        int32_t rax_116 = (((rax_112 + rdx_43 * (r11_9 s>> 0x10)) s>> 7) + 1) s>> 1
        
        if (rax_116 s> 0x7fff)
            rax_116 = 0x7fff
        else if (rax_116 s< 0xffff8000)
            rax_116 = -0x8000
        
        *(r9_15 + arg3 - rsi - 6) = rax_116.w
        r9_15 += 2
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    rdi = arg1

*rdi = var_a8.w
int16_t result = var_a4.w
rdi[1] = result
rdi[0xf] = rbx_8.w
__security_check_cookie(rax_1 ^ &var_a8)
return result
