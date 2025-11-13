// 函数: sub_14222ce80
// 地址: 0x14222ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t r14 = 0
int32_t var_260 = 0
uint32_t r12 = *(arg1 + 0x38)
void* r8 = arg1 + 0x3c
int128_t zmm15
int128_t var_d8 = zmm15
int64_t* rdi = arg2

if (r12 == 0)
    int64_t* rax_2 = sub_142565030()
    void* rax_3 = rax_2[0x23]
    
    if (rax_3 == 0)
        int64_t rdx = *rax_2
        (*(rdx + 0x390))(rax_2, rdx)
        rax_3 = rax_2[0x23]
    
    r12 = zx.d(*(rax_3 + 0xad))
    r8 = arg1 + 0x3c

void* rcx_1 = *(arg1 + 0xc0)
int32_t i = 0
int128_t zmm13 = 0x38d1b717
int128_t zmm6
int128_t var_48 = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
int32_t i_4 = 0
int64_t* var_250
float var_158[0x4]
int128_t var_128
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12

if (*(rcx_1 + 8) u> 0)
    void* rdx_1 = arg1 + 0x60
    
    do
        int64_t* rbx_4 = (sx.q(i) << 6) + *rcx_1
        var_250 = rbx_4
        sub_1422313b0(rbx_4, &var_128, r8, rdx_1)
        int32_t var_ec
        float temp0_1[0x4] = _mm_max_ss(var_ec[0], zmm13.d)
        void*** rax_4 = j_sub_140a82f30(0x20)
        void*** rsi_1 = rax_4
        
        if (rax_4 == 0)
            rsi_1 = nullptr
        else
            r14 |= 2
            sub_1417048d0(rax_4, 3, 0)
            int64_t var_f8
            rsi_1[2] = var_f8
            int32_t var_f0
            rsi_1[3].d = var_f0
            rbx_4 = var_250
            *rsi_1 = &data_142fc46f0
            *(rsi_1 + 0x1c) = temp0_1[0]
        
        if ((r14.b & 2) != 0)
            r14 &= 0xfffffffd
        
        rbx_4[4].d = 6
        rbx_4[5] = rbx_4
        sub_1417354d0(&var_260)
        *(var_260.q + 0x28) = rsi_1
        *var_260.q = *(arg1 + 0x14)
        *(var_260.q + 0x10) = *(arg1 + 4)
        uint32_t rcx_5
        
        if (r12 == 0)
            rcx_5 = 0
        else if (r12 == 1)
            rcx_5 = r12
        else if (r12 == 2)
            rcx_5 = r12
        else if (r12 != 3)
            rcx_5 = 0
            
            if (r12 == 4)
                rcx_5 = 4
        else
            rcx_5 = r12
        
        *(var_260.q + 0x8c) = rcx_5
        int128_t zmm1_1 = *(arg1 + 0xa0)
        void* rcx_6 = var_260.q
        var_158 = *(arg1 + 0x90)
        float var_138_1[0x4] = *(arg1 + 0xb0)
        int128_t var_148_1 = zmm1_1
        zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg4 = sub_14175b310(rcx_6, &var_158)
        *(var_260.q + 0x20) = &rbx_4[4]
        *(var_260.q + 0x89) = *(arg1 + 0x34)
        int64_t rbx_6 = sx.q(*(arg3 + 0x10))
        int32_t rax_11 = (rbx_6 + 1).d
        *(arg3 + 0x10) = rax_11
        
        if (rax_11 s> *(arg3 + 0x14))
            sub_140809610(arg3, rbx_6.d)
        
        void* rax_12 = *(arg3 + 8)
        void* rdx_5 = arg3
        
        if (rax_12 != 0)
            rdx_5 = rax_12
        
        *(rdx_5 + (rbx_6 << 3)) = var_260.q
        int64_t rbx_7 = sx.q(rdi[1].d)
        var_260.q = 0
        int32_t rax_14 = (rbx_7 + 1).d
        rdi[1].d = rax_14
        
        if (rax_14 s> *(rdi + 0xc))
            sub_1405a4d70(rdi)
        
        *(*rdi + (rbx_7 << 3)) = rsi_1
        void* rbx_8 = var_260.q
        
        if (rbx_8 != 0)
            sub_141706330(rbx_8)
            j_sub_140a74f90(rbx_8)
        
        rdx_1 = arg1 + 0x60
        rcx_1 = *(arg1 + 0xc0)
        r8 = arg1 + 0x3c
        i = i_4 + 1
        i_4 = i
    while (i u< *(rcx_1 + 8))

zmm15 = 0x3f000000
int32_t i_1 = 0
int128_t var_68 = zmm8
int128_t var_78 = zmm9
int128_t var_88 = zmm10
int128_t var_98 = zmm11
int128_t var_a8 = zmm12
int32_t i_5 = 0
int128_t* var_268
float var_238
int64_t var_218
void** var_1f8
int32_t var_1c8
int32_t var_1c4
int32_t var_1c0
void var_1bc
int32_t var_1b0
float var_1ac

if (*(rcx_1 + 0x18) u> 0)
    void* rdx_8 = arg1 + 0x60
    int64_t* rsi_2 = var_250
    float var_c8_1[0x4] = arg4
    var_260 = 0x322bcc77
    arg4 = var_260
    _mm_shuffle_ps(arg4, arg4, 0)
    int512_t zmm14_1
    
    do
        void* rax_19 = sx.q(i_1) * 0x58 + *(rcx_1 + 0x10)
        int128_t zmm12_1
        uint128_t zmm13_1
        float zmm14[0x4]
        int32_t zmm15_1
        zmm12_1, zmm13_1, zmm14, zmm15_1 = sub_142230c80(rax_19, &var_1f8, arg1 + 0x3c, rdx_8)
        float var_198[0x4]
        sub_140ade170(&var_1bc, &var_198)
        float zmm11_1[0x4] = data_14399f668
        float zmm10_1[0x4] = var_198
        float temp0_3[0x4] = _mm_unpacklo_ps(var_1c4, 0)
        float temp0_4[0x4] = _mm_unpacklo_ps(var_1c8, var_1c0[0].q)
        float zmm0_2[0x4] = data_14399f670
        uint128_t zmm6_2
        zmm6_2.d = var_1b0.d f* zmm15_1
        float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
        uint128_t zmm9_1
        zmm9_1.d = var_1ac.d f* zmm15_1
        int32_t var_1a8
        uint128_t zmm8_1
        zmm8_1.d = var_1a8.d f* zmm15_1
        float temp0_6[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
        float temp0_8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11_1, zmm0_2[0].q), temp0_6[0].q)
        var_238 = zmm6_2.d
        int32_t var_234_1 = zmm9_1.d
        int32_t var_230_1 = zmm8_1.d
        
        if (not(zmm6_2.d f>= zmm13_1.d))
            var_238 = 9.99999975e-05f
            zmm6_2 = zmm13_1
        
        if (not(zmm9_1.d f>= zmm13_1.d))
            int32_t var_234_2 = zmm13_1.d
            zmm9_1 = zmm13_1
        
        if (not(zmm8_1.d f>= zmm13_1.d))
            var_230_1 = zmm13_1.d
            zmm8_1 = zmm13_1
        
        float zmm2_1[0x4] = data_14399f720
        uint32_t zmm4_1[0x4] = data_143f51390
        uint32_t temp0_12 =
            _mm_movemask_ps(_mm_cmpeq_ps(zmm14, _mm_and_ps(_mm_sub_ps(zmm10_1, zmm2_1), zmm4_1), 1))
        uint32_t temp0_16
        
        if (temp0_12 != 0)
            temp0_16 = _mm_movemask_ps(_mm_cmpeq_ps(zmm14, 
                _mm_and_ps(_mm_add_ps(zmm2_1, zmm10_1), zmm4_1), 1))
        
        char var_258_1
        
        if (temp0_12 == 0 || temp0_16 == 0)
            var_258_1 = 1
        else
            var_258_1 = 0
        
        void*** rax_22 = j_sub_140a82f30(0x28)
        void*** rbx_9 = rax_22
        var_260.q = rax_22
        
        if (var_258_1 != 0)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55)
            uint128_t zmm0_3
            zmm0_3.d = zmm6_2.d f+ temp0_5[0]
            temp0_17[0] = temp0_17[0] f+ zmm9_1.d
            int32_t var_248_1 = zmm0_3.d
            zmm0_3 = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa)
            float var_244_1 = temp0_17[0]
            zmm0_3.d = zmm0_3.d f+ zmm8_1.d
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55)
            temp0_19[0] = temp0_19[0] f- zmm9_1.d
            int32_t var_240_1 = zmm0_3.d
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa)
            zmm0_3.d = temp0_5.d f- zmm6_2.d
            temp0_20[0] = temp0_20[0] f- zmm8_1.d
            var_218:4.d = temp0_19[0]
            var_218.d = zmm0_3.d
            float var_210_1 = temp0_20[0]
            
            if (rbx_9 != 0)
                r14 |= 0xc
                sub_1417048d0(rbx_9, 3, 1)
                zmm0_3 = zx.o(var_218)
                *rbx_9 = &data_142fc4870
                rbx_9[2] = zmm0_3.q
                rbx_9[3].d = var_210_1
                *(rbx_9 + 0x1c) = var_248_1.q
                *(rbx_9 + 0x24) = var_240_1
            
            if ((r14.b & 8) != 0)
                r14 &= 0xfffffff7
            
            if ((r14.b & 4) != 0)
                r14 &= 0xfffffffb
        else
            int64_t var_228
            var_228.d = (zmm6_2 ^ zmm12_1).d
            var_228:4.d = (zmm9_1 ^ zmm12_1).d
            int32_t var_220_1 = (zmm8_1 ^ zmm12_1).d
            
            if (rbx_9 == 0)
                var_260.q = rbx_9
            else
                sub_1417048d0(rax_22, 3, 1)
                *rbx_9 = &data_142fc4870
                rbx_9[2] = var_228
                rbx_9[3].d = var_220_1
                *(rbx_9 + 0x1c) = var_238.q
                *(rbx_9 + 0x24) = var_230_1
            
            void*** rdi_1 = rbx_9
            void*** rax_25 = j_sub_140a82f30(0x70)
            rbx_9 = rax_25
            
            if (rax_25 == 0)
                rbx_9 = nullptr
            else
                rdi_1 = nullptr
                var_158 = zmm10_1
                r14 |= 1
                sub_1417048d0(rax_25, 2, 4)
                rsi_2 = nullptr
                *rbx_9 = &data_142fc4c88
                int64_t* rax_26 = var_260.q
                rbx_9[2] = 0
                rbx_9[3] = rax_26
                *(rbx_9 + 0x20) = var_158
                *(rbx_9 + 0x30) = temp0_5
                *(rbx_9 + 0x40) = temp0_8
                __builtin_memcpy(&rbx_9[0xa], 
                    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\x"
                "ff\xff\x7f\xff", 
                    0x18)
                rbx_9[2] = rax_26
                void var_188
                void var_170
                int64_t* rax_29 =
                    sub_1417598c0((*(*rax_26 + 0x28))(rax_26, &var_188), &var_170, &var_158)
                rbx_9[0xa] = *rax_29
                rbx_9[0xb].d = rax_29[1].d
                *(rbx_9 + 0x5c) = *(rax_29 + 0xc)
                *(rbx_9 + 0x64) = *(rax_29 + 0x14)
                *(rbx_9 + 0xa) = *(rbx_9[2] + 0xa)
                *(rbx_9 + 0xb) = *(rbx_9[2] + 0xb)
            
            if ((r14.b & 1) != 0)
                r14 &= 0xfffffffe
                
                if (rsi_2 != 0)
                    (**rsi_2)(rsi_2, 1)
            
            if (rdi_1 != 0)
                *rdi_1 = &data_142fc4870
                sub_141706890(rdi_1)
                j_sub_140a74f90(rdi_1)
            
            rdi = arg2
        
        *(rax_19 + 0x20) = 6
        *(rax_19 + 0x28) = rax_19
        sub_1417354d0(&var_268)
        *(var_268 + 0x28) = rbx_9
        *var_268 = *(arg1 + 0x14)
        var_268[1] = *(arg1 + 4)
        uint32_t rcx_27
        
        if (r12 == 0)
            rcx_27 = 0
        else if (r12 == 1)
            rcx_27 = r12
        else if (r12 == 2)
            rcx_27 = r12
        else if (r12 != 3)
            rcx_27 = 0
            
            if (r12 == 4)
                rcx_27 = 4
        else
            rcx_27 = r12
        
        *(var_268 + 0x8c) = rcx_27
        float zmm1_2[0x4] = *(arg1 + 0xa0)
        int128_t* rcx_29 = var_268
        var_128 = *(arg1 + 0x90)
        int128_t var_108_1 = *(arg1 + 0xb0)
        float var_118_1[0x4] = zmm1_2
        zmm13, zmm14_1, zmm15 = sub_14175b310(rcx_29, &var_128)
        var_268[2].q = rax_19 + 0x20
        *(var_268 + 0x89) = *(arg1 + 0x34)
        int32_t rcx_33 = *(arg3 + 0x10)
        var_260 = rcx_33
        *(arg3 + 0x10) = rcx_33 + 1
        
        if (rcx_33 + 1 s> *(arg3 + 0x14))
            sub_140809610(arg3, rcx_33)
            rcx_33 = var_260
        
        void* rax_43 = *(arg3 + 8)
        void* rdx_16 = arg3
        
        if (rax_43 != 0)
            rdx_16 = rax_43
        
        *(rdx_16 + (sx.q(rcx_33) << 3)) = var_268
        int32_t rcx_36 = rdi[1].d
        var_268 = nullptr
        var_260 = rcx_36
        rdi[1].d = rcx_36 + 1
        
        if (rcx_36 + 1 s> *(rdi + 0xc))
            sub_1405a4d70(rdi)
            rcx_36 = var_260
        
        *(*rdi + (sx.q(rcx_36) << 3)) = rbx_9
        int128_t* rbx_10 = var_268
        
        if (rbx_10 != 0)
            sub_141706330(rbx_10)
            j_sub_140a74f90(rbx_10)
        
        rdx_8 = arg1 + 0x60
        rcx_1 = *(arg1 + 0xc0)
        i_1 = i_5 + 1
        i_5 = i_1
    while (i_1 u< *(rcx_1 + 0x18))
    
    zmm14_1.o = var_c8_1

int32_t i_2 = 0
int32_t i_6 = 0

if (*(rcx_1 + 0x28) u> 0)
    void* rdx_19 = arg1 + 0x60
    
    do
        void* rbx_13 = sx.q(i_2) * 0x50 + *(rcx_1 + 0x20)
        sub_142231560(rbx_13, &var_1f8, arg1 + 0x3c, rdx_19)
        int32_t temp0_21 = _mm_max_ss(var_1b0, zmm13.d)
        float temp0_22 = _mm_max_ss(var_1ac f* zmm15.d, zmm13.d)
        int128_t* rbx_17
        
        if (temp0_22 f>= zmm13.d)
            float var_210_2 = temp0_22
            var_218 = 0
            float* rax_61
            int32_t zmm7_3
            rax_61, zmm7_3 = sub_140adf300(&var_1bc, &var_238, &var_218)
            zmm10 = var_1c8
            zmm11 = var_1c4
            float zmm6_4 = zmm10.d
            zmm12 = var_1c0
            float zmm8_2 = zmm11.d
            int64_t zmm2_2 = *rax_61
            float zmm9_2 = zmm12.d
            float rax_62 = rax_61[2]
            zmm10.d = zmm10.d f- zmm2_2.d
            zmm12.d = zmm12.d f- rax_62
            zmm11.d = zmm11.d f- zmm2_2:4.d
            int32_t var_240_2 = zmm12.d
            int32_t var_248_2 = zmm10.d
            int32_t var_244_2 = zmm11.d
            void*** rax_63 = j_sub_140a82f30(0x30)
            void*** rsi_4 = rax_63
            
            if (rax_63 == 0)
                rsi_4 = nullptr
            else
                r14 |= 0x60
                sub_1417048d0(rax_63, 3, 3)
                *rsi_4 = &data_142fc4eb0
                rsi_4[2] = var_248_2.q
                rsi_4[3].d = var_240_2
                *(rsi_4 + 0x1c) = zmm6_4 f+ zmm2_2.d f- zmm10.d
                rsi_4[4].d = zmm8_2 f+ zmm2_2:4.d f- zmm11.d
                *(rsi_4 + 0x24) = zmm9_2 + rax_62 f- zmm12.d
                rsi_4[5].d = sub_141750780(rsi_4 + 0x1c)
                *(rsi_4 + 0x2c) = zmm7_3
            
            if ((r14.b & 0x40) != 0)
                r14 &= 0xffffffbf
            
            if ((r14.b & 0x20) != 0)
                r14 &= 0xffffffdf
            
            *(rbx_13 + 0x20) = 6
            *(rbx_13 + 0x28) = rbx_13
            sub_1417354d0(&var_260)
            *(var_260.q + 0x28) = rsi_4
            *var_260.q = *(arg1 + 0x14)
            *(var_260.q + 0x10) = *(arg1 + 4)
            uint32_t rcx_54
            
            if (r12 == 0)
                rcx_54 = 0
            else if (r12 == 1)
                rcx_54 = r12
            else if (r12 == 2)
                rcx_54 = r12
            else if (r12 != 3)
                rcx_54 = 0
                
                if (r12 == 4)
                    rcx_54 = 4
            else
                rcx_54 = r12
            
            *(var_260.q + 0x8c) = rcx_54
            int128_t zmm1_4 = *(arg1 + 0xa0)
            void* rcx_55 = var_260.q
            var_158 = *(arg1 + 0x90)
            float var_138_3[0x4] = *(arg1 + 0xb0)
            int128_t var_148_3 = zmm1_4
            zmm13, zmm15 = sub_14175b310(rcx_55, &var_158)
            *(var_260.q + 0x20) = rbx_13 + 0x20
            *(var_260.q + 0x89) = *(arg1 + 0x34)
            int64_t rbx_18 = sx.q(*(arg3 + 0x10))
            int32_t rax_71 = (rbx_18 + 1).d
            *(arg3 + 0x10) = rax_71
            
            if (rax_71 s> *(arg3 + 0x14))
                sub_140809610(arg3, rbx_18.d)
            
            void* rax_72 = *(arg3 + 8)
            void* rdx_28 = arg3
            
            if (rax_72 != 0)
                rdx_28 = rax_72
            
            *(rdx_28 + (rbx_18 << 3)) = var_260.q
            int64_t rbx_19 = sx.q(rdi[1].d)
            var_260.q = 0
            int32_t rax_74 = (rbx_19 + 1).d
            rdi[1].d = rax_74
            
            if (rax_74 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            *(*rdi + (rbx_19 << 3)) = rsi_4
            rbx_17 = var_260.q
        else
            void*** rax_49 = j_sub_140a82f30(0x20)
            void*** rsi_3 = rax_49
            
            if (rax_49 == 0)
                rsi_3 = nullptr
            else
                r14 |= 0x10
                sub_1417048d0(rax_49, 3, 0)
                rsi_3[2] = var_1c8.q
                rsi_3[3].d = var_1c0
                *rsi_3 = &data_142fc46f0
                *(rsi_3 + 0x1c) = temp0_21
            
            if ((r14.b & 0x10) != 0)
                r14 &= 0xffffffef
            
            *(rbx_13 + 0x20) = 6
            *(rbx_13 + 0x28) = rbx_13
            sub_1417354d0(&var_268)
            *(var_268 + 0x28) = rsi_3
            *var_268 = *(arg1 + 0x14)
            var_268[1] = *(arg1 + 4)
            uint32_t rcx_44
            
            if (r12 == 0)
                rcx_44 = 0
            else if (r12 == 1)
                rcx_44 = r12
            else if (r12 == 2)
                rcx_44 = r12
            else if (r12 != 3)
                rcx_44 = 0
                
                if (r12 == 4)
                    rcx_44 = 4
            else
                rcx_44 = r12
            
            *(var_268 + 0x8c) = rcx_44
            int128_t zmm1_3 = *(arg1 + 0xa0)
            int128_t* rcx_45 = var_268
            var_128 = *(arg1 + 0x90)
            int128_t var_108_2 = *(arg1 + 0xb0)
            int128_t var_118_2 = zmm1_3
            zmm13, zmm15 = sub_14175b310(rcx_45, &var_128)
            var_268[2].q = rbx_13 + 0x20
            *(var_268 + 0x89) = *(arg1 + 0x34)
            int64_t rbx_15 = sx.q(*(arg3 + 0x10))
            int32_t rax_56 = (rbx_15 + 1).d
            *(arg3 + 0x10) = rax_56
            
            if (rax_56 s> *(arg3 + 0x14))
                sub_140809610(arg3, rbx_15.d)
            
            void* rax_57 = *(arg3 + 8)
            void* rdx_23 = arg3
            
            if (rax_57 != 0)
                rdx_23 = rax_57
            
            *(rdx_23 + (rbx_15 << 3)) = var_268
            int64_t rbx_16 = sx.q(rdi[1].d)
            var_268 = nullptr
            int32_t rax_59 = (rbx_16 + 1).d
            rdi[1].d = rax_59
            
            if (rax_59 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            *(*rdi + (rbx_16 << 3)) = rsi_3
            rbx_17 = var_268
        
        if (rbx_17 != 0)
            sub_141706330(rbx_17)
            j_sub_140a74f90(rbx_17)
        
        rdx_19 = arg1 + 0x60
        rcx_1 = *(arg1 + 0xc0)
        i_2 = i_6 + 1
        i_6 = i_2
    while (i_2 u< *(rcx_1 + 0x28))

int64_t i_3 = *(arg1 + 0xc8)
int64_t result = sx.q(*(arg1 + 0xd0))

for (int64_t r14_1 = i_3 + (result << 3); i_3 != r14_1; i_3 += 8)
    sub_1417354d0(&var_268)
    *(var_268 + 0x28) = 0
    *var_268 = *(arg1 + 0x24)
    var_268[1] = *(arg1 + 4)
    uint32_t rcx_63
    
    if (r12 == 0)
        rcx_63 = 0
    else if (r12 == 1)
        rcx_63 = r12
    else if (r12 == 2)
        rcx_63 = r12
    else if (r12 != 3)
        rcx_63 = 0
        
        if (r12 == 4)
            rcx_63 = 4
    else
        rcx_63 = r12
    
    *(var_268 + 0x8c) = rcx_63
    int128_t zmm1 = *(arg1 + 0xa0)
    int128_t* rcx_64 = var_268
    var_128 = *(arg1 + 0x90)
    int128_t var_108_3 = *(arg1 + 0xb0)
    int128_t var_118_3 = zmm1
    sub_14175b310(rcx_64, &var_128)
    var_268[2].q = 0
    *(var_268 + 0x89) = *(arg1 + 0x35)
    int64_t rbx_20 = sx.q(*(arg3 + 0x10))
    int32_t rax_83 = (rbx_20 + 1).d
    *(arg3 + 0x10) = rax_83
    
    if (rax_83 s> *(arg3 + 0x14))
        sub_140809610(arg3, rbx_20.d)
    
    void* rax_84 = *(arg3 + 8)
    void* rdx_33 = arg3
    
    if (rax_84 != 0)
        rdx_33 = rax_84
    
    *(rdx_33 + (rbx_20 << 3)) = var_268
    int64_t rbx_21 = sx.q(rdi[1].d)
    var_268 = nullptr
    int32_t rax_86 = (rbx_21 + 1).d
    rdi[1].d = rax_86
    
    if (rax_86 s> *(rdi + 0xc))
        sub_1405a4d70(rdi)
    
    result = *rdi
    *(result + (rbx_21 << 3)) = 0
    int128_t* rbx_22 = var_268
    
    if (rbx_22 != 0)
        sub_141706330(rbx_22)
        result = j_sub_140a74f90(rbx_22)

__security_check_cookie(rax_1 ^ &var_288)
return result
