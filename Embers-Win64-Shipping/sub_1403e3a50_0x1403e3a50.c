// 函数: sub_1403e3a50
// 地址: 0x1403e3a50
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
int32_t var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* var_70 = arg3
void* r13 = arg1
int64_t r9_1 = sx.q(*(arg1 + 0x10b8) * 2) * 2
int64_t rax_4 = r9_1 + 0xf

if (rax_4 u<= r9_1)
    rax_4 = 0xffffffffffffff0

int64_t rax_5 = rax_4 & 0xfffffffffffffff0
__chkstk(rax_5)
int64_t rdx = sx.q(*(arg1 + 0x920))
void var_108
void* rsp_1 = &var_108 - rax_5
int64_t rax_7 = rdx * 2
int64_t rcx = rax_7 + 0xf

if (rcx u<= rax_7)
    rcx = 0xffffffffffffff0

int64_t rcx_1 = rcx & 0xfffffffffffffff0
__chkstk(rcx_1)
void* rsp_2 = rsp_1 - rcx_1
int64_t rax_13 = sx.q(*(r13 + 0x918) + rdx.d) << 2
int64_t rcx_2 = rax_13 + 0xf

if (rcx_2 u<= rax_13)
    rcx_2 = 0xffffffffffffff0

int64_t rcx_3 = rcx_2 & 0xfffffffffffffff0
__chkstk(rcx_3)
void* rsp_3 = rsp_2 - rcx_3
int32_t var_98 = *(r13 + 0x10a8) s>> 6
int32_t rax_19 = *(r13 + 0x10ac) s>> 6
int16_t var_94 = rax_19.w

if (*(r13 + 0x948) != 0)
    __builtin_memset(r13 + 0x106e, 0, 0x20)

void* rdi = rsp_1 + 0x30
int64_t i_7 = 2
int32_t i_5 = 0
int64_t rbx = 0
int64_t i

do
    int32_t j = 0
    int64_t r8 = 0
    
    if (*(r13 + 0x10b8) s> 0)
        int32_t r11_1 = sx.d((&var_98)[rbx].w)
        int32_t r10_4 = (((&var_98)[rbx] s>> 0xf) + 1) s>> 1
        
        do
            int32_t rdx_1 =
                *(r13 + (((sx.q(*(r13 + 0x10b4)) - 2 + rbx) * sx.q(*(r13 + 0x10b8)) + r8) << 2) + 4)
            int32_t rax_26 = (((zx.d(rdx_1.w) * r11_1) s>> 0x10) + (rdx_1 s>> 0x10) * r11_1
                + r10_4 * rdx_1) s>> 8
            
            if (rax_26 s> 0x7fff)
                rax_26 = 0x7fff
            else if (rax_26 s< 0xffff8000)
                rax_26 = -0x8000
            
            *(rdi + (r8 << 1)) = rax_26.w
            j += 1
            r8 += 1
        while (j s< *(r13 + 0x10b8))
    
    rbx += 1
    rdi += sx.q(*(r13 + 0x10b8)) << 1
    i = i_7
    i_7 -= 1
while (i != 1)
int32_t var_90
uint32_t var_84
sub_1403e7bd0(&var_84, &var_90, rsp_1 + 0x30, *(r13 + 0x10b8))
int64_t r9_3 = sx.q(*(r13 + 0x10b8))
uint32_t var_8c
int32_t var_88
sub_1403e7bd0(&var_8c, &var_88, rsp_1 + 0x30 + (r9_3 << 1), r9_3.d)
int32_t rax_30 = *(r13 + 0x10b4)
void* var_a0

if (var_84 s>> var_88.b s>= var_8c s>> var_90.b)
    int32_t rax_35 = rax_30 * *(r13 + 0x10b8)
    int32_t rax_36 = rax_35 - 0x80
    
    if (rax_35 - 0x80 s< 0)
        rax_36 = 0
    
    var_a0 = (sx.q(rax_36) << 2) + 4 + r13
else
    int32_t rax_32 = (rax_30 - 1) * *(r13 + 0x10b8)
    int32_t rax_33 = rax_32 - 0x80
    
    if (rax_32 - 0x80 s< 0)
        rax_33 = 0
    
    var_a0 = r13 + 4 + (sx.q(rax_33) << 2)

int32_t rcx_18 = *(r13 + 0x1058)
int16_t r14 = *(r13 + 0x1098)
int32_t rax_40 = rcx_18

if (rcx_18 s> 1)
    rax_40 = 1

int16_t var_cc = r14
int16_t rax_42 = *((sx.q(rax_40) << 1) + 0x1436fcba0)
int16_t r12

if (*(r13 + 0x105c) != 2)
    if (rcx_18 s> 1)
        rcx_18 = 1
    
    r12 = *((sx.q(rcx_18) << 1) + 0x1436fcba8)
else
    if (rcx_18 s> 1)
        rcx_18 = 1
    
    r12 = *((sx.q(rcx_18) << 1) + 0x1436fcba4)

sub_1403e7900(r13 + 0x106e, *(r13 + 0x924), 0xfd71)
int32_t rdi_1 = *(r13 + 0x924)
int16_t var_60
memcpy(&var_60, r13 + 0x106e, rdi_1 * 2)

if (*(r13 + 0x1058) == 0)
    r14 = 0x4000
    var_cc = 0x4000
    
    if (*(r13 + 0x105c) != 2)
        int32_t rcx_23 = sub_1403e7970(r13 + 0x106e, rdi_1)
        
        if (rcx_23 s> 0x8000000)
            rcx_23 = 0x8000000
        
        if (rcx_23 s< 0x400000)
            rcx_23 = 0x400000
        
        int32_t rax_46 = sx.d(r12)
        int32_t rcx_24 = rcx_23 << 3
        r12 = ((((zx.d(rcx_24.w) * rax_46) s>> 0x10) + (rcx_24 s>> 0x10) * rax_46) s>> 0xe).w
    else
        r14 = 0x4000 - *(r13 + 0x106c) - *(r13 + 0x106a) - *(r13 + 0x1068) - *(r13 + 0x1066)
            - *(r13 + 0x1064)
        
        if (0xccd s> r14)
            r14 = 0xccd
        
        r14 = ((sx.d(r14) * sx.d(*(r13 + 0x10a4))) s>> 0xe).w
        var_cc = r14

int64_t r15_1 = sx.q(*(r13 + 0x920))
int32_t r8_5 = *(r13 + 0x924)
int32_t var_a8 = *(r13 + 0x1094)
int32_t rdi_3 = *(r13 + 0x1060) s>> 7
*(rsp_3 + 0x20) = r8_5
int32_t result_1 = (rdi_3 + 1) s>> 1
int32_t result = result_1
var_d8 = r15_1.d
int64_t rax_48 = sx.q(r15_1.d - r8_5 - result_1 - 2)
sub_1403e77a0(rsp_2 + 0x30 + (rax_48 << 1), r13 + 0x544 + (rax_48 << 1), &var_60, 
    zx.q(r15_1.d - (r15_1.d - r8_5 - result_1 - 2)))
int32_t rax_49 = sub_1403e3870(*(r13 + 0x10ac), 0x2e)
int32_t r11_2 = 0x3fffffff

if (rax_49 s< 0x3fffffff)
    r11_2 = rax_49

int32_t i_1 = *(r13 + 0x924) + r15_1.d - r8_5 - result_1 - 2
void* rbx_5 = rsp_3 + 0x30
int64_t i_6 = sx.q(i_1)

if (i_1 s< *(r13 + 0x920))
    void* r9_6 = rbx_5 + (i_6 << 2)
    void* r10_5 = rsp_2 + 0x30 + (i_6 << 1)
    
    do
        int32_t rcx_31 = sx.d(*r10_5)
        i_1 += 1
        r10_5 += 2
        r9_6 += 4
        *(r9_6 - 4) = ((zx.d(r11_2.w) * rcx_31) s>> 0x10) + (r11_2 s>> 0x10) * rcx_31
    while (i_1 s< *(r13 + 0x920))

int32_t i_4 = 0
int64_t var_c0_1 = r15_1

if (*(r13 + 0x914) s> 0)
    int32_t rcx_32 = sx.d(rax_42)
    int32_t var_d0 = rcx_32
    int32_t i_2
    
    do
        int32_t j_3 = 0
        void* r12_5 = rbx_5 + (sx.q(r15_1.d - result_1 + 2) << 2)
        
        if (*(r13 + 0x91c) s> 0)
            int32_t rax_57 = sx.d(r14)
            int32_t j_1
            
            do
                int32_t r9_7 = *(r12_5 - 4)
                int32_t rdx_17 = *r12_5
                int32_t r8_8 = sx.d(*(r13 + 0x1066))
                int32_t rcx_33 = sx.d(*(r13 + 0x1064))
                int32_t r11_4 = *(r12_5 - 8)
                int32_t rsi_1 = *(r12_5 - 0xc)
                int32_t r15_2 = *(r12_5 - 0x10)
                int32_t r10_6 = sx.d(*(r13 + 0x1068))
                int32_t rdi_5 = sx.d(*(r13 + 0x106a))
                int32_t r14_3 = sx.d(*(r13 + 0x106c))
                r12_5 += 4
                int64_t r8_10 = var_c0_1 + 1
                var_c0_1 = r8_10
                int32_t rbx_12 = ((zx.d(rdx_17.w) * rcx_33) s>> 0x10)
                    + ((zx.d(r9_7.w) * r8_8) s>> 0x10) + ((zx.d(r11_4.w) * r10_6) s>> 0x10)
                    + ((zx.d(rsi_1.w) * rdi_5) s>> 0x10) + ((zx.d(r15_2.w) * r14_3) s>> 0x10)
                rbx_5 = rsp_3 + 0x30
                uint64_t rdx_24 = zx.q((rdx_17 s>> 0x10) * rcx_33 + rbx_12 + (r9_7 s>> 0x10) * r8_8
                    + (r11_4 s>> 0x10) * r10_6 + (rsi_1 s>> 0x10) * rdi_5
                    + (r15_2 s>> 0x10) * r14_3 + 2)
                int32_t rsi_6 = var_a8 * 0xbb38435 + 0x3619636b
                r15_1 = zx.q(var_d8 + 1)
                var_a8 = rsi_6
                var_d8 = r15_1.d
                int32_t rcx_35 = *(var_a0 + (sx.q(rsi_6 s>> 0x19 & 0x7f) << 2))
                j_1 = j_3 + 1
                *(rbx_5 + (r8_10 << 2) - 4) = (((rcx_35 s>> 0x10) * rax_57) << 2)
                    + ((zx.d(rcx_35.w) * rax_57) s>> 0x10 << 2) + (rdx_24 << 2).d
                j_3 = j_1
            while (j_1 s< *(r13 + 0x91c))
            rcx_32 = var_d0
        
        *(r13 + 0x1064) = ((sx.d(*(r13 + 0x1064)) * rcx_32) s>> 0xf).w
        *(r13 + 0x1066) = ((sx.d(*(r13 + 0x1066)) * rcx_32) s>> 0xf).w
        *(r13 + 0x1068) = ((sx.d(*(r13 + 0x1068)) * rcx_32) s>> 0xf).w
        *(r13 + 0x106a) = ((sx.d(*(r13 + 0x106a)) * rcx_32) s>> 0xf).w
        *(r13 + 0x106c) = ((sx.d(*(r13 + 0x106c)) * rcx_32) s>> 0xf).w
        int32_t rdx_25 = *(r13 + 0x1060)
        r14 = ((sx.d(var_cc) * sx.d(r12)) s>> 0xf).w
        var_cc = r14
        uint32_t rdx_27 = rdx_25 + ((zx.d(rdx_25.w) * 0x28f) s>> 0x10) + (rdx_25 s>> 0x10) * 0x28f
        rcx_32 = var_d0
        *(r13 + 0x1060) = rdx_27
        uint32_t rdi_7 = sx.d(*(r13 + 0x90c)) * 0x1200
        
        if (rdx_27 s< rdi_7)
            rdi_7 = rdx_27
        
        *(r13 + 0x1060) = rdi_7
        i_2 = i_4 + 1
        i_4 = i_2
        result_1 = ((rdi_7 s>> 7) + 1) s>> 1
    while (i_2 s< *(r13 + 0x914))
    result = result_1

void* rcx_43 = rbx_5 + (sx.q(*(r13 + 0x920) - 0x10) << 2)
*rcx_43 = *(r13 + 0x504)
*(rcx_43 + 4) = *(r13 + 0x508)
*(rcx_43 + 8) = *(r13 + 0x50c)
*(rcx_43 + 0xc) = *(r13 + 0x510)
*(rcx_43 + 0x10) = *(r13 + 0x514)
*(rcx_43 + 0x14) = *(r13 + 0x518)
*(rcx_43 + 0x18) = *(r13 + 0x51c)
*(rcx_43 + 0x1c) = *(r13 + 0x520)
*(rcx_43 + 0x20) = *(r13 + 0x524)
*(rcx_43 + 0x24) = *(r13 + 0x528)
*(rcx_43 + 0x28) = *(r13 + 0x52c)
*(rcx_43 + 0x2c) = *(r13 + 0x530)
*(rcx_43 + 0x30) = *(r13 + 0x534)
*(rcx_43 + 0x34) = *(r13 + 0x538)
*(rcx_43 + 0x38) = *(r13 + 0x53c)
*(rcx_43 + 0x3c) = *(r13 + 0x540)

if (*(r13 + 0x918) s> 0)
    void* rcx_44 = rcx_43 + 0x1c
    void* var_b8_1 = rcx_44
    int32_t i_3
    
    do
        int32_t r8_11 = *(rcx_44 + 0x20)
        int32_t rsi_7 = *(rcx_44 + 0x14)
        int32_t rbx_13 = *(rcx_44 + 0x18)
        int32_t r10_7 = *(rcx_44 + 0x1c)
        int32_t r13_1 = *(rcx_44 + 0xc)
        int32_t r15_7 = *(rcx_44 + 0x10)
        int16_t var_5e
        int32_t rdx_29 = sx.d(var_5e)
        int16_t var_5c
        int32_t r9_10 = sx.d(var_5c)
        int16_t var_5a
        int32_t r11_7 = sx.d(var_5a)
        int16_t var_58
        int32_t rdi_10 = sx.d(var_58)
        int16_t var_56
        int32_t r14_6 = sx.d(var_56)
        int16_t var_54
        int32_t r12_6 = sx.d(var_54)
        int32_t rcx_45 = sx.d(var_60)
        int32_t rax_127 = *(arg1 + 0x924)
        var_d8 = (zx.d(r8_11.w) * rcx_45) s>> 0x10
        var_d8 += (zx.d(r10_7.w) * rdx_29) s>> 0x10
        var_d8 += (zx.d(rbx_13.w) * r9_10) s>> 0x10
        var_d8 += (zx.d(rsi_7.w) * r11_7) s>> 0x10
        var_d8 += (zx.d(r15_7.w) * rdi_10) s>> 0x10
        var_d8 += (zx.d(r13_1.w) * r14_6) s>> 0x10
        var_d8 += (zx.d(*(var_b8_1 + 8)) * r12_6) s>> 0x10
        int16_t var_52
        var_d8 += (zx.d(*(rcx_44 + 4)) * sx.d(var_52)) s>> 0x10
        int16_t var_50
        var_d8 += (zx.d(*var_b8_1) * sx.d(var_50)) s>> 0x10
        int16_t var_4e
        var_d8 += (zx.d(*(var_b8_1 - 4)) * sx.d(var_4e)) s>> 0x10
        var_d8 += (r8_11 s>> 0x10) * rcx_45
        void* r9_11 = rcx_44 + 4
        int32_t r8_20 = var_d8 + (r10_7 s>> 0x10) * rdx_29 + (rbx_13 s>> 0x10) * r9_10
            + (rsi_7 s>> 0x10) * r11_7 + (r15_7 s>> 0x10) * rdi_10 + (r13_1 s>> 0x10) * r14_6
            + (*(var_b8_1 + 8) s>> 0x10) * r12_6
        int32_t r8_24 = r8_20 + (*r9_11 s>> 0x10) * sx.d(var_52)
            + (*var_b8_1 s>> 0x10) * sx.d(var_50) + (*(var_b8_1 - 4) s>> 0x10) * sx.d(var_4e)
            + (rax_127 s>> 1)
        
        if (rax_127 s> 0xa)
            void var_4c
            void* r9_12 = &var_4c
            void* r10_10 = var_b8_1 - 8
            uint64_t j_4 = zx.q(rax_127 - 0xa)
            uint64_t j_2
            
            do
                int32_t rdx_30 = *r10_10
                int32_t rax_170 = sx.d(*r9_12)
                r10_10 -= 4
                r9_12 += 2
                r8_24 = r8_24 + (rdx_30 s>> 0x10) * rax_170 + ((zx.d(rdx_30.w) * rax_170) s>> 0x10)
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
            r9_11 = rcx_44 + 4
        
        int32_t rdx_33 = sx.d(var_94)
        int32_t r8_27 = (r8_24 << 4) + *(var_b8_1 + 0x24)
        *(var_b8_1 + 0x24) = r8_27
        int32_t rcx_66 = (((((zx.d(r8_27.w) * rdx_33) s>> 0x10) + (r8_27 s>> 0x10) * rdx_33
            + r8_27 * (((rax_19 s>> 0xf) + 1) s>> 1)) s>> 7) + 1) s>> 1
        
        if (rcx_66 s> 0x7fff)
            rcx_66 = 0x7fff
        else if (rcx_66 s< 0xffff8000)
            rcx_66 = -0x8000
        
        int16_t* rdx_34 = var_70
        r13 = arg1
        *rdx_34 = rcx_66.w
        i_3 = i_5 + 1
        rcx_44 = r9_11
        var_70 = &rdx_34[1]
        i_5 = i_3
        var_b8_1 = rcx_44
    while (i_3 s< *(r13 + 0x918))

void* rcx_67 = rcx_43 + (sx.q(*(r13 + 0x918)) << 2)
*(r13 + 0x504) = *rcx_67
*(r13 + 0x508) = *(rcx_67 + 4)
*(r13 + 0x50c) = *(rcx_67 + 8)
*(r13 + 0x510) = *(rcx_67 + 0xc)
*(r13 + 0x514) = *(rcx_67 + 0x10)
*(r13 + 0x518) = *(rcx_67 + 0x14)
*(r13 + 0x51c) = *(rcx_67 + 0x18)
*(r13 + 0x520) = *(rcx_67 + 0x1c)
*(r13 + 0x524) = *(rcx_67 + 0x20)
*(r13 + 0x528) = *(rcx_67 + 0x24)
*(r13 + 0x52c) = *(rcx_67 + 0x28)
*(r13 + 0x530) = *(rcx_67 + 0x2c)
*(r13 + 0x534) = *(rcx_67 + 0x30)
*(r13 + 0x538) = *(rcx_67 + 0x34)
*(r13 + 0x53c) = *(rcx_67 + 0x38)
*(r13 + 0x540) = *(rcx_67 + 0x3c)
*(r13 + 0x1094) = var_a8
*(r13 + 0x1098) = var_cc
*arg2 = result
arg2[1] = result
arg2[2] = result
arg2[3] = result
__security_check_cookie(rax_1 ^ &var_d8)
return result
