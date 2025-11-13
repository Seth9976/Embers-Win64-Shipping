// 函数: sub_1404017f0
// 地址: 0x1404017f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
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
int128_t __saved_zmm6_1
int128_t __saved_zmm6 = __saved_zmm6_1
int128_t __saved_zmm7_1
int128_t __saved_zmm7 = __saved_zmm7_1
int128_t __saved_zmm8_1
int128_t __saved_zmm8 = __saved_zmm8_1
int128_t __saved_zmm9_1
int128_t __saved_zmm9 = __saved_zmm9_1
int128_t __saved_zmm10_1
int128_t __saved_zmm10 = __saved_zmm10_1
int128_t __saved_zmm9_3
int128_t __saved_zmm9_4 = __saved_zmm9_3
int128_t __saved_zmm10_2
int128_t __saved_zmm10_3 = __saved_zmm10_2
int128_t __saved_zmm13_1
int128_t __saved_zmm13 = __saved_zmm13_1
int128_t __saved_zmm14_1
int128_t __saved_zmm14 = __saved_zmm14_1
int128_t __saved_zmm15_1
int128_t __saved_zmm15 = __saved_zmm15_1
int32_t __saved_zmm9_2
int64_t rax_1 = __security_cookie ^ &__saved_zmm9_2
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg2)
int64_t r8 = sx.q((temp3 - temp2) s>> 1)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(arg3)
void* rsi = arg1 + (r8 << 2)
int32_t var_11c = r8.d
uint64_t r13 = zx.q((temp5 - temp4) s>> 1)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(*arg5)
int32_t rax_13 = (temp7 - temp6) s>> 1
*arg5 = rax_13
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(arg6)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(arg4)
int64_t r14 = sx.q((temp11 - temp10) s>> 1)
int32_t var_118 = r14.d

if (rax_13 s>= r8.d)
    *arg5 = (r8 - 1).d

int64_t r15 = sx.q(*arg5)
int32_t var_12c = r15.d
int64_t rdx_6 = sx.q((r8 + 1).d) << 2
int64_t rax_22 = rdx_6 + 0xf

if (rax_22 u<= rdx_6)
    rax_22 = 0xffffffffffffff0

int64_t rax_23 = rax_22 & 0xfffffffffffffff0
__chkstk(rax_23)
void var_168
void* rsp_1 = &var_168 - rax_23
*(rsp_1 + 0x28) = &__saved_zmm9_2
int64_t rdi = r15 << 2
int32_t __saved_zmm13_6
*(rsp_1 + 0x20) = &__saved_zmm13_6
sub_140400960(rsi, rsi, rsi - rdi, zx.q(r14.d))
int128_t __saved_zmm13_4 = __saved_zmm13_6
*(rsp_1 + 0x30) = __saved_zmm13_4.d
int128_t __saved_zmm13_5 = __saved_zmm13_4
void* r8_3 = 1
int64_t var_f8 = r14
int128_t __saved_zmm13_3
int128_t __saved_zmm13_2

if (r8 s>= 4)
    void* rax_24 = rsp_1 + 0x3c
    uint64_t i_3 = r8 u>> 2
    void* rcx_4 = rsi - 0xc
    void* rdx_9 = rsi + ((r14 - 3) << 2)
    r8_3 = (i_3 << 2) + 1
    uint64_t i
    
    do
        __saved_zmm13_2 = *(rcx_4 + 8)
        __saved_zmm13_3 = *(rdx_9 + 8)
        __saved_zmm13_2.d = __saved_zmm13_2.d f* __saved_zmm13_2.d
        __saved_zmm13_3.d = __saved_zmm13_3.d f* __saved_zmm13_3.d
        __saved_zmm13_2.d = __saved_zmm13_2.d f+ __saved_zmm13_5.d
        __saved_zmm13_2.d = __saved_zmm13_2.d f- __saved_zmm13_3.d
        
        if (0f f<= __saved_zmm13_2.d)
            __saved_zmm13_3 = __saved_zmm13_2
        else
            __saved_zmm13_3 = zx.o(0)
        
        *(rax_24 - 8) = __saved_zmm13_3.d
        __saved_zmm13_4 = *(rcx_4 + 4)
        __saved_zmm13_3 = *(rdx_9 + 4)
        __saved_zmm13_4.d = __saved_zmm13_4.d f* __saved_zmm13_4.d
        __saved_zmm13_3.d = __saved_zmm13_3.d f* __saved_zmm13_3.d
        __saved_zmm13_4.d = __saved_zmm13_4.d f+ __saved_zmm13_2.d
        __saved_zmm13_4.d = __saved_zmm13_4.d f- __saved_zmm13_3.d
        
        if (0f f<= __saved_zmm13_4.d)
            __saved_zmm13_3 = __saved_zmm13_4
        else
            __saved_zmm13_3 = zx.o(0)
        
        *(rax_24 - 4) = __saved_zmm13_3.d
        __saved_zmm13_2 = *rcx_4
        __saved_zmm13_3 = *rdx_9
        __saved_zmm13_2.d = __saved_zmm13_2.d f* __saved_zmm13_2.d
        __saved_zmm13_3.d = __saved_zmm13_3.d f* __saved_zmm13_3.d
        __saved_zmm13_2.d = __saved_zmm13_2.d f+ __saved_zmm13_4.d
        __saved_zmm13_2.d = __saved_zmm13_2.d f- __saved_zmm13_3.d
        
        if (0f f<= __saved_zmm13_2.d)
            __saved_zmm13_3 = __saved_zmm13_2
        else
            __saved_zmm13_3 = zx.o(0)
        
        *rax_24 = __saved_zmm13_3.d
        __saved_zmm13_5 = *(rcx_4 - 4)
        __saved_zmm13_3 = *(rdx_9 - 4)
        __saved_zmm13_5.d = __saved_zmm13_5.d f* __saved_zmm13_5.d
        __saved_zmm13_3.d = __saved_zmm13_3.d f* __saved_zmm13_3.d
        __saved_zmm13_5.d = __saved_zmm13_5.d f+ __saved_zmm13_2.d
        __saved_zmm13_5.d = __saved_zmm13_5.d f- __saved_zmm13_3.d
        
        if (0f f<= __saved_zmm13_5.d)
            __saved_zmm13_3 = __saved_zmm13_5
        else
            __saved_zmm13_3 = zx.o(0)
        
        *(rax_24 + 4) = __saved_zmm13_3.d
        rax_24 += 0x10
        rcx_4 -= 0x10
        rdx_9 -= 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
    __saved_zmm13_4 = __saved_zmm13_6

if (r8_3 s<= r8)
    void* rcx_6 = rsi - (r8_3 << 2)
    void* rdx_10 = rsi + ((r14 - r8_3) << 2)
    
    do
        __saved_zmm13_3 = *rcx_6
        __saved_zmm13_2 = *rdx_10
        __saved_zmm13_3.d = __saved_zmm13_3.d f* __saved_zmm13_3.d
        __saved_zmm13_2.d = __saved_zmm13_2.d f* __saved_zmm13_2.d
        __saved_zmm13_3.d = __saved_zmm13_3.d f+ __saved_zmm13_5.d
        __saved_zmm13_5.d = __saved_zmm13_3.d f- __saved_zmm13_2.d
        
        if (0f f<= __saved_zmm13_5.d)
            __saved_zmm13_3 = __saved_zmm13_5
        else
            __saved_zmm13_3 = zx.o(0)
        
        *(rsp_1 + 0x30 + (r8_3 << 2)) = __saved_zmm13_3.d
        r8_3 += 1
        rdx_10 -= 4
        rcx_6 -= 4
    while (r8_3 s<= r8)

__saved_zmm10_1 = *(rdi + rsp_1 + 0x30)
__saved_zmm9_1 = __saved_zmm9_2
__saved_zmm13_3.d = __saved_zmm10_1.d f* __saved_zmm13_4.d
__saved_zmm13_3.d = __saved_zmm13_3.d f+ 1f
__saved_zmm13_1 = arg7
int32_t i_1 = 2
int32_t rax_28 = (r15 * 2).d
void* const r12_1 = &data_1436fdf68
__saved_zmm13_2.d = fconvert.s(sqrt(_mm_cvtps_pd(__saved_zmm13_3.q).q).q)
__saved_zmm7_1.d = __saved_zmm9_1.d f/ __saved_zmm13_2.d
int32_t var_130 = __saved_zmm7_1.d
int128_t __saved_zmm13_7

do
    int32_t rcx_7 = i_1 * 2
    int64_t rsi_1 = sx.q(divs.dp.d(sx.q(rax_28 + i_1), rcx_7))
    
    if (rsi_1.d s< r13.d)
        break
    
    int32_t rdi_1
    
    if (i_1 != 2)
        rdi_1 = divs.dp.d(sx.q(i_1 + ((r15.d * *r12_1) << 1)), rcx_7)
    else
        rdi_1 = (rsi_1 + r15).d
        
        if (rdi_1 s> var_11c)
            rdi_1 = r15.d
    
    int32_t var_128
    *(rsp_1 + 0x28) = &var_128
    *(rsp_1 + 0x20) = &__saved_zmm9_2
    sub_140400960(rsi, rsi + (sx.q(neg.d(rsi_1.d)) << 2), rsi + (sx.q(neg.d(rdi_1)) << 2), 
        zx.q(var_118))
    float __saved_zmm13_8[0x2] = __saved_zmm13_6
    __saved_zmm9_3 = __saved_zmm9_2
    __saved_zmm13_8[0] = __saved_zmm13_8[0] * 2f
    __saved_zmm9_3.d = __saved_zmm9_3.d f+ var_128
    __saved_zmm10_2.d = (*(rsp_1 + 0x30 + (sx.q(rdi_1) << 2))).d f+ *(rsp_1 + 0x30 + (rsi_1 << 2))
    __saved_zmm9_2 = __saved_zmm9_3.d
    __saved_zmm13_8[0] = __saved_zmm13_8[0] f* __saved_zmm10_2.d
    __saved_zmm13_8[0] = __saved_zmm13_8[0] + 1f
    int32_t temp24_1
    int32_t temp25_1
    temp24_1:temp25_1 = sx.q(rsi_1.d - ((temp9 - temp8) s>> 1))
    __saved_zmm13_2.d = fconvert.s(sqrt(_mm_cvtps_pd(__saved_zmm13_8)).q)
    int32_t rax_42 = (temp25_1 ^ temp24_1) - temp24_1
    __saved_zmm13_4.d = __saved_zmm9_3.d f/ __saved_zmm13_2.d
    
    if (rax_42 s> 1)
        uint64_t rax_44
        
        if (rax_42 s<= 2)
            rax_44 = zx.q(i_1 * i_1)
        
        if (rax_42 s> 2 || (rax_44 * 5).d s>= r15.d)
            __saved_zmm13_2 = zx.o(0)
        else
            __saved_zmm13_2.d = __saved_zmm13_1.d f* 0.5f
    else
        __saved_zmm13_2 = __saved_zmm13_1
    
    __saved_zmm13_7.d = __saved_zmm7_1.d f* 0.699999988f
    __saved_zmm13_7.d = __saved_zmm13_7.d f- __saved_zmm13_2.d
    
    if (not(0.300000012f f<= __saved_zmm13_7.d))
        __saved_zmm13_7 = 0x3e99999a
    
    if (rsi_1.d s< (r13 << 1).d + r13.d)
        __saved_zmm13_7.d = __saved_zmm7_1.d f* 0.850000024f
        __saved_zmm13_7.d = __saved_zmm13_7.d f- __saved_zmm13_2.d
        
        if (not(0.400000006f f<= __saved_zmm13_7.d))
            __saved_zmm13_7 = 0x3ecccccd
    else if (rsi_1.d s< (r13 << 1).d)
        __saved_zmm13_7.d = __saved_zmm7_1.d f* 0.899999976f
        __saved_zmm13_7.d = __saved_zmm13_7.d f- __saved_zmm13_2.d
        
        if (not(0.5f f<= __saved_zmm13_7.d))
            __saved_zmm13_7 = 0x3f000000
    
    if (not(__saved_zmm13_4.d f<= __saved_zmm13_7.d))
        __saved_zmm9_1 = __saved_zmm9_3
        __saved_zmm10_1 = __saved_zmm10_2
        var_12c = rsi_1.d
        var_130 = __saved_zmm13_4.d
    
    i_1 += 1
    r12_1 += 4
    rax_28 = (r15 * 2).d
while (i_1 s<= 0xf)

int64_t r14_2 = var_f8

if (not(0f f<= __saved_zmm9_1.d))
    __saved_zmm9_1 = zx.o(0)

if (__saved_zmm9_1.d f< __saved_zmm10_1.d)
    __saved_zmm10_1.d = __saved_zmm10_1.d f+ 1f
    __saved_zmm9_3.d = __saved_zmm9_1.d f/ __saved_zmm10_1.d

int64_t r12_2 = sx.q(var_12c)
int64_t i_4 = 3
int64_t rdx_18 = r12_2 << 2
int128_t* r9_3 = 4 - rdx_18
int64_t r8_5 = rdx_18 - 4
void* r10_1 = rsi + ((3 - r12_2) << 2)
int64_t i_2

do
    __saved_zmm13_4 = zx.o(0)
    int64_t rdx_19 = 0
    
    if (r14_2 s>= 4)
        void* rax_50 = r10_1
        int64_t j_2 = ((r14_2 - 4) u>> 2) + 1
        rdx_19 = j_2 << 2
        int64_t j
        
        do
            __saved_zmm13_2 = *(rax_50 + r8_5 - 8)
            __saved_zmm13_7 = *(rax_50 + r8_5 - 4)
            rax_50 += 0x10
            __saved_zmm13_2.d = __saved_zmm13_2.d f* *(rax_50 - 0x18)
            __saved_zmm13_7.d = __saved_zmm13_7.d f* *(rax_50 - 0x14)
            __saved_zmm13_2.d = __saved_zmm13_2.d f+ __saved_zmm13_4.d
            __saved_zmm13_4.d = __saved_zmm13_2.d f+ __saved_zmm13_7.d
            __saved_zmm13_2.d = (*(rax_50 + r8_5 - 0x10)).d f* *(rax_50 - 0x10)
            __saved_zmm13_7.d = (*(rax_50 + r8_5 - 0xc)).d f* *(rax_50 - 0xc)
            __saved_zmm13_4.d = __saved_zmm13_4.d f+ __saved_zmm13_2.d
            __saved_zmm13_4.d = __saved_zmm13_4.d f+ __saved_zmm13_7.d
            j = j_2
            j_2 -= 1
        while (j != 1)
    
    if (rdx_19 s< r14_2)
        void* rax_51 = rsi + (rdx_19 << 2)
        int64_t j_3 = r14_2 - rdx_19
        int64_t j_1
        
        do
            __saved_zmm13_7 = *(r9_3 + rax_51)
            rax_51 += 4
            __saved_zmm13_7.d = __saved_zmm13_7.d f* *(rax_51 - 4)
            __saved_zmm13_7.d = __saved_zmm13_7.d f+ __saved_zmm13_4.d
            __saved_zmm13_4 = __saved_zmm13_7
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
    
    *(&var_f8:4 - rdx_18 + r8_5) = __saved_zmm13_4.d
    r8_5 += 4
    r10_1 -= 4
    r9_3 -= 4
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
float zmm3 = var_f8.d
__saved_zmm13_4 = var_f8:4.d
int32_t var_f0
int128_t zmm4 = var_f0
__saved_zmm13_7.d = __saved_zmm13_4.d f- zmm3
__saved_zmm13_2.d = zmm4.d f- zmm3
__saved_zmm13_7.d = __saved_zmm13_7.d f* 0.699999988f
int32_t rax_52

if (__saved_zmm13_2.d f<= __saved_zmm13_7.d)
    __saved_zmm13_4.d = __saved_zmm13_4.d f- zmm4.d
    __saved_zmm13_4.d = __saved_zmm13_4.d f* 0.699999988f
    int32_t rbx_2
    rbx_2.b = zmm3 f- zmm4.d f<= __saved_zmm13_4.d
    rax_52 = rbx_2 - 1
else
    rax_52 = (i_4 + 1).d

int32_t result = rax_52 + (r12_2 << 1).d

if (result s< arg3)
    result = arg3

*arg5 = result
__security_check_cookie(rax_1 ^ &__saved_zmm9_2)
return result
