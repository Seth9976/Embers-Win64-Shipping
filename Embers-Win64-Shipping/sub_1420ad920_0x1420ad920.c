// 函数: sub_1420ad920
// 地址: 0x1420ad920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t* result = __security_cookie ^ &var_1b8
int64_t* result_1 = result
float zmm7[0x4] = arg2.o

if (*(arg1 + 0x98) s> 0)
    void* rbx_1 = *(arg1 + 0x20)
    int64_t* rcx = arg3[4]
    int32_t i_1 = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int64_t* r15_1
    
    if (rcx == 0)
        r15_1 = nullptr
    else
        r15_1 = (*(*rcx + 0x260))(rcx)
    
    int64_t rsi
    rsi.b = 1
    void* rax_3 = sub_1424cd2f0()
    void* rdx_1 = *(rbx_1 + 0x10)
    int64_t* r8 = rax_3 + 0x30
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == r8 && r15_1 != 0)
        void* rax_6 = sub_14256a090()
        void* rdx_2 = r15_1[2]
        r8 = rax_6 + 0x30
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_7 << 3)) == r8)
            int64_t rax_8
            
            if ((*(r15_1 + 0x294) & 2) != 0)
                rax_8, r8 = (*(*r15_1 + 0x6a8))(r15_1)
            
            if ((*(r15_1 + 0x294) & 2) == 0 || rax_8.b == 0)
                rax_8.b = 0
            else
                rax_8 = 1
            
            if (rax_8.b == 0)
                rsi.b = 0
            else
                void* const i = r15_1[0x53]
                void* rax_10
                int64_t rax_11
                void* rdx_3
                
                if (i != 0)
                    rax_10 = sub_142531230()
                    rdx_3 = *(i + 0x10)
                    rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (i == 0 || rax_11.d s> *(rdx_3 + 0x38)
                        || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                    i = nullptr
                
                int64_t rax_14 = (*(*r15_1 + 0x150))(r15_1)
                int64_t* rax_15
                rax_15, arg2, zmm7 = sub_1423dd2a0(data_143f5b298, rax_14)
                r8 = *rax_15
                int64_t* rcx_7 = r8
                void* rdx_5 = &r8[sx.q(rax_15[1].d)]
                
                if (r8 != rdx_5)
                    while (*rcx_7 != i)
                        rcx_7 = &rcx_7[1]
                        
                        if (rcx_7 == rdx_5)
                            goto label_1420adabe
                    
                    if (((rcx_7 - r8) s>> 3).d s> 0)
                        rsi.b = 0
    
label_1420adabe:
    zmm6 = 0x3f800000
    zmm8 = 0x3f800000
    uint128_t zmm0_1 = arg3[5].d
    int128_t zmm9 = 0x3f800000
    int32_t var_160_1 = 0x3f800000
    int32_t r9_1 = *(arg1 + 0xa0) & 1
    bool cond:1_1
    
    if (r9_1 == 0)
        cond:1_1 = zmm7[0] f> zmm0_1.d
    else
        cond:1_1 = zmm0_1.d f> zmm7[0]
    
    int32_t rax_17
    rax_17.b = cond:1_1
    float var_168
    int32_t var_164
    uint64_t var_138
    void* rbx_4
    
    if (rax_17 == 0 || arg4 != 0 || rsi.b == 0)
        int64_t* rcx_46 = arg3[6]
        
        if (rcx_46 != 0)
            char rax_64
            rax_64, r8 = (*(*rcx_46 + 0x540))(rcx_46)
            
            if (rax_64 != 0)
                int64_t* rcx_47 = arg3[6]
                r8 = (*(*rcx_47 + 0x538))(rcx_47)
                *(arg1 + 0xa0) &= 0xffffffdf
        
        rbx_4 = rbx_1
    else
        int64_t r10_1 = sx.q(*(arg1 + 0x98))
        int64_t rbx_2
        int32_t rsi_1
        
        if (r9_1 == 0)
            rsi_1 = -1
            int32_t rdx_8 = (r10_1 - 1).d
            
            if (rdx_8 s> 0xffffffff)
                int32_t* rcx_12 = *(arg1 + 0x90)
                
                while (not(zmm0_1.d f<= *rcx_12))
                    rsi_1 += 1
                    rcx_12 = &rcx_12[6]
                    
                    if (rsi_1 s>= *(arg1 + 0x98) - 1)
                        break
            
            rbx_2 = 0xffffffff
            
            if (rdx_8 s> 0xffffffff)
                int32_t* rcx_13 = *(arg1 + 0x90)
                
                while (not(zmm7[0] f<= *rcx_13))
                    rbx_2 = zx.q(rbx_2.d + 1)
                    rcx_13 = &rcx_13[6]
                    
                    if (rbx_2.d s>= *(arg1 + 0x98) - 1)
                        break
        else
            rsi_1 = r10_1.d
            
            if (r10_1.d s> 0)
                int64_t rdx_6 = r10_1
                r8 = *(arg1 + 0x90) + (r10_1 - 1) * 0x18
                
                while (not(zmm0_1.d f>= *r8))
                    rsi_1 -= 1
                    rdx_6 -= 1
                    r8 -= 0x18
                    
                    if (rdx_6 s<= 0)
                        break
            
            rbx_2 = r10_1
            
            if (r10_1.d s> 0)
                int64_t rdx_7 = rbx_2
                r8 = *(arg1 + 0x90) + (r10_1 - 1) * 0x18
                
                while (not(zmm7[0] f>= *r8))
                    rbx_2 = zx.q(rbx_2.d - 1)
                    rdx_7 -= 1
                    r8 -= 0x18
                    
                    if (rdx_7 s<= 0)
                        break
        
        uint64_t rdx_9
        
        if (r9_1 == 0)
            rdx_9 = 0xffffffff
            
            if ((r10_1 - 1).d s> 0xffffffff)
                int32_t* rcx_15 = *(arg1 + 0x90)
                
                while (not(zmm7[0] f<= *rcx_15))
                    rdx_9 = zx.q(rdx_9.d + 1)
                    rcx_15 = &rcx_15[6]
                    
                    if (rdx_9.d s>= (r10_1 - 1).d)
                        break
            
            if ((r10_1 - 1).d s<= 0xffffffff || rdx_9.d == 0xffffffff)
                rdx_9 = 0
        else
            rdx_9 = r10_1
            
            if (r10_1.d s> 0)
                r8 = rdx_9
                int32_t* r9_4 = *(arg1 + 0x90) + (r10_1 - 1) * 0x18
                
                while (not(zmm7[0] f>= *r9_4))
                    rdx_9 = zx.q(rdx_9.d - 1)
                    r8 -= 1
                    r9_4 -= 0x18
                    
                    if (r8 s<= 0)
                        break
            
            if (rdx_9.d == r10_1.d)
                rdx_9 = zx.q((r10_1 - 1).d)
        
        int64_t r13_1 = *(arg1 + 0x90)
        int32_t var_160_2 = 0x3f800000
        void* rcx_16 = sx.q(rdx_9.d) * 3
        zmm9 = *(r13_1 + (rcx_16 << 3) + 8)
        zmm8 = *(r13_1 + (rcx_16 << 3) + 4)
        var_168 = zmm8[0]
        var_164 = zmm9.d
        void* var_158 = rcx_16
        uint64_t* rax_24
        
        if (*(arg1 + 0x78) s> 0)
            rax_24, r8, arg2, zmm6, zmm7, zmm8, zmm9 =
                sub_141a1d730(arg1 + 0x70, &var_138, zmm7, &var_168)
            rcx_16 = var_158
            zmm8[0] = zmm8[0] f* *rax_24
            zmm9.d = zmm9.d f* *(rax_24 + 4)
        
        if ((*(arg1 + 0xa0) & 0x20) != 0)
            rax_24.b = 0
        else
            rax_24 = *(r13_1 + (rcx_16 << 3) + 0x10)
            
            if (rax_24 == 0)
                rax_24.b = 0
            else
                zmm0_1 = *(r13_1 + (rcx_16 << 3))
                
                if (zmm7[0] f< zmm0_1.d)
                    rax_24.b = 0
                else
                    zmm0_1.d = zmm0_1.d f+ rax_24[0x1f].d
                    
                    if (zmm7[0] f> zmm0_1.d)
                        rax_24.b = 0
                    else
                        int64_t* rcx_18 = arg3[6]
                        
                        if (rcx_18 != 0)
                            rax_24, r8 = (*(*rcx_18 + 0x540))(zmm0_1)
                        
                        if (rcx_18 != 0 && rax_24.b != 0)
                            rax_24.b = 0
                        else
                            rax_24.b = 1
        
        if (rsi_1 != rbx_2.d || rax_24.b != 0)
            void* rbx_3 = var_158
            int32_t rax_27 = *(arg1 + 0xa0) | 0x20
            *(arg1 + 0xa0) = rax_27
            int64_t* rsi_2 = *(r13_1 + (rbx_3 << 3) + 0x10)
            
            if ((rax_27.b & 8) == 0 || r15_1 == 0)
            label_1420ade6a:
                
                if ((*(arg1 + 0xa0) & 8) == 0 || r15_1 == 0)
                    zmm6 = zmm7
                    zmm6[0] = zmm6[0] f- *(r13_1 + (rbx_3 << 3))
                    zmm0_1.q = fconvert.d(zmm6[0])
                    
                    if (not(zmm0_1.q f> data_14399f938))
                        zmm6 = zx.o(0)
                    
                    int64_t* rcx_24 = arg3[6]
                    
                    if (rcx_24 == 0)
                        void var_128
                        int64_t* rax_52
                        void* r8_11
                        int32_t zmm10_2
                        rax_52, r8_11, arg2, zmm6, zmm7, zmm8, zmm9, zmm10_2 = sub_141e78140(rsi_2, 
                            &var_128, sub_141e714a0(&var_128, (*(*arg3 + 0x150))(arg3), r15_1))
                        arg3[6] = rax_52
                        
                        if (rax_52 == 0)
                            rbx_4 = rbx_1
                        else
                            void* rax_60
                            
                            if (r15_1 == 0)
                                rbx_4 = rbx_1
                                rax_60 = arg3[6]
                                *(rax_60 + 0x210) &= 0xf7
                            else
                                rbx_4 = rbx_1
                                r8_11 = sub_1424cd2f0() + 0x30
                                void* rdx_20 = *(rbx_4 + 0x10)
                                int64_t rax_54 = sx.q(*(r8_11 + 8))
                                
                                if (rax_54.d s> *(rdx_20 + 0x38)
                                        || *(*(rdx_20 + 0x30) + (rax_54 << 3)) != r8_11)
                                    int64_t* rdx_21
                                    
                                    if ((*(arg1 + 0xa0) & 0x10) != 0)
                                        rdx_21 = r15_1[0x26]
                                    
                                    if ((*(arg1 + 0xa0) & 0x10) == 0 || rdx_21 == 0)
                                        void* rax_56 = r15_1[0x26]
                                        uint64_t* rax_57
                                        
                                        if (rax_56 == 0)
                                            int32_t var_130_3 = data_143dbb200
                                            rax_57 = &var_138
                                            var_138 = data_143dbb1f8.q
                                        else
                                            arg2.o = *(rax_56 + 0x1d0)
                                            rax_57 = &var_168
                                            var_168 = arg2.d
                                            uint128_t zmm0_3 = _mm_shuffle_ps(arg2.o, arg2.o, 0x55)
                                            arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xaa)
                                            int32_t var_160_5 = arg2.d
                                            var_164 = zmm0_3.d
                                        
                                        int32_t rax_59 = rax_57[1].d
                                        int64_t* rcx_37 = arg3[6]
                                        var_158 = *rax_57
                                        int32_t var_150_3 = rax_59
                                        r8_11, arg2, zmm8, zmm9, zmm10_2 = sub_141f49c70(rcx_37, 
                                            &var_158, 0, 0, zmm6, zmm7, zmm8, 0)
                                    else
                                        int64_t* rcx_36 = arg3[6]
                                        var_158 = nullptr
                                        r8_11, arg2, zmm8, zmm9, zmm10_2 =
                                            sub_141f32b40(rcx_36, rdx_21, &data_143f3f280, 0)
                                else
                                    rax_60 = arg3[6]
                                    *(rax_60 + 0x210) &= 0xf7
                            arg2.o = zmm8
                            char r8_12 = sub_141ef78b0(arg3[6], arg2.o, r8_11.b)
                            arg2, zmm6, zmm7 = sub_141ef68b0(arg3[6], zmm9, r8_12)
                            
                            if ((*(arg1 + 0xa0) & 4) == 0)
                                zmm10_2 = 0x461c4000
                            
                            arg2.o = zmm6
                            *(arg3[6] + 0x240) = zmm10_2
                            int64_t* rcx_40 = arg3[6]
                            (*(*rcx_40 + 0x530))(rcx_40, arg2)
                        
                        int32_t var_d0_1 = 0
                        int64_t var_d8
                        
                        if (var_d8 != 0)
                            sub_140a74f90(var_d8)
                        
                        int32_t var_110_1 = 0
                        uint64_t var_118
                        int32_t var_10c
                        
                        if (var_10c != 0)
                            sub_1405a5410(&var_118, 0)
                        
                        int32_t var_e8_1 = 0xffffffff
                        int32_t var_e4_1 = 0
                        void var_108
                        r8 = sub_14059a8e0(&var_108, 0)
                        int64_t var_f8
                        
                        if (var_f8 != 0)
                            r8, arg2 = sub_140a74f90(var_f8)
                        
                        uint64_t rcx_45 = var_118
                        
                        if (rcx_45 != 0)
                            r8, arg2 = sub_140a74f90(rcx_45)
                    else
                        (*(*rcx_24 + 0x538))(rcx_24)
                        
                        if (r15_1 != 0)
                            int64_t* rdx_15
                            
                            if ((*(arg1 + 0xa0) & 0x10) != 0)
                                rdx_15 = r15_1[0x26]
                            
                            if ((*(arg1 + 0xa0) & 0x10) == 0 || rdx_15 == 0)
                                int64_t* rcx_26 = arg3[6]
                                (*(*rcx_26 + 0x400))(rcx_26, &data_143a2de50)
                                void* rax_44 = r15_1[0x26]
                                uint64_t* rax_45
                                
                                if (rax_44 == 0)
                                    int32_t var_130_2 = data_143dbb200
                                    rax_45 = &var_138
                                    var_138 = data_143dbb1f8.q
                                else
                                    arg2.o = *(rax_44 + 0x1d0)
                                    rax_45 = &var_168
                                    var_168 = arg2.d
                                    zmm0_1 = _mm_shuffle_ps(arg2.o, arg2.o, 0x55)
                                    arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xaa)
                                    int32_t var_160_4 = arg2.d
                                    var_164 = zmm0_1.d
                                
                                int32_t rax_47 = rax_45[1].d
                                int64_t* rcx_27 = arg3[6]
                                var_158 = *rax_45
                                int32_t var_150_2 = rax_47
                                arg2 = sub_141f49c70(rcx_27, &var_158, 0, 0, zmm6, zmm7, zmm8, 0)
                            else
                                int64_t* rcx_25 = arg3[6]
                                var_158 = nullptr
                                arg2 = sub_141f32b40(rcx_25, rdx_15, &data_143f3f280, 0)
                        
                        char r8_8
                        int32_t zmm10_1
                        r8_8, zmm8, zmm9, zmm10_1 = sub_141ef6f00(arg3[6], rsi_2, arg2)
                        char r8_9 = sub_141ef78b0(arg3[6], zmm8, r8_8)
                        arg2, zmm6, zmm7 = sub_141ef68b0(arg3[6], zmm9, r8_9)
                        
                        if ((*(arg1 + 0xa0) & 4) == 0)
                            zmm10_1 = 0x461c4000
                        
                        arg2.o = zmm6
                        *(arg3[6] + 0x240) = zmm10_1
                        int64_t* rcx_31 = arg3[6]
                        r8 = (*(*rcx_31 + 0x530))(rcx_31, arg2)
                        rbx_4 = rbx_1
                else
                    rbx_4 = rbx_1
            else
                void* rax_28 = sub_14255d000()
                void* rdx_11 = r15_1[2]
                int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                int64_t* rax_31
                
                if (rax_29.d s> *(rdx_11 + 0x38)
                        || *(*(rdx_11 + 0x30) + (rax_29 << 3)) != rax_28 + 0x30)
                    void* rax_32 = sub_142497110()
                    void* rdx_12 = r15_1[2]
                    r8 = rax_32 + 0x30
                    int64_t rax_33 = sx.q(*(rax_32 + 0x38))
                    
                    if (rax_33.d s> *(rdx_12 + 0x38) || *(*(rdx_12 + 0x30) + (rax_33 << 3)) != r8)
                        rax_31 = nullptr
                    else
                        void* rax_35 = sub_142497110()
                        void* rdx_13 = r15_1[2]
                        r8 = rax_35 + 0x30
                        int64_t rax_36 = sx.q(*(rax_35 + 0x38))
                        int64_t* rax_38
                        
                        if (rax_36.d s<= *(rdx_13 + 0x38))
                            rax_38 = r15_1
                        
                        if (rax_36.d s> *(rdx_13 + 0x38)
                                || *(*(rdx_13 + 0x30) + (rax_36 << 3)) != r8)
                            rax_38 = nullptr
                        
                        rax_31 = rax_38[0x4a]
                    
                    if (rax_31 == 0)
                        goto label_1420ade6a
                else
                    rax_31 = r15_1
                
                void* rcx_22 = rax_31[0x26]
                int32_t var_160_3
                
                if (rcx_22 == 0)
                    var_168.q = data_143dbb1f8.q
                    var_160_3 = data_143dbb200
                else
                    arg2.o = *(rcx_22 + 0x1d0)
                    var_168 = arg2.d
                    zmm0_1 = _mm_shuffle_ps(arg2.o, arg2.o, 0x55)
                    arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xaa)
                    var_160_3 = arg2.d
                    var_164 = zmm0_1.d
                
                zmm0_1 = zx.o(data_143dbb208)
                int32_t rax_40 = data_143dbb210
                int64_t* var_180
                __builtin_memset(&var_180, 0, 0x18)
                var_158 = zmm0_1.q
                int32_t var_150_1 = rax_40
                int32_t var_188_1 = 0
                float var_190_1 = zmm6[0]
                float var_198_1 = zmm6[0]
                var_138 = var_168.q
                int32_t var_130_1 = var_160_3
                void* var_178
                int64_t var_170
                r8, arg2, zmm7, zmm8, zmm9 = sub_142035e10(r15_1, rsi_2, &var_138, &var_158, 
                    var_198_1, var_190_1, var_188_1, var_180, var_178, var_170)
                rbx_4 = rbx_1
        else
            rbx_4 = rbx_1
    
    result = *(rbx_4 + 0x20)
    void* rsi_3 = result[0xb]
    
    if (rsi_3 != 0 && *(rsi_3 + 0x38) s> 0)
        int64_t rdi_1 = 0
        
        do
            result = *(rsi_3 + 0x30)
            void* rbx_5 = *(result + rdi_1)
            
            if (rbx_5 != 0)
                void* rax_66 = sub_1424ccbb0()
                void* rdx_23 = *(rbx_5 + 0x10)
                r8 = rax_66 + 0x30
                result = sx.q(*(rax_66 + 0x38))
                
                if (result.d s<= *(rdx_23 + 0x38))
                    int64_t* result_2 = result
                    result = *(rdx_23 + 0x30)
                    
                    if (result[result_2] == r8)
                        result = zx.q(*(rbx_5 + 0x68) u>> 2)
                        
                        if ((result.b & 1) == 0)
                            var_168 = 1f
                            var_164.q = 0x3f800000
                            uint64_t* rax_68
                            uint128_t zmm7_1
                            float zmm8_1
                            rax_68, zmm7_1, zmm8_1 =
                                sub_141a1d730(rbx_5 + 0x70, &var_138, zmm7, &var_168)
                            var_168 = 1f
                            var_164.q = 0x3f800000
                            *rax_68
                            result, r8, arg2, zmm7, zmm8, zmm9 =
                                sub_141a1d730(rbx_5 + 0x70, &var_138, zmm7_1, &var_168)
                            zmm9.d = zmm9.d f* *(result + 4)
                            break
            
            i_1 += 1
            rdi_1 += 8
        while (i_1 s< *(rsi_3 + 0x38))
    
    void* rcx_50 = arg3[6]
    
    if (rcx_50 != 0)
        arg2.o = zmm8
        char r8_13 = sub_141ef78b0(rcx_50, arg2.o, r8.b)
        result, zmm7 = sub_141ef68b0(arg3[6], zmm9, r8_13)
    
    arg3[5].d = zmm7[0]

__security_check_cookie(result_1 ^ &var_1b8)
return result
