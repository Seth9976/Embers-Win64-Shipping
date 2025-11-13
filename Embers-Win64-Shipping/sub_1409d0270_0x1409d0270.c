// 函数: sub_1409d0270
// 地址: 0x1409d0270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
sub_1409d7690(arg1 + 0x40, arg3 + 0xe0)
int64_t* rdi_1 = arg1 + 0x78
int64_t* var_108 = rdi_1
sub_1409d7980(rdi_1, arg3 + 0x118)
int32_t r11 = rdi_1[5].d
void* r14 = &rdi_1[2]
int32_t var_164 = 1
void* var_160 = r14
int32_t rcx_2 = 0
int32_t var_168 = 0
int32_t r8 = 0
int32_t var_158 = 0xffffffff
int64_t var_154 = 0

if (r11 != 0)
    void* rax_3 = *(r14 + 0x10)
    void* r9_1 = r14
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1409d035c:
        int32_t rax_10 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_164_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_154.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_154.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_154:4.d = r8
            var_168 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_158 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1409d035c
        
        var_154.d = r11

int32_t rdx_6 = rdi_1[5].d
double zmm2[0x2] = var_158.o
int128_t var_140 = var_168.o
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int32_t var_188 = rsi
int32_t var_184 = rdx_6
double var_130 = zmm2[0]
int64_t var_d8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t zmm1 = var_140
int128_t var_f8 = rdi_1.o
int128_t var_e8 = zmm1

if (rdx_6 != r11)
    void* rax_13 = *(r14 + 0x10)
    void* r10_1 = r14
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_10 != 0)
    label_1409d0434:
        int32_t rax_20 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_4
        
        var_184 = r9_3 - rax_21 + 0x1f
        
        if (r9_3 - rax_21 + 0x1f s> r11)
            var_184 = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
            var_188 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1409d0434
        
        var_184 = r11

uint64_t result = var_188.q u>> 0x20
uint64_t result_1 = result

while (true)
    int32_t rcx_9 = var_e8:0xc.d
    int64_t rdx_11 = var_e8.q
    
    if (rcx_9 != result.d || rdx_11 != r14)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0 || var_f8.q != rdi_1)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int32_t rax_24 = data_143a1c6c4
    
    if (rcx_9 s< *(rdx_11 + 0x18))
        rax_24 = rcx_9
    
    int64_t rcx_10 = *rdi_1
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t r12_1 = sx.q(rax_24)
    void* var_c0
    __builtin_memset(&var_c0, 0, 0x2c)
    void* r13_1 = rcx_10 + r12_1 * 0x48
    int32_t rdx_13 = *(r13_1 + 0x18) - *(r13_1 + 0x44)
    int32_t var_94_1 = 0x80
    int32_t var_90_1 = 0xffffffff
    int32_t var_8c_1
    __builtin_memset(&var_8c_1, 0, 0x30)
    sub_14090a510(&var_c0, rdx_13)
    int32_t rsi_1 = *(r13_1 + 0x18)
    int64_t var_80_1
    var_80_1.d = 0
    int64_t var_88
    
    if (0 != rsi_1)
        sub_1405c5570(&var_88, rsi_1)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    int64_t var_78
    sub_14059a8e0(&var_78, rsi_1)
    int64_t* var_198
    sub_1407453e0(&var_198, r13_1 + 0x10)
    void* var_190
    int32_t var_180
    int32_t i_2
    
    for (int32_t i = i_2; i s< *(var_188.q + 0x18); i = i_2)
        int32_t var_44_1 = data_143a1c6b0
        int32_t rax_28 = data_143a1c6b8
        int32_t var_4c_1 = rax_28
        int32_t var_48_1 = rax_28
        int32_t var_d0
        sub_14090a150(&var_c0, &var_d0)
        int64_t r14_1 = sx.q(var_d0)
        int128_t* var_c8
        *var_c8 = rax_28.o
        *(var_c0 + r14_1 * 0x10) = *(*var_198 + sx.q(i) * 0x10)
        int32_t* rcx_19 = *(sub_1409ca6e0(&var_88, &var_168, i) + 8)
        
        if (rcx_19 != 0)
            *rcx_19 = r14_1.d
        
        int32_t var_18c
        var_180 &= not.d(var_18c)
        sub_14059bdd0(&var_190)
    
    sub_140780e10(r13_1 + 0x10, &var_c0)
    int64_t var_b8_1
    bool cond:4_1 = var_b8_1:4.d == 0
    var_b8_1.d = 0
    
    if (not(cond:4_1))
        sub_1405a5410(&var_c0, 0)
    
    int32_t var_90_2 = 0xffffffff
    int32_t var_8c_2 = 0
    int64_t var_b0
    sub_14059a8e0(&var_b0, 0)
    int64_t var_a0
    
    if (var_a0 != 0)
        sub_140a74f90(var_a0)
    
    void* rcx_25 = var_c0
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int32_t r11_1 = *(r13_1 + 0x38)
    int32_t rcx_26 = 0
    var_198.d = 0
    int32_t r8_5 = 0
    var_198:4.d = 1
    var_190 = r13_1 + 0x20
    int32_t var_188_1 = 0xffffffff
    var_184.q = 0
    
    if (r11_1 != 0)
        void* rax_36 = *(r13_1 + 0x30)
        void* r9_6 = r13_1 + 0x20
        
        if (rax_36 != 0)
            r9_6 = rax_36
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_24 = *r9_6
        int32_t var_184_2
        
        if (rdx_24 != 0)
        label_1409d070d:
            int32_t rax_43 = neg.d(rdx_24) & rdx_24
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_43)
            var_198:4.d = rax_43
            int32_t rax_44
            
            if (rax_43 == 0)
                rax_44 = 0x20
            else
                rax_44 = 0x1f - temp0_5
            
            int32_t var_184_1 = r8_5 - rax_44 + 0x1f
            
            if (r8_5 - rax_44 + 0x1f s> r11_1)
                var_184_2 = r11_1
        else
            while (true)
                int64_t rdx_25 = sx.q(rcx_26)
                r8_5 += 0x20
                rcx_26 += 1
                var_180 = r8_5
                var_198.d = rcx_26
                
                if (rdx_25.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_24 = *(r9_6 + (rdx_25 << 2) + 4)
                var_188_1 = 0xffffffff
                
                if (rdx_24 != 0)
                    goto label_1409d070d
            
            var_184_2 = r11_1
    
    int32_t rdx_26 = *(r13_1 + 0x38)
    zmm2 = var_188_1.o
    var_c0 = r13_1 + 0x10
    var_184 = rdx_26
    int64_t var_a8_1
    var_a8_1.o = zmm2
    var_b8_1.o = var_198.o
    int32_t rsi_2 = 0xffffffff << (rdx_26 & 0x1f).b
    int128_t zmm0_2 = var_c0.o
    int32_t r8_8 = rdx_26 s>> 5
    int32_t r9_8 = rdx_26 & 0xffffffe0
    var_130 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_188 = rsi_2
    int64_t* var_148
    var_148.o = zmm0_2
    var_140 = var_b0.o
    
    if (rdx_26 != r11_1)
        void* rax_48 = *(r13_1 + 0x30)
        void* r10_2 = r13_1 + 0x20
        
        if (rax_48 != 0)
            r10_2 = rax_48
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 - 1)
        int32_t rdx_30 = *(r10_2 + (sx.q(r8_8) << 2)) & rsi_2
        
        if (rdx_30 != 0)
        label_1409d07f7:
            int32_t rax_54 = neg.d(rdx_30) & rdx_30
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_54)
            int32_t rax_55
            
            if (rax_54 == 0)
                rax_55 = 0x20
            else
                rax_55 = 0x1f - temp0_7
            
            var_184 = r9_8 - rax_55 + 0x1f
            
            if (r9_8 - rax_55 + 0x1f s> r11_1)
                var_184 = r11_1
        else
            while (true)
                int64_t rcx_30 = sx.q(r8_8)
                r9_8 += 0x20
                r8_8 += 1
                
                if (rcx_30.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_30 = *(r10_2 + (rcx_30 << 2) + 4)
                var_188 = 0xffffffff
                
                if (rdx_30 != 0)
                    goto label_1409d07f7
            
            var_184 = r11_1
    
    while (true)
        int32_t rcx_32 = var_130:4.d
        int64_t rdx_31 = var_140:8.q
        int32_t rax_47
        
        if (rcx_32 != (var_188.q u>> 0x20).d || rdx_31 != r13_1 + 0x20)
            rax_47.b = 0
        else
            rax_47.b = 1
        
        if (rax_47.b == 0 || var_148 != r13_1 + 0x10)
            rax_47.b = 1
        else
            rax_47.b = 0
        
        if (rax_47.b == 0)
            break
        
        int32_t rax_56 = data_143a1c6c0
        
        if (rcx_32 s< *(rdx_31 + 0x18))
            rax_56 = rcx_32
        
        int32_t* rdx_34 = (sx.q(rax_56) << 4) + *(r13_1 + 0x10)
        *rdx_34 = *(*(arg3 + 0x38) + (sx.q(*rdx_34) << 3))
        rdx_34[1] = *(*(arg3 + 0x38) + (sx.q(rdx_34[1]) << 3))
        int32_t rax_61 = not.d(var_140:4.d)
        rdx_34[2] = *(*(arg3 + 0x38) + (sx.q(rdx_34[2]) << 3))
        var_130.d &= rax_61
        sub_14059bdd0(&var_140)
    
    *(r13_1 + 8) = *(r13_1 + 0x18)
    int64_t* r12_3 = (r12_1 << 4) + *(*(arg2 + 0x28) + 0x118)
    int32_t* r9_10 = *r12_3
    void* r10_3 = &r9_10[sx.q(r12_3[1].d)]
    
    if (r9_10 != r10_3)
        do
            int64_t rcx_40 = sx.q(*r9_10) * 3
            int64_t rax_67 = *(arg1 + 0x40)
            *(rax_67 + (rcx_40 << 3)) = rax_24
            int32_t* i_1 = *(rax_67 + (rcx_40 << 3) + 8)
            
            for (void* r8_9 = &i_1[sx.q(*(rax_67 + (rcx_40 << 3) + 0x10))]; i_1 != r8_9; 
                    i_1 = &i_1[1])
                *i_1 = *(var_88 + (sx.q(*i_1) << 3))
            
            r9_10 = &r9_10[1]
        while (r9_10 != r10_3)
        
        rdi_1 = var_108
    
    var_80_1.d = 0
    int32_t var_58_3 = 0xffffffff
    int32_t var_54_3 = 0
    sub_14059a8e0(&var_78, 0)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_46 = var_88
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    var_e8:8.d &= not.d(var_f8:0xc.d)
    sub_14059bdd0(&var_f8:8)
    result = result_1
    r14 = &rdi_1[2]

__security_check_cookie(rax_1 ^ &var_1b8)
return result
