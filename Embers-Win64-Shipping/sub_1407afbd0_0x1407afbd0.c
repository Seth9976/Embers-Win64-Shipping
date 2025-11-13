// 函数: sub_1407afbd0
// 地址: 0x1407afbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* r15 = arg2
int64_t* r12 = arg1
int32_t* i_6
sub_140d3a3a0(&i_6, nullptr)
*r12 = i_6
sub_140d3a3a0(&i_6, nullptr)
int32_t rdi = 0
r12[9] = i_6
r12[0xb] = 0
sub_140d3a3a0(&i_6, nullptr)
r12[0xc] = i_6
*(r12 + 0xd0) = data_14399f6e0
*(r12 + 0xe0) = data_14399f6f0
*(r12 + 0xf0) = data_14399f700
*(r12 + 0x100) = data_14399f710
*(r12 + 0x110) = data_14399f6e0
*(r12 + 0x120) = data_14399f6f0
*(r12 + 0x130) = data_14399f700
*(r12 + 0x140) = data_14399f710
*(r12 + 0x150) = data_14399f6e0
*(r12 + 0x160) = data_14399f6f0
*(r12 + 0x170) = data_14399f700
*(r12 + 0x180) = data_14399f710
void* rcx_3 = *(arg3 + 0x28)
void* rax_5 = *(rcx_3 + 0xa8)

if (rax_5 == 0)
    rax_5 = sub_141ee69e0(rcx_3)

r12[0x32].d = (*(rax_5 + 0x530)).d
int32_t rax_6 = *(r15 + 0xb4)
*(r12 + 0x1ec) &= 0xfffffffc
r12[0x3d].d = rax_6
__builtin_memset(&r12[0x40], 0, 0x19)
void* rdx = *(arg3 + 0x28)
float zmm6[0x4]
float var_48[0x4] = zmm6
void* var_300 = nullptr
void* rax_7 = sub_1407abae0(r15, rdx, r12, &var_300, r12)
r12[0xb] = rax_7
sub_140d3a3a0(&r12[0xc], rax_7)
uint64_t j

if (sub_140d3e110(r12).b == 0)
label_1407b016f:
    j.b = 0
else
    void* rax_8 = sub_140d3c6e0(r12)
    zmm6 = data_143ce0340
    float zmm2_1[0x4] = *(rax_8 + 0x1c0)
    float temp0_1[0x4] = _mm_add_ps(zmm2_1, zmm2_1)
    float temp0_2[0x4] = _mm_mul_ps(zmm2_1, temp0_1)
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x29)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 1)
    float temp0_8[0x4] =
        _mm_sub_ps(zmm6, _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x1a), temp0_5))
    float zmm1_1[0x4] = *(rax_8 + 0x1e0)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
    float temp0_10[0x4] = _mm_mul_ps(zmm1_1, temp0_8)
    float temp0_12[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(zmm2_1, zmm2_1, 4))
    float zmm5_1[0x4] = __andps_xmmxud_memxud(temp0_10, data_143ce0350)
    float temp0_15[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff))
    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_12)
    float temp0_17[0x4] = _mm_sub_ps(temp0_12, temp0_15)
    float temp0_18[0x4] = _mm_mul_ps(zmm1_1, temp0_16)
    float temp0_19[0x4] = _mm_mul_ps(temp0_17, temp0_9)
    float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm5_1, 0), 
        _mm_shuffle_ps(temp0_19, zmm5_1, 0x32), 0x82)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_18, zmm5_1, 0x31)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm5_1, 0x10), temp0_23, 0x88)
    float zmm0_1[0x4] = *(rax_8 + 0x1d0)
    *(r12 + 0xd0) = temp0_22
    *(r12 + 0xe0) = temp0_25
    float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, temp0_19, 0x12), zmm5_1, 0xe8)
    zmm6[0].q = zmm0_1 u>> 0x40
    float temp0_28[0x4] = _mm_shuffle_ps(zmm0_1, zmm6, 0xc4)
    *(r12 + 0xf0) = temp0_27
    *(r12 + 0x100) = temp0_28
    i_6.o = temp0_25
    float var_2c8[0x4] = temp0_27
    float var_248[0x4]
    uint32_t (* rax_9)[0x4] = sub_140631b10(&r12[0x1a], &var_248)
    float zmm4_2[0x4] = *rax_9
    float zmm0_2[0x4] = rax_9[1][0]
    float zmm1_2[0x4] = rax_9[2][0]
    uint32_t zmm2_2 = rax_9[3][0]
    float zmm8_1[0x4] = (*rax_9)[1]
    uint32_t zmm3_1[0x4] = (*rax_9)[5]
    uint32_t zmm5_2 = (*rax_9)[9]
    zmm6 = (*rax_9)[0xd]
    float zmm12_1[0x4] = (*rax_9)[2]
    uint32_t zmm7_1 = (*rax_9)[6]
    uint32_t zmm9_1 = (*rax_9)[0xa]
    uint32_t zmm10_1 = (*rax_9)[0xe]
    float zmm15_1[0x4] = (*rax_9)[3]
    uint32_t zmm11_1 = (*rax_9)[7]
    uint32_t zmm13_1 = (*rax_9)[0xb]
    uint32_t zmm14_1 = (*rax_9)[0xf]
    float temp0_29[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
    temp0_29[0] = zmm0_2[0]
    float temp0_30[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
    temp0_30[0] = zmm3_1[0]
    float temp0_31[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xe1)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xe1)
    temp0_31[0] = zmm7_1
    *(r12 + 0x150) = temp0_22
    zmm0_2 = i_6.o
    temp0_32[0] = zmm11_1
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
    temp0_33[0] = zmm1_2[0]
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
    zmm1_2 = var_2c8
    temp0_34[0] = zmm5_2
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
    temp0_35[0] = zmm9_1
    *(r12 + 0x160) = zmm0_2
    temp0_36[0] = zmm13_1
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x27)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x27)
    temp0_37[0] = zmm2_2
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x39)
    temp0_38[0] = zmm6[0]
    *(r12 + 0x110) = temp0_39
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x27)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
    temp0_40[0] = zmm10_1
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
    temp0_41[0] = zmm14_1
    *(r12 + 0x120) = temp0_42
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x39)
    *(r12 + 0x130) = temp0_43
    *(r12 + 0x170) = zmm1_2
    *(r12 + 0x140) = temp0_44
    var_248 = temp0_39
    float var_238_1[0x4] = temp0_42
    float var_228_1[0x4] = temp0_43
    float var_218_1[0x4] = temp0_44
    *(r12 + 0x180) = temp0_28
    int128_t zmm1_3 = sub_140d3a3a0(&r12[9], *(sub_140d3c6e0(r12) + 0xc0))
    r12[0x11].d = 0
    
    if (*(r12 + 0x8c) != 0)
        sub_1405dadb0(&r12[0x10], 0)
    
    int32_t* i_9 = r12[0xb]
    void* rbx
    rbx.b = 1
    char var_2f8_1 = 1
    int32_t r14_1 = -1
    i_6 = i_9
    
    if (i_9 == 0)
        r14_1 = 0
    else if (*(r15 + 0x78) != 0)
        uint64_t* i = *(r15 + 0x70)
        temp0_28[0].q = i
        void* rax_13 = &i[sx.q(*(r15 + 0x78))]
        var_2c8[0].q = rax_13
        
        if (i != rax_13)
            do
                j = *i
                int64_t* r9_1 = *(i_9 + 0x308)
                int64_t* rdx_4 = r9_1
                temp0_22[0].q = j
                int32_t var_2e0
                var_2e0.q = j
                void* r8_3 = &r9_1[sx.q(i_9[0xc4]) * 6]
                
                if (r9_1 == r8_3)
                    goto label_1407b016f_1
                
                while (*rdx_4 != j)
                    rdx_4 = &rdx_4[6]
                    
                    if (rdx_4 == r8_3)
                        goto label_1407b016f_1
                
                int32_t rbx_3 = ((rdx_4 - r9_1) s/ 0x30).d
                
                if (rbx_3 == 0xffffffff)
                    goto label_1407b016f_1
                
                int64_t rax_16 = sx.q(rbx_3)
                void* rsi_3 = &r9_1[rax_16 * 6]
                j = zx.q(*(r12[0xb] + 0xe0) - 1)
                int32_t j_1 = *(rsi_3 + 8)
                
                if (j_1 != 0xffffffff)
                    if (j_1 s< 0)
                        j = 0
                    else if (j_1 s< j.d)
                        j = zx.q(j_1)
                
                if (r14_1 == 0xffffffff)
                    r14_1 = j.d
                else if (r14_1 != j.d)
                    goto label_1407b016f_1
                
                if (*(rax_16 * 0x78 + *(i_9 + 0x328) + 8) s<= 0)
                    goto label_1407b016f_1
                
                int32_t rcx_15 = r12[0x11].d
                r12[0x11].d = rcx_15 + 1
                
                if (rcx_15 + 1 s> *(r12 + 0x8c))
                    sub_1405a4cf0(&r12[0x10])
                    i_9 = i_6
                
                *(r12[0x10] + (sx.q(rcx_15) << 2)) = rbx_3
                rbx.b = var_2f8_1 & *(rsi_3 + 0xc)
                i = temp0_28[0].q + 8
                var_2f8_1 = rbx.b
                temp0_28[0].q = i
            while (i != var_2c8[0].q)
    else
        int32_t rax_11 = *(r15 + 0x80)
        r14_1 = i_9[0x38] - 1
        
        if (rax_11 != 0xffffffff)
            if (rax_11 s< 0)
                r14_1 = 0
            else if (rax_11 s< r14_1)
                r14_1 = rax_11
    
    char rdx_10 = *(r15 + 0x68)
    int32_t rcx_19 = 4
    int32_t r8_4
    r8_4.b = rdx_10 - 1 u<= 1
    
    if (rdx_10 == 2)
        rcx_19 = 6
    
    void* rax_24 = var_300
    var_300 = rax_24
    int32_t var_2dc
    int32_t var_2dc_1 = rcx_19 | (var_2dc & 0xfffffff8) | r8_4
    int128_t var_290
    float (* rcx_26)[0x4]
    
    if (rax_24 == 0)
        i_6 = r14_1.q
        var_290 = zx.o(0)
        sub_1407810a0(&r12[0xd], &i_6, zmm1_3)
        rcx_26 = &i_6
    else
        sub_140d3a3a0(&i_6, rax_24)
        int64_t* rax_26
        int128_t zmm1_4
        rax_26, zmm1_4 = sub_140790320(sub_1408524d0(arg3) + 0x468, &var_2c8, &i_6, r14_1.q)
        sub_1407810a0(&r12[0xd], rax_26, zmm1_4)
        rcx_26 = &var_2c8
    
    sub_140780800(rcx_26)
    
    if (r12[0x11].d s> 1 && rbx.b != 0)
        int64_t rax_28 = r12[0x12]
        r12[0x18] = r12
        (*(rax_28 + 0x10))(&r12[0x12])
    
    j = r12[0xb]
    
    if (j == 0)
        j.b = 1
    else
        r12[0x43].b = 1
        void* r13_2 = *(**(j + 0x58) + (sx.q(r12[0xd].d) << 3))
        temp0_28[0].q = r13_2
        void* rax_31 = sub_140d3c6e0(r12)
        void* rax_32
        void* rcx_31
        int64_t rdx_15
        
        if (rax_31 != 0)
            rax_32 = sub_142591550()
            rcx_31 = *(rax_31 + 0x10)
            rdx_15 = sx.q(*(rax_32 + 0x38))
        
        void* rdx_17
        
        if (rax_31 == 0 || rdx_15.d s> *(rcx_31 + 0x38)
                || *(*(rcx_31 + 0x30) + (rdx_15 << 3)) != rax_32 + 0x30 || *(rax_31 + 0x430) == 0)
            rdx_17 = r13_2 + 0x138
        else
            rdx_17 = sub_141f66050(rax_31, r12[0xd].d)
        
        void* r8_6 = r12[0xb]
        
        if (r14_1 s< 0 || r14_1 s>= *(r8_6 + 0xe0))
            rax_31.b = 0
        else
            rax_31.b = 1
        
        void* const rcx_35
        
        if (rax_31.b == 0)
            rcx_35 = nullptr
        else
            rcx_35 = sx.q(r14_1) * 0xb8 + *(r8_6 + 0xd8)
        
        int32_t var_308_2
        int64_t* rbx_5
        void* rsi_4
        int32_t r13_3
        
        if ((*(rcx_35 + 0xb1) & 4) != 0)
            r13_3 = *(r13_2 + 0xec)
            var_308_2 = *(rdx_17 + 0x40)
            rbx_5 = *(temp0_28[0].q + 0x18)
            
            if (rbx_5 == 0)
                rsi_4.b = 0
                rax_31.b = 0
            else
                rsi_4.b = 1
                
                if ((*(*rbx_5 + 0x58))(rbx_5).d s<= 0)
                    rax_31.b = 0
                else
                    rax_31 = 1
        
        if ((*(rcx_35 + 0xb1) & 4) == 0 || r13_3 == 0 || var_308_2 u<= 0 || rbx_5 == 0
                || rsi_4.b == 0 || rax_31.b == 0)
            rax_31.b = 0
        else
            rax_31.b = 1
        
        r12[0x43].b = rax_31.b
        void* r9_4 = r12[0xb] + 0x188
        *(r12 + 0x194) = 0xffffffff
        int32_t var_2e0_1
        var_2e0_1.q = r9_4
        
        if ((*(r15 + 0xb0) & 1) != 0 && *(r15 + 0xa8) != 0)
            int32_t rax_34 = sub_14078ee20(r9_4, r15 + 0xa8)
            r9_4 = var_2e0_1.q
            *(r12 + 0x194) = rax_34
        
        j = zx.q(*(r9_4 + 0x28))
        
        if (*(r15 + 0x90) s<= 0)
            *(r12 + 0x19c) = j.d
        label_1407b0646:
            int32_t rax_46 = *(r15 + 0xa0)
            int64_t r13_7 = sx.q(r12[0x37].d)
            
            if (rax_46 s> r13_7.d)
                r12[0x37].d = rax_46
                int32_t i_7 = rax_46 - r13_7.d
                
                if (rax_46 s> *(r12 + 0x1bc))
                    sub_1405c4fe0(&r12[0x36])
                
                void* rax_49 = (r13_7 << 6) + r12[0x36]
                
                if (i_7 != 0)
                    zmm3_1 = data_143ce0350
                    int32_t i_1
                    
                    do
                        float zmm1_5[0x4] = data_143ce0340
                        *(rax_49 + 0x10) = zx.o(0)
                        rax_49 += 0x40
                        zmm1_5[0].q = zx.o(0) u>> 0x40
                        *(rax_49 - 0x40) = _mm_shuffle_ps(zx.o(0), zmm1_5, 0xc4)
                        *(rax_49 - 0x20) = _mm_and_ps(data_143ce0340, zmm3_1)
                        *(rax_49 - 0x10) = 0xffffffff
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
            else if (rax_46 s< r13_7.d)
                int32_t rcx_46 = r13_7.d
                
                if (rcx_46 != rax_46)
                    r12[0x37].d = r13_7.d - (rcx_46 - rax_46)
                    sub_1407c3fe0(&r12[0x36])
            
            int32_t rax_50 = r12[0x37].d
            
            if (var_300 == 0)
                int32_t i_2 = 0
                
                if (rax_50 s> 0)
                    int64_t rbx_8 = 0
                    
                    do
                        sub_1407c8dd0(&i_6, 
                            sub_142313410(r12[0xb], &var_248, *(*(r15 + 0x98) + (sx.q(i_2) << 3))))
                        int64_t rax_53 = r12[0x36]
                        rbx_8 += 0x40
                        i_2 += 1
                        *(rbx_8 + rax_53 - 0x40) = i_6.o
                        int128_t var_278
                        *(rbx_8 + rax_53 - 0x20) = var_278
                        *(rbx_8 + rax_53 - 0x30) = var_290
                        *(rbx_8 + r12[0x36] - 0x10) = 0xffffffff
                    while (i_2 s< r12[0x37].d)
            else
                int32_t i_3 = 0
                
                if (rax_50 s> 0)
                    void* rdi_2 = var_300
                    
                    do
                        int64_t i_8 = sx.q(i_3)
                        int128_t* r8_11 = (i_8 << 6) + r12[0x36]
                        sub_141f66350(rdi_2, *(*(r15 + 0x98) + (i_8 << 3)), r8_11, &r8_11[3])
                        i_3 += 1
                    while (i_3 s< r12[0x37].d)
                    
                    rdi = 0
            
            r12[0x38].d = *(r12[0xb] + 0x1b0)
            *(r12 + 0x1c4) = 0
            int32_t rdx_32 = *(r15 + 0xa0)
            r12[0x3a].d = 0
            
            if (rdx_32 s> *(r12 + 0x1d4))
                sub_1405a5220(&r12[0x39], rdx_32)
            
            sub_140783960(&r12[0x39], *(r15 + 0xa0))
            sub_1407cdc80(r12)
            int32_t rdx_34 = *(r15 + 0xa0)
            r12[0x3c].d = 0
            
            if (rdx_34 s> *(r12 + 0x1e4))
                sub_1405a5220(&r12[0x3b], rdx_34)
            
            int64_t r13_9 = sx.q(r12[0x3a].d)
            
            if (r13_9.d != 0)
                int32_t rcx_57 = r12[0x3c].d
                int32_t rdx_35 = rcx_57 + r13_9.d
                
                if (rdx_35 s> *(r12 + 0x1e4))
                    sub_1405a5220(&r12[0x3b], rdx_35)
                    rcx_57 = r12[0x3c].d
                
                memcpy(sx.q(rcx_57) * 0x30 + r12[0x3b], r12[0x39], (r13_9 * 0x30).d)
                r12[0x3c].d += r13_9.d
            
            int64_t* r13_10 = *(r15 + 0x98)
            int64_t r15_2 = 0
            void* var_f8_1 = nullptr
            int32_t var_f0_1 = 0
            int32_t var_ec_1 = 0x10
            uint64_t rcx_63 = sx.q(*(r15 + 0xa0)) << 3 u>> 3
            
            if (r13_10 u> &r13_10[sx.q(*(r15 + 0xa0))])
                rcx_63 = 0
            
            if (rcx_63 != 0)
                do
                    int64_t rbx_10 = *r13_10
                    
                    if (sub_142310d00(r12[0xb], rbx_10) == 0)
                        int64_t rsi_8 = sx.q(var_f0_1)
                        int32_t rax_60 = (rsi_8 + 1).d
                        var_f0_1 = rax_60
                        void var_178
                        
                        if (rax_60 s> var_ec_1)
                            sub_1407c3c00(&var_178, rsi_8.d)
                        
                        void* rcx_66 = &var_178
                        
                        if (var_f8_1 != 0)
                            rcx_66 = var_f8_1
                        
                        *(rcx_66 + (rsi_8 << 3)) = rbx_10
                    
                    r13_10 = &r13_10[1]
                    r15_2 += 1
                while (r15_2 != rcx_63)
                
                rdi = 0
                
                if (var_f8_1 != 0)
                    sub_140a74f90(var_f8_1)
            
            if (((*(arg3 + 0x6b8) u>> 5).b & 1) != 0)
                int32_t rax_64 = sub_1422c5b90(rdx_17)
                void* r8_17 = r12[0xb]
                int32_t rcx_69 = 0
                
                if (rax_64 == 2)
                    rcx_69 = 2
                
                *(r12 + 0x1ec) &= 0xfffffffd
                *(r12 + 0x1ec) |= rcx_69
                int32_t rcx_70 = *(r12 + 0x1ec)
                int32_t rax_65
                rax_65.b = *(rdx_17 + 0x28) != 0
                r12[0x40].d = (rax_65 + 2) * *(rdx_17 + 0x24)
                bool cond:7_1 = *(rdx_17 + 0x28) != 0
                r12[0x3e] = rdx_17
                int32_t rax_68
                rax_68.b = cond:7_1
                *(r12 + 0x204) = rax_68 + 1
                r12[0x3f] = rdx_17 + 0x48
                void* rax_70
                
                if (r14_1 s< 0 || r14_1 s>= *(r8_17 + 0xe0))
                    rax_70.b = 0
                else
                    rax_70.b = 1
                
                void* const rdx_40
                
                if (rax_70.b == 0)
                    rdx_40 = nullptr
                else
                    rdx_40 = sx.q(r14_1) * 0xb8 + *(r8_17 + 0xd8)
                
                int32_t rax_72
                
                if ((*(rdx_40 + 0xb1) & 8) != 0)
                    rax_72 = 1
                
                if ((*(rdx_40 + 0xb1) & 8) == 0 || var_2f8_1 == 0)
                    rax_72 = 0
                
                *(r12 + 0x1ec) = (rcx_70 & 0xfffffffe) | rax_72
                sub_1423177f0(r8_17)
                void* rbx_12 = r12[0xb]
                void*** rax_73 = j_sub_140a82f30(0x1a8)
                void*** r13_11 = rax_73
                
                if (rax_73 == 0)
                    r13_11 = nullptr
                else
                    memset(rax_73, 0, 0x1a8)
                    r13_11[1].d = 0xffffffff
                    *(r13_11 + 0xc) = 4
                    *r13_11 = &data_142da8560
                    __builtin_memset(&r13_11[2], 0, 0x31)
                    *(r13_11 + 0x44) = 0
                    r13_11[0xb] = 0
                    r13_11[0xc] = 0
                    r13_11[0xa] = &data_142da8070
                    r13_11[0xd].b = 0
                    r13_11[0xf] = 0
                    r13_11[0x10] = 0
                    r13_11[0xe] = &data_142da84e0
                    r13_11[0x11].b = 0
                    r13_11[0x13] = 0
                    r13_11[0x14] = 0
                    r13_11[0x12] = &data_142da84e0
                    r13_11[0x15].b = 0
                    r13_11[0x17] = 0
                    r13_11[0x18] = 0
                    r13_11[0x16] = &data_142da84e0
                    r13_11[0x19].b = 0
                    __builtin_memset(&r13_11[0x1a], 0, 0x48)
                    r13_11[0x23].d = 0xffffffff
                    r13_11[0x25] = 0
                    r13_11[0x26] = 0
                    r13_11[0x24] = &data_142da8520
                    r13_11[0x27].b = 0
                    __builtin_memset(&r13_11[0x28], 0, 0x18)
                    __builtin_memset(&r13_11[0x30], 0, 0x25)
                
                r12[0x41] = r13_11
                int64_t rsi_9 = *(rbx_12 + 0x318)
                *(r13_11 + 0x1a4) = 0
                __builtin_memset(&r13_11[0x31], 0, 0x18)
                r13_11[0x22] = 0
                r13_11[0x26].d = 0
                
                if (*(r13_11 + 0x134) != 0)
                    sub_1407c42e0(&r13_11[0x25], 0)
                
                r13_11[0x2a] = 0
                void* rsi_10 = temp0_28[0].q
                r13_11[0x32] = rsi_9 + sx.q(r14_1) * 0x48
                char rax_76 = *(r12 + 0x1ec) & 1
                r13_11[0x31] = rsi_10
                *(r13_11 + 0x1a4) = rax_76
                int64_t* rcx_77 = *(rsi_10 + 0x18)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = muls.dp.d(0x55555556, zx.d((*(*rcx_77 + 0x58))(rcx_77)))
                r13_11[0x33].d = temp2_1 + (temp2_1 u>> 0x1f)
                *(r13_11 + 0x19c) = *(rsi_10 + 0xec)
                r13_11[0x22].d = r12[0x33].d
                *(r13_11 + 0x114) = *(r12 + 0x19c)
                r13_11[0x23].d = *(r12 + 0x194)
                int32_t rdx_43 = r12[0x35].d
                
                if (rdx_43 s> *(r13_11 + 0x134))
                    sub_1407c42e0(&r13_11[0x25], rdx_43)
                
                int64_t r15_3 = 0
                int16_t* r14_3 = r12[0x34]
                uint64_t rdx_45 = (sx.q(r12[0x35].d) * 2) u>> 1
                
                if (r14_3 u> &r14_3[r12[0x35]])
                    rdx_45 = 0
                
                uint64_t var_2f0_1 = rdx_45
                void* rcx_78
                
                if (rdx_45 != 0)
                    do
                        int64_t rsi_11 = sx.q(r13_11[0x26].d)
                        int16_t r8_18 = *r14_3
                        var_2f8_1.w = r8_18
                        int32_t rax_87 = (rsi_11 + 1).d
                        r13_11[0x26].d = rax_87
                        
                        if (rax_87 s> *(r13_11 + 0x134))
                            sub_1407c36f0(&r13_11[0x25], rsi_11.d)
                            rdx_45 = var_2f0_1
                            r8_18 = var_2f8_1.w
                        
                        rcx_78 = r13_11[0x25]
                        
                        if ((rcx_78.b & 1) != 0)
                            rcx_78 = (rcx_78 s>> 1) + &r13_11[0x25]
                        
                        r14_3 = &r14_3[1]
                        *(rcx_78 + (rsi_11 << 1)) = r8_18
                        r15_3 += 1
                    while (r15_3 != rdx_45)
                
                r13_11[0x2a].d = r12[0x37].d
                *(r13_11 + 0x154) = r12[0x38].d
                
                if (r12[0x11].d s> 0)
                    int64_t rbx_14 = 0
                    var_300 = r12[0xb]
                    int32_t r9_6 = 0
                    r13_11[8].b = 1
                    *(r13_11 + 0x44) = 0
                    int32_t* r10_1 = r12[0x10]
                    uint64_t rsi_13 = sx.q(r12[0x11].d) << 2 u>> 2
                    
                    if (r10_1 u> &r10_1[r12[0x11]])
                        rsi_13 = 0
                    
                    if (rsi_13 != 0)
                        void* r12_1 = var_300
                        rcx_78.b = 1
                        int32_t r11_1 = 0
                        
                        do
                            int64_t rax_93 = sx.q(*r10_1)
                            r10_1 = &r10_1[1]
                            char rdx_47 = 0
                            void* r8_20 = rax_93 * 0x78 + *(r12_1 + 0x328)
                            r9_6 += *(r8_20 + 8)
                            *(r13_11 + 0x44) = r9_6
                            r11_1 += *(r8_20 + 0x18)
                            r13_11[9].d = r11_1
                            
                            if (*(r8_20 + 0x40) == *(r8_20 + 8))
                                rdx_47 = rcx_78.b
                            
                            rbx_14 += 1
                            r13_11[8].b = rdx_47
                            rcx_78 = zx.q(rdx_47)
                        while (rbx_14 != rsi_13)
                        
                        r12 = arg1
                    
                    if (r9_6 s> *(r13_11 + 0x64))
                        sub_1407c4340(&r13_11[0xb], r9_6)
                        r9_6 = *(r13_11 + 0x44)
                    
                    if (r9_6 s> *(r13_11 + 0x84))
                        sub_1407c4340(&r13_11[0xf], r9_6)
                        r9_6 = *(r13_11 + 0x44)
                    
                    void* r15_4 = &r13_11[0x13]
                    
                    if (r9_6 s> *(r15_4 + 0xc))
                        sub_1407c4340(r15_4, r9_6)
                    
                    int32_t rdx_51 = r13_11[9].d
                    void* rbx_15 = &r13_11[0x17]
                    
                    if (rdx_51 s> *(rbx_15 + 0xc))
                        sub_1407c4340(rbx_15, rdx_51)
                    
                    int32_t* i_4 = r12[0x10]
                    int64_t rax_95 = sx.q(r12[0x11].d)
                    var_2f8_1.d = 0
                    i_6 = i_4
                    void* rax_96 = &i_4[rax_95]
                    temp0_22[0].q = rax_96
                    
                    if (i_4 != rax_96)
                        void* r12_2 = var_300
                        
                        do
                            int64_t* r9_8 = sx.q(*i_4) * 0x78 + *(r12_2 + 0x328)
                            int64_t* var_2d8_1 = r9_8
                            void* var_2e8_1
                            
                            if (r13_11[8].b != 0)
                                void* r10_2 = r9_8[7]
                                int64_t rax_99 = r10_2 s>> 1
                                char rdx_52 = r9_8[7].b & 1
                                void* r8_22
                                
                                if (rdx_52 == 0)
                                    r8_22 = r10_2
                                else
                                    r8_22 = rax_99 + 0x38 + r9_8
                                
                                var_2e8_1 = r8_22
                                int64_t rax_100 = sx.q(r9_8[8].d)
                                void* rcx_88 = rax_99 + 0x38 + r9_8
                                var_300 = nullptr
                                void* r11_2 = nullptr
                                
                                if (rdx_52 == 0)
                                    rcx_88 = r10_2
                                
                                void* rdx_53 = rcx_88 + (rax_100 << 2)
                                uint64_t r10_6 = (rdx_53 - r8_22 + 3) u>> 2
                                
                                if (r8_22 u> rdx_53)
                                    r10_6 = 0
                                
                                uint64_t var_2f0_2 = r10_6
                                
                                if (r10_6 != 0)
                                    do
                                        int32_t rdx_54 = r13_11[0xc].d
                                        zmm6 = *r8_22
                                        r13_11[0xc].d = rdx_54 + 1
                                        
                                        if (rdx_54 + 1 s> *(r13_11 + 0x64))
                                            sub_1407c3800(&r13_11[0xb], rdx_54)
                                            r8_22 = var_2e8_1
                                            r10_6 = var_2f0_2
                                            r11_2 = var_300
                                        
                                        void* rcx_91 = r13_11[0xb]
                                        
                                        if ((rcx_91.b & 1) != 0)
                                            rcx_91 = (rcx_91 s>> 1) + &r13_11[0xb]
                                        
                                        r8_22 += 4
                                        r11_2 += 1
                                        var_2e8_1 = r8_22
                                        var_300 = r11_2
                                        *(rcx_91 + (sx.q(rdx_54) << 2)) = zmm6[0]
                                    while (r11_2 != r10_6)
                                    
                                    r9_8 = var_2d8_1
                                
                                void* r10_7 = r9_8[9]
                                int64_t rax_104 = r10_7 s>> 1
                                char rdx_55 = r9_8[9].b & 1
                                void* r8_24
                                
                                if (rdx_55 == 0)
                                    r8_24 = r10_7
                                else
                                    r8_24 = rax_104 + 0x48 + r9_8
                                
                                var_300 = r8_24
                                void* rcx_93 = rax_104 + 0x48 + r9_8
                                var_2c8[0].q = 0
                                int64_t r11_3 = 0
                                
                                if (rdx_55 == 0)
                                    rcx_93 = r10_7
                                
                                void* rdx_56 = rcx_93 + (sx.q(r9_8[0xa].d) << 2)
                                uint64_t r10_11 = (rdx_56 - r8_24 + 3) u>> 2
                                
                                if (r8_24 u> rdx_56)
                                    r10_11 = 0
                                
                                uint64_t var_2f0_3 = r10_11
                                
                                if (r10_11 != 0)
                                    do
                                        int32_t rdx_57 = r13_11[0x10].d
                                        int32_t r9_10 = *r8_24 + var_2f8_1.d
                                        var_2e8_1.d = r9_10
                                        r13_11[0x10].d = rdx_57 + 1
                                        
                                        if (rdx_57 + 1 s> *(r13_11 + 0x84))
                                            sub_1407c3800(&r13_11[0xf], rdx_57)
                                            r8_24 = var_300
                                            r10_11 = var_2f0_3
                                            r11_3 = var_2c8[0].q
                                            r9_10 = var_2e8_1.d
                                        
                                        void* rcx_96 = r13_11[0xf]
                                        
                                        if ((rcx_96.b & 1) != 0)
                                            rcx_96 = (rcx_96 s>> 1) + &r13_11[0xf]
                                        
                                        r8_24 += 4
                                        r11_3 += 1
                                        var_300 = r8_24
                                        var_2c8[0].q = r11_3
                                        *(rcx_96 + (sx.q(rdx_57) << 2)) = r9_10
                                    while (r11_3 != r10_11)
                                    
                                    r9_8 = var_2d8_1
                                    r15_4 = &r13_11[0x13]
                            
                            int32_t* r10_12 = *r9_8
                            void* r11_4 = nullptr
                            int64_t rax_108 = sx.q(r9_8[1].d)
                            var_2c8[0].q = r10_12
                            var_300 = nullptr
                            uint64_t rcx_98 = rax_108 << 2 u>> 2
                            
                            if (r10_12 u> &r10_12[rax_108])
                                rcx_98 = 0
                            
                            if (rcx_98 != 0)
                                do
                                    int32_t r8_25 = *(r15_4 + 8)
                                    int32_t temp4_1
                                    int32_t temp5_1
                                    temp4_1:temp5_1 = muls.dp.d(0x55555556, *r10_12)
                                    int32_t rdx_59 = temp4_1 + (temp4_1 u>> 0x1f)
                                    var_2e8_1.d = rdx_59
                                    *(r15_4 + 8) = r8_25 + 1
                                    
                                    if (r8_25 + 1 s> *(r15_4 + 0xc))
                                        sub_1407c3800(r15_4, r8_25)
                                        rdx_59 = var_2e8_1.d
                                        r10_12 = var_2c8[0].q
                                        r11_4 = var_300
                                    
                                    void* rcx_101 = *r15_4
                                    
                                    if ((rcx_101.b & 1) != 0)
                                        rcx_101 = (rcx_101 s>> 1) + r15_4
                                    
                                    r10_12 = &r10_12[1]
                                    r11_4 += 1
                                    var_2c8[0].q = r10_12
                                    var_300 = r11_4
                                    *(rcx_101 + (sx.q(r8_25) << 2)) = rdx_59
                                while (r11_4 != rcx_98)
                                
                                r9_8 = var_2d8_1
                                rbx_15 = &r13_11[0x17]
                            
                            int32_t* r8_26 = r9_8[2]
                            void* r10_13 = nullptr
                            int64_t rax_114 = sx.q(r9_8[3].d)
                            var_2c8[0].q = r8_26
                            var_300 = nullptr
                            uint64_t r11_6 = rax_114 << 2 u>> 2
                            
                            if (r8_26 u> &r8_26[rax_114])
                                r11_6 = 0
                            
                            uint64_t var_2f0_4 = r11_6
                            
                            if (r11_6 != 0)
                                do
                                    int32_t rdx_61 = *(rbx_15 + 8)
                                    int32_t r9_11 = *r8_26
                                    var_2e8_1.d = rdx_61
                                    *(rbx_15 + 8) = rdx_61 + 1
                                    
                                    if (rdx_61 + 1 s> *(rbx_15 + 0xc))
                                        sub_1407c3800(rbx_15, rdx_61)
                                        rdx_61 = var_2e8_1.d
                                        r8_26 = var_2c8[0].q
                                        r10_13 = var_300
                                        r11_6 = var_2f0_4
                                    
                                    void* rcx_104 = *rbx_15
                                    
                                    if ((rcx_104.b & 1) != 0)
                                        rcx_104 = (rcx_104 s>> 1) + rbx_15
                                    
                                    r8_26 = &r8_26[1]
                                    r10_13 += 1
                                    var_2c8[0].q = r8_26
                                    var_300 = r10_13
                                    *(rcx_104 + (sx.q(rdx_61) << 2)) = r9_11
                                while (r10_13 != r11_6)
                                
                                r9_8 = var_2d8_1
                            
                            var_2f8_1.d += r9_8[1].d
                            i_4 = &i_6[1]
                            i_6 = i_4
                        while (i_4 != temp0_22[0].q)
                        
                        r12 = arg1
                
                sub_141997e80(r12[0x41])
                void*** rax_118 = j_sub_140a82f30(0x68)
                void*** rcx_109 = rax_118
                
                if (rax_118 == 0)
                    rcx_109 = nullptr
                else
                    rax_118[1].d = 0xffffffff
                    *(rax_118 + 0xc) = 4
                    *rcx_109 = &data_142da85e8
                    rcx_109[2] = 0
                    rcx_109[3].d = 0
                    __builtin_memset(&rcx_109[4], 0, 0x43)
                
                int64_t* r8_27 = temp0_28[0].q
                int32_t r9_12 = r12[0x37].d
                r12[0x42] = rcx_109
                rcx_109[3].d = 0
                int64_t rdx_62 = *r8_27
                int64_t r8_29 = sx.q(r8_27[1].d) * 0xe8 + rdx_62
                
                while (rdx_62 != r8_29)
                    rdi += *(rdx_62 + 0x30)
                    rdx_62 += 0xe8
                    rcx_109[3].d = rdi
                
                rcx_109[2].d = *(var_2e0_1.q + 0x28)
                *(rcx_109 + 0x14) = r9_12
                sub_141997e80(r12[0x42], rdx_62, r8_29)
            
            j.b = 1
        else
            if (j.d s<= 0xffff)
                void* var_188_1 = nullptr
                int32_t var_180_1 = 0
                int32_t var_17c_1 = 0x10
                
                if (j.d s> *(r12 + 0x1ac))
                    sub_1405947f0(&r12[0x34], j.d)
                    r9_4 = var_2e0_1.q
                
                int32_t* rsi_5 = *(r15 + 0x88)
                void* rax_36 = &rsi_5[sx.q(*(r15 + 0x90)) * 2]
                
                if (rsi_5 != rax_36)
                    do
                        int32_t rax_37 = sub_14078ee20(var_2e0_1.q, rsi_5)
                        int16_t var_308_3 = rax_37.w
                        
                        if (rax_37 != 0xffffffff)
                            int64_t r13_5 = sx.q(r12[0x35].d)
                            int32_t rax_41 = (r13_5 + 1).d
                            r12[0x35].d = rax_41
                            
                            if (rax_41 s> *(r12 + 0x1ac))
                                sub_140594770(&r12[0x34])
                            
                            *(r12[0x34] + (r13_5 << 1)) = var_308_3
                            r12[0x33].d += 1
                        else
                            int64_t r13_4 = sx.q(var_180_1)
                            int32_t rax_38 = (r13_4 + 1).d
                            var_180_1 = rax_38
                            void var_208
                            
                            if (rax_38 s> var_17c_1)
                                sub_1407c3c00(&var_208, r13_4.d)
                            
                            void* rdx_22 = &var_208
                            
                            if (var_188_1 != 0)
                                rdx_22 = var_188_1
                            
                            *(rdx_22 + (r13_4 << 3)) = *rsi_5
                        
                        rsi_5 = &rsi_5[2]
                    while (rsi_5 != rax_36)
                    
                    r15 = arg2
                    rdi = 0
                    r9_4 = var_2e0_1.q
                
                int32_t i_5 = 0
                
                if (*(r9_4 + 0x28) s> 0)
                    do
                        if (i_5 != *(r12 + 0x194))
                            int32_t r8_8 = r12[0x33].d
                            int32_t rdx_25 = 0
                            
                            if (r8_8 s> 0)
                                int16_t* rcx_42 = r12[0x34]
                                
                                do
                                    if (zx.d(*rcx_42) == i_5)
                                        goto label_1407b0623
                                    
                                    rdx_25 += 1
                                    rcx_42 = &rcx_42[1]
                                while (rdx_25 s< r8_8)
                            
                            int64_t r13_6 = sx.q(r12[0x35].d)
                            int32_t rax_44 = (r13_6 + 1).d
                            r12[0x35].d = rax_44
                            
                            if (rax_44 s> *(r12 + 0x1ac))
                                sub_140594770(&r12[0x34])
                                r9_4 = var_2e0_1.q
                            
                            *(r12[0x34] + (r13_6 << 1)) = i_5.w
                            *(r12 + 0x19c) += 1
                        
                    label_1407b0623:
                        i_5 += 1
                    while (i_5 s< *(r9_4 + 0x28))
                
                if (var_188_1 != 0)
                    sub_140a74f90(var_188_1)
                
                goto label_1407b0646
            
        label_1407b016f_1:
            j.b = 0

__security_check_cookie(rax_1 ^ &var_338)
return j
