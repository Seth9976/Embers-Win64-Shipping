// 函数: sub_141d27f10
// 地址: 0x141d27f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t var_138 = 4
int64_t* rdx = arg2[1]
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &var_138
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    var_138 = *r8
    *rdx += 4

int64_t* result

if ((arg2[5].b & 1) == 0)
    int512_t zmm1_2 = sub_141d19460(arg2, arg1 + 0x58, arg3)
    
    if ((arg2[5].b & 1) != 0)
        int64_t rcx_33 = *(arg1 + 0x98)
        
        if (rcx_33 != 0)
            *(arg1 + 0x98) = sub_140a84c80(rcx_33, 0, 0)
        
        *(arg1 + 0xa0) = 0
        zmm1_2 = sub_140aa4c70(arg1 + 0x58, *(arg1 + 0x60) - *(arg1 + 0x8c), 0)
    
    result = sub_141d19110(arg2, arg1 + 8, zmm1_2)
    
    if ((arg2[5].b & 1) != 0)
        int64_t rcx_36 = *(arg1 + 0x48)
        
        if (rcx_36 != 0)
            *(arg1 + 0x48) = sub_140a84c80(rcx_36, 0, 0)
        
        *(arg1 + 0x50) = 0
        result = sub_141d1b3a0(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)
else
    int64_t var_d8 = 0
    int32_t var_d0_1 = 0
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x1c)
    int32_t var_a4_1 = 0
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    int32_t var_ac_1 = 0x80
    int32_t var_a8_1 = 0xffffffff
    sub_141d19460(arg2, &var_d8, arg3)
    
    if ((arg2[5].b & 1) != 0)
        if (var_98_1 != 0)
            var_98_1 = sub_140a84c80(var_98_1, 0, 0)
        
        int32_t var_90_2 = 0
        sub_140aa4c70(&var_d8, var_d0_1 - var_a4_1, 0)
    
    int64_t* var_150_1 = &var_c8
    int32_t var_148_1 = 0xffffffff
    int32_t rcx_4 = 0
    int32_t var_158 = 0
    int32_t r8_1 = 0
    int32_t var_154_1 = 1
    int64_t var_144_1 = 0
    int64_t* var_b8
    int32_t var_b0
    
    if (var_b0 != 0)
        int64_t* r9_1 = &var_c8
        
        if (var_b8 != 0)
            r9_1 = var_b8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_b0 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_141d28099:
            int32_t rax_13 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_154_2 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t rax_15 = r8_1 - rax_14 + 0x1f
            
            if (rax_15 s> var_b0)
                rax_15 = var_b0
            
            var_144_1.d = rax_15
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_4)
                r8_1 += 0x20
                rcx_4 += 1
                var_144_1:4.d = r8_1
                var_158 = rcx_4
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_144_1.d = var_b0
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_148_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_141d28099
    
    double zmm2[0x2] = var_148_1.o
    double var_f0_1[0x2] = zmm2
    var_144_1.d = var_b0
    int512_t zmm1
    zmm1.o = var_158.o
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    int128_t var_130 = (&var_d8).o
    int128_t var_120_1 = zmm1.o
    int64_t var_110_1 = temp0_3.q
    int32_t var_134
    
    while (true)
        int64_t rax_16 = sx.q(var_120_1:0xc.d)
        int64_t* rdx_10 = var_130.q
        
        if (rax_16.d == ((0xffffffff << (var_b0.b & 0x1f)).q u>> 0x20).d && var_120_1.q == &var_c8
                && rdx_10 == &var_d8)
            break
        
        int64_t rax_18 = *rdx_10 + rax_16 * 0x14
        var_158.q = rax_18
        int64_t var_150_2 = rax_18 + 8
        zmm1 = sub_141d17990(arg1 + 0x58, &var_134, &var_158, nullptr)
        var_120_1:8.d &= not.d(var_130:0xc.d)
        sub_14059bdd0(&var_130:8)
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    int32_t var_5c_1 = 0x80
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x1c)
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    sub_141d19110(arg2, &var_88, zmm1)
    
    if ((arg2[5].b & 1) != 0)
        if (var_48_1 != 0)
            var_48_1 = sub_140a84c80(var_48_1, 0, 0)
        
        int32_t var_40_2 = 0
        sub_141d1b3a0(&var_88, var_80_1 - var_54_1, 0)
    
    int64_t* var_150_3 = &var_78
    int32_t rcx_14 = 0
    var_158 = 0
    int32_t r8_4 = 0
    int32_t var_154_3 = 1
    int32_t var_148_3 = 0xffffffff
    int64_t var_144_2 = 0
    int64_t* var_68
    int32_t var_60
    
    if (var_60 != 0)
        int64_t* r10_2 = &var_78
        
        if (var_68 != 0)
            r10_2 = var_68
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(var_60 - 1)
        int32_t rdx_17 = *r10_2
        
        if (rdx_17 != 0)
        label_141d28277:
            int32_t rax_30 = neg.d(rdx_17) & rdx_17
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
            int32_t var_154_4 = rax_30
            int32_t r15_1
            
            if (rax_30 == 0)
                r15_1 = 0x20
            else
                r15_1 = 0x1f - temp0_4
            
            int32_t rax_31 = r8_4 - r15_1 + 0x1f
            
            if (rax_31 s> var_60)
                rax_31 = var_60
            
            var_144_2.d = rax_31
        else
            while (true)
                int64_t rdx_18 = sx.q(rcx_14)
                r8_4 += 0x20
                rcx_14 += 1
                var_144_2:4.d = r8_4
                var_158 = rcx_14
                
                if (rdx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    var_144_2.d = var_60
                    break
                
                rdx_17 = *(r10_2 + (rdx_18 << 2) + 4)
                var_148_3 = 0xffffffff
                
                if (rdx_17 != 0)
                    goto label_141d28277
    
    double zmm2_1[0x2] = var_148_3.o
    var_144_2.d = var_60
    double var_f0_2[0x2] = zmm2_1
    int128_t var_100_2 = var_158.o
    double temp0_5[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    var_130 = (&var_88).o
    int128_t var_120_2 = var_100_2
    int64_t var_110_2 = temp0_5.q
    
    while (true)
        int64_t rax_32 = sx.q(var_120_2:0xc.d)
        int64_t rcx_18 = var_130.q
        
        if (rax_32.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_120_2.q == &var_78
                && rcx_18 == &var_88)
            break
        
        int128_t* rdi_3 = rax_32 * 0x30 + *rcx_18
        sub_141d1ca50(arg1 + 8, &var_134, rdi_3)
        int64_t rax_33 = sx.q(var_134)
        void* const rax_36
        
        if (rax_33.d == 0xffffffff)
            rax_36 = nullptr
        else
            rax_36 = rax_33 * 0x30 + *(arg1 + 8)
        
        char* rcx_20 = rax_36 + 0x10
        
        if (rax_36 == 0)
            rcx_20 = nullptr
        
        if (rcx_20 == 0)
            sub_141d17830(arg1 + 8, rdi_3, &rdi_3[1])
        else if (*rcx_20 == rdi_3[1].b)
            int64_t* rcx_21 = *(rcx_20 + 0x10)
            (*(*rcx_21 + 0x30))(rcx_21, rdi_3[2].q, &rdi_3[1])
        
        var_120_2:8.d &= not.d(var_130:0xc.d)
        sub_14059bdd0(&var_130:8)
    
    int32_t var_40_3 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_141d1c930(&var_88, 0)
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_27 = var_88
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int32_t var_90_3 = 0
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    var_d0_1 = 0
    int32_t var_a8_2 = 0xffffffff
    int32_t var_a4_2 = 0
    result = sub_14059a8e0(&var_c8, 0)
    
    if (var_b8 != 0)
        result = sub_140a74f90(var_b8)
    
    int64_t rcx_32 = var_d8
    
    if (rcx_32 != 0)
        result = sub_140a74f90(rcx_32)

__security_check_cookie(rax_1 ^ &var_178)
return result
