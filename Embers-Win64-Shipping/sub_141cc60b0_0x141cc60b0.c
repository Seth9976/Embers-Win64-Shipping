// 函数: sub_141cc60b0
// 地址: 0x141cc60b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
uint64_t var_48 = __security_cookie ^ &var_1a8
int32_t r14 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_178
int64_t* var_170
int32_t var_150
void* i_3

while (true)
    uint64_t rax_1
    
    if (r14 s< 0 || r14 s>= arg2[1].d)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        break
    
    void* i_4 = *(*arg2 + (sx.q(r14) << 3))
    int32_t rax_3 = *(arg1 + 0x1c8)
    i_3 = i_4
    *(arg1 + 0x1f4)
    void* i_5
    
    if (rax_3 == *(arg1 + 0x1f4))
    labelid_7:
        i_5 = nullptr
    else
        int32_t rax_5 = sub_140b5ead0(i_4.d) + i_3:4.d
        void* r8_1 = arg1 + 0x1f8
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        rax_1 = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x208)) - 1) & sx.q(rax_5)) << 2)))
        
        if (rax_1.d == 0xffffffff)
        label_141cc61f9:
            i_5 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x1c0)
            void* rcx_3
            
            while (true)
                int64_t rdx_3 = sx.q(rax_1.d) * 3
                rcx_3 = r8_2 + (rdx_3 << 3)
                
                if (*(r8_2 + (rdx_3 << 3)) == i_4)
                    break
                
                rax_1 = zx.q(*(rcx_3 + 0x10))
                
                if (rax_1.d == 0xffffffff)
                    goto label_141cc61f9_2
            
            if (rax_1.d == 0xffffffff)
            label_141cc61f9_1:
                i_5 = nullptr
            else
                i_5 = rcx_3 + 8
                
                if (rcx_3 == 0)
                label_141cc61f9_2:
                    i_5 = nullptr
    
    i_3 = i_5
    
    if (i_5 != 0)
        sub_14090a150(&var_e8, &var_178)
        int64_t* rdi_1 = var_170
        *rdi_1 = i_4
        rdi_1[1].d = 0xffffffff
        void var_118
        sub_1407ec830(&var_e8, &var_118, (i_4 u>> 0x20).d + sub_140b5ead0(i_4.d), rdi_1, var_178, 
            nullptr)
        int32_t rcx_7
        rcx_7.b = sub_140b5b8a0(*i_5, 0).b == 0
        rax_1.b = *(i_5 + 4) != 0
        rax_1.b |= rcx_7.b
        
        if (rax_1.b != 0)
            sub_140812a70(&var_98, &var_150, &i_3, nullptr)
    
    r14 += 1

int64_t var_d8
var_170 = &var_d8
int32_t rcx_9 = 0
var_178 = 0
int32_t var_168 = 0xffffffff
int32_t r8_5 = 0
int32_t var_174 = 1
int64_t var_164 = 0
int64_t* var_c8
int32_t var_c0

if (var_c0 != 0)
    int64_t* r9_2 = &var_d8
    
    if (var_c8 != 0)
        r9_2 = var_c8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(var_c0 - 1)
    int32_t rdx_9 = *r9_2
    
    if (rdx_9 != 0)
    label_141cc6319:
        int32_t rax_16 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_174_1 = rax_16
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_2
        
        int32_t rax_18 = r8_5 - rax_17 + 0x1f
        
        if (rax_18 s> var_c0)
            rax_18 = var_c0
        
        var_164.d = rax_18
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_9)
            r8_5 += 0x20
            rcx_9 += 1
            var_164:4.d = r8_5
            var_178 = rcx_9
            
            if (rdx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_164.d = var_c0
                break
            
            rdx_9 = *(r9_2 + (rdx_10 << 2) + 4)
            var_168 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141cc6319

double zmm2[0x2] = var_168.o
int64_t* var_140 = &var_e8
int128_t var_138 = var_178.o
double var_128 = zmm2[0]
int128_t zmm1 = var_138
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
var_178.o = var_140.o
var_168.o = zmm1
int64_t var_158 = zmm2.q

while (true)
    int32_t var_15c
    int64_t rdx_11 = sx.q(var_15c)
    char rax_19
    
    if (rdx_11.d != var_c0 || var_168.q != &var_d8)
        rax_19 = 0
    else
        rax_19 = 1
    
    int64_t* rcx_11 = var_178.q
    
    if (rax_19 == 0 || rcx_11 != &var_e8)
        rax_19 = 1
    else
        rax_19 = 0
    
    if (rax_19 == 0)
        break
    
    void* i_2 = *(*rcx_11 + rdx_11 * 0x10)
    int32_t rax_21 = *(arg1 + 0x68)
    i_3 = i_2
    int32_t rcx_16
    int32_t rsi_1
    void* i_1
    int32_t var_14c
    
    if (rax_21 == *(arg1 + 0x94))
    label_141cc6436:
        rcx_16 = 0
        var_14c = 0
        var_150 = 0
        rsi_1 = 0
        i_1 = var_150.q
    else
        int32_t rax_23 = sub_140b5ead0(i_2.d) + i_3:4.d
        void* r8_7 = arg1 + 0x98
        void* rcx_13 = *(r8_7 + 8)
        
        if (rcx_13 != 0)
            r8_7 = rcx_13
        
        int32_t rax_25 = *(r8_7 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_23)) << 2))
        
        if (rax_25 == 0xffffffff)
            goto label_141cc6436
        
        int64_t rdx_15 = *(arg1 + 0x60)
        
        while (true)
            int64_t rcx_15 = sx.q(rax_25) << 5
            
            if (*(rcx_15 + rdx_15) == i_2)
                break
            
            rax_25 = *(rcx_15 + rdx_15 + 0x18)
            
            if (rax_25 == 0xffffffff)
                goto label_141cc6436
        
        if (rax_25 == 0xffffffff)
            goto label_141cc6436
        
        var_150.q = i_2
        i_1 = i_2
        rsi_1 = var_14c
        rcx_16 = var_150
    bool rax_26 = sub_140b5b8a0(rcx_16, 0)
    int64_t r10_1 = sx.q(arg2[1].d)
    int64_t* r9_3 = *arg2
    rcx_16.b = rax_26 == 0
    rcx_16.b |= rsi_1 != 0
    int64_t* rdx_16
    
    if (rcx_16.b == 0)
        void* r8_8 = &r9_3[r10_1]
        int64_t* rcx_17 = r9_3
        
        if (r9_3 != r8_8)
            int64_t i
            
            while (true)
                i = *rcx_17
                
                if (i == i_2)
                    break
                
                rcx_17 = &rcx_17[1]
                
                if (rcx_17 == r8_8)
                    goto label_141cc6522
            
            rdx_16 = r9_3
            
            if (r9_3 != r8_8)
                while (*rdx_16 != i)
                    rdx_16 = &rdx_16[1]
                    
                    if (rdx_16 == r8_8)
                        goto label_141cc6522
                
            label_141cc64e4:
                int32_t rdx_18 = ((rdx_16 - r9_3) s>> 3).d
                
                if (rdx_18 != 0xffffffff)
                    void* rcx_18 = &r9_3[sx.q(rdx_18)]
                    memmove(rcx_18, rcx_18 + 8, (r10_1.d - rdx_18 - 1) << 3)
                    arg2[1].d -= 1
                    sub_141cc23c0(arg2)
    else
        void* rax_29 = &r9_3[r10_1]
        rdx_16 = r9_3
        
        if (r9_3 != rax_29)
            while (*rdx_16 != i_1)
                rdx_16 = &rdx_16[1]
                
                if (rdx_16 == rax_29)
                    goto label_141cc6522
            
            goto label_141cc64e4
label_141cc6522:
    var_164:4.d &= not.d(var_170:4.d)
    sub_14059bdd0(&var_170)

int32_t rcx_21 = 0
int32_t r8_11 = 0
var_178 = 0
int64_t var_88
var_170 = &var_88
int32_t var_174_2 = 1
int32_t var_168_1 = 0xffffffff
int64_t var_164_1 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r10_4 = &var_88
    
    if (var_78 != 0)
        r10_4 = var_78
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(var_70 - 1)
    int32_t rdx_22 = *r10_4
    
    if (rdx_22 != 0)
    label_141cc65ca:
        int32_t rax_40 = neg.d(rdx_22) & rdx_22
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_40)
        int32_t var_174_3 = rax_40
        int32_t rbx_5
        
        if (rax_40 == 0)
            rbx_5 = 0x20
        else
            rbx_5 = 0x1f - temp0_4
        
        int32_t rax_41 = r8_11 - rbx_5 + 0x1f
        
        if (rax_41 s> var_70)
            rax_41 = var_70
        
        var_164_1.d = rax_41
    else
        while (true)
            int64_t rdx_23 = sx.q(rcx_21)
            r8_11 += 0x20
            rcx_21 += 1
            var_164_1:4.d = r8_11
            var_178 = rcx_21
            
            if (rdx_23.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                var_164_1.d = var_70
                break
            
            rdx_22 = *(r10_4 + (rdx_23 << 2) + 4)
            var_168_1 = 0xffffffff
            
            if (rdx_22 != 0)
                goto label_141cc65ca

zmm2 = var_168_1.o
var_164_1.d = var_70
int128_t var_108 = var_178.o
double var_f8[0x2] = zmm2
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
var_140.o = (&var_98).o
var_138 = var_108
var_128 = zmm2.q

while (true)
    int64_t rcx_24 = sx.q(var_128:4.d)
    char rax_43
    
    if (rcx_24.d != ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d || var_138:8.q != &var_88)
        rax_43 = 0
    else
        rax_43 = 1
    
    if (rax_43 == 0 || var_140 != &var_98)
        rax_43 = 1
    else
        rax_43 = 0
    
    if (rax_43 == 0)
        break
    
    sub_141cbf4b0(arg2, *(*var_140 + rcx_24 * 0x10))
    var_128.d &= not.d(var_138:4.d)
    sub_14059bdd0(&var_138)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_90
bool cond:3 = var_90:4.d == 0
var_90.d = 0

if (not(cond:3))
    sub_1405a5410(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
sub_14059a8e0(&var_88, 0)

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_31 = var_98

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t var_e0
bool cond:5 = var_e0:4.d == 0
var_e0.d = 0

if (not(cond:5))
    sub_1405a5410(&var_e8, 0)

int32_t var_b8_1 = 0xffffffff
int32_t var_b4_1 = 0
void* result = sub_14059a8e0(&var_d8, 0)

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

int64_t rcx_36 = var_e8

if (rcx_36 != 0)
    result = sub_140a74f90(rcx_36)

__security_check_cookie(var_48 ^ &var_1a8)
return result
