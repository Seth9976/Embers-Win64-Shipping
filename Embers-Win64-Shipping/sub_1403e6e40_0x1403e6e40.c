// 函数: sub_1403e6e40
// 地址: 0x1403e6e40
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
void* var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rdx_1 = *(arg1 + 0x1200)
var_98 = arg1 + 0x20
int32_t rdi_1 = rdx_1 s>> 2
int32_t rbx_1 = rdx_1 s>> 3
int32_t rsi_1 = rdx_1 s>> 1
int32_t r14 = rbx_1 + rdi_1
int32_t var_68 = 0
int32_t r13 = r14 + rbx_1
int32_t var_64 = r14
int32_t r8 = rdi_1 + r13
int32_t var_60 = r13
int32_t var_5c = r8
int64_t rcx_2 = sx.q(r8 + rsi_1) * 2
int64_t rax_3 = rcx_2 + 0xf

if (rax_3 u<= rcx_2)
    rax_3 = 0xffffffffffffff0

int64_t rax_4 = rax_3 & 0xfffffffffffffff0
__chkstk(rax_4)
void var_c8
void* rsp_1 = &var_c8 - rax_4
*(rsp_1 + 0x20) = rdx_1
int64_t rdx
sub_1403e86d0(rdx, var_98, rsp_1 + 0x30, rsp_1 + 0x30 + (sx.q(r8) << 1))
void* rdx_4 = var_98 + 8
*(rsp_1 + 0x20) = rsi_1
sub_1403e86d0(rsp_1 + 0x30, rdx_4, rsp_1 + 0x30, rsp_1 + 0x30 + (sx.q(r13) << 1))
void* rsi_2 = var_98
*(rsp_1 + 0x20) = rdi_1
sub_1403e86d0(rsp_1 + 0x30, rsi_2 + 0x10, rsp_1 + 0x30, rsp_1 + 0x30 + (sx.q(r14) << 1))
int64_t rax_8 = sx.q(rbx_1)
int32_t i = rbx_1 - 1
*(rsp_1 + 0x30 + (rax_8 << 1) - 2) s>>= 1
int16_t r9_3 = *(rsp_1 + 0x30 + (rax_8 << 1) - 2)

if (i s> 0)
    void* rdx_6 = rsp_1 + 0x30 + (sx.q(i) << 1)
    
    do
        *(rdx_6 - 2) s>>= 1
        i -= 1
        *rdx_6 -= *(rdx_6 - 2)
        rdx_6 -= 2
    while (i s> 0)

int64_t r14_1 = 0
*(rsp_1 + 0x30) -= *(rsi_2 + 0x38)
*(rsi_2 + 0x38) = r9_3
int64_t i_4 = 4
int32_t i_1 = 4
int32_t var_58
void* rax_13 = rsi_2 - &var_58
void* r8_4 = rax_13 + 0x18
void* var_70 = r8_4

do
    char rax_14 = 3
    int32_t j = 0
    
    if (i_1 s< 3)
        rax_14 = i_1.b
    
    int64_t rdi_2 = 0
    void* rsi_3 = &var_58 + r14_1
    void* rax_15 = r8_4 + rsi_3
    int64_t k_2 = sx.q(*(arg1 + 0x1200) s>> rax_14 s>> 2)
    int32_t r8_5 = *rax_15
    *rsi_3 = r8_5
    int32_t r9_4
    
    do
        r9_4 = 0
        
        if (k_2 s> 0)
            int64_t k_1 = k_2
            void* rax_18 = rsp_1 + 0x30 + ((sx.q(*(&var_68 + r14_1)) + rdi_2) << 1)
            int64_t k
            
            do
                int32_t rcx_8 = sx.d(*rax_18)
                rax_18 += 2
                int32_t rdx_10 = sx.d((rcx_8 s>> 3).w)
                r9_4 += rdx_10 * rdx_10
                k = k_1
                k_1 -= 1
            while (k != 1)
        
        if (j s>= 3)
            r8_5 += r9_4 s>> 1
        else
            r8_5 += r9_4
        
        if (test_bit(r8_5, 0x1f))
            r8_5 = 0x7fffffff
        
        j += 1
        rdi_2 += k_2
        *rsi_3 = r8_5
    while (j s< 4)
    
    r8_4 = var_70
    i_1 -= 1
    r14_1 += 4
    *rax_15 = r9_4
while (i_1 s> 0)

sub_1403e6d10(&var_58, var_98)
void* rdx_13 = rax_13
int32_t r13_1 = 0
void* var_90_1
var_90_1.d = 0
int64_t rdi_3 = 0
int64_t i_5 = 4
int64_t i_2

do
    void* rcx_11 = &var_58 + rdi_3
    int32_t rax_22 = *rcx_11
    int32_t rbx_3 = rax_22 - *(rdx_13 + rcx_11 + 0x3c)
    
    if (rbx_3 s<= 0)
        *(&var_68 + rdi_3) = 0x100
    else
        int32_t rax_25
        int32_t r8_6
        
        if ((rax_22 & 0xff800000) != 0)
            rax_25 = divs.dp.d(sx.q(rax_22), (r8_6 s>> 8) + 1)
        else
            rax_25 = divs.dp.d(sx.q(rax_22 << 8), r8_6 + 1)
        *(&var_68 + rdi_3) = rax_25
        int16_t rax_28 = sub_1403df070(rax_25) - 0x400
        int32_t r9_5 = sx.d(rax_28)
        r13_1 += r9_5 * r9_5
        
        if (rbx_3 s< 0x100000)
            uint64_t rflags_1
            int32_t temp0_3
            temp0_3, rflags_1 = _bit_scan_reverse(rbx_3)
            int32_t rax_30 = rbx_3
            
            if (0x18 != 0x1f - temp0_3)
                if (0x18 - (0x1f - temp0_3) s>= 0)
                    rax_30 = ror.d(rax_30, (0x18 - (0x1f - temp0_3)).b)
                else
                    rax_30 = rol.d(rax_30, (neg.d(0x18 - (0x1f - temp0_3))).b)
            
            int32_t r8_9 = 0xb486
            
            if (((0x1f - temp0_3).b & 1) != 0)
                r8_9 = 0x8000
            
            int32_t r8_10 = r8_9 s>> ((0x1f - temp0_3) s>> 1).b
            int32_t rdx_20 = sx.d((rax_30.w & 0x7f) * 0xd5)
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rbx_3)
            
            if (0x18 != 0x1f - temp0_4)
                if (0x18 - (0x1f - temp0_4) s>= 0)
                    rbx_3 = ror.d(rbx_3, (0x18 - (0x1f - temp0_4)).b)
                else
                    rbx_3 = rol.d(rbx_3, (neg.d(0x18 - (0x1f - temp0_4))).b)
            
            int32_t r8_11 = 0xb486
            
            if (((0x1f - temp0_4).b & 1) != 0)
                r8_11 = 0x8000
            
            int32_t r8_12 = r8_11 s>> ((0x1f - temp0_4) s>> 1).b
            int32_t rdx_23 = sx.d((rbx_3.w & 0x7f) * 0xd5)
            rax_28 = (((((((zx.d(r8_12.w) * rdx_23) s>> 0x10) + r8_12 + (r8_12 s>> 0x10) * rdx_23)
                & 0x3ff) << 6) * r9_5) s>> 0x10).w + (((r8_10 s>> 0x10) * rdx_20
                + ((zx.d(r8_10.w) * rdx_20) s>> 0x10) + r8_10) << 6 s>> 0x10).w * r9_5.w
        
        int32_t rax_46 = sx.d(rax_28)
        int32_t rdx_24 = *(rdi_3 + &data_1436fda80)
        var_90_1.d = (rdx_24 s>> 0x10) * rax_46 + var_90_1.d + ((zx.d(rdx_24.w) * rax_46) s>> 0x10)
        rdx_13 = rax_13
    
    rdi_3 += 4
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
int32_t r12 = i_5.d
int32_t temp16
int32_t temp17
temp16:temp17 = sx.q(r13_1)
int32_t rax_50 = (temp17 + (temp16 & 3)) s>> 2
int32_t r8_13 = rax_50
int32_t rdi_4
int16_t r8_14

if (rax_50 s> 0)
    uint64_t rflags_3
    int32_t temp0_5
    temp0_5, rflags_3 = _bit_scan_reverse(rax_50)
    
    if (0x18 != 0x1f - temp0_5)
        if (0x18 - (0x1f - temp0_5) s>= 0)
            r8_13 = ror.d(r8_13, (0x18 - (0x1f - temp0_5)).b)
        else
            r8_13 = rol.d(r8_13, (neg.d(0x18 - (0x1f - temp0_5))).b)
    
    rdi_4 = 0xb486
    int32_t rdx_31 = 0xb486
    
    if (((0x1f - temp0_5).b & 1) != 0)
        rdx_31 = 0x8000
    
    int32_t rdx_32 = rdx_31 s>> ((0x1f - temp0_5) s>> 1).b
    int32_t rcx_31 = sx.d((r8_13.w & 0x7f) * 0xd5)
    r8_14 = (rdx_32 s>> 0x10).w * rcx_31.w + ((zx.d(rdx_32.w) * rcx_31) s>> 0x10).w + rdx_32.w
else
    r8_14 = r12.w
    rdi_4 = 0xb486

int32_t rbx_5 = sub_1403e8810(((sx.d(r8_14 * 3) * 0xafc8) s>> 0x10) - 0x80)
uint64_t rax_58 = sub_1403e8810(var_90_1.d)
void* r9_8 = var_98
*(arg1 + 0x1298) = ((rax_58 << 1) + -0xffffffffffff8000).d
int32_t var_54
int32_t var_50
int32_t var_4c
int32_t r8_20 = ((var_50 - *(r9_8 + 0x44)) s>> 4) * 3
    + ((((var_54 - *(r9_8 + 0x40)) s>> 4) + ((var_4c - *(r9_8 + 0x48)) s>> 4 << 1)) << 1)
    + ((var_58 - *(r9_8 + 0x3c)) s>> 4)

if (r8_20 s<= 0)
    rbx_5 s>>= 1
else if (r8_20 s< 0x8000)
    int32_t rdx_39
    
    if (*(arg1 + 0x1200) != *(arg1 + 0x11f8) * 0xa)
        int32_t rdx_38 = 0xffff
        
        if (r8_20 s<= 0xffff)
            rdx_38 = r8_20
            
            if (r8_20 s< 0xffff0000)
                rdx_38 = -0x10000
        
        rdx_39 = rdx_38 << 0xf
    else
        int32_t rdx_37 = 0x7fff
        
        if (r8_20 s<= 0x7fff)
            rdx_37 = r8_20
            
            if (r8_20 s< 0xffff8000)
                rdx_37 = -0x8000
        
        rdx_39 = rdx_37 << 0x10
    
    if (rdx_39 s> 0)
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rdx_39)
        
        if (0x18 != 0x1f - temp0_6)
            if (0x18 - (0x1f - temp0_6) s>= 0)
                rdx_39 = ror.d(rdx_39, (0x18 - (0x1f - temp0_6)).b)
            else
                rdx_39 = rol.d(rdx_39, (neg.d(0x18 - (0x1f - temp0_6))).b)
        
        if (((0x1f - temp0_6).b & 1) != 0)
            rdi_4 = 0x8000
        
        int32_t rdi_5 = rdi_4 s>> ((0x1f - temp0_6) s>> 1).b
        int32_t rdx_41 = sx.d((rdx_39.w & 0x7f) * 0xd5)
        r12 = (rdi_5 s>> 0x10) * rdx_41 + ((zx.d(rdi_5.w) * rdx_41) s>> 0x10) + rdi_5
    
    int32_t rcx_45 = sx.d(rbx_5.w)
    rbx_5 = ((zx.d(r12.w - 0x8000) * rcx_45) s>> 0x10) + ((r12 + 0x8000) s>> 0x10) * rcx_45

int32_t rax_77 = 0xff
int32_t rcx_47 = rbx_5 s>> 7

if (rcx_47 s< 0xff)
    rax_77 = rcx_47

*(arg1 + 0x11cc) = rax_77
int32_t rdx_44 = sx.d(((zx.d(rbx_5.w) * sx.d(rbx_5.w)) s>> 0x10).w + (rbx_5 s>> 0x10).w * rbx_5.w)
    << 0xc s>> 0x10

if (*(arg1 + 0x1200) == *(arg1 + 0x11f8) * 0xa)
    rdx_44 s>>= 1

int32_t rdi_6 = sx.d(rdx_44.w)
void* rbx_9 = r9_8 + 0x28
int64_t i_3

do
    int32_t rcx_53 = *rbx_9
    int32_t rdx_46 = *(&var_68 - r9_8 + rbx_9 - 0x28) - rcx_53
    int32_t rcx_55 = rcx_53 + ((zx.d(rdx_46.w) * rdi_6) s>> 0x10) + (rdx_46 s>> 0x10) * rdi_6
    *rbx_9 = rcx_55
    int32_t rax_86 = sub_1403df070(rcx_55) - 0x400
    i_3 = i_4
    i_4 -= 1
    rbx_9 += 4
    *(arg1 - r9_8 + rbx_9 + 0x125c) = sub_1403e8810((rax_86 + ((rax_86 - 0x400) << 1)) s>> 4)
while (i_3 != 1)
__security_check_cookie(rax_1 ^ &var_98)
return 0
