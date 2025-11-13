// 函数: sub_1417b6db0
// 地址: 0x1417b6db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int32_t result = arg1[0x39].d

if (result != *(arg1 + 0x1f4))
    void* rbx_1 = &arg1[0x38]
    void* r8_1 = nullptr
    int32_t rcx = 0
    void* r13_1 = rbx_1 + 0x10
    int32_t r9_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    void* r11_1 = nullptr
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    void* var_128 = nullptr
    int32_t var_120_1 = 0
    int32_t var_fc_1 = 0x80
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x1c)
    int32_t var_f8_1 = 0xffffffff
    int32_t var_f4_1 = 0
    void* var_e8_1 = nullptr
    int32_t var_e0_1 = 0
    int32_t rdi_1 = *(r13_1 + 0x18)
    void* var_260_1 = rbx_1
    int32_t var_1f0_1 = 0
    int32_t var_1ec_1 = 1
    void* var_1e8_1 = r13_1
    int32_t var_1e0_1 = 0xffffffff
    int64_t var_1dc_1 = 0
    
    if (rdi_1 != 0)
        void* rax_2 = *(r13_1 + 0x10)
        void* r10_1 = r13_1
        
        if (rax_2 != 0)
            r10_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_3 = *r10_1
        
        if (rdx_3 != 0)
        label_1417b6f35:
            int32_t rax_9 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_1ec_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_1dc_1.d = r9_1 - rax_10 + 0x1f
            
            if (r9_1 - rax_10 + 0x1f s> rdi_1)
                var_1dc_1.d = rdi_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r9_1 += 0x20
                rcx += 1
                var_1dc_1:4.d = r9_1
                var_1f0_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
                int32_t var_1e0_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1417b6f35
            
            var_1dc_1.d = rdi_1
    
    int32_t rdx_5 = *(rbx_1 + 0x28)
    int128_t var_1c0 = var_1f0_1.o
    int32_t r14_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int32_t r9_4 = rdx_5 s>> 5
    int32_t r10_3 = rdx_5 & 0xffffffe0
    int32_t var_278_1 = r14_1
    int32_t var_274_1 = rdx_5
    int64_t var_1b0_1 = 0xffffffff
    int64_t var_1f8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int128_t var_218 = rbx_1.o
    
    if (rdx_5 != rdi_1)
        void* rax_12 = *(r13_1 + 0x10)
        void* rbx_2 = r13_1
        
        if (rax_12 != 0)
            rbx_2 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_9 = *(rbx_2 + (sx.q(r9_4) << 2)) & r14_1
        
        if (rdx_9 != 0)
        label_1417b6fff:
            int32_t rax_19 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_4
            
            var_274_1 = r10_3 - rax_20 + 0x1f
            
            if (r10_3 - rax_20 + 0x1f s> rdi_1)
                var_274_1 = rdi_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r9_4)
                r10_3 += 0x20
                r9_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(rbx_2 + (rcx_5 << 2) + 4)
                var_278_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1417b6fff
            
            var_274_1 = rdi_1
        
        rbx_1 = var_260_1
    
    uint64_t rdx_11 = var_278_1.q u>> 0x20
    uint64_t var_220 = rdx_11
    int32_t var_288
    int32_t var_268
    int64_t* var_258
    uint64_t var_250
    uint64_t var_228
    int32_t* var_168
    double zmm2[0x2]
    
    while (true)
        double var_1b8[0x2]
        int64_t rax_22 = sx.q(var_1b8[1]:4.d)
        int64_t rcx_7 = var_218.q
        
        if (rax_22.d == rdx_11.d && var_1b8[0] == r13_1 && rcx_7 == rbx_1)
            break
        
        int32_t* rax_24 = (rax_22 << 5) + *rcx_7
        int64_t** rsi_1 = nullptr
        var_250 = 0
        int64_t rbx_3 = sx.q(rax_24[4])
        int32_t rdx_12 = *rax_24
        int64_t rdi_2 = *(rax_24 + 8)
        var_268 = rdx_12
        int32_t var_248_1 = rbx_3.d
        void* rdi_3
        
        if (rbx_3.d != 0)
            sub_1405c4a00(&var_250, rbx_3.d, 0)
            rsi_1 = var_250
            memcpy(rsi_1, rdi_2, (rbx_3 << 3).d)
            r11_1 = var_e8_1
            rdi_3 = nullptr
            r8_1 = var_128
            rdx_12 = var_268
            rbx_3 = zx.q(var_248_1)
        else
            rdi_3 = nullptr
            int32_t var_244_1 = 0
        
        if (rbx_3.d s> 1)
            void var_f0
            
            if (var_120_1 == var_f4_1)
            label_1417b7133:
                int64_t var_178 = 0
                var_168 = &var_268
                int64_t var_170_1 = 0
                int64_t* var_160_1 = &var_178
                void var_130
                sub_14175da80(&var_128, &var_130, &var_168, nullptr)
                int64_t rcx_15 = var_178
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
            else
                void* rax_29 = &var_f0
                
                if (r11_1 != 0)
                    rax_29 = r11_1
                
                int32_t rax_30 = *(rax_29 + ((sx.q(var_e0_1 - 1) & sx.q(rdx_12)) << 2))
                
                if (rax_30 == 0xffffffff)
                    goto label_1417b7133
                
                while (true)
                    int64_t rcx_13 = sx.q(rax_30) << 5
                    
                    if (*(rcx_13 + r8_1) == rdx_12)
                        break
                    
                    rax_30 = *(rcx_13 + r8_1 + 0x18)
                    
                    if (rax_30 == 0xffffffff)
                        goto label_1417b7133
                
                if (rax_30 == 0xffffffff)
                    goto label_1417b7133
            
            int64_t* r15_1 = nullptr
            var_258 = nullptr
            void* rcx_16 = &rsi_1[sx.q(rbx_3.d)]
            int64_t** rax_32 = rsi_1
            int64_t** var_1d0_1 = rax_32
            uint64_t rdx_19 = (rcx_16 - rsi_1 + 7) u>> 3
            
            if (rsi_1 u> rcx_16)
                rdx_19 = 0
            
            var_228 = rdx_19
            
            if (rdx_19 != 0)
                do
                    int64_t* r13_2 = *rax_32
                    
                    if (*(sx.q(r13_2[1].d) + *(*r13_2 + 0x368)) == 0)
                        int64_t var_d8
                        sub_1417b2ff0(arg1, &var_d8, r13_2, nullptr, 1)
                        int32_t rbx_4 = 0
                        int32_t var_d0
                        int32_t var_a4
                        int32_t rdx_23 = var_d0 - var_a4
                        int64_t r14_2 = 0
                        int64_t var_240 = 0
                        int32_t var_238_1 = 0
                        int32_t var_234_1 = 0
                        
                        if (rdx_23 s> 0)
                            sub_1405c5570(&var_240, rdx_23)
                            rbx_4 = var_238_1
                            r14_2 = var_240
                        
                        int32_t var_b0
                        int32_t r9_5 = var_b0
                        void* var_b8
                        void* rsi_2 = var_b8
                        int32_t rcx_20 = 0
                        var_288 = 0
                        int32_t r8_6 = 0
                        void var_c8
                        void* var_280_1 = &var_c8
                        int32_t var_284_1 = 1
                        int32_t var_278_2 = 0xffffffff
                        var_274_1.q = 0
                        
                        if (r9_5 != 0)
                            int32_t temp8_1
                            int32_t temp9_1
                            temp8_1:temp9_1 = sx.q(r9_5 - 1)
                            void* r10_5 = &var_c8
                            
                            if (rsi_2 != 0)
                                r10_5 = rsi_2
                            
                            int32_t rdx_26 = *r10_5
                            
                            if (rdx_26 != 0)
                            label_1417b72a8:
                                int32_t rax_40 = neg.d(rdx_26) & rdx_26
                                uint64_t rflags_3
                                int32_t temp0_5
                                temp0_5, rflags_3 = _bit_scan_reverse(rax_40)
                                int32_t var_284_2 = rax_40
                                int32_t rax_41
                                
                                if (rax_40 == 0)
                                    rax_41 = 0x20
                                else
                                    rax_41 = 0x1f - temp0_5
                                
                                int32_t rax_42 = r8_6 - rax_41 + 0x1f
                                
                                if (rax_42 s> r9_5)
                                    rax_42 = r9_5
                                
                                var_274_1 = rax_42
                            else
                                while (true)
                                    int64_t rdx_27 = sx.q(rcx_20)
                                    r8_6 += 0x20
                                    rcx_20 += 1
                                    int32_t var_270_1 = r8_6
                                    var_288 = rcx_20
                                    
                                    if (rdx_27.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                        var_274_1 = r9_5
                                        break
                                    
                                    rdx_26 = *(r10_5 + (rdx_27 << 2) + 4)
                                    var_278_2 = 0xffffffff
                                    
                                    if (rdx_26 != 0)
                                        goto label_1417b72a8
                        
                        zmm2 = var_278_2.o
                        double var_198_1[0x2] = var_288.o
                        uint32_t rax_44 = (zmm2[0] u>> 0x20).d
                        double var_188_1[0x2] = zmm2
                        double var_158[0x2] = (&var_d8).o
                        int64_t var_138_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                        
                        if (rax_44 s< r9_5)
                            int32_t i = var_198_1[1]:4.d
                            
                            do
                                int64_t rdi_4 = sx.q(rbx_4)
                                int64_t r15_2 = *var_158[0]
                                rbx_4 = (rdi_4 + 1).d
                                
                                if (rbx_4 s> var_234_1)
                                    sub_1405a4d70(&var_240)
                                    r14_2 = var_240
                                
                                *(r14_2 + (rdi_4 << 3)) = *(r15_2 + sx.q(i) * 0x10)
                                var_198_1[1].d &= not.d(var_158[1]:4.d)
                                sub_14059bdd0(&var_158[1])
                                i = var_198_1[1]:4.d
                            while (i s< *(var_198_1[0] i+ 0x18))
                            
                            r9_5 = var_b0
                            rdi_3 = nullptr
                            rsi_2 = var_b8
                            r15_1 = var_258
                        
                        if (var_120_1 != var_f4_1)
                            void* rcx_24 = &var_f0
                            int64_t r8_8 = sx.q(var_268)
                            
                            if (var_e8_1 != 0)
                                rcx_24 = var_e8_1
                            
                            int32_t i_1 = *(rcx_24 + ((sx.q(var_e0_1 - 1) & r8_8) << 2))
                            
                            if (i_1 != 0xffffffff)
                                void* rdx_31 = var_128
                                
                                do
                                    int32_t* rcx_26 = sx.q(i_1) << 5
                                    
                                    if (*(rcx_26 + rdx_31) == r8_8.d)
                                        if (i_1 != 0xffffffff)
                                            rdi_3 = rdx_31 + rcx_26
                                        
                                        break
                                    
                                    i_1 = *(rcx_26 + rdx_31 + 0x18)
                                while (i_1 != 0xffffffff)
                        
                        if (rbx_4 != 0)
                            int32_t rax_56 = *(rdi_3 + 0x10)
                            int32_t rdx_32 = rbx_4 + rax_56
                            
                            if (rdx_32 s> *(rdi_3 + 0x14))
                                sub_1405c5570(rdi_3 + 8, rdx_32)
                                rax_56 = *(rdi_3 + 0x10)
                            
                            memmove(*(rdi_3 + 8) + (sx.q(rax_56) << 3), r14_2, rbx_4 << 3)
                            *(rdi_3 + 0x10) += rbx_4
                            r9_5 = var_b0
                            rsi_2 = var_b8
                            int32_t var_238_3 = 0
                        
                        if (r14_2 != 0)
                            sub_140a74f90(r14_2)
                            r9_5 = var_b0
                            rsi_2 = var_b8
                        
                        rdi_3 = nullptr
                        int32_t var_284_3 = 1
                        int32_t var_278_3 = 0xffffffff
                        int32_t rcx_30 = 0
                        var_288 = 0
                        void* var_280_2 = &var_c8
                        int32_t r8_11 = 0
                        var_274_1.q = 0
                        
                        if (r9_5 != 0)
                            int32_t temp10_1
                            int32_t temp11_1
                            temp10_1:temp11_1 = sx.q(r9_5 - 1)
                            void* r10_6 = &var_c8
                            
                            if (rsi_2 != 0)
                                r10_6 = rsi_2
                            
                            int32_t rdx_37 = *r10_6
                            
                            if (rdx_37 != 0)
                            label_1417b74e8:
                                int32_t rax_64 = neg.d(rdx_37) & rdx_37
                                uint64_t rflags_4
                                int32_t temp0_7
                                temp0_7, rflags_4 = _bit_scan_reverse(rax_64)
                                int32_t var_284_4 = rax_64
                                int32_t rax_65
                                
                                if (rax_64 == 0)
                                    rax_65 = 0x20
                                else
                                    rax_65 = 0x1f - temp0_7
                                
                                int32_t rax_66 = r8_11 - rax_65 + 0x1f
                                
                                if (rax_66 s> r9_5)
                                    rax_66 = r9_5
                                
                                int32_t var_274_3 = rax_66
                            else
                                while (true)
                                    int64_t rdx_38 = sx.q(rcx_30)
                                    r8_11 += 0x20
                                    rcx_30 += 1
                                    int32_t var_270_2 = r8_11
                                    var_288 = rcx_30
                                    
                                    if (rdx_38.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                        int32_t var_274_2 = r9_5
                                        break
                                    
                                    rdx_37 = *(r10_6 + (rdx_38 << 2) + 4)
                                    var_278_3 = 0xffffffff
                                    
                                    if (rdx_37 != 0)
                                        goto label_1417b74e8
                        
                        zmm2 = var_278_3.o
                        double var_188_2[0x2] = zmm2
                        var_274_1 = r9_5
                        double var_198_2[0x2] = var_288.o
                        double temp0_8[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                        void* var_1c8_1
                        var_1c8_1.o = (&var_d8).o
                        double var_1b8_1 = var_198_2[0]
                        var_1b0_1 = temp0_8.q
                        
                        while (true)
                            int64_t rcx_34 = sx.q(var_1b0_1:4.d)
                            
                            if (rcx_34.d == ((0xffffffff << (r9_5.b & 0x1f)).q u>> 0x20).d
                                    && var_1b8_1 == &var_c8 && var_1c8_1 == &var_d8)
                                break
                            
                            var_258 = r13_2
                            sub_14178cfa0(&var_88, (rcx_34 << 4) + *var_1c8_1, &var_258)
                            var_1b0_1.d &= not.d(var_1c0:4.d)
                            sub_14059bdd0(&var_1c0)
                        
                        int32_t var_90_1 = 0
                        int64_t var_98
                        
                        if (var_98 != 0)
                            sub_140a74f90(var_98)
                        
                        var_d0 = 0
                        int32_t var_cc
                        
                        if (var_cc != 0)
                            sub_1405a5410(&var_d8, 0)
                        
                        int32_t var_a8_1 = 0xffffffff
                        var_a4 = 0
                        sub_14059a8e0(&var_c8, 0)
                        
                        if (var_b8 != 0)
                            sub_140a74f90(var_b8)
                        
                        int64_t rcx_41 = var_d8
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                    
                    r15_1 += 1
                    rax_32 = &var_1d0_1[1]
                    var_258 = r15_1
                    var_1d0_1 = rax_32
                while (r15_1 != var_228)
                
                r13_1 = var_1e8_1
        
        uint64_t rcx_42 = var_250
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        var_1b8[1].d &= not.d(var_218:0xc.d)
        sub_14059bdd0(&var_218:8)
        r11_1 = var_e8_1
        r8_1 = var_128
        rdx_11 = var_220
        rbx_1 = var_260_1
    
    int32_t var_284_5 = 1
    var_288 = 0
    int32_t rcx_44 = 0
    int64_t* var_280_3 = &var_118
    int32_t r8_14 = 0
    int32_t var_278_5 = 0xffffffff
    var_274_1.q = 0
    int32_t var_100
    
    if (var_100 != 0)
        int64_t* r10_7 = &var_118
        int64_t* var_108
        
        if (var_108 != 0)
            r10_7 = var_108
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(var_100 - 1)
        int32_t rdx_45 = *r10_7
        
        if (rdx_45 != 0)
        label_1417b7728:
            int32_t rax_80 = neg.d(rdx_45) & rdx_45
            uint64_t rflags_5
            int32_t temp0_9
            temp0_9, rflags_5 = _bit_scan_reverse(rax_80)
            int32_t var_284_6 = rax_80
            int32_t r15_3
            
            if (rax_80 == 0)
                r15_3 = 0x20
            else
                r15_3 = 0x1f - temp0_9
            
            int32_t rax_81 = r8_14 - r15_3 + 0x1f
            
            if (rax_81 s> var_100)
                rax_81 = var_100
            
            int32_t var_274_5 = rax_81
        else
            while (true)
                int64_t rdx_46 = sx.q(rcx_44)
                r8_14 += 0x20
                rcx_44 += 1
                int32_t var_270_3 = r8_14
                var_288 = rcx_44
                
                if (rdx_46.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    int32_t var_274_4 = var_100
                    break
                
                rdx_45 = *(r10_7 + (rdx_46 << 2) + 4)
                var_278_5 = 0xffffffff
                
                if (rdx_45 != 0)
                    goto label_1417b7728
    
    zmm2 = var_278_5.o
    int32_t var_274_6 = var_100
    double var_188_3[0x2] = zmm2
    int64_t* r13_4 = (0xffffffff << (var_100.b & 0x1f)).q u>> 0x20
    double zmm1[0x2] = var_288.o
    var_258 = r13_4
    double temp0_10[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    var_218 = (&var_128).o
    int64_t var_1f8_2 = temp0_10.q
    
    while (true)
        int64_t rcx_48 = sx.q(zmm1[1]:4.d)
        int64_t rax_82 = var_218.q
        
        if (rcx_48.d == r13_4.d && zmm1[0] == &var_118 && rax_82 == &var_128)
            break
        
        int64_t* r15_4 = nullptr
        int32_t* rcx_50 = (rcx_48 << 5) + *rax_82
        int64_t r14_3 = *(rcx_50 + 8)
        var_250 = 0
        int64_t rbx_7 = sx.q(rcx_50[4])
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(*rcx_50)
        int32_t var_248_2 = rbx_7.d
        
        if (rbx_7.d != 0)
            sub_1405c4a00(&var_250, rbx_7.d, 0)
            r15_4 = var_250
            memcpy(r15_4, r14_3, (rbx_7 << 3).d)
            rbx_7 = zx.q(var_248_2)
        else
            int32_t var_244_2 = 0
        
        float (* var_290_1)[0x4] = nullptr
        var_280_3:1.b = data_1439b8e8c != 0
        var_288 = 0x3e99999a
        var_280_3:4.d = *(arg1 + 0x22c)
        int32_t var_284_7 = 0x64
        var_280_3.b = 0
        var_280_3:2.b = 1
        int32_t var_278_6
        var_278_6.o = zx.o(0)
        var_168.o = zx.o(0)
        uint64_t rax_86 = sub_1417a9e40(arg1, neg.d((temp7_1 ^ temp6_1) - temp6_1), &rcx_50[2], 
            &var_288, &var_168, var_290_1)
        int64_t* rsi_4 = r15_4
        *(sx.q(*(rax_86 + 8)) + *(*rax_86 + 0x470)) = 1
        int64_t r8_20 = *(*arg1 + 0x208)
        *(r8_20 + (sx.q(*(rax_86 + 0x10)) << 3)) = *(r8_20 + (sx.q(*(*r15_4 + 0x10)) << 3))
        int64_t rdi_9 = 0
        void* rdx_53 = &r15_4[sx.q(rbx_7.d)]
        uint64_t r14_8 = (rdx_53 - r15_4 + 7) u>> 3
        
        if (r15_4 u> rdx_53)
            r14_8 = 0
        
        if (r14_8 != 0)
            do
                sub_140865c40(&var_88, &var_268, *rsi_4)
                int64_t rax_87 = sx.q(var_268)
                void* const rax_89
                
                if (rax_87.d == 0xffffffff)
                    rax_89 = nullptr
                else
                    rax_89 = var_88 + rax_87 * 0x18
                
                void* rbx_8 = *arg1
                
                if (*(rbx_8 + 0x980) != 0)
                    void* rcx_61 = rbx_8 + 0x9a0
                    var_228 = *(rax_89 + 8)
                    void* rax_91 = *(rbx_8 + 0x990)
                    var_220 = rax_86
                    
                    if (rax_91 != 0)
                        rcx_61 = rax_91
                    
                    (*(rbx_8 + 0x980))((*(*rcx_61 + 8))(rcx_61), &var_228, &var_220)
                
                rsi_4 = &rsi_4[1]
                rdi_9 += 1
            while (rdi_9 != r14_8)
            
            r15_4 = var_250
            r13_4 = var_258
        
        sub_140a74f90(r15_4)
        zmm1[1].d &= not.d(var_218:0xc.d)
        sub_14059bdd0(&var_218:8)
    
    sub_1417ad930(var_260_1, 0)
    int32_t var_e0_2 = 0
    
    if (var_e8_1 != 0)
        sub_140a74f90(var_e8_1)
    
    sub_140597460(&var_128)
    result = sub_1405ae080(&var_88)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
