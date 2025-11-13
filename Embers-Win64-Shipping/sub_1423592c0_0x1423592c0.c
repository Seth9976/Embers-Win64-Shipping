// 函数: sub_1423592c0
// 地址: 0x1423592c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2[8].d)
int32_t var_1d8 = rdx.d

if (rdx.d == 0)
    return 

int32_t rax_1 = arg2[0x16].d
int32_t rax = rax_1 - *(arg2 + 0xdc)

if (rax_1 == *(arg2 + 0xdc))
    return 

int32_t r12_1 = 0
int32_t rax_2 = 0
int32_t var_180_1 = 0
int64_t var_188 = 0
int32_t var_17c_1 = 0
int32_t temp2_1 = rdx.d

if (temp2_1 s> 0)
    int32_t var_180_2 = rdx.d
    sub_1409da3a0(&var_188)
else if (temp2_1 s< 0)
    int32_t rbx_2 = neg.d(rdx.d)
    
    if (rbx_2 != 0)
        int32_t rcx_2 = neg.d(rbx_2 + rdx.d)
        
        if (rcx_2 != 0)
            memmove(rdx * 0x74, nullptr, rcx_2 * 0x74)
            rax_2 = var_180_1
        
        int32_t var_180_3 = rax_2 - rbx_2
        sub_1409da7f0(&var_188)

int64_t rbx_3 = data_143f35cc8
void* const rcx_8

if (arg2[0x2b].d == *(arg2 + 0x184))
label_142359410_1:
    rcx_8 = nullptr
else
    int32_t rax_7 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
    void* r8_1 = &arg2[0x31]
    void* rcx_6 = *(r8_1 + 8)
    
    if (rcx_6 != 0)
        r8_1 = rcx_6
    
    int32_t rax_9 = *(r8_1 + (((sx.q(arg2[0x33].d) - 1) & sx.q(rax_7)) << 2))
    
    if (rax_9 == 0xffffffff)
    label_142359410_2:
        rcx_8 = nullptr
    else
        int64_t r8_2 = arg2[0x2a]
        
        while (true)
            int64_t rdx_5 = sx.q(rax_9) * 3
            rcx_8 = r8_2 + (rdx_5 << 3)
            
            if (*(r8_2 + (rdx_5 << 3)) == rbx_3)
                break
            
            rax_9 = *(rcx_8 + 0x10)
            
            if (rax_9 == 0xffffffff)
                goto label_142359410
        
        if (rax_9 == 0xffffffff)
        label_142359410:
            rcx_8 = nullptr

void* r13_1 = rcx_8 + 8

if (rcx_8 == 0)
    r13_1 = nullptr

void* const r13_2

if (r13_1 != 0)
    r13_2 = *r13_1

if (r13_1 == 0 || *(r13_2 + 8) != 1)
    r13_2 = nullptr

void* var_198
sub_14090aa40(&arg2[0x35], &var_198, data_143f360f8)
void* var_f8
sub_14090aa40(&arg2[0x35], &var_f8, data_143f36100)
int64_t rbx_4 = data_143f36108
void* const rcx_14

if (arg2[0x36].d == *(arg2 + 0x1dc))
label_1423594d0:
    rcx_14 = nullptr
else
    int32_t rax_12 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
    void* r8_5 = &arg2[0x3c]
    void* rcx_12 = *(r8_5 + 8)
    
    if (rcx_12 != 0)
        r8_5 = rcx_12
    
    int32_t rax_14 = *(r8_5 + (((sx.q(arg2[0x3e].d) - 1) & sx.q(rax_12)) << 2))
    
    if (rax_14 == 0xffffffff)
    label_1423594d0_1:
        rcx_14 = nullptr
    else
        int64_t r8_6 = arg2[0x35]
        
        while (true)
            int64_t rdx_11 = sx.q(rax_14) * 3
            rcx_14 = r8_6 + (rdx_11 << 3)
            
            if (*(r8_6 + (rdx_11 << 3)) == rbx_4)
                break
            
            rax_14 = *(rcx_14 + 0x10)
            
            if (rax_14 == 0xffffffff)
                goto label_1423594d0_2
        
        if (rax_14 == 0xffffffff)
        label_1423594d0_2:
            rcx_14 = nullptr

void* r15_1 = rcx_14 + 8

if (rcx_14 == 0)
    r15_1 = nullptr

void* const r15_2

if (r15_1 != 0)
    r15_2 = *r15_1

if (r15_1 == 0 || *(r15_2 + 8) != 3)
    r15_2 = nullptr

int64_t rbx_5 = data_143f36110
void* const rcx_18

if (arg2[0x36].d == *(arg2 + 0x1dc))
label_142359560:
    rcx_18 = nullptr
else
    int32_t rax_17 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
    void* r8_7 = &arg2[0x3c]
    void* rcx_16 = *(r8_7 + 8)
    
    if (rcx_16 != 0)
        r8_7 = rcx_16
    
    int32_t rax_19 = *(r8_7 + (((sx.q(arg2[0x3e].d) - 1) & sx.q(rax_17)) << 2))
    
    if (rax_19 == 0xffffffff)
    label_142359560_1:
        rcx_18 = nullptr
    else
        int64_t r8_8 = arg2[0x35]
        
        while (true)
            int64_t rdx_15 = sx.q(rax_19) * 3
            rcx_18 = r8_8 + (rdx_15 << 3)
            
            if (*(r8_8 + (rdx_15 << 3)) == rbx_5)
                break
            
            rax_19 = *(rcx_18 + 0x10)
            
            if (rax_19 == 0xffffffff)
                goto label_142359560_2
        
        if (rax_19 == 0xffffffff)
        label_142359560_2:
            rcx_18 = nullptr

void* rsi_1 = rcx_18 + 8

if (rcx_18 == 0)
    rsi_1 = nullptr

void* const var_148_1
void* rsi_2

if (rsi_1 != 0)
    rsi_2 = *rsi_1
    var_148_1 = rsi_2

if (rsi_1 == 0 || *(rsi_2 + 8) != 0)
    var_148_1 = nullptr

int64_t rbx_6 = data_143f360f0
void* const rcx_22

if (arg2[0x36].d == *(arg2 + 0x1dc))
label_1423595f0:
    rcx_22 = nullptr
else
    int32_t rax_22 = sub_140b5ead0(rbx_6.d) + rbx_6:4.d
    void* r8_9 = &arg2[0x3c]
    void* rcx_20 = *(r8_9 + 8)
    
    if (rcx_20 != 0)
        r8_9 = rcx_20
    
    int32_t rax_24 = *(r8_9 + (((sx.q(arg2[0x3e].d) - 1) & sx.q(rax_22)) << 2))
    
    if (rax_24 == 0xffffffff)
    label_1423595f0_1:
        rcx_22 = nullptr
    else
        int64_t r8_10 = arg2[0x35]
        
        while (true)
            int64_t rdx_19 = sx.q(rax_24) * 3
            rcx_22 = r8_10 + (rdx_19 << 3)
            
            if (*(r8_10 + (rdx_19 << 3)) == rbx_6)
                break
            
            rax_24 = *(rcx_22 + 0x10)
            
            if (rax_24 == 0xffffffff)
                goto label_1423595f0_2
        
        if (rax_24 == 0xffffffff)
        label_1423595f0_2:
            rcx_22 = nullptr

void* rbx_7 = rcx_22 + 8

if (rcx_22 == 0)
    rbx_7 = nullptr

void* const rbx_8

if (rbx_7 != 0)
    rbx_8 = *rbx_7

if (rbx_7 == 0 || *(rbx_8 + 8) != 2)
    rbx_8 = nullptr

int32_t var_1c0_1 = 0xffffffff
int32_t r11_1 = arg2[0xc].d
void* r9_1 = &arg2[9]
int64_t* var_1a0_1 = &arg2[7]
int64_t arg_20
arg_20.d = 1
int32_t rcx_23 = 0
int32_t var_1d0 = 0
int32_t r8_11 = 0
int32_t var_1cc_1 = 1
void* var_1c8_1 = r9_1
int64_t var_1bc_1 = 0

if (r11_1 != 0)
    void* rax_25 = *(r9_1 + 0x10)
    
    if (rax_25 != 0)
        r9_1 = rax_25
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11_1 - 1)
    int32_t rdx_23 = *r9_1
    
    if (rdx_23 != 0)
    label_14235969b:
        int32_t rax_32 = neg.d(rdx_23) & rdx_23
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_32)
        int32_t var_1cc_2 = rax_32
        int32_t rax_33
        
        if (rax_32 == 0)
            rax_33 = 0x20
        else
            rax_33 = 0x1f - temp0_2
        
        var_1bc_1.d = r8_11 - rax_33 + 0x1f
        
        if (r8_11 - rax_33 + 0x1f s> r11_1)
            var_1bc_1.d = r11_1
    else
        while (true)
            int64_t rdx_24 = sx.q(rcx_23)
            r8_11 += 0x20
            rcx_23 += 1
            var_1bc_1:4.d = r8_11
            var_1d0 = rcx_23
            
            if (rdx_24.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_23 = *(r9_1 + (rdx_24 << 2) + 4)
            var_1c0_1 = 0xffffffff
            
            if (rdx_23 != 0)
                goto label_14235969b
        
        var_1bc_1.d = r11_1

int32_t rdx_25 = arg2[0xc].d
void* r11_2 = &arg2[7]
double zmm0[0x2] = var_1d0.o
int32_t rdi_2 = *(r11_2 + 0x28)
void* r10_1 = r11_2 + 0x10
double zmm2[0x2] = var_1c0_1.o
int64_t* var_178 = r11_2
double var_170_1[0x2] = zmm0
zmm0 = var_178.o
double var_160_1[0x2] = zmm2
int32_t r14_1 = 0xffffffff << (rdx_25.b & 0x1f)
int32_t r9_3 = rdx_25 & 0xffffffe0
int32_t r8_14 = rdx_25 s>> 5
int64_t var_120_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
void* var_190_1 = r10_1
var_170_1[1].d = r14_1
var_170_1[1]:4.d = rdx_25
double var_140[0x2] = zmm0

if (rdx_25 != rdi_2)
    void* rax_35 = *(r10_1 + 0x10)
    
    if (rax_35 != 0)
        r10_1 = rax_35
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(rdi_2 - 1)
    int32_t rdx_29 = *(r10_1 + (sx.q(r8_14) << 2)) & r14_1
    
    if (rdx_29 != 0)
    label_142359782:
        int32_t rax_42 = neg.d(rdx_29) & rdx_29
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_42)
        int32_t rax_43
        
        if (rax_42 == 0)
            rax_43 = 0x20
        else
            rax_43 = 0x1f - temp0_4
        
        var_170_1[1]:4.d = r9_3 - rax_43 + 0x1f
        
        if (r9_3 - rax_43 + 0x1f s> rdi_2)
            var_170_1[1]:4.d = rdi_2
    else
        while (true)
            int64_t rcx_28 = sx.q(r8_14)
            r9_3 += 0x20
            r8_14 += 1
            
            if (rcx_28.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_29 = *(r10_1 + (rcx_28 << 2) + 4)
            var_170_1[1].d = 0xffffffff
            
            if (rdx_29 != 0)
                goto label_142359782
        
        var_170_1[1]:4.d = rdi_2
    
    r11_2 = var_1a0_1
    r10_1 = var_190_1

void* rdi_3 = var_198
void* r14_2 = var_f8
double zmm6[0x2]
double var_58_1[0x2] = zmm6
double zmm7[0x2]
double var_68_1[0x2] = zmm7
uint32_t rsi_4 = (var_170_1[1] u>> 0x20).d
double zmm8[0x2]
double var_78_1[0x2] = zmm8

while (true)
    int32_t rcx_30 = var_170_1[1]:4.d
    double rdx_30 = var_170_1[0]
    
    if (rcx_30 == rsi_4 && rdx_30 == r10_1 && var_140[0] == r11_2)
        break
    
    int32_t rax_45 = data_143a1c6b8
    
    if (rcx_30 s< *(rdx_30 i+ 0x18))
        rax_45 = rcx_30
    
    int64_t r10_2 = sx.q(rax_45)
    int64_t r8_15 = r10_2 * 3
    int64_t* r11_4 = r10_2 * 0x74 + var_188
    int64_t rdx_31 = sx.q(*(*var_1a0_1 + r10_2 * 0x18)) * 3
    int64_t rcx_33 = **(r13_2 + 0x18)
    *r11_4 = *(rcx_33 + (rdx_31 << 2))
    r11_4[1].d = *(rcx_33 + (rdx_31 << 2) + 8)
    int64_t rcx_34 = **(r14_2 + 0x18)
    *(r11_4 + 0xc) = *(rcx_34 + (r8_15 << 2))
    *(r11_4 + 0x14) = *(rcx_34 + (r8_15 << 2) + 8)
    int64_t r9_5 = **(r15_2 + 0x18)
    int64_t rdx_32 = **(r14_2 + 0x18)
    zmm2 = *(rdx_32 + (r8_15 << 2))
    int64_t rcx_35 = **(rdi_3 + 0x18)
    zmm8 = zmm2
    double zmm1[0x2] = *(rcx_35 + (r8_15 << 2) + 8)
    zmm6 = *(rcx_35 + (r8_15 << 2))
    zmm1[0].d = zmm1[0].d f* *(rdx_32 + (r8_15 << 2) + 4)
    double zmm5[0x2] = *(rcx_35 + (r8_15 << 2) + 4)
    zmm2[0].d = zmm2[0].d f* zmm5[0].d
    zmm7 = zmm5
    zmm7[0].d = zmm7[0].d f* *(rdx_32 + (r8_15 << 2) + 8)
    zmm8[0].d = zmm8[0].d f* zmm1[0].d
    zmm7[0].d = zmm7[0].d f- zmm1[0].d
    zmm6[0].d = zmm6[0].d f* *(rdx_32 + (r8_15 << 2) + 8)
    zmm6[0].d = zmm6[0].d f* *(rdx_32 + (r8_15 << 2) + 4)
    zmm8[0].d = zmm8[0].d f- zmm6[0].d
    zmm7[0].d = zmm7[0].d f* zmm7[0].d
    zmm6[0].d = zmm6[0].d f- zmm2[0].d
    zmm8[0].d = zmm8[0].d f* zmm8[0].d
    zmm6[0].d = zmm6[0].d f* zmm6[0].d
    zmm8[0].d = zmm8[0].d f+ zmm7[0].d
    zmm8[0].d = zmm8[0].d f+ zmm6[0].d
    
    if (not(zmm8[0].d f== 1f))
        if (zmm8[0].d f>= 9.99999994e-09f)
            double zmm4[0x2] = zx.o(0)
            zmm4[0].d = 0x3f000000
            zmm5 = _mm_rsqrt_ss(zmm8[0].d, zmm8[0].d)
            zmm8[0].d = zmm8[0].d f* 0.5f
            zmm5[0].d = zmm5[0].d f* zmm5[0].d
            zmm8[0].d = zmm8[0].d f* zmm5[0].d
            zmm4[0].d = zmm4[0].d f- zmm8[0].d
            zmm5[0].d = zmm5[0].d f* zmm4[0].d
            zmm5[0].d = zmm5[0].d f+ zmm5[0].d
            zmm5[0].d = zmm5[0].d f* zmm5[0].d
            zmm8[0].d = zmm8[0].d f* zmm5[0].d
            zmm4[0].d = 0.5f f- zmm8[0].d
            zmm5[0].d = zmm5[0].d f* zmm4[0].d
            zmm5[0].d = zmm5[0].d f+ zmm5[0].d
            var_198.d = zmm5[0].d
            zmm7[0].d = zmm7[0].d f* zmm5[0].d
            zmm8[0].d = zmm8[0].d f* zmm5[0].d
            zmm6[0].d = zmm6[0].d f* zmm5[0].d
        else
            zmm7 = data_143dbb1f8
            zmm8 = data_143dbb1fc
            zmm6 = data_143dbb200
    
    zmm0 = *(r9_5 + (r10_2 << 2))
    int32_t i = 0
    zmm6[0].d = zmm6[0].d f* zmm0[0].d
    zmm7[0].d = zmm7[0].d f* zmm0[0].d
    zmm8[0].d = zmm8[0].d f* zmm0[0].d
    var_1c8_1.d = zmm6[0].d
    r11_4[3] = (_mm_unpacklo_ps(zmm7, zmm8[0])).q
    r11_4[4].d = var_1c8_1.d
    int64_t rcx_36 = **(rdi_3 + 0x18)
    *(r11_4 + 0x24) = *(rcx_36 + (r8_15 << 2))
    *(r11_4 + 0x2c) = *(rcx_36 + (r8_15 << 2) + 8)
    
    if (*(rbx_8 + 0x20) s> 0)
        int64_t r8_16 = 0
        void* rdx_33 = &r11_4[6]
        
        do
            rdx_33 += 8
            i += 1
            r8_16 += 0x10
            int64_t rcx_37 = *(r8_16 + *(rbx_8 + 0x18) - 0x10)
            zmm1 = *(rcx_37 + (r10_2 << 3) + 4)
            *(rdx_33 - 8) = (*(rcx_37 + (r10_2 << 3)))[0].d
            *(rdx_33 - 4) = zmm1[0].d
        while (i s< *(rbx_8 + 0x20))
    
    var_170_1[1].d &= not.d(var_140[1]:4.d)
    sub_14059bdd0(&var_140[1])
    r10_1 = var_190_1
    r11_2 = var_1a0_1

r13_2.b = 0

if (var_148_1 != 0)
    void* r9_6 = r11_2 + 0x10
    int32_t var_1cc_3 = 1
    int32_t r11_5 = *(r9_6 + 0x18)
    int32_t rcx_39 = 0
    var_1d0 = 0
    int32_t r8_17 = 0
    var_1c8_1 = r9_6
    int32_t var_1c0_2 = 0xffffffff
    int64_t var_1bc_2 = 0
    
    if (r11_5 != 0)
        void* rax_61 = *(r9_6 + 0x10)
        
        if (rax_61 != 0)
            r9_6 = rax_61
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r11_5 - 1)
        int32_t rdx_36 = *r9_6
        
        if (rdx_36 != 0)
        label_142359b1b:
            int32_t rax_68 = neg.d(rdx_36) & rdx_36
            uint64_t rflags_3
            int32_t temp0_7
            temp0_7, rflags_3 = _bit_scan_reverse(rax_68)
            var_1cc_3 = rax_68
            int32_t rax_69
            
            if (rax_68 == 0)
                rax_69 = 0x20
            else
                rax_69 = 0x1f - temp0_7
            
            var_1bc_2.d = r8_17 - rax_69 + 0x1f
            
            if (r8_17 - rax_69 + 0x1f s> r11_5)
                var_1bc_2.d = r11_5
        else
            while (true)
                int64_t rdx_37 = sx.q(rcx_39)
                r8_17 += 0x20
                rcx_39 += 1
                var_1bc_2:4.d = r8_17
                var_1d0 = rcx_39
                
                if (rdx_37.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                    break
                
                rdx_36 = *(r9_6 + (rdx_37 << 2) + 4)
                var_1c0_2 = 0xffffffff
                
                if (rdx_36 != 0)
                    goto label_142359b1b
            
            var_1bc_2.d = r11_5
    
    int32_t rdi_4 = var_1a0_1[5].d
    zmm2 = var_1c0_2.o
    int32_t rdx_38 = var_1a0_1[5].d
    var_170_1 = var_1d0.o
    var_178 = var_1a0_1
    zmm0 = var_178.o
    r8_14 = rdx_38 s>> 5
    double var_160_2[0x2] = zmm2
    int32_t r14_3 = 0xffffffff << (rdx_38.b & 0x1f)
    int32_t r9_8 = rdx_38 & 0xffffffe0
    var_170_1[1].d = r14_3
    int64_t var_120_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_170_1[1]:4.d = rdx_38
    var_140 = zmm0
    
    if (rdx_38 != rdi_4)
        void* rax_72 = var_1a0_1[4]
        void* r10_3 = &var_1a0_1[2]
        
        if (rax_72 != 0)
            r10_3 = rax_72
        
        int32_t temp9_1
        int32_t temp10_1
        temp9_1:temp10_1 = sx.q(rdi_4 - 1)
        int32_t rdx_42 = *(r10_3 + (sx.q(r8_14) << 2)) & r14_3
        
        if (rdx_42 != 0)
        label_142359c02:
            int32_t rax_79 = neg.d(rdx_42) & rdx_42
            uint64_t rflags_4
            int32_t temp0_9
            temp0_9, rflags_4 = _bit_scan_reverse(rax_79)
            int32_t rax_80
            
            if (rax_79 == 0)
                rax_80 = 0x20
            else
                rax_80 = 0x1f - temp0_9
            
            var_170_1[1]:4.d = r9_8 - rax_80 + 0x1f
            
            if (r9_8 - rax_80 + 0x1f s> rdi_4)
                var_170_1[1]:4.d = rdi_4
        else
            while (true)
                int64_t rcx_44 = sx.q(r8_14)
                r9_8 += 0x20
                r8_14 += 1
                
                if (rcx_44.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                    break
                
                rdx_42 = *(r10_3 + (rcx_44 << 2) + 4)
                var_170_1[1].d = 0xffffffff
                
                if (rdx_42 != 0)
                    goto label_142359c02
            
            var_170_1[1]:4.d = rdi_4
    
    uint32_t r14_5 = (var_170_1[1] u>> 0x20).d
    
    while (true)
        int32_t rcx_46 = var_170_1[1]:4.d
        double rdx_43 = var_170_1[0]
        
        if (rcx_46 == r14_5 && rdx_43 == &var_1a0_1[2] && var_140[0] == var_1a0_1)
            break
        
        int32_t rax_82 = data_143a1c6b8
        
        if (rcx_46 s< *(rdx_43 i+ 0x18))
            rax_82 = rcx_46
        
        int64_t rdx_44 = sx.q(rax_82)
        void* rdi_6 = rdx_44 * 0x74 + var_188
        sub_140acc970(&var_1d0, (rdx_44 << 4) + **(var_148_1 + 0x18))
        
        if (var_1d0[0].d f!= data_14399f5c0.d || var_1cc_3[0].d f!= data_14399f5c0:4.d
                || var_1c8_1.d[0].d f!= data_14399f5c0:8.d
                || not(var_1c8_1:4.d[0].d f== data_14399f5c0:0xc.d))
            r13_2.b = 1
        
        r8_14.b = 1
        int32_t rcx_49 = *sub_140ae16d0(&var_1d0, &var_198, r8_14.b)
        int32_t rax_86 = not.d(var_140[1]:4.d)
        *(rdi_6 + 0x70) = rcx_49
        var_170_1[1].d &= rax_86
        sub_14059bdd0(&var_140[1])
    
    r12_1 = 0

r8_14.b = 1
sub_1422a3c20(arg3 + 0xf8, &var_188, r8_14.b)
sub_1422c87f0(arg3 + 0x70, &var_188, *(rbx_8 + 0x20), 1)

if (r13_2.b == 0)
    sub_1422a3d10(arg3 + 0x138, &data_14399f630, var_1d8, 0, 1)
else
    sub_1422a38b0(arg3 + 0x138, &var_188, 1)

sub_1409bd4b0(&arg2[0x61], &var_1d8, data_143f36150)
int64_t rax_87 = sx.q(var_1d8)
void* const rcx_55

if (rax_87.d == 0xffffffff)
    rcx_55 = nullptr
else
    rcx_55 = arg2[0x61] + rax_87 * 0x18

int64_t* rbx_9 = rcx_55 + 8

if (rcx_55 == 0)
    rbx_9 = nullptr

void* const var_190_2
void* const rbx_10

if (rbx_9 != 0)
    rbx_10 = *rbx_9
    var_190_2 = rbx_10

if (rbx_9 == 0 || *(rbx_10 + 8) != 6)
    rbx_10 = nullptr
    var_190_2 = nullptr

uint32_t rax_89 = 0
int64_t var_1b0 = 0
uint32_t var_1a8_1 = 0
int32_t var_1a4_1 = 0
uint32_t rsi_6 = rax * 3

if (rsi_6 s> 0)
    var_1a8_1 = rsi_6
    sub_1405a4cf0(&var_1b0)
    memset(var_1b0, 0, sx.q(rsi_6) << 2)
else if (rsi_6 s< 0)
    int32_t r14_7 = neg.d(rsi_6)
    
    if (r14_7 != 0)
        int32_t rcx_60 = neg.d(r14_7 + rsi_6)
        
        if (rcx_60 != 0)
            memmove(sx.q(rsi_6) << 2, nullptr, rcx_60 << 2)
            rax_89 = var_1a8_1
        
        var_1a8_1 = rax_89 - r14_7
        sub_1405dac90(&var_1b0)

void* r13_3 = arg3 + 0x10
var_178.d = 0
void* r15_5 = &arg2[0x23]
var_1d0.q = r13_3
int32_t rax_91 = *(r15_5 + 0x28)
void* r8_28 = r15_5 + 0x10
var_170_1[0] = r8_28
int32_t r14_8 = 1
var_198 = r15_5
int32_t rsi_7 = 0
var_178:4.d = 1
var_170_1[1].d = 0xffffffff
var_170_1[1] = 0
var_1d8 = rax_91

if (rax_91 != 0)
    sub_14059bdd0(&var_178)
    rax_91 = *(r15_5 + 0x28)
    r8_28 = r15_5 + 0x10
    var_1d8 = rax_91

int64_t rdi_8 = 0
double var_d0_1[0x2] = var_178.o
double var_c0_1[0x2] = var_170_1
double zmm2_1[0x2] = _mm_unpackhi_pd(var_170_1, var_170_1[0])
var_140 = r15_5.o
int64_t var_120_3 = zmm2_1.q

while (true)
    int32_t rcx_65 = var_d0_1[1]:4.d
    double rdx_54 = var_d0_1[0]
    
    if (rcx_65 == rax_91 && rdx_54 == r8_28 && var_140[0] == r15_5)
        break
    
    int32_t rax_92 = data_143a1c6c4
    
    if (rcx_65 s< *(rdx_54 i+ 0x18))
        rax_92 = rcx_65
    
    int64_t rax_93 = sx.q(rax_92)
    int64_t r14_10 = rax_93 * 2
    
    if (*(*r15_5 + (r14_10 << 3) + 8) == 0)
        r14_8 = arg_20.d
    else
        int64_t r15_6 = sx.q(*(r13_3 + 0x20))
        int32_t rax_95 = (r15_6 + 1).d
        *(r13_3 + 0x20) = rax_95
        
        if (rax_95 s> *(r13_3 + 0x24))
            sub_1409da440(r13_3, r15_6.d)
        
        void* rax_96 = *(r13_3 + 0x18)
        void* r11_6 = r13_3
        int64_t r13_4 = r15_6 * 3
        int32_t r15_7 = 0
        
        if (rax_96 != 0)
            r11_6 = rax_96
        
        int32_t r10_4 = -1
        void* rax_97 = var_198
        int32_t r9_11 = 0
        *(r11_6 + (r13_4 << 3)) = 0
        *(r11_6 + (r13_4 << 3) + 8) = 0
        *(r11_6 + (r13_4 << 3) + 0x10) = 0
        *(r11_6 + (r13_4 << 3) + 0x14) = 0x100
        *(r11_6 + (r13_4 << 3) + 0x16) = 0
        *(r11_6 + (r13_4 << 3) + 4) = rsi_7
        int64_t rax_98 = *rax_97
        int32_t* rcx_67 = *(rax_98 + (r14_10 << 3))
        int32_t* var_148_2 = rcx_67
        void* rax_100 = &rcx_67[sx.q(*(rax_98 + (r14_10 << 3) + 8))]
        var_f8 = rax_100
        
        if (rcx_67 != rax_100)
            do
                int64_t rcx_68 = sx.q(*rcx_67) * 5
                int64_t rax_102 = arg2[0x1c]
                int32_t* i_1 = *(rax_102 + (rcx_68 << 3) + 0x10)
                
                for (void* r13_5 = &i_1[sx.q(*(rax_102 + (rcx_68 << 3) + 0x18))]; i_1 != r13_5; 
                        i_1 = &i_1[1])
                    int64_t r11_7 = 3
                    int64_t r8_29 = 0
                    int32_t* rdx_58 = (sx.q(*i_1) << 4) + arg2[0x15]
                    
                    if (rdx_58 u> &rdx_58[3])
                        r11_7 = 0
                    
                    if (rdx_58 u<= &rdx_58[3])
                        do
                            int32_t rcx_69 = *rdx_58
                            rdx_58 = &rdx_58[1]
                            int32_t rax_105 = rcx_69
                            
                            if (r10_4 u<= rcx_69)
                                rax_105 = r10_4
                            
                            r10_4 = rax_105
                            int32_t rax_106 = rcx_69
                            
                            if (r9_11 u>= rcx_69)
                                rax_106 = r9_11
                            
                            rsi_7 += 1
                            r9_11 = rax_106
                            r8_29 += 1
                            *(var_1b0 + (rdi_8 << 2)) = rcx_69
                            rdi_8 += 1
                        while (r8_29 != r11_7)
                    
                    r15_7 += 1
                
                rcx_67 = &var_148_2[1]
                var_148_2 = rcx_67
            while (rcx_67 != var_f8)
            
            rbx_10 = var_190_2
        
        *(r11_6 + (r13_4 << 3) + 8) = r15_7
        *(r11_6 + (r13_4 << 3) + 0xc) = r10_4
        *(r11_6 + (r13_4 << 3) + 0x10) = r9_11
        void* r10_5 = *(arg1 + 0x68)
        void* rdx_59 = r10_5
        void* r8_32 = sx.q(*(arg1 + 0x70)) * 0x30 + r10_5
        int32_t rdx_60
        
        if (r10_5 == r8_32)
        label_14235a0b1:
            rdx_60 = -1
        else
            while (*(rdx_59 + 8) != *(**(rbx_10 + 0x18) + (rax_93 << 3)))
                rdx_59 += 0x30
                
                if (rdx_59 == r8_32)
                    goto label_14235a0b1
            
            rdx_60 = ((rdx_59 - r10_5) s/ 0x30).d
        
        r14_8 = arg_20.d
        r15_5 = var_198
        
        if (r9_11 u> 0xffff)
            r14_8 = 2
        
        *(r11_6 + (r13_4 << 3)) = rdx_60
        *(r11_6 + (r13_4 << 3) + 0x14) = 0x101
        r13_3 = var_1d0.q
        arg_20.d = r14_8
    
    var_d0_1[1].d &= not.d(var_140[1]:4.d)
    sub_14059bdd0(&var_140[1])
    rax_91 = var_1d8
    r8_28 = r15_5 + 0x10

sub_1422ac7c0(arg3 + 0x178, &var_1b0, r14_8)
int64_t rbx_12 = sx.q(var_1a8_1)
int32_t* rdx_65 = nullptr
int64_t rdi_9 = var_1b0
int32_t* var_118 = nullptr
int32_t var_110_1 = rbx_12.d

if (rbx_12.d != 0)
    sub_1405c4a90(&var_118, rbx_12.d, 0)
    memcpy(var_118, rdi_9, (rbx_12 << 2).d)
    rdx_65 = var_118
    rbx_12 = zx.q(var_110_1)
else
    int32_t var_10c_1 = 0

int64_t r9_12 = 0
void* rcx_76 = &rdx_65[sx.q(rbx_12.d)]
uint64_t r8_39 = (rcx_76 - rdx_65 + 3) u>> 2

if (rdx_65 u> rcx_76)
    r8_39 = 0

if (r8_39 != 0)
    do
        int64_t rax_119 = sx.q(*rdx_65)
        rdx_65 = &rdx_65[1]
        r9_12 += 1
        rdx_65[-1] = **((sx.q(*(*var_1a0_1 + rax_119 * 0x18)) << 5) + *arg2)
    while (r9_12 != r8_39)
    
    r12_1 = 0

*(arg3 + 0x44) |= 2
sub_1422ac7c0(arg3 + 0x1b8, &var_118, r14_8)
uint64_t rbx_13 = sx.q(var_1a8_1)
int32_t* r8_41 = nullptr
int64_t rdi_11 = var_1b0
*(arg3 + 0x48) = rax
int32_t* var_108 = nullptr
int32_t var_100_1 = rbx_13.d

if (rbx_13.d != 0)
    sub_1405c4a90(&var_108, rbx_13.d, 0)
    memcpy(var_108, rdi_11, (rbx_13 << 2).d)
    r8_41 = var_108
    rbx_13 = zx.q(var_1a8_1)
else
    int32_t var_fc_1 = 0

int32_t r9_13 = 0

if (rbx_13.d s> 0)
    int64_t rdx_71 = 0
    
    while (true)
        int32_t rcx_84 = *(r8_41 + rdx_71)
        r9_13 += 3
        *(r8_41 + rdx_71) = *(r8_41 + rdx_71 + 8)
        *(r8_41 + rdx_71 + 8) = rcx_84
        rdx_71 += 0xc
        
        if (r9_13 s>= var_1a8_1)
            break
        
        r8_41 = var_108

void*** rax_125 = j_sub_140a82f30(0x100)
void*** rax_126

if (rax_125 == 0)
    rax_126 = nullptr
else
    memset(rax_125, 0, 0x100)
    rax_126 = sub_14234ef20(rax_125)

*(arg3 + 0x44) |= 4
*(arg3 + 0x1f8) = rax_126
sub_1422ac7c0(rax_126, &var_108, r14_8)
int64_t rdi_12 = sx.q(var_110_1)
int32_t* rbx_15 = nullptr
int32_t* rsi_8 = var_118
var_1d0.q = 0
var_1c8_1.d = rdi_12.d

if (rdi_12.d != 0)
    sub_1405c4a90(&var_1d0, rdi_12.d, 0)
    rbx_15 = var_1d0.q
    memcpy(rbx_15, rsi_8, (rdi_12 << 2).d)

if (var_1a8_1 s> 0)
    int32_t* rdx_75 = rbx_15
    
    do
        int32_t rcx_90 = *rdx_75
        r12_1 += 3
        *rdx_75 = rdx_75[2]
        rdx_75[2] = rcx_90
        rdx_75 = &rdx_75[3]
    while (r12_1 s< var_1a8_1)

void* rcx_91 = *(arg3 + 0x1f8)
*(arg3 + 0x44) |= 8
sub_1422ac7c0(rcx_91 + 0x40, &var_108, r14_8)
*(arg3 + 0x44) &= 0xfffffffe

if (rbx_15 != 0)
    sub_140a74f90(rbx_15)

int32_t* rcx_94 = var_108

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

int32_t* rcx_95 = var_118

if (rcx_95 != 0)
    sub_140a74f90(rcx_95)

int64_t rcx_96 = var_1b0

if (rcx_96 != 0)
    sub_140a74f90(rcx_96)

int64_t rcx_97 = var_188

if (rcx_97 != 0)
    sub_140a74f90(rcx_97)
