// 函数: sub_142711fe0
// 地址: 0x142711fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rsi
int64_t var_10 = rsi
int64_t* rdi = arg2
int64_t performanceCount_1 = arg1
int128_t zmm6
int128_t var_48 = zmm6
int64_t performanceCount = arg1
uint128_t zmm7
uint128_t var_58 = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
int64_t rax_2 = sub_140d3c6e0(arg2 + 0x34)
rdi[6].d
sub_1426cce30(performanceCount_1 + 0x50, rax_2)
void* r13 = nullptr
uint64_t var_140 = 0
int32_t r14 = 0
int32_t var_138 = 0
void* var_198 = nullptr
int64_t var_190 = 0
float var_178
int64_t** var_170
int32_t r15_2
int128_t zmm2
void* const var_f8

if (*(performanceCount_1 + 0x1f8) == 0)
label_142712289:
    
    if (*(performanceCount_1 + 0x200) == 0)
        r15_2 = var_190.d
    else
        void* rax_18 = sub_1425bb180()
        
        if (rax_18 == 0)
            r15_2 = var_190.d
        else
            void* rbx_3 = *(performanceCount_1 + 0x200)
            int64_t rax_19 = sx.q(*(rax_18 + 0x38))
            
            if (rax_19.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30
                    || rbx_3 == 0)
                r15_2 = var_190.d
            else
                int64_t rdi_2 = rdi[0xb]
                void* rax_21 = sub_1425bb180()
                int64_t rax_22
                
                if (rax_21 != 0)
                    rax_22 = sx.q(*(rax_21 + 0x38))
                
                if (rax_21 == 0 || rax_22.d s> *(rbx_3 + 0x38)
                        || *(*(rbx_3 + 0x30) + (rax_22 << 3)) != rax_21 + 0x30)
                    rbx_3 = nullptr
                
                int32_t var_d0 = 5
                char var_78_1 = 0
                void* var_c8
                int512_t zmm1_2 = sub_1405ab0f0(&var_c8, rdi_2, rbx_3)
                char var_78_2 = 1
                sub_1405b0c60(&var_d0)
                int64_t* var_c0
                char var_ac
                int64_t var_98
                
                if (var_ac == 0)
                    void* var_a0
                    void* rdi_3 = var_a0
                    
                    while (true)
                        if (rdi_3 != 0)
                            int64_t* rax_24
                            rax_24, zmm1_2 = sub_1426f29d0(&var_f8, rdi_3, zmm1_2)
                            int64_t rbx_4 = sx.q(r14)
                            int32_t r14_1 = (rbx_4 + 1).d
                            var_190.d = r14_1
                            
                            if (r14_1 s> var_190:4.d)
                                sub_140b52a30(&var_198)
                                r13 = var_198
                            
                            int64_t rcx_16 = rbx_4 * 5
                            *(r13 + (rcx_16 << 3)) = *rax_24
                            zmm1_2.o = *(rax_24 + 0x10)
                            *(r13 + (rcx_16 << 3) + 0x10) = zmm1_2.o
                            *(r13 + (rcx_16 << 3) + 0x20) = rax_24[4]
                        
                        int32_t var_90
                        int32_t r8_6 = var_90
                        int32_t var_b8
                        int32_t rdx_12 = var_b8
                        void* r13_1 = var_c8
                        int32_t var_b0
                        rsi = zx.q(var_b0 + 1)
                        
                        if (rsi.d s>= r8_6 + rdx_12)
                        label_142712545:
                            r13 = var_198
                            int64_t var_a0_1 = 0
                            char var_ac_1 = 1
                            break
                        
                        int64_t r12 = sx.q(rsi.d) << 3
                        
                        while (true)
                            if (rsi.d s>= rdx_12)
                                rdi_3 = *(var_98 + (sx.q(rsi.d - rdx_12) << 3))
                            else
                                rdi_3 = *(var_c0 + r12)
                            
                            int32_t var_a8 = var_a8 + 1
                            
                            if (rdi_3 != 0)
                                void* rax_31 = sub_141dc9840(rdi_3)
                                
                                if (rax_31 != 0)
                                    void* const rax_38
                                    
                                    if ((var_d0.b & 1) != 0)
                                        int32_t rax_32 = *(rdi_3 + 0xc)
                                        
                                        if (rax_32 s>= data_143e1d9b4)
                                            rax_38 = nullptr
                                        else
                                            int16_t temp4_1
                                            int32_t temp5_1
                                            temp4_1:temp5_1 = sx.q(rax_32)
                                            uint32_t rdx_14 = zx.d(temp4_1)
                                            int32_t rax_34 = temp5_1 + rdx_14
                                            rax_38 =
                                                *(data_143e1d9a0 + (sx.q(rax_34 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_34.w) - rdx_14) * 0x18
                                    
                                    if ((var_d0.b & 1) == 0
                                            || ((*(rax_38 + 8) u>> 0x1d).b & 1) == 0)
                                        int32_t rcx_24 = var_d0
                                        
                                        if (((rcx_24 u>> 1).b & 1) == 0)
                                            goto label_14271246a
                                        
                                        uint64_t rax_42 = sub_1405949a0()
                                        
                                        if (rax_42.b != 0)
                                            rcx_24 = var_d0
                                        label_14271246a:
                                            
                                            if (((rcx_24 u>> 2).b & 1) == 0)
                                            label_1427124ea:
                                                
                                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                        rax_31) == r13_1)
                                                    if (rax_31 == *(r13_1 + 0x30))
                                                        break
                                                    
                                                    void* rax_44 = sub_1425bd0d0()
                                                    void* rdx_16 = *(rdi_3 + 0x10)
                                                    int64_t rax_45 = sx.q(*(rax_44 + 0x38))
                                                    
                                                    if (rax_45.d s> *(rdx_16 + 0x38))
                                                        break
                                                    
                                                    if (*(*(rdx_16 + 0x30) + (rax_45 << 3))
                                                            != rax_44 + 0x30)
                                                        break
                                            else
                                                if ((*(rax_31 + 0x1f4) & 0x20) == 0
                                                        || (*(rax_31 + 0x1f6) & 8) != 0)
                                                    rax_42 = zx.q(*(rax_31 + 0x1f5))
                                                
                                                char r15_1
                                                
                                                if (((*(rax_31 + 0x1f4) & 0x20) != 0
                                                        && (*(rax_31 + 0x1f6) & 8) == 0)
                                                        || (rax_42.b & 0x40) != 0 || rax_42.b s< 0)
                                                    r15_1 = 1
                                                else
                                                    r15_1 = 0
                                                
                                                void* rcx_26 = *(rax_31 + 0xb8)
                                                char* r14_2 = *(rax_31 + 0x248)
                                                
                                                if (rcx_26 != 0)
                                                    rax_42 = sub_1424359b0(rcx_26)
                                                
                                                if (rcx_26 == 0 || rax_42 == 0 || r14_2 == rax_42)
                                                    rcx_26.b = 1
                                                else
                                                    rcx_26.b = 0
                                                
                                                if (r14_2 == 0 || *r14_2 == 2)
                                                    rax_42.b = 1
                                                else
                                                    rax_42.b = 0
                                                
                                                if (rcx_26.b != 0 || rax_42.b != 0)
                                                    rax_42.b = 1
                                                
                                                if (r15_1 != 0 && rax_42.b != 0)
                                                    goto label_1427124ea
                                
                                r8_6 = var_90
                                rdx_12 = var_b8
                            
                            rsi = zx.q(rsi.d + 1)
                            r12 += 8
                            
                            if (rsi.d s>= r8_6 + rdx_12)
                                goto label_142712545
                        
                        r13 = var_198
                        void* var_a0_2 = rdi_3
                        var_b0 = rsi.d
                        
                        if (var_ac != 0)
                            break
                        
                        r14 = var_190.d
                
                if (var_78_2 != 0)
                    char var_78_3 = 0
                    int64_t var_80
                    sub_142441560(var_c8, var_80)
                    
                    if (var_98 != 0)
                        sub_140a74f90(var_98)
                    
                    if (var_c0 != 0)
                        sub_140a74f90(var_c0)
                
                performanceCount_1 = performanceCount
                rdi = arg2
                r15_2 = var_190.d
else
    void* rax_3 = sub_142736ba0()
    
    if (rax_3 == 0)
        goto label_142712289
    
    void* rdx_1 = *(performanceCount_1 + 0x1f8)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30
            || rdx_1 == 0)
        goto label_142712289
    
    void* rax_6 = sub_142736ba0()
    int64_t rax_7
    void* rdx_2
    
    if (rax_6 != 0)
        rdx_2 = *(performanceCount_1 + 0x1f8)
        rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_6 == 0 || rax_7.d s> *(rdx_2 + 0x38)
            || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
        rdx_2 = nullptr
    
    int512_t zmm1_1 = sub_1426e7330(rdi, rdx_2, &var_140)
    int32_t rax_9 = var_138
    
    if (rax_9 s> 0)
        sub_1411050d0(&var_198, rax_9)
        rax_9 = var_138
        r13 = var_198
        r14 = var_190.d
    
    uint64_t rdi_1 = var_140
    rsi = rdi_1 + (sx.q(rax_9) << 3)
    
    if (rdi_1 == rsi)
        rdi = arg2
        r15_2 = var_190.d
    else
        while (true)
            void* const rbx_1 = *rdi_1
            void* rax_11
            int64_t rax_12
            void* rdx_4
            
            if (rbx_1 != 0)
                rax_11 = sub_1425bb180()
                rdx_4 = *(rbx_1 + 0x10)
                rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (rbx_1 == 0 || rax_12.d s> *(rdx_4 + 0x38)
                    || *(*(rdx_4 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                rbx_1 = nullptr
            
            if (rbx_1 == 0)
                r15_2 = var_190.d
            else
                var_f8 = rbx_1
                int128_t* rax_14 = sub_142435fc0(rbx_1, &var_170, zmm1_1)
                int64_t rbx_2 = sx.q(r14)
                char var_100_1 = 1
                zmm1_1.o = *(rax_14 + 0x14)
                zmm7 = *rax_14
                r15_2 = (rbx_2 + 1).d
                float zmm0_1[0x4] = zmm1_1.o
                float zmm4_1[0x4] = *(rax_14 + 0xc)
                zmm2 = *(rax_14 + 8)
                zmm0_1[0] = zmm0_1[0] f+ zmm2.d
                int128_t zmm3_1 = rax_14[1].d
                zmm2.d = zmm2.d f- zmm1_1.d
                int64_t zmm5_1 = *(rax_14 + 4)
                zmm4_1[0] = zmm4_1[0] f+ zmm7.d
                zmm6.d = zmm3_1.d f+ zmm5_1.d
                var_190.d = r15_2
                zmm7.d = zmm7.d f- zmm4_1[0]
                zmm5_1.d = zmm5_1.d f- zmm3_1.d
                var_178 = zmm0_1[0]
                int32_t var_120_1 = zmm2.d
                zmm1_1.o = zmm7
                int64_t var_10c_1 = (_mm_unpacklo_ps(zmm4_1, zmm6.q)).q
                int32_t var_110_1 = var_120_1
                float var_118[0x4]
                zmm0_1 = var_118
                float var_104_1 = var_178
                zmm1_1.o = _mm_unpacklo_ps(zmm1_1.o, zmm5_1)
                zmm0_1[0].q = (zmm1_1.o).q
                var_118 = zmm0_1
                int64_t var_e0_1 = var_10c_1
                
                if (r15_2 s> var_190:4.d)
                    sub_140b52a30(&var_198)
                    r13 = var_198
                    r15_2 = var_190.d
                
                int64_t rcx_9 = rbx_2 * 5
                zmm1_1.o = zmm0_1
                *(r13 + (rcx_9 << 3)) = var_f8.o
                *(r13 + (rcx_9 << 3) + 0x10) = zmm1_1.o
                *(r13 + (rcx_9 << 3) + 0x20) = var_100_1.d.q
            
            rdi_1 += 8
            
            if (rdi_1 == rsi)
                break
            
            r14 = var_190.d
        
        rdi = arg2
char rax_48 = sub_1426e25f0(performanceCount_1 + 0x50)
sub_1426c5aa0(&var_170, performanceCount_1, rdi, 0xffffffff)
int32_t i_2
int32_t i_1 = i_2
int64_t** r8_10 = var_170
zmm6 = 0x3f800000

while (true)
    if (i_1 s>= r8_10[1].d)
        goto label_142712648
    
    if ((*(r8_10 + 0x13e) & 1) != 0)
        break
    
    double var_160
    
    if (not(var_160 < 0.0))
        QueryPerformanceCounter(&performanceCount)
        i_1 = i_2
        r8_10 = var_170
        
        if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000 >= var_160)
            goto label_142712648
    
    int64_t* result
    result.b = 1
    
    while (true)
        if (result.b == 0)
            *(r8_10 + 0x124) = i_1
            
            if (r13 != 0)
                result = sub_140a74f90(r13)
            
            uint64_t rcx_47 = var_140
            
            if (rcx_47 != 0)
                result = sub_140a74f90(rcx_47)
            
            __security_check_cookie(rax_1 ^ &var_1b8)
            return result
        
        int32_t var_180
        sub_1426df900(performanceCount_1, &var_180, rdi, i_1)
        int64_t rax_49 = sx.q(r15_2)
        rsi.b = 0
        void* i = rax_49 * 0x28 + r13
        int64_t zmm0_4
        int32_t zmm1_3
        
        if (r13 != i)
            zmm0_4 = var_178
            int32_t* rbx_6 = r13 + 0xc
            int32_t var_17c
            zmm1_3 = var_17c
            zmm2 = var_180
            
            do
                if (zmm2.d f<= rbx_6[-1] || zmm2.d f>= rbx_6[2] || zmm1_3 f<= *rbx_6
                        || zmm1_3 f>= rbx_6[3] || zmm0_4.d f<= rbx_6[1] || zmm0_4.d f>= rbx_6[4])
                    rax_49.b = 0
                else
                    rax_49.b = 1
                
                if (rax_49.b != 0)
                    if ((*(performanceCount_1 + 0x208) & 1) != 0)
                        void* rcx_37 = *(rbx_6 - 0xc)
                        int64_t var_128 = var_180.q
                        float var_120_2 = var_178
                        rax_49, zmm6 = sub_142432b00(rcx_37, &var_128, zx.o(0), nullptr)
                    
                    if ((*(performanceCount_1 + 0x208) & 1) == 0 || rax_49.b != 0)
                        rsi.b = 1
                        break
                    
                    zmm0_4 = var_178
                    zmm1_3 = var_17c
                    zmm2 = var_180
                
                rbx_6 = &rbx_6[0xa]
            while (&rbx_6[-3] != i)
        
        int64_t var_158
        char var_14e
        
        if ((var_14e & 2) == 0)
            uint32_t rcx_38 = zx.d(*(performanceCount_1 + 0x4a))
            
            if (rcx_38 != 0 && rcx_38 != 1 && rcx_38 != 2 && rcx_38 == 3)
                rax_49.b = rsi.b == rax_48
            
            if (rcx_38 != 0 && rcx_38 != 1 && rcx_38 != 2 && rcx_38 == 3 && rax_49.b != 0)
                zmm1_3 = zmm6.d
                goto label_142712763
            
            if ((var_14e & 4) == 0)
                zmm1_3 = (zx.o(0)).d
            label_142712763:
                char var_14f
                uint32_t rcx_41 = zx.d(var_14f)
                int16_t rax_51 = var_158:4.w
                
                if (rcx_41 == 0)
                    zmm0_4.d = var_158.d.d f+ zmm1_3
                    var_158.d = zmm0_4.d
                else if (rcx_41 == 1)
                    if (rax_51 == 0 || not(var_158.d.d f<= zmm1_3))
                        var_158.d = zmm1_3
                else if (rcx_41 == 2)
                    if (rax_51 == 0)
                        var_158.d = zmm1_3
                    else if (not(var_158.d.d f>= zmm1_3))
                        var_158.d = zmm1_3
                else if (rcx_41 == 3)
                    zmm0_4.d = var_158.d.d f* zmm1_3
                    var_158.d = zmm0_4.d
                
                var_158:4.w = rax_51 + 1
            
            var_158:6.w += 1
        
        sub_1426ec620(&var_170)
        r8_10 = var_170
        i_1 = i_2
        rdi = arg2
        
        if ((*(r8_10 + 0x13e) & 1) != 0)
            break
        
        i_1 += 1
        var_158 = 0
        result.b = var_14e & 0xfd
        i_2 = i_1
        result.b |= 1
        var_14e = result.b
        
        if (i_1 s< r8_10[1].d)
            do
                int32_t r9_2 = *(&(*r8_10)[sx.q(i_1)] + 4)
                
                if (test_bit(r9_2, 0x1e) || r9_2 s< 0)
                    result.b = 0
                else
                    result.b = 1
                
                rdi = arg2
                
                if (result.b != 0)
                    break
                
                i_1 += 1
                i_2 = i_1
            while (i_1 s< r8_10[1].d)
            
            break
        
    label_142712648:
        result.b = 0

goto label_142712648
