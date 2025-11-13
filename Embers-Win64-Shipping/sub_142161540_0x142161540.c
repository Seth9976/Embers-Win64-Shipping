// 函数: sub_142161540
// 地址: 0x142161540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t var_8c = 0x80
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
uint128_t zmm6
zmm6.q = float.d(performanceCount)
int32_t* r12 = &arg1[2]
int32_t rcx_1 = 0
int32_t r8 = 0
zmm6.q = zmm6.q f* data_143d796f8
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t var_78 = 0
zmm6.q = zmm6.q f+ 16777216.0
int32_t var_70 = 0
int32_t r11 = r12[6]
int32_t var_1f8 = 0
int32_t var_1f4 = 1
int32_t var_1e8 = 0xffffffff
int64_t var_1e4 = 0

if (r11 != 0)
    int32_t* rax_2 = *(r12 + 0x10)
    int32_t* r9_1 = r12
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14216167c:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_1f4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_1e4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_1e4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_1e4:4.d = r8
            var_1f8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            var_1e8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14216167c
        
        var_1e4.d = r11

uint128_t zmm4 = var_1e8.o
int64_t* var_170 = arg1
uint128_t zmm0 = var_1f8.o
uint128_t var_180 = zmm4
int16_t var_1a0 = 0
void* rax_12 = zmm0.q
uint128_t var_1c8 = zmm0
int128_t var_1d8 = arg1.o
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
var_180 = zmm0
uint128_t var_1b8 = zmm0

if (_mm_bsrli_si128(zmm4, 4).d s< *(rax_12 + 0x18))
    int32_t i = var_1c8:0xc.d
    
    do
        int64_t r15_1 = *var_1d8.q
        int32_t* r14_1 = sx.q(i) * 0x38
        double zmm1[0x2] = zx.o(*(r14_1 + r15_1 + 0x20))
        void* rdi_1 = r14_1 + r15_1
        
        if (zmm1[0] == 0.0)
            if (sub_140d3e110(rdi_1 + 8) == 0)
                *(rdi_1 + 0x20) = zmm6.q
            else if ((*(r14_1 + r15_1) & 1) != 0)
                int64_t rax_17 = *(rdi_1 + 8)
                int32_t rsi_3 = (rax_17 u>> 0x20).d ^ rax_17.d
                int32_t var_168
                sub_14215b340(&var_b8, &var_168, rsi_3, rdi_1 + 8)
                int64_t rax_18 = sx.q(var_168)
                void* r10_1
                
                if (rax_18.d != 0xffffffff)
                    r10_1 = var_b8 + rax_18 * 0x14
                
                if (rax_18.d == 0xffffffff || r10_1 == 0)
                    sub_140a9e570(&var_b8, &var_1f8)
                    *r12 = *(rdi_1 + 8)
                    r12[2] = 0
                    char* var_200_1 = nullptr
                    int32_t rax_21 = var_1f8
                    r12[3] = 0xffffffff
                    sub_141faf520(&var_b8, &performanceCount, rsi_3, r12, rax_21, var_200_1)
                    r10_1 = var_b8 + sx.q(performanceCount.d) * 0x14
                
                int64_t r9_4 = sx.q(*(r10_1 + 8))
                int32_t rax_24 = *(r14_1 + r15_1)
                
                if (r9_4.d == 0)
                    *(r10_1 + 8) = rax_24
                else if (r9_4.d u>= rax_24)
                    *(rdi_1 + 0x20) = zmm6.q
                else
                    int32_t* rcx_13
                    
                    if (arg1[1].d == *(arg1 + 0x34))
                        rcx_13 = nullptr
                    else
                        void* rcx_10 = arg1[8]
                        void* r8_4 = &arg1[7]
                        
                        if (rcx_10 != 0)
                            r8_4 = rcx_10
                        
                        int32_t rax_26 = *(r8_4 + (((sx.q(arg1[9].d) - 1) & r9_4) << 2))
                        
                        if (rax_26 == 0xffffffff)
                            rcx_13 = nullptr
                        else
                            while (true)
                                rcx_13 = sx.q(rax_26) * 0x38 + *arg1
                                
                                if (*rcx_13 == r9_4.d)
                                    break
                                
                                rax_26 = rcx_13[0xc]
                                
                                if (rax_26 == 0xffffffff)
                                    *0x20 = zmm6.q
                                    *(r10_1 + 8) = *(r14_1 + r15_1)
                                    goto label_1421618ce
                            
                            if (rax_26 == 0xffffffff)
                                rcx_13 = nullptr
                    
                    *(rcx_13 + 0x20) = zmm6.q
                    *(r10_1 + 8) = *(r14_1 + r15_1)
        else
            zmm0.q = zmm6.q f- zmm1[0]
            
            if (not(zmm0.q f<= 0x4056800000000000))
                sub_141a612d0(var_1b8:8.q, i)
                var_1a0.b = 1
        
    label_1421618ce:
        var_1c8:8.d &= not.d(var_1d8:0xc.d)
        sub_14059bdd0(&var_1d8:8)
        i = var_1c8:0xc.d
    while (i s< *(var_1c8.q + 0x18))
    
    if (var_1a0.b != 0 && var_1a0:1.b != 0)
        sub_140aecff0(arg1, arg1[1].d - *(arg1 + 0x34), 1)

int32_t r11_1 = arg1[0xf].d
void* r9_5 = &arg1[0xc]
int32_t var_1f4_2 = 1
int32_t rcx_16 = 0
var_1f8 = 0
int32_t r8_7 = 0
void* var_1f0_1 = r9_5
int32_t var_1e8_1 = 0xffffffff
int64_t var_1e4_1 = 0

if (r11_1 != 0)
    void* rax_32 = *(r9_5 + 0x10)
    
    if (rax_32 != 0)
        r9_5 = rax_32
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_17 = *r9_5
    
    if (rdx_17 != 0)
    label_1421619ab:
        int32_t rax_39 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_39)
        int32_t var_1f4_3 = rax_39
        int32_t rax_40
        
        if (rax_39 == 0)
            rax_40 = 0x20
        else
            rax_40 = 0x1f - temp0_5
        
        var_1e4_1.d = r8_7 - rax_40 + 0x1f
        
        if (r8_7 - rax_40 + 0x1f s> r11_1)
            var_1e4_1.d = r11_1
    else
        while (true)
            int64_t rdx_18 = sx.q(rcx_16)
            r8_7 += 0x20
            rcx_16 += 1
            var_1e4_1:4.d = r8_7
            var_1f8 = rcx_16
            
            if (rdx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r9_5 + (rdx_18 << 2) + 4)
            var_1e8_1 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_1421619ab
        
        var_1e4_1.d = r11_1

zmm4 = var_1e8_1.o
void* var_170_1 = &arg1[0xa]
zmm0 = var_1f8.o
uint128_t var_180_1 = zmm4
int16_t var_1a0_1 = 0
uint128_t var_1c8_1 = zmm0
void* rax_42 = zmm0.q
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
int32_t rcx_18 = _mm_bsrli_si128(zmm4, 4).d
var_1d8 = (&arg1[0xa]).o
var_180_1 = zmm0

if (rcx_18 s< *(rax_42 + 0x18))
    int32_t i_1 = var_1c8_1:0xc.d
    
    do
        int64_t* rsi_4 = var_1d8.q
        int64_t r14_2 = sx.q(i_1) * 5
        
        if (sub_140d3e110(*rsi_4 + (r14_2 << 2)) == 0 || arg1[1].d == *(arg1 + 0x34))
        label_142161ab6:
            sub_140bb6730(zmm0:8.q, i_1)
            var_1a0_1.b = 1
        else
            int64_t r9_6 = sx.q(*(*rsi_4 + (r14_2 << 2) + 8))
            void* r8_9 = &arg1[7]
            void* rdx_19 = *(r8_9 + 8)
            
            if (rdx_19 != 0)
                r8_9 = rdx_19
            
            int32_t rax_46 = *(r8_9 + (((sx.q(arg1[9].d) - 1) & r9_6) << 2))
            
            if (rax_46 == 0xffffffff)
                goto label_142161ab6
            
            int64_t r8_10 = *arg1
            
            while (true)
                int32_t* rdx_20 = sx.q(rax_46) * 0x38
                
                if (*(rdx_20 + r8_10) == r9_6.d)
                    break
                
                rax_46 = *(rdx_20 + r8_10 + 0x30)
                
                if (rax_46 == 0xffffffff)
                    goto label_142161ab6
            
            if (rax_46 == 0xffffffff)
                goto label_142161ab6
        
        var_1c8_1:8.d &= not.d(var_1d8:0xc.d)
        sub_14059bdd0(&var_1d8:8)
        i_1 = var_1c8_1:0xc.d
    while (i_1 s< *(var_1c8_1.q + 0x18))
    
    if (var_1a0_1.b != 0 && var_1a0_1:1.b != 0)
        sub_14084bdb0(&arg1[0xa], arg1[0xb].d - *(arg1 + 0x84), 1)

int32_t r10_2 = r12[6]
int32_t rcx_29 = 0
int32_t r8_12 = 0
var_1f8 = 0
int32_t var_1f4_4 = 1
int32_t* var_1f0_2 = r12
int32_t var_1e8_2 = 0xffffffff
int64_t var_1e4_2 = 0

if (r10_2 != 0)
    int32_t* rax_50 = *(r12 + 0x10)
    
    if (rax_50 != 0)
        r12 = rax_50
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10_2 - 1)
    int32_t rdx_26 = *r12
    
    if (rdx_26 != 0)
    label_142161b9b:
        int32_t rax_57 = neg.d(rdx_26) & rdx_26
        uint64_t rflags_3
        int32_t temp0_8
        temp0_8, rflags_3 = _bit_scan_reverse(rax_57)
        int32_t var_1f4_5 = rax_57
        int32_t rax_58
        
        if (rax_57 == 0)
            rax_58 = 0x20
        else
            rax_58 = 0x1f - temp0_8
        
        var_1e4_2.d = r8_12 - rax_58 + 0x1f
        
        if (r8_12 - rax_58 + 0x1f s> r10_2)
            var_1e4_2.d = r10_2
    else
        while (true)
            int64_t rdx_27 = sx.q(rcx_29)
            r8_12 += 0x20
            rcx_29 += 1
            var_1e4_2:4.d = r8_12
            var_1f8 = rcx_29
            
            if (rdx_27.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_26 = r12[rdx_27 + 1]
            var_1e8_2 = 0xffffffff
            
            if (rdx_26 != 0)
                goto label_142161b9b
        
        var_1e4_2.d = r10_2

zmm4 = var_1e8_2.o
zmm0 = var_1f8.o
int64_t* var_170_2 = arg1
uint128_t var_180_2 = zmm4
int16_t var_1a0_2 = 0
uint128_t var_1c8_2 = zmm0
void* rax_60 = zmm0.q
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
int32_t rcx_31 = _mm_bsrli_si128(zmm4, 4).d
var_1d8 = arg1.o
var_180_2 = zmm0
uint128_t var_1b8_2 = zmm0

if (rcx_31 s< *(rax_60 + 0x18))
    do
        var_1c8_2:8.d &= not.d(var_1d8:0xc.d)
        sub_14059bdd0(&var_1d8:8)
    while (var_1c8_2:0xc.d s< *(var_1c8_2.q + 0x18))
    
    if (var_1a0_2.b != 0 && var_1a0_2:1.b != 0)
        sub_140aecff0(arg1, arg1[1].d - *(arg1 + 0x34), 1)

int32_t r10_3 = arg1[0xf].d
void* r9_7 = &arg1[0xc]
int32_t var_1f4_6 = 1
int32_t rcx_35 = 0
var_1f8 = 0
int32_t r8_15 = 0
void* var_1f0_3 = r9_7
int32_t var_1e8_3 = 0xffffffff
int64_t var_1e4_3 = 0

if (r10_3 != 0)
    void* rax_64 = *(r9_7 + 0x10)
    
    if (rax_64 != 0)
        r9_7 = rax_64
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r10_3 - 1)
    int32_t rdx_32 = *r9_7
    
    if (rdx_32 != 0)
    label_142161cfb:
        int32_t rax_71 = neg.d(rdx_32) & rdx_32
        uint64_t rflags_4
        int32_t temp0_11
        temp0_11, rflags_4 = _bit_scan_reverse(rax_71)
        int32_t var_1f4_7 = rax_71
        int32_t r13_1
        
        if (rax_71 == 0)
            r13_1 = 0x20
        else
            r13_1 = 0x1f - temp0_11
        
        var_1e4_3.d = r8_15 - r13_1 + 0x1f
        
        if (r8_15 - r13_1 + 0x1f s> r10_3)
            var_1e4_3.d = r10_3
    else
        while (true)
            int64_t rdx_33 = sx.q(rcx_35)
            r8_15 += 0x20
            rcx_35 += 1
            var_1e4_3:4.d = r8_15
            var_1f8 = rcx_35
            
            if (rdx_33.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                break
            
            rdx_32 = *(r9_7 + (rdx_33 << 2) + 4)
            var_1e8_3 = 0xffffffff
            
            if (rdx_32 != 0)
                goto label_142161cfb
        
        var_1e4_3.d = r10_3

zmm4 = var_1e8_3.o
zmm0 = var_1f8.o
void* var_170_3 = &arg1[0xa]
uint128_t var_180_3 = zmm4
int16_t var_1a0_3 = 0
uint128_t var_1c8_3 = zmm0
void* rax_73 = zmm0.q
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
int32_t rcx_37 = _mm_bsrli_si128(zmm4, 4).d
var_1d8 = (&arg1[0xa]).o
uint128_t var_1b8_3 = zmm0

if (rcx_37 s< *(rax_73 + 0x18))
    do
        var_1c8_3:8.d &= not.d(var_1d8:0xc.d)
        sub_14059bdd0(&var_1d8:8)
    while (var_1c8_3:0xc.d s< *(var_1c8_3.q + 0x18))
    
    if (var_1a0_3.b != 0 && var_1a0_3:1.b != 0)
        sub_14084bdb0(&arg1[0xa], arg1[0xb].d - *(arg1 + 0x84), 1)

void** var_158
sub_140b4c2a0(&var_158)
char var_12e
char var_12e_1 = var_12e | 0x80
var_158 = &data_1432e2440
int64_t var_c8 = 0
sub_140a50fd0(&var_158, sx.q(arg1[1].d) * 0x38, sx.q(*(arg1 + 0xc)) * 0x38)
var_158[1](&var_158, zx.q(arg1[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x2c) + 0x1f) u>> 5 << 2)
int64_t rdx_42 = sx.q(arg1[9].d) << 2
var_158[1](&var_158, rdx_42, rdx_42)
var_158[1](&var_158, sx.q(arg1[0xb].d) * 0x14, sx.q(*(arg1 + 0x5c)) * 0x14)
var_158[1](&var_158, zx.q(arg1[0xf].d + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x7c) + 0x1f) u>> 5 << 2)
int64_t rdx_50 = sx.q(arg1[0x13].d) << 2
var_158[1](&var_158, rdx_50, rdx_50)
sub_140b4cb40(&var_158)
int32_t var_70_1 = 0

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t var_b0
bool cond:6 = var_b0:4.d == 0
var_b0.d = 0

if (not(cond:6))
    sub_1405c55e0(&var_b8, 0)

int32_t var_88_1 = 0xffffffff
int32_t var_84_1 = 0
int64_t var_a8
void* result = sub_14059a8e0(&var_a8, 0)
int64_t var_98

if (var_98 != 0)
    result = sub_140a74f90(var_98)

int64_t rcx_53 = var_b8

if (rcx_53 != 0)
    result = sub_140a74f90(rcx_53)

__security_check_cookie(rax_1 ^ &var_228)
return result
