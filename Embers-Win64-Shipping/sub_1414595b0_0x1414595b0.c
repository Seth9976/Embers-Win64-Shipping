// 函数: sub_1414595b0
// 地址: 0x1414595b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rsi = arg1
int32_t rcx = 0
int32_t var_c0 = 0
void* rdx = *(rsi + 0x10)
void* r9 = *(rsi + 0x18)
int32_t rax_2 = *(rdx + 8)
void* r8 = *(r9 + 8)
void* r8_1

if (*(rdx + 0x6298) - *(rdx + 0x62c4) s<= 0 || r8 == 0)
    r8_1 = nullptr
else
    r8_1 = r8 + 0x338

int64_t result = sx.q(*(rsi + 0x250))
int64_t result_2 = result

if (result s> 0)
    result = 0
    int64_t result_1 = 0
    
    do
        int64_t r10_1 = sx.q(*(rsi + (result << 2) + 0x254))
        void* rcx_1 = *(rsi + 0x10)
        void* rdx_1 = *(rsi + 0x18)
        int32_t var_e4_1 = r10_1.d
        int64_t r15_1 = r10_1 * 5
        int64_t r12_1 = *(rcx_1 + 0xde8)
        void* r9_1 = *(*(rcx_1 + 0xdb8) + (r10_1 << 3))
        void* rdx_2 = rdx_1 + 0x1628
        void* rax_7 = *(rdx_1 + 0x1658) + (r10_1 << 4)
        int32_t rax_8 = r10_1.d
        void* r8_2 = *(rdx_2 + 0x10)
        uint64_t rdi_1 = zx.q(1 << (r10_1.b & 0x1f))
        
        if (r10_1.d s< 0)
            rax_8 = (r10_1 + 0x1f).d
        
        int64_t* r14_1 = *(r9_1 + 8)
        int64_t r13_1 = sx.q(rax_8 s>> 5)
        
        if (r8_2 != 0)
            rdx_2 = r8_2
        
        int32_t rax_11 = *(rdx_2 + (r13_1 << 2)) & rdi_1.d
        char rax_13 = (*(*r14_1 + 0x180))(r14_1)
        int32_t var_c4 = 0
        int16_t var_e8 = 0x7f7f
        int32_t var_118_1
        int32_t var_110
        int16_t* var_108
        char var_100
        int32_t var_f8
        char var_f0
        int16_t rax_19
        void* r14_2
        float zmm1
        
        if ((*(r9_1 + 0xfc) & 1) == 0)
            void* rax_20 = *(arg1 + 0x30)
            zmm1 = *(r12_1 + (r15_1 << 3) + 4)
            r14_2 = r9_1
            int32_t var_68 = (*(r12_1 + (r15_1 << 3))).d
            var_f0 = 1
            int32_t var_60_1 = (*(r12_1 + (r15_1 << 3) + 8)).d
            float var_64_1 = zmm1
            int32_t var_5c_1 = 0x3f800000
            var_f8 = (*(rax_20 + 0x10)).d
            var_100 = rax_13
            rsi = arg1
            var_108 = &var_c4
            var_110 = *(rax_20 + 0xc)
            var_118_1 = (*(r12_1 + (r15_1 << 3) + 0x18)).d
            void var_a4
            rax_19 = *sub_1422e0040(&var_a4, r14_2 + 0x38, *(rsi + 0x18), &var_68, var_118_1, 
                var_110, var_108, var_100, var_f8, var_f0)
            var_e8 = rax_19
        else
            int64_t r9_2 = *r14_1
            var_110.q = &var_c4
            var_118_1 = *(*(arg1 + 0x30) + 0xc)
            r14_2 = r9_1
            void var_a8
            int16_t rcx_8 = *(*(r9_2 + 0x168))(r14_1, &var_a8, *(arg1 + 0x18), r9_2, var_118_1, 
                var_110, var_108, var_100, var_f8, var_f0)
            var_e8 = rcx_8
            char rdx_6 = rcx_8.b
            char rax_17 = rax_13
            
            if (rdx_6 s>= rax_13)
                rax_17 = rdx_6
            
            char rdx_7 = rax_13
            var_e8.b = rax_17
            char rax_18 = var_e8:1.b
            rsi = arg1
            
            if (rax_18 s>= rax_13)
                rdx_7 = rax_18
            
            var_e8:1.b = rdx_7
            rax_19 = var_e8
        
        int16_t var_94_1 = rax_19
        *(rsi + (sx.q(*(rsi + 0x37b28)) << 3) + 0x37b2c) = r10_1.d.q
        *(rsi + 0x37b28) += 1
        int64_t var_88_1 = 0
        
        if (*(r10_1 + **(rsi + 0x38728)) != 0)
            int64_t* rcx_12 = *(r14_2 + 8)
            var_100.d = var_c4.d
            var_108 = &var_e8
            var_110.b = 0
            var_118_1.b = 1
            int64_t rax_26 = (*(*rcx_12 + 0x150))(rcx_12, *(rsi + 0x18), &var_e8, *(rsi + 0x38720), 
                var_118_1, var_110, var_108, var_100, var_f8, var_f0)
            var_88_1 = rax_26
            
            if (rax_26 != 0)
                int64_t var_40_1 = rax_26
                *(rsi + sx.q(*(rsi + 0x37f28)) * 0x10 + 0x37f30) = r14_2.o
                *(rsi + 0x37f28) += 1
        
        bool var_df_1
        bool var_de_1
        
        if (r8_1 == 0)
            var_df_1 = false
            var_de_1 = false
        else
            void* rax_27 = *(r8_1 + 0x10)
            void* rcx_15 = r8_1
            
            if (rax_27 != 0)
                rcx_15 = rax_27
            
            void* rax_28 = *(r8_1 + 0x30)
            void* rcx_16 = r8_1 + 0x20
            var_df_1 = (*(rcx_15 + (r13_1 << 2)) & rdi_1.d) != 0
            
            if (rax_28 != 0)
                rcx_16 = rax_28
            
            var_de_1 = (*(rcx_16 + (r13_1 << 2)) & rdi_1.d) != 0
        
        float* rcx_17 = *(rsi + 0x30)
        int128_t zmm3
        zmm3.d = (*(r12_1 + (r15_1 << 3) + 4)).d f- rcx_17[1]
        int64_t rbx_1
        rbx_1.b = var_e8.b != var_e8:1.b
        zmm1 = *(r12_1 + (r15_1 << 3) + 8) - rcx_17[2]
        float zmm2 = *(r12_1 + (r15_1 << 3)) - *rcx_17
        zmm3.d = zmm3.d f* zmm3.d
        char var_e0_1 = rbx_1.b
        int128_t zmm0
        zmm0.d = (*(*(rsi + 0x18) + 0xd5c)).d f* rcx_17[5]
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f+ zmm2 * zmm2
        zmm3.d = zmm3.d f+ zmm1 * zmm1
        zmm1 = *(r12_1 + (r15_1 << 3) + 0x18)
        zmm1 = zmm1 * zmm1
        zmm3.d = zmm3.d f* zmm0.d
        zmm0.d = zmm3.d f* rcx_17[6]
        bool var_d0_1 = zmm1 f> zmm0.d
        char var_dd_1
        
        if (rcx_17[8].b == 0)
            zmm0 = data_1439b6dac
            zmm0.d = zmm0.d f* zmm0.d
            var_dd_1 = 0
            zmm0.d = zmm0.d f* zmm3.d
        
        if (rcx_17[8].b != 0 || not(zmm1 f<= zmm0.d))
            var_dd_1 = 1
        
        int32_t rcx_19 = (*U"1111")[sx.q(*(*(rsi + 0x10) + 8))]
        int32_t var_58_1 = rcx_19
        char rax_32
        int64_t r9_5
        rax_32, r9_5 = sub_1419a51c0(rcx_19)
        char r10_2
        
        if (rax_32 == 0 || *(*(rsi + 0x10) + 0xf68) != 4)
            r10_2 = 0
        else
            r10_2 = 1
        
        int64_t i = 0
        char var_dc_1 = r10_2
        int64_t i_1 = 0
        
        if (sx.q(*(r14_2 + 0x40)) s> 0)
            int64_t rdx_11 = *(r14_2 + 0x38)
            
            do
                int64_t rax_35 = i * 5
                void* r12_3 = i * 0xb0 + *(r14_2 + 0x48)
                int32_t* r13_2 = rdx_11 + (rax_35 << 2)
                int32_t rdx_12 = sx.d(*(rdx_11 + (rax_35 << 2) + 0x10))
                
                if (sx.d(var_e8.b) == rdx_12 || sx.d(var_e8:1.b) == rdx_12)
                    int32_t rax_36
                    rax_36.b = 0
                    rdi_1.b = 0
                    r9_5.b = 0
                    char var_cc_1 = rax_36.b
                    
                    if (var_df_1 == 0)
                        if (rbx_1.b != 0)
                            rax_36 = 0x20
                            
                            if (var_e8.b == rdx_12.b)
                                rax_36 = 0x10
                            
                            var_cc_1 = rax_36.b
                    else if (var_de_1 == 0)
                        if (rbx_1.b == 0 || var_e8.b != rdx_12.b)
                            rax_36.b = 0x20
                            var_cc_1 = rax_36.b
                        else
                            r9_5.b = 1
                    else if (rbx_1.b == 0 || var_e8:1.b != rdx_12.b)
                        rax_36.b = 0x10
                        var_cc_1 = rax_36.b
                    else
                        r9_5.b = 1
                    
                    char r8_6 = *(r13_2 + 0x11)
                    
                    if ((r8_6 & 1) == 0 || rax_36.b == 0)
                        rax_36.b = 0
                    else
                        rax_36.b = 1
                    
                    if (rax_11 != 0 || rax_36.b != 0)
                        r15_1.b = 0
                    else
                        r15_1.b = 1
                    
                    void* rbx_2 = rax_7
                    int32_t rcx_21 = *(rbx_2 + 8)
                    
                    if ((rcx_21.b & 8) != 0 && var_d0_1 != 0)
                        rdi_1 = 0
                        
                        if ((r8_6 & 8) != 0)
                            rdi_1 = 1
                    
                    if ((rcx_21.b & 4) != 0)
                        char rax_37 = r8_6
                        int32_t rdx_13 = rcx_21
                        
                        if ((r8_6 & 0x50) != 0
                                && ((rcx_21.b & 0xa0) != 0 || (rcx_21.b & 0x40) != 0))
                            rax_37 = r8_6
                            rdx_13 = rcx_21
                            
                            if (r9_5.b == 0)
                                if (r10_2 == 0 || (*(rbx_2 + 2) & 2) == 0 || rax_2 s>= 3)
                                    rax_37 = 0
                                else
                                    rax_37 = 1
                                
                                int32_t r10_3
                                
                                if ((r8_6 & 0x20) != 0 && var_dd_1 != 0)
                                    if (rax_2 s>= 3 || rax_37 != 0)
                                        goto label_141459b45
                                    
                                    r10_3 = var_e4_1
                                else if (rax_37 == 0)
                                    r10_3 = var_e4_1
                                else
                                label_141459b45:
                                    void* rbx_3 = rsi + 0x1898
                                    void* r14_3 = *(rsi + 0x10)
                                    int64_t rax_38
                                    
                                    if (*(rsi + 0x37b20) != 0)
                                        rax_38 = 0
                                        
                                        if (*(r14_3 + 8) s>= 3)
                                            rax_38 = 0x48
                                    
                                    if (*(rsi + 0x37b20) == 0
                                            || (not.b(*(rax_38 + &data_143e8e980)) & 1) != 0
                                            || (*(r13_2 + 0x12) & 0x40) == 0 || r15_1.b == 0)
                                        *(rbx_3 + 0x36240) += zx.d(r13_2[3].w)
                                        void* rbx_4 = rbx_3 + 0x2d120
                                        rdi_1 = sx.q(*(rbx_4 + 0x808))
                                        int32_t rax_48 = (rdi_1 + 1).d
                                        *(rbx_4 + 0x808) = rax_48
                                        
                                        if (rax_48 s> *(rbx_4 + 0x80c))
                                            sub_140b632b0(rbx_4, rdi_1.d)
                                        
                                        void* rax_49 = *(rbx_4 + 0x800)
                                        
                                        if (rax_49 != 0)
                                            rbx_4 = rax_49
                                        
                                        *(rbx_4 + (rdi_1 << 3)) = r12_3
                                        goto label_141459cae
                                    
                                    uint32_t rax_40
                                    rax_40, r9_5 = sub_14141ff40(r13_2, 0)
                                    
                                    if (rax_40 s< 0)
                                    label_141459cae:
                                        rbx_2 = rax_7
                                        r14_2 = r9_1
                                        r10_3 = var_e4_1
                                    else
                                        int32_t rdx_14 = *(rbx_3 + 0x2808)
                                        int32_t rcx_24 = rdx_14 + 1
                                        rdi_1 = sx.q(rax_40) * 5
                                        *(rbx_3 + 0x2808) = rcx_24
                                        int64_t rsi_2 = *(r9_1 + 0x28)
                                        
                                        if (rcx_24 s> *(rbx_3 + 0x280c))
                                            sub_141460d60(rbx_3, rdx_14)
                                            rcx_24 = *(rbx_3 + 0x2808)
                                        
                                        void* rax_43 = *(rbx_3 + 0x2800)
                                        r9_5 = sx.q(*(rsi_2 + (rdi_1 << 2) + 0xc))
                                        
                                        if (rax_43 != 0)
                                            rbx_3 = rax_43
                                        
                                        int64_t rdx_15 = sx.q(rcx_24) * 5
                                        int64_t r8_8
                                        
                                        if (r9_5.d s< 0)
                                            r8_8 = sx.q(*(rsi_2 + (rdi_1 << 2) + 8)) * 0xe8
                                                + *(r14_3 + 0x900)
                                        else
                                            r8_8 = r9_5 * 0xf8 + *(r14_3 + 0x3f0)
                                        
                                        int32_t rcx_26 = *(rsi_2 + (rdi_1 << 2) + 0x10)
                                        int64_t rax_46 = *(rsi_2 + (rdi_1 << 2))
                                        *(rbx_3 + (rdx_15 << 3) - 8) &= 0xffffffc0
                                        r10_3 = var_e4_1
                                        rsi = arg1
                                        r14_2 = r9_1
                                        *(rbx_3 + (rdx_15 << 3) - 0x28) = r8_8
                                        *(rbx_3 + (rdx_15 << 3) - 8) |= rcx_26 s>> 6 & 0x3f
                                        *(rbx_3 + (rdx_15 << 3) - 0x18) = r10_3
                                        *(rbx_3 + (rdx_15 << 3) - 0x14) = r10_3
                                        *(rbx_3 + (rdx_15 << 3) - 0x10) = 0xffffffff
                                        *(rbx_3 + (rdx_15 << 3) - 0xc) = r9_5.d
                                        *(rbx_3 + (rdx_15 << 3) - 0x20) = rax_46
                                        rbx_2 = rax_7
                                
                                rax_37 = *(r13_2 + 0x11)
                                
                                if ((rax_37 & 0x10) != 0)
                                    char rcx_30 = (*(rbx_2 + 8)).b
                                    
                                    if (rcx_30 s< 0 || (rcx_30 & 0x20) != 0)
                                        var_100.d = 1
                                        var_108.b = r15_1.b
                                        var_110.q = *(rsi + 0x10)
                                        var_118_1.q = r12_3
                                        sub_1414469b0(rsi + 0x1898, r10_3, r14_2, r13_2, var_118_1, 
                                            var_110, var_108.b, var_100)
                                        var_cc_1 |= 2
                                        
                                        if (rax_2 s>= 3)
                                            if (*(r13_2 + 0x11) s< 0)
                                                var_100.d = 2
                                                goto label_141459d51
                                            
                                            if ((*(r13_2 + 0x12) & 1) != 0)
                                                var_100.d = 3
                                                goto label_141459d51
                                        else
                                            var_100.d = 0xf
                                        label_141459d51:
                                            var_108.b = r15_1.b
                                            var_110.q = *(rsi + 0x10)
                                            var_118_1.q = r12_3
                                            sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, 
                                                var_118_1, var_110, var_108.b, var_100)
                                        
                                        if ((*(rbx_2 + 8) & 0x20) != 0)
                                            var_100.d = 0xe
                                            var_108.b = r15_1.b
                                            var_110.q = *(rsi + 0x10)
                                            var_118_1.q = r12_3
                                            sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, 
                                                var_118_1, var_110, var_108.b, var_100)
                                        
                                        if (sub_141458650(rbx_2) != 0)
                                            void* rbx_5 = *(r14_2 + 8)
                                            
                                            if (sub_1414d7390(*(rsi + 0x18), rbx_5) != 0)
                                                void* rax_56 = rax_7
                                                
                                                if ((*(rax_56 + 8) & 0x10) != 0)
                                                    if (sub_1414d71c0(sub_1422e5a30(*(rsi + 0x18)), 
                                                            rbx_5) != 0)
                                                        char rax_59
                                                        rax_59, r9_5 = sub_1414d7220(rbx_5)
                                                        
                                                        if (rax_59 != 0)
                                                            var_100.d = 6
                                                            var_108.b = r15_1.b
                                                            var_110.q = *(rsi + 0x10)
                                                            var_118_1.q = r12_3
                                                            sub_1414469b0(rsi + 0x1898, var_e4_1, 
                                                                r14_2, r13_2, var_118_1, var_110, 
                                                                var_108.b, var_100)
                                                    
                                                    rax_56 = rax_7
                                                
                                                if ((*(rax_56 + 3) & 2) != 0)
                                                    sub_1422e5a30(*(rsi + 0x18))
                                                    
                                                    if (sub_1414d7210() != 0
                                                            && sub_1405948d0() != 0)
                                                        var_100.d = 7
                                                        var_108.b = r15_1.b
                                                        var_110.q = *(rsi + 0x10)
                                                        var_118_1.q = r12_3
                                                        sub_1414469b0(rsi + 0x1898, var_e4_1, 
                                                            r14_2, r13_2, var_118_1, var_110, 
                                                            var_108.b, var_100)
                                            
                                            rbx_2 = rax_7
                                        
                                        var_c0 += 1
                                        rax_37 = *(r13_2 + 0x11)
                                
                                rdx_13 = *(rbx_2 + 8)
                                rdi_1.b = 1
                        
                        if ((rax_37 & 0x10) != 0 && (*(rbx_2 + 2) & 0x70) != 0
                                && not(test_bit(rdx_13, 8)) && rdx_13.b s< 0)
                            char rax_65
                            rax_65, r9_5 = sub_1422dd780(**(rsi + 0x18))
                            
                            if (rax_65 == 0)
                                var_100.d = 0xb
                            label_141459f6d:
                                var_108.b = r15_1.b
                                var_110.q = *(rsi + 0x10)
                                var_118_1.q = r12_3
                                sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, var_118_1, 
                                    var_110, var_108.b, var_100)
                            else
                                char rax_67 = *(rax_7 + 2)
                                
                                if ((rax_67 & 0x40) != 0)
                                    var_100.d = 8
                                    var_108.b = r15_1.b
                                    var_110.q = *(rsi + 0x10)
                                    var_118_1.q = r12_3
                                    sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, var_118_1, 
                                        var_110, var_108.b, var_100)
                                    rax_67 = *(rax_7 + 2)
                                
                                if ((rax_67 & 0x10) != 0)
                                    var_100.d = 9
                                    var_108.b = r15_1.b
                                    var_110.q = *(rsi + 0x10)
                                    var_118_1.q = r12_3
                                    sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, var_118_1, 
                                        var_110, var_108.b, var_100)
                                    rax_67 = *(rax_7 + 2)
                                
                                if ((rax_67 & 0x20) != 0)
                                    var_100.d = 0xa
                                    goto label_141459f6d
                            
                            if ((*(rax_7 + 2) & 4) != 0)
                                var_100.d = 5
                                var_108.b = r15_1.b
                                var_110.q = *(rsi + 0x10)
                                var_118_1.q = r12_3
                                sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, var_118_1, 
                                    var_110, var_108.b, var_100)
                            
                            if (rax_2 s< 3 && *(*(rsi + 0x18) + 0xd72) != 0)
                                var_100.d = 0x10
                                var_108.b = r15_1.b
                                var_110.q = *(rsi + 0x10)
                                var_118_1.q = r12_3
                                sub_1414469b0(rsi + 0x1898, var_e4_1, r14_2, r13_2, var_118_1, 
                                    var_110, var_108.b, var_100)
                            
                            rbx_2 = rax_7
                        
                        if ((*(rbx_2 + 4) & 2) != 0)
                            int32_t rax_75 = *(rsi + 0x1890) + 1
                            *(rsi + 0x1890) = rax_75
                            
                            if (rax_75 s> *(rsi + 0x1894))
                                sub_1405a4f90(rsi + 0x1888)
                                rax_75 = *(rsi + 0x1890)
                            
                            int64_t rcx_54 = *(rsi + 0x1888)
                            rbx_2 = rax_7
                            int64_t rax_76 = *(r14_2 + 8)
                            int64_t rdx_32 = sx.q(rax_75) * 2
                            *(rcx_54 + (rdx_32 << 3) - 0x10) = r12_3
                            *(rcx_54 + (rdx_32 << 3) - 8) = rax_76
                        
                        if ((*(rbx_2 + 8) & 0x80) != 0 && (*(rbx_2 + 3) & 0x10) != 0)
                            int32_t rax_77 = *(rsi + 0x1880) + 1
                            *(rsi + 0x1880) = rax_77
                            
                            if (rax_77 s> *(rsi + 0x1884))
                                sub_1405a4df0(rsi + 0x1878)
                                rax_77 = *(rsi + 0x1880)
                            
                            int64_t rcx_56 = *(rsi + 0x1878)
                            int64_t rdx_34 = sx.q(rax_77) * 3
                            void* rax_79 = *(r14_2 + 8)
                            *(rcx_56 + (rdx_34 << 3) - 0x18) = r12_3
                            *(rcx_56 + (rdx_34 << 3) - 0x10) = rax_79
                            *(rcx_56 + (rdx_34 << 3) - 8) = *(rax_79 + 0x30)
                    
                    if (var_cc_1 != 0)
                        *(sx.q(r13_2[1]) + *(rsi + 0x48)) = var_cc_1
                    
                    if (rdi_1.b != 0 && (*(r13_2 + 0x11) & 2) != 0)
                        int64_t* rcx_58 = *(r12_3 + 0x78)
                        int64_t rbx_9 = *(r9 + 0x16d8)
                        rdi_1 = sx.q(*(r12_3 + 0xac))
                        int64_t rax_84
                        rax_84, r9_5 = (*(*rcx_58 + 0x70))(rcx_58, *(rsi + 0x18), r12_3, var_88_1, 
                            var_118_1, var_110, var_108, var_100, var_f8, var_f0)
                        *(rbx_9 + (rdi_1 << 3)) = rax_84
                    
                    rbx_1 = zx.q(var_e0_1)
                
                i = i_1 + 1
                r10_2 = var_dc_1
                rdx_11 = *(r14_2 + 0x38)
                i_1 = i
            while (i s< sx.q(*(r14_2 + 0x40)))
        
        result = result_1 + 1
        result_1 = result
    while (result s< result_2)
    
    rcx = var_c0

*(r9 + 0x4fd0) += rcx
__security_check_cookie(rax_1 ^ &var_138)
return result
