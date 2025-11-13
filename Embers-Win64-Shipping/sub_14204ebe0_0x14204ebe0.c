// 函数: sub_14204ebe0
// 地址: 0x14204ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg1
sub_14205f060(arg1)
int64_t* rax
int32_t r8
rax, r8 = j_sub_140a82f30(0x38)
int64_t* i_17 = nullptr
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(rax, 0, 0x38)

void* r13 = &r12[0x2c]
void* var_c8
int64_t* result = &var_c8

if (r13 != &var_c8)
    int64_t* rdi_1 = *r13
    *r13 = rbx
    
    if (rdi_1 != 0)
        int64_t rcx = rdi_1[4]
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = rdi_1[2]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rdi_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        result, r8 = j_sub_140a74f90(rdi_1)
else if (rbx != 0)
    int64_t rcx_3 = rbx[4]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = rbx[2]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *rbx
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result, r8 = j_sub_140a74f90(rbx)

int32_t rcx_7 = r12[1]

if (rcx_7 != 0)
    int32_t r9_1 = r12[0xc]
    rbx.b = 0
    char var_238_1 = 0
    r12[9] = r9_1
    
    if (r9_1 s> 2)
        r8 = r12[0xb]
        
        if (r8 != 0 && divs.dp.d(sx.q(rcx_7), r9_1) s<= r8)
            r12[0xb] = 0
            rbx.b = 1
            var_238_1 = 1
            int32_t rax_8 = divs.dp.d(sx.q(rcx_7 - 1 + r8), r8)
            
            if (rax_8 s<= 2)
                rax_8 = 2
            
            r12[9] = rax_8
    
    uint128_t zmm6_1
    uint128_t zmm7_1
    uint128_t zmm8_1
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_14206c740(r12, rcx_7, r8.b)
    
    if (rbx.b != 0)
        var_238_1 = 0
        *(*r13 + 0x30) = r12[0x26]
    
    int64_t rbx_2 = sx.q(r12[0x14])
    void* rdi_4 = *r13 + 0x10
    var_c8 = &r12[0x12]
    
    if (rbx_2.d != 0)
        int32_t rax_11 = *(rdi_4 + 8)
        int32_t rdx_10 = rbx_2.d + rax_11
        
        if (rdx_10 s> *(rdi_4 + 0xc))
            sub_1405dadb0(rdi_4, rdx_10)
            rax_11 = *(rdi_4 + 8)
        
        memcpy(*rdi_4 + (sx.q(rax_11) << 2), *(r12 + 0x48), (rbx_2 << 2).d)
        *(rdi_4 + 8) += rbx_2.d
    
    uint64_t i_41 = zx.q(r12[0x26])
    int64_t* rbx_3 = *r13
    r12[0xd] = i_41.d
    int32_t var_108_1 = 0x7f7fffff
    int32_t var_104_1 = 0x7f7fffff
    int32_t var_100_1 = 0x7f7fffff
    int32_t var_fc_1 = 0xffffffff
    int32_t var_f8_1 = 0x800000
    int32_t var_f4_1 = 0x800000
    int32_t var_f0_1 = 0x800000
    int64_t var_ec_1 = -1
    int32_t var_e4_1 = 0xffffffff
    int128_t var_e0
    __builtin_memcpy(&var_e0, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    rbx_3[1].d = 0
    
    if (*(rbx_3 + 0xc) != i_41.d)
        sub_1405a52a0(rbx_3, i_41.d)
    
    uint128_t var_38_1 = zmm6_1
    uint128_t var_48_1 = zmm7_1
    uint128_t var_58_1 = zmm8_1
    uint128_t var_68_1 = zmm9_1
    
    if (i_41.d s> 0)
        zmm6_1 = var_e0
        i_17 = i_41
        int64_t* i
        
        do
            int64_t rdi_5 = sx.q(rbx_3[1].d)
            int32_t rax_13 = (rdi_5 + 1).d
            rbx_3[1].d = rax_13
            
            if (rax_13 s> *(rbx_3 + 0xc))
                sub_1405c4fe0(rbx_3)
            
            int64_t rax_15 = rdi_5 << 6
            int128_t* rax_16 = rax_15 + *rbx_3
            
            if (rax_15 != neg.q(*rbx_3))
                *rax_16 = var_108_1.o
                rax_16[1] = var_f8_1.o
                rax_16[2] = var_ec_1:4.o
                rax_16[3] = zmm6_1
            
            i = i_17
            i_17 -= 1
        while (i != 1)
    
    int32_t i_1 = i_17.d
    uint128_t var_78_1 = zmm10_1
    int32_t i_16 = i_17.d
    int64_t* i_21
    int64_t* i_30
    float zmm1_1[0x4]
    uint128_t zmm2_1
    float zmm3[0x4]
    
    if (r12[0xd] s> 0)
        uint128_t var_88_1 = zmm11_1
        int64_t* i_51 = i_17
        int64_t* i_42 = i_17
        int64_t* i_27 = i_17
        
        do
            int64_t rsi = **(r12 + 0xb0)
            int64_t r14_1 = sx.q(*(*(r12 + 0x90) + i_51))
            *(i_42 + rsi + 0x20) = r14_1.d
            int32_t* rax_19 = *(r12 + 0x90)
            r12.b = 0
            int32_t rdx_16 = *(rax_19 + i_51) - 1 + *(rax_19 + i_51 + 4)
            *(i_42 + rsi + 0x24) = rdx_16
            zmm6_1 = data_143dbb1f8
            zmm7_1 = data_143dbb1fc
            zmm9_1 = zmm6_1
            zmm8_1 = data_143dbb200
            zmm10_1 = zmm7_1
            int32_t var_224_1 = zmm6_1.d
            zmm11_1 = zmm8_1
            int32_t var_220_1 = zmm7_1.d
            int32_t var_21c_1 = zmm8_1.d
            i_21.d = zmm6_1.d
            i_21:4.d = zmm7_1.d
            int32_t var_228_1 = zmm8_1.d
            
            if (r14_1.d s<= rdx_16)
                int32_t* rcx_17 = arg1
                int64_t r15_1 = r14_1 << 2
                
                do
                    float (* rbx_6)[0x4] = (sx.q(*(r15_1 + *rdi_4)) << 6) + *(rcx_17 + 0x68)
                    zmm6_1, zmm7_1 = sub_140ae2b00(&rcx_17[2], &i_30, rbx_6)
                    uint128_t zmm0_1
                    int64_t var_180
                    int32_t var_178
                    
                    if (r12.b == 0)
                        if (var_178.b != 0)
                            zmm1_1 = zx.o(var_180)
                            r12 = zx.q(var_178.b)
                            zmm2_1 = i_30.o
                            int32_t var_218_1 = var_178
                            zmm0_1 = zmm1_1
                            var_220_1.q = zmm1_1.q
                            zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                            i_21.o = zmm2_1
                            zmm11_1 = var_228_1
                            zmm8_1 = zmm0_1
                            zmm10_1 = i_21:4.d
                            zmm9_1 = i_21.d
                            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    else if (var_178.b != 0)
                        zmm0_1 = i_30.d
                        
                        if (not(zmm9_1.d f<= zmm0_1.d))
                            i_21.d = zmm0_1.d
                            zmm9_1 = zmm0_1
                        
                        zmm0_1 = i_30:4.d
                        
                        if (not(zmm10_1.d f<= zmm0_1.d))
                            i_21:4.d = zmm0_1.d
                            zmm10_1 = zmm0_1
                        
                        int64_t var_188
                        zmm0_1 = var_188.d
                        
                        if (not(zmm11_1.d f<= zmm0_1.d))
                            var_228_1 = zmm0_1.d
                            zmm11_1 = zmm0_1
                        
                        zmm0_1 = var_188:4.d
                        
                        if (not(zmm6_1.d f>= zmm0_1.d))
                            var_224_1 = zmm0_1.d
                        
                        zmm0_1 = var_180.d
                        
                        if (not(zmm7_1.d f>= zmm0_1.d))
                            var_220_1 = zmm0_1.d
                        
                        zmm0_1 = var_180:4.d
                        
                        if (not(zmm8_1.d f>= zmm0_1.d))
                            var_21c_1 = zmm0_1.d
                            zmm8_1 = zmm0_1
                    rcx_17 = arg1
                    
                    if (rcx_17[0x10].b != 0)
                        zmm0_1 = *rbx_6
                        zmm3 = zx.o(0)
                        zmm2_1 = (*rbx_6)[1]
                        zmm1_1 = (*rbx_6)[2]
                        zmm2_1.d = zmm2_1.d f* zmm2_1.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                        zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                        
                        if (not(zmm2_1.d f<= 9.99999994e-09f))
                            zmm3 = _mm_sqrt_ss(0, zmm2_1.d)
                        
                        zmm2_1 = rbx_6[1][0]
                        int32_t zmm5_1 = (zx.o(0)).d
                        zmm0_1 = (*rbx_6)[5]
                        zmm1_1 = (*rbx_6)[6]
                        zmm2_1.d = zmm2_1.d f* zmm2_1.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                        zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                        
                        if (not(zmm2_1.d f<= 9.99999994e-09f))
                            zmm5_1 = _mm_sqrt_ss(zmm5_1, zmm2_1.d)
                        
                        zmm0_1 = rbx_6[2][0]
                        int32_t zmm4_1 = (zx.o(0)).d
                        zmm2_1 = (*rbx_6)[9]
                        zmm1_1 = (*rbx_6)[0xa]
                        zmm2_1.d = zmm2_1.d f* zmm2_1.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                        zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                        
                        if (not(zmm2_1.d f<= 9.99999994e-09f))
                            zmm4_1 = _mm_sqrt_ss(0, zmm2_1.d)
                        
                        zmm2_1 = *(i_42 + rsi + 0x2c)
                        zmm1_1 = __minss_xmmss_memss(zmm3[0], *(i_42 + rsi + 0x28))
                        zmm0_1 = *(i_42 + rsi + 0x30)
                        zmm2_1 = _mm_min_ss(zmm2_1.d, zmm5_1)
                        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm4_1)
                        *(i_42 + rsi + 0x28) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                        *(i_42 + rsi + 0x30) = zmm0_1.d
                        zmm3 = __maxss_xmmss_memss(zmm3[0], *(i_42 + rsi + 0x34))
                        zmm0_1 = *(i_42 + rsi + 0x3c)
                        zmm2_1 = _mm_max_ss((*(i_42 + rsi + 0x38)).d, zmm5_1)
                        int32_t var_128_1 = _mm_max_ss(zmm0_1.d, zmm4_1).d
                        *(i_42 + rsi + 0x34) = (_mm_unpacklo_ps(zmm3, zmm2_1.q)).q
                        *(i_42 + rsi + 0x3c) = var_128_1
                    
                    r14_1 = zx.q(r14_1.d + 1)
                    r15_1 += 4
                while (r14_1.d s<= *(i_42 + rsi + 0x24))
                
                i_51 = i_27
                i_1 = i_16
            
            i_1 += 1
            i_51 = &i_51[1]
            r12 = arg1
            *(i_42 + rsi) = i_21
            *(i_42 + rsi + 8) = var_228_1
            *(i_42 + rsi + 0x10) = var_224_1.q
            *(i_42 + rsi + 0x18) = var_21c_1
            i_42 = &i_42[8]
            i_16 = i_1
            i_27 = i_51
        while (i_1 s< r12[0xd])
        
        i_17 = nullptr
    
    i_30 = i_17
    int64_t var_188_1 = 1
    sub_1405a4cf0(&i_30)
    int64_t* result_2 = i_30
    int64_t* i_53 = i_17
    int64_t* i_52 = i_17
    int64_t* result_1 = result_2
    int32_t var_158_1 = i_17.d
    *result_2 = r12[0xd]
    bool cond:1_1 = r12[0xd] s<= 1
    int64_t* i_36 = i_17
    int64_t* i_32 = i_17
    int32_t var_1cc_1 = i_17.d
    int32_t var_154_1 = i_17.d
    int32_t var_20c_1 = i_17.d
    int32_t var_1f4_1 = i_17.d
    int64_t* i_35 = i_17
    int64_t* i_33 = i_17
    int32_t var_1c8_1 = i_17.d
    int32_t var_144_1 = i_17.d
    int64_t* i_26 = i_17
    uint64_t i_29 = i_17
    int32_t var_1c4_1 = i_17.d
    int32_t var_194_1 = i_17.d
    int32_t var_1f0_1 = i_17.d
    int32_t var_1d4_1 = i_17.d
    int64_t* i_31 = i_17
    int64_t* i_34 = i_17
    int32_t var_210_1 = i_17.d
    int32_t var_134_1 = i_17.d
    int64_t* i_28 = i_17
    i_21 = i_17
    float i_54 = i_17.d
    float i_63 = i_17.d
    int64_t* i_22 = i_17
    int64_t* i_23 = i_17
    int32_t var_1f8_1 = i_17.d
    int32_t var_148_1 = i_17.d
    int32_t var_198_1 = i_17.d
    int64_t* i_25 = i_17
    int64_t* i_24 = i_17
    int32_t var_1d8_1 = i_17.d
    int32_t var_138_1 = i_17.d
    int32_t var_224_2 = i_17.d
    
    if (not(cond:1_1))
        char var_237
        char rbx_7 = var_237
        void* rdi_6 = &r12[0x16]
        zmm9_1 = 0x3f000000
        char var_237_1 = rbx_7
        int32_t var_1ec_1 = var_188_1.d
        
        do
            int32_t rax_30 = r12[0x15]
            r12[0x14] = i_17.d
            
            if (rax_30 s< 0 && rax_30 != 0)
                sub_1405dadb0(&r12[0x12], 0)
            
            int32_t rax_31 = *(rdi_6 + 0xc)
            *(rdi_6 + 8) = i_17.d
            
            if (rax_31 s< 0 && rax_31 != 0)
                sub_140638cc0(rdi_6, 0)
            
            int32_t rcx_23 = r12[0xd] + r12[0x14]
            r12[0x14] = rcx_23
            
            if (rcx_23 s> r12[0x15])
                sub_1405a4cf0(&r12[0x12])
            
            int32_t rcx_26 = r12[0xd] + *(rdi_6 + 8)
            *(rdi_6 + 8) = rcx_26
            
            if (rcx_26 s> *(rdi_6 + 0xc))
                sub_140638a00(rdi_6)
            
            int32_t rdi_7 = r12[0xd]
            int32_t r9_2 = i_17.d
            
            if (rdi_7 s> 0)
                int64_t* i_45 = i_17
                int64_t* i_38 = i_17
                int64_t* i_50 = i_17
                
                do
                    *(i_50 + *(r12 + 0x48)) = r9_2
                    r9_2 += 1
                    i_50 += 4
                    int64_t rcx_28 = **r13
                    uint128_t zmm0_2
                    zmm0_2.d = (*(i_38 + rcx_28 + 0x18)).d f+ *(i_38 + rcx_28 + 8)
                    zmm2_1.d = (*(i_38 + rcx_28)).d f+ *(i_38 + rcx_28 + 0x10)
                    zmm1_1 = *(i_38 + rcx_28 + 0x14)
                    zmm1_1[0] = zmm1_1[0] f+ *(i_38 + rcx_28 + 4)
                    int64_t rcx_29 = *(r12 + 0x58)
                    i_38 = &i_38[8]
                    zmm0_2.d = zmm0_2.d f* zmm9_1.d
                    zmm2_1.d = zmm2_1.d f* zmm9_1.d
                    int32_t var_a0_1 = zmm0_2.d
                    zmm1_1[0] = zmm1_1[0] f* zmm9_1.d
                    *(i_45 + rcx_29) = (_mm_unpacklo_ps(zmm2_1, zmm1_1[0].q)).q
                    *(i_45 + rcx_29 + 8) = var_a0_1
                    i_45 += 0xc
                    rdi_7 = r12[0xd]
                while (r9_2 s< rdi_7)
            
            int32_t r8_4 = r12[0xa]
            r12[9] = r8_4
            
            if (r8_4 s> 2)
                int32_t rcx_30 = r12[0xb]
                
                if (rcx_30 != 0)
                    rdi_7 = r12[0xd]
                    
                    if (divs.dp.d(sx.q(rdi_7), r8_4) s<= rcx_30)
                        r12[0xb] = i_17.d
                        var_238_1 = 1
                        int32_t rax_41 = divs.dp.d(sx.q(rcx_30 - 1 + rdi_7), rcx_30)
                        
                        if (rax_41 s<= 2)
                            rax_41 = 2
                        
                        r12[9] = rax_41
            
            int32_t rax_42 = r12[0x27]
            r12[0x26] = i_17.d
            
            if (rax_42 s< 0 && rax_42 != 0)
                sub_1405c5570(&r12[0x24], 0)
            
            zmm9_1, zmm10_1 = sub_14206c7b0(r12, 0, rdi_7 - 1)
            sub_142045d60(*(r12 + 0x90), r12[0x26], rbx_7)
            
            if (var_238_1 != 0)
                var_238_1 = 0
                *(*r13 + 0x30) = r12[0x26]
            
            int32_t r8_7 = var_1cc_1
            int64_t* i_59
            
            if (r8_7 s>= 0 || r8_7 == 0)
                i_59 = i_36
            else
                sub_1405dadb0(&i_32, 0)
                i_59 = i_32
                r8_7 = var_154_1
                i_36 = i_59
                var_1cc_1 = r8_7
            
            int32_t rcx_37 = r12[0xd]
            int32_t rax_44 = i_17.d + rcx_37
            int32_t var_158_3 = rax_44
            
            if (rax_44 s> r8_7)
                sub_1405a4cf0(&i_32)
                i_59 = i_32
                rcx_37 = r12[0xd]
                i_36 = i_59
                var_1cc_1 = var_154_1
            
            int32_t i_2 = i_17.d
            
            if (rcx_37 s> 0)
                int64_t* i_46 = i_17
                
                do
                    i_46 += 4
                    *(i_59 + (sx.q(*(i_46 + *(r12 + 0x48) - 4)) << 2)) = i_2
                    i_2 += 1
                while (i_2 s< r12[0xd])
            
            int32_t rdi_8 = var_20c_1
            
            if (rdi_8 s< 0 && rdi_8 != 0)
                sub_1405dadb0(&i_23, 0)
                i_53 = i_23
                rdi_8 = var_1f4_1
                i_22 = i_53
                var_20c_1 = rdi_8
            
            int32_t rcx_41 = r12[1] + i_17.d
            int32_t var_1f8_3 = rcx_41
            
            if (rcx_41 s> rdi_8)
                sub_1405a4cf0(&i_23)
                i_53 = i_23
                rdi_8 = var_1f4_1
                i_22 = i_53
                var_20c_1 = rdi_8
            
            int64_t* i_37 = i_17
            int32_t i_3 = i_17.d
            
            if (r12[0xd] s> 0)
                int64_t* i_47 = i_17
                
                do
                    void* rdx_30 = (sx.q(*(i_47 + *(r12 + 0x48))) << 6) + **r13
                    
                    for (int32_t j = *(rdx_30 + 0x20); j s<= *(rdx_30 + 0x24); j += 1)
                        *(i_53 + (i_37 << 2)) = j
                        i_37 += 1
                    
                    i_3 += 1
                    i_47 += 4
                while (i_3 s< r12[0xd])
            
            int32_t r9_3 = var_1c8_1
            int64_t* i_61
            
            if (r9_3 s>= 0 || r9_3 == 0)
                i_61 = i_35
            else
                sub_1405dadb0(&i_33, 0)
                i_61 = i_33
                r9_3 = var_144_1
                i_35 = i_61
                var_1c8_1 = r9_3
            
            int32_t r8_8 = r12[1]
            int32_t rax_49 = i_17.d + r8_8
            int32_t var_148_3 = rax_49
            
            if (rax_49 s> r9_3)
                sub_1405a4cf0(&i_33)
                i_61 = i_33
                r8_8 = r12[1]
                i_35 = i_61
                var_1c8_1 = var_144_1
            
            int32_t i_4 = i_17.d
            
            if (r8_8 s> 0)
                int64_t* i_55 = i_53
                
                do
                    int64_t rax_51 = sx.q(*i_55)
                    i_55 += 4
                    *(i_61 + (rax_51 << 2)) = i_4
                    i_4 += 1
                while (i_4 s< r12[1])
            
            int32_t i_5 = i_17.d
            
            if (*(*r13 + 8) s> 0)
                int64_t* i_48 = i_17
                
                do
                    i_48 = &i_48[8]
                    i_5 += 1
                    int64_t rdx_32 = **r13
                    int64_t rax_55 = sx.q(*(i_48 + rdx_32 - 0x1c))
                    *(i_48 + rdx_32 - 0x20) = *(i_61 + (sx.q(*(i_48 + rdx_32 - 0x20)) << 2))
                    *(i_48 + rdx_32 - 0x1c) = *(i_61 + (rax_55 << 2))
                while (i_5 s< *(*r13 + 8))
            
            int32_t var_198_2 = i_17.d
            int64_t* i_60
            
            if (var_1c4_1 s>= 0 || var_1c4_1 == 0)
                i_60 = i_26
            else
                sub_1405dadb0(&i_29, 0)
                i_60 = i_29
                i_26 = i_60
                var_1c4_1 = var_194_1
            
            void* r10_1 = rdi_4
            
            if (&i_29 != r10_1)
                i_29.o = *r10_1
                i_60 = i_29
                i_26 = i_60
                *r10_1 = i_29.o
                var_1c4_1 = var_194_1
            
            int32_t rcx_49 = r12[1] + *(r10_1 + 8)
            *(r10_1 + 8) = rcx_49
            
            if (rcx_49 s> *(r10_1 + 0xc))
                sub_1405a4cf0(r10_1)
                i_60 = i_26
                r10_1 = rdi_4
            
            int32_t i_6 = i_17.d
            
            if (r12[1] s> 0)
                int64_t* i_39 = i_17
                
                do
                    int64_t rax_59 = sx.q(*(i_39 + i_53))
                    i_39 += 4
                    i_6 += 1
                    *(i_39 + *r10_1 - 4) = *(i_60 + (rax_59 << 2))
                while (i_6 s< r12[1])
            
            if (rdi_8 s< 0 && rdi_8 != 0)
                sub_1405dadb0(&i_23, 0)
                rdi_8 = var_1f4_1
                i_22 = i_23
                var_20c_1 = rdi_8
            
            int32_t* r14_2 = arg1
            int32_t i_9 = *(*r13 + 8) + r14_2[0x26]
            int32_t rax_62 = i_9 + i_17.d
            int32_t var_1f8_5 = rax_62
            
            if (rax_62 s> rdi_8)
                sub_1405a4cf0(&i_23)
                var_20c_1 = var_1f4_1
                i_22 = i_23
            
            int32_t rcx_56 = var_1f0_1
            int32_t rdi_9 = i_17.d
            int32_t var_1d8_2
            
            if (rcx_56 s< 0)
                var_1d8_2 = i_17.d
            
            int64_t* i_57
            
            if (rcx_56 s>= 0 || rcx_56 == 0)
                i_57 = i_25
            else
                sub_1405dadb0(&i_24, 0)
                i_57 = i_24
                rcx_56 = var_1d4_1
                rdi_9 = var_1d8_2
                i_25 = i_57
                var_1f0_1 = rcx_56
            
            int32_t rsi_1 = r14_2[0x26]
            int32_t var_1d8_3 = rdi_9 + 1
            
            if (rdi_9 + 1 s> rcx_56)
                sub_1405a4cf0(&i_24)
                i_57 = i_24
                rcx_56 = var_1d4_1
                i_25 = i_57
                var_1f0_1 = rcx_56
            
            *(i_57 + (sx.q(rdi_9) << 2)) = rsi_1
            int64_t i_7 = 0
            
            if (var_1ec_1 - 1 s> 0)
                do
                    int64_t rsi_2 = sx.q(var_1d8_3)
                    int32_t r14_4 = *(i_57 + (i_7 << 2)) + *(result_1 + (i_7 << 2))
                    int32_t rax_69 = (rsi_2 + 1).d
                    var_1d8_3 = rax_69
                    
                    if (rax_69 s> rcx_56)
                        sub_1405a4cf0(&i_24)
                        rcx_56 = var_1d4_1
                        i_57 = i_24
                    
                    i_7 += 1
                    *(i_57 + (rsi_2 << 2)) = r14_4
                while (i_7 s< sx.q(var_1ec_1 - 1))
                
                rbx_7 = var_237_1
                r14_2 = arg1
                var_1f0_1 = rcx_56
                i_25 = i_57
            
            int32_t i_8 = 0
            int64_t* i_56 = i_22
            
            if (r14_2[0xd] s> 0)
                int32_t* rbx_9 = arg1
                int32_t* r14_5 = nullptr
                void* r9_4 = var_c8
                
                do
                    int64_t rcx_59 = sx.q(*i_57)
                    void* rdx_39 = (sx.q(*(*r9_4 + r14_5)) << 6) + **r13
                    *i_57 = (rcx_59 + 1).d
                    *(i_56 + (rcx_59 << 2)) = *(r14_5 + *r9_4)
                    int32_t j_3 = *(rdx_39 + 0x1c)
                    int32_t r11_1 = *(rdx_39 + 0xc)
                    
                    if (j_3 s>= 0)
                        void* rsi_3 = i_57 + 4
                        int32_t j_1
                        
                        do
                            int64_t rax_75 = sx.q(r11_1)
                            j_1 = -1
                            int64_t j_4 = sx.q(j_3)
                            int32_t r8_10 = 0x7fffffff
                            
                            if (rax_75 s<= j_4)
                                int64_t r9_6 = rax_75 << 6
                                int64_t k_1 = j_4 - rax_75 + 1
                                int64_t k
                                
                                do
                                    int64_t rcx_60 = sx.q(*rsi_3)
                                    *rsi_3 = (rcx_60 + 1).d
                                    *(i_22 + (rcx_60 << 2)) = r11_1
                                    int64_t rcx_61 = **r13
                                    int32_t r10_2 = *(rcx_61 + r9_6 + 0xc)
                                    int32_t j_2 = *(rcx_61 + r9_6 + 0x1c)
                                    
                                    if (r10_2 s>= 0 && r10_2 s< r8_10)
                                        r8_10 = r10_2
                                    
                                    if (j_2 s>= 0 && j_2 s> j_1)
                                        j_1 = j_2
                                    
                                    r11_1 += 1
                                    r9_6 += 0x40
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                            
                            rsi_3 += 4
                            r11_1 = r8_10
                            j_3 = j_1
                        while (j_1 s>= 0)
                        rbx_9 = arg1
                        i_56 = i_22
                        i_57 = i_25
                        r9_4 = var_c8
                    
                    i_8 += 1
                    r14_5 = &r14_5[1]
                while (i_8 s< rbx_9[0xd])
                
                rbx_7 = var_237_1
                r14_2 = arg1
            
            int32_t r8_11 = var_210_1
            int32_t rdx_40 = 0
            int32_t var_138_2
            
            if (r8_11 s< 0)
                var_138_2 = 0
            
            int64_t* i_62
            
            if (r8_11 s>= 0 || r8_11 == 0)
                i_62 = i_31
            else
                sub_1405dadb0(&i_34, 0)
                i_62 = i_34
                r8_11 = var_134_1
                rdx_40 = var_138_2
                var_210_1 = r8_11
                i_31 = i_62
            
            int32_t rax_78 = i_9 + rdx_40
            int32_t var_138_3 = rax_78
            
            if (rax_78 s> r8_11)
                sub_1405a4cf0(&i_34)
                i_62 = i_34
                var_210_1 = var_134_1
                i_31 = i_62
            
            int64_t rcx_64 = sx.q(r14_2[0x26])
            
            if (rcx_64.d s< i_9)
                void* rdx_41 = i_56 + (rcx_64 << 2)
                
                do
                    int64_t rax_80 = sx.q(*rdx_41)
                    rdx_41 += 4
                    *(i_62 + (rax_80 << 2)) = rcx_64.d
                    rcx_64 = zx.q(rcx_64.d + 1)
                while (rcx_64.d s< i_9)
            
            uint128_t* rcx_65 = *r13
            int32_t i_10 = 0
            
            if (*(rcx_65 + 8) s> 0)
                int64_t rdx_42 = 0
                
                do
                    int64_t r8_12 = *rcx_65
                    int64_t rax_81 = sx.q(*(rdx_42 + r8_12 + 0xc))
                    
                    if (rax_81.d s>= 0)
                        int64_t rax_82 = sx.q(*(rdx_42 + r8_12 + 0x1c))
                        *(rdx_42 + r8_12 + 0xc) = *(i_62 + (rax_81 << 2))
                        *(rdx_42 + r8_12 + 0x1c) = *(i_62 + (rax_82 << 2))
                    
                    rcx_65 = *r13
                    i_10 += 1
                    rdx_42 += 0x40
                while (i_10 s< *(rcx_65 + 8))
            
            uint128_t zmm0_3
            
            if (&i_21 != rcx_65)
                zmm0_3 = zmm10_1
                zmm10_1 = *rcx_65
                *rcx_65 = zmm0_3
                rcx_65 = *(r14_2 + 0xb0)
                i_21.o = zmm10_1
                i_54 = i_63
                i_28 = i_21
            
            *(rcx_65 + 8) = 0
            
            if (*(rcx_65 + 0xc) != i_9)
                sub_1405a52a0(rcx_65, i_9)
            
            r12 = arg1
            int32_t i_11 = 0
            
            if (r12[0x26] s> 0)
                do
                    int64_t* rdi_11 = *r13
                    int32_t var_108_2 = 0x7f7fffff
                    int32_t var_104_2 = 0x7f7fffff
                    int64_t rsi_4 = sx.q(rdi_11[1].d)
                    int32_t var_100_2 = 0x7f7fffff
                    int32_t var_fc_2 = 0xffffffff
                    int32_t var_f8_2 = 0x800000
                    int32_t rax_85 = (rsi_4 + 1).d
                    int32_t var_f4_2 = 0x800000
                    int32_t var_f0_2 = 0x800000
                    int64_t var_ec_2 = -1
                    int32_t var_e4_2 = 0xffffffff
                    int128_t var_e0_1
                    __builtin_memcpy(&var_e0_1, 
                        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x"
                    "ff\xff\xff\x7f\xff", 
                        0x18)
                    rdi_11[1].d = rax_85
                    
                    if (rax_85 s> *(rdi_11 + 0xc))
                        sub_1405c4fe0(rdi_11)
                    
                    int64_t rax_86 = *rdi_11
                    uint128_t* rcx_70 = rsi_4 << 6
                    i_11 += 1
                    *(rcx_70 + rax_86) = var_108_2.o
                    *(rcx_70 + rax_86 + 0x10) = var_f8_2.o
                    zmm1_1 = var_e0_1
                    *(rcx_70 + rax_86 + 0x20) = var_ec_2:4.o
                    *(rcx_70 + rax_86 + 0x30) = zmm1_1
                while (i_11 s< r12[0x26])
            
            int64_t* rcx_71 = *r13
            uint64_t i_43 = zx.q(i_54)
            int32_t rax_87 = rcx_71[1].d + i_43.d
            rcx_71[1].d = rax_87
            
            if (rax_87 s> *(rcx_71 + 0xc))
                sub_1405c4fe0(rcx_71)
            
            if (i_43.d s> 0)
                int64_t* i_58 = i_28
                int64_t* i_64 = i_62
                uint64_t i_19 = i_43
                uint64_t i_12
                
                do
                    int64_t rdx_46 = sx.q(*i_64)
                    i_64 += 4
                    uint128_t* rdx_47 = rdx_46 << 6
                    zmm0_3 = *i_58
                    i_58 = &i_58[8]
                    int64_t rcx_72 = **r13
                    *(rdx_47 + rcx_72) = zmm0_3
                    *(rdx_47 + rcx_72 + 0x10) = *(i_58 - 0x30)
                    *(rdx_47 + rcx_72 + 0x20) = *(i_58 - 0x20)
                    *(rdx_47 + rcx_72 + 0x30) = *(i_58 - 0x10)
                    i_12 = i_19
                    i_19 -= 1
                while (i_12 != 1)
            
            int32_t rsi_5 = r12[0x26]
            uint64_t* r11_2 = nullptr
            int32_t r14_6 = 0
            
            if (rsi_5 s> 0)
                int64_t r15_3 = 0
                int32_t rax_102
                
                do
                    int32_t r10_3 = rsi_5
                    uint128_t* r8_14 = sx.q(rsi_5) << 6
                    int64_t rdi_12 = **r13
                    *(r11_2 + rdi_12 + 0xc) = rsi_5
                    rsi_5 += *(*(r12 + 0x90) + r15_3 + 4)
                    *(r11_2 + rdi_12 + 0x1c) = rsi_5 - 1
                    *(r11_2 + rdi_12 + 0x20) = *(**r13 + r8_14 + 0x20)
                    int64_t rdx_49
                    rdx_49.b = 0
                    *(r11_2 + rdi_12 + 0x24) = *((sx.q(rsi_5) << 6) + **r13 - 0x1c)
                    zmm6_1 = data_143dbb1f8
                    uint128_t zmm4_2 = data_143dbb1fc
                    int32_t zmm5_2 = zmm6_1.d
                    zmm3 = data_143dbb200
                    zmm7_1 = zmm4_2
                    int32_t var_224_3 = zmm6_1.d
                    zmm8_1 = zmm3
                    float var_220_2 = zmm4_2.d
                    float var_21c_2 = zmm3[0]
                    i_21.d = zmm6_1.d
                    i_21:4.d = zmm4_2.d
                    i_63 = zmm3[0]
                    
                    if (r10_3 s<= rsi_5 - 1)
                        uint64_t i_20 = zx.q(rsi_5 - 1 - r10_3 + 1)
                        uint64_t i_13
                        
                        do
                            int64_t rcx_75 = **r13
                            
                            if (rdx_49.b == 0)
                                zmm0_3 = zx.o(*(r8_14 + rcx_75))
                                rdx_49.b = 1
                                zmm6_1 = zmm0_3
                                var_224_3.q = zmm0_3.q
                                zmm5_2 = zmm6_1.d
                                zmm4_2 = var_220_2
                                var_21c_2 = *(r8_14 + rcx_75 + 8)
                                zmm7_1 = zmm4_2
                                zmm3 = var_21c_2
                                i_21:4.d = zmm4_2.d
                                zmm8_1 = zmm3
                                i_21.d = zmm6_1.d
                                i_63 = zmm3[0]
                            else
                                zmm0_3 = *(r8_14 + rcx_75)
                                
                                if (not(zmm5_2 f<= zmm0_3.d))
                                    i_21.d = zmm0_3.d
                                    zmm5_2 = zmm0_3.d
                                
                                zmm1_1 = *(r8_14 + rcx_75 + 4)
                                
                                if (not(zmm7_1.d f<= zmm1_1[0]))
                                    i_21:4.d = zmm1_1[0]
                                    zmm7_1 = zmm1_1
                                
                                zmm2_1 = *(r8_14 + rcx_75 + 8)
                                
                                if (not(zmm8_1.d f<= zmm2_1.d))
                                    i_63 = zmm2_1.d
                                    zmm8_1 = zmm2_1
                                
                                if (not(zmm6_1.d f>= zmm0_3.d))
                                    var_224_3 = zmm0_3.d
                                    zmm6_1 = zmm0_3
                                
                                if (not(zmm4_2.d f>= zmm1_1[0]))
                                    var_220_2 = zmm1_1[0]
                                    zmm4_2 = zmm1_1
                                
                                if (not(zmm3[0] f>= zmm2_1.d))
                                    var_21c_2 = zmm2_1.d
                                    zmm3 = zmm2_1
                            
                            if (rdx_49.b == 0)
                                zmm0_3 = zx.o(*(r8_14 + rcx_75 + 0x10))
                                rdx_49.b = 1
                                zmm6_1 = zmm0_3
                                var_224_3.q = zmm0_3.q
                                zmm5_2 = zmm6_1.d
                                zmm4_2 = var_220_2
                                var_21c_2 = *(r8_14 + rcx_75 + 0x18)
                                zmm7_1 = zmm4_2
                                zmm3 = var_21c_2
                                i_21:4.d = zmm4_2.d
                                zmm8_1 = zmm3
                                i_21.d = zmm6_1.d
                                i_63 = zmm3[0]
                            else
                                zmm0_3 = *(r8_14 + rcx_75 + 0x10)
                                
                                if (not(zmm5_2 f<= zmm0_3.d))
                                    i_21.d = zmm0_3.d
                                    zmm5_2 = zmm0_3.d
                                
                                zmm2_1 = *(r8_14 + rcx_75 + 0x14)
                                
                                if (not(zmm7_1.d f<= zmm2_1.d))
                                    i_21:4.d = zmm2_1.d
                                    zmm7_1 = zmm2_1
                                
                                zmm1_1 = *(r8_14 + rcx_75 + 0x18)
                                
                                if (not(zmm8_1.d f<= zmm1_1[0]))
                                    i_63 = zmm1_1[0]
                                    zmm8_1 = zmm1_1
                                
                                if (not(zmm6_1.d f>= zmm0_3.d))
                                    var_224_3 = zmm0_3.d
                                    zmm6_1 = zmm0_3
                                
                                if (not(zmm4_2.d f>= zmm2_1.d))
                                    var_220_2 = zmm2_1.d
                                    zmm4_2 = zmm2_1
                                
                                if (not(zmm3[0] >= zmm1_1[0]))
                                    var_21c_2 = zmm1_1[0]
                                    zmm3 = zmm1_1
                            
                            if (r12[0x10].b != 0)
                                zmm1_1 = __minss_xmmss_memss((*(r8_14 + rcx_75 + 0x28))[0], 
                                    *(r11_2 + rdi_12 + 0x28))
                                zmm2_1 = __minss_xmmss_memss((*(r8_14 + rcx_75 + 0x2c)).d, 
                                    *(r11_2 + rdi_12 + 0x2c))
                                zmm0_3 = __minss_xmmss_memss((*(r8_14 + rcx_75 + 0x30)).d, 
                                    *(r11_2 + rdi_12 + 0x30))
                                *(r11_2 + rdi_12 + 0x28) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                                *(r11_2 + rdi_12 + 0x30) = zmm0_3.d
                                zmm2_1 = *(r8_14 + rcx_75 + 0x38)
                                zmm0_3 = *(r8_14 + rcx_75 + 0x3c)
                                zmm1_1 = __maxss_xmmss_memss((*(r11_2 + rdi_12 + 0x34))[0], 
                                    *(r8_14 + rcx_75 + 0x34))
                                zmm2_1 = __maxss_xmmss_memss(zmm2_1.d, *(r11_2 + rdi_12 + 0x38))
                                int32_t var_ac_1 =
                                    __maxss_xmmss_memss(zmm0_3.d, *(r11_2 + rdi_12 + 0x3c)).d
                                *(r11_2 + rdi_12 + 0x34) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                                *(r11_2 + rdi_12 + 0x3c) = var_ac_1
                            
                            r8_14 = &r8_14[4]
                            i_13 = i_20
                            i_20 -= 1
                        while (i_13 != 1)
                    
                    r14_6 += 1
                    r15_3 += 8
                    *(r11_2 + rdi_12) = i_21
                    *(r11_2 + rdi_12 + 8) = i_63
                    *(r11_2 + rdi_12 + 0x10) = var_224_3.q
                    *(r11_2 + rdi_12 + 0x18) = var_21c_2
                    r11_2 = &r11_2[8]
                    rax_102 = r12[0x26]
                while (r14_6 s< rax_102)
                
                rsi_5 = rax_102
            
            int64_t rdi_13 = sx.q(var_1ec_1)
            r12[0xd] = rsi_5
            int32_t r14_7 = (rdi_13 + 1).d
            var_1ec_1 = r14_7
            var_188_1.d = r14_7
            int64_t* result_3
            
            if (r14_7 s<= var_188_1:4.d)
                result_3 = result_1
            else
                sub_1405a4cf0(&i_30)
                result_3 = i_30
                var_1ec_1 = var_188_1.d
                result_1 = result_3
            
            memmove(result_3 + 4, result_3, (rdi_13 << 2).d)
            rdi_6 = &r12[0x16]
            i_53 = i_22
            *result_3 = r12[0xd]
            i_17 = nullptr
        while (r12[0xd] s> 1)
        
        i_52 = i_25
    
    void* rbx_11 = *r13
    uint64_t i_44 = zx.q(*r12)
    *(rbx_11 + 0x28) = i_17.d
    
    if (*(rbx_11 + 0x2c) != i_44.d)
        sub_1405dadb0(rbx_11 + 0x20, i_44.d)
    
    if (i_44.d s> 0)
        i_17 = i_44
        int64_t* i_14
        
        do
            int64_t rdi_14 = sx.q(*(rbx_11 + 0x28))
            int32_t rax_105 = (rdi_14 + 1).d
            *(rbx_11 + 0x28) = rax_105
            
            if (rax_105 s> *(rbx_11 + 0x2c))
                sub_1405a4cf0(rbx_11 + 0x20)
            
            int32_t* rdx_54 = *(rbx_11 + 0x20) + (rdi_14 << 2)
            
            if (rdx_54 != 0)
                *rdx_54 = 0xffffffff
            
            i_14 = i_17
            i_17 -= 1
        while (i_14 != 1)
    
    if (r12[1] s> 0)
        int64_t* i_49 = i_17
        
        do
            i_49 += 4
            *(*(*r13 + 0x20) + (sx.q(*(*rdi_4 + i_49 - 4)) << 2)) = i_17.d
            i_17 = zx.q(i_17.d + 1)
        while (i_17.d s< r12[1])
        
        i_53 = i_22
    
    if (r12[0x10].b == 0)
        void* rdx_56 = **r13
        *(rdx_56 + 0x28) = data_14399f668.q
        *(rdx_56 + 0x30) = data_14399f670
        void* rdx_57 = **r13
        *(rdx_57 + 0x34) = data_14399f668.q
        *(rdx_57 + 0x3c) = data_14399f670
    
    if (i_28 != 0)
        sub_140a74f90(i_28)
    
    if (i_31 != 0)
        sub_140a74f90(i_31)
    
    if (i_52 != 0)
        sub_140a74f90(i_52)
    
    if (i_26 != 0)
        sub_140a74f90(i_26)
    
    if (i_35 != 0)
        sub_140a74f90(i_35)
    
    if (i_53 != 0)
        sub_140a74f90(i_53)
    
    if (i_36 != 0)
        sub_140a74f90(i_36)
    
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)
else
    void* rbx_1 = *r13
    uint64_t i_40 = zx.q(*r12)
    *(rbx_1 + 0x28) = 0
    
    if (*(rbx_1 + 0x2c) != i_40.d)
        result = sub_1405dadb0(rbx_1 + 0x20, i_40.d)
    
    if (i_40.d s> 0)
        uint64_t i_18 = i_40
        uint64_t i_15
        
        do
            int64_t rdi_2 = sx.q(*(rbx_1 + 0x28))
            int32_t rax_1 = (rdi_2 + 1).d
            *(rbx_1 + 0x28) = rax_1
            
            if (rax_1 s> *(rbx_1 + 0x2c))
                sub_1405a4cf0(rbx_1 + 0x20)
            
            result = *(rbx_1 + 0x20)
            void* rdx_4 = result + (rdi_2 << 2)
            
            if (rdx_4 != 0)
                *rdx_4 = 0xffffffff
            
            i_15 = i_18
            i_18 -= 1
        while (i_15 != 1)

return result
