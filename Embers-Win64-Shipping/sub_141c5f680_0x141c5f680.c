// 函数: sub_141c5f680
// 地址: 0x141c5f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t var_2c4 = 0
sub_141e636b0(arg1)
void* r8 = *arg1[2]
int64_t rcx = sx.q(*(r8 + 0x204))
uint64_t result

if (rcx.d == 0)
    sub_141c5c6b0(arg1)
    result.b = 0
else
    int32_t rsi_1 = -1
    
    if (*(r8 + 0x169) != 5 && rcx.d s> 0)
        rsi_1 = divu.dp.q(0:(sx.q(*(r8 + 0x274))), rcx * 2)
    
    *(arg1 + 0x19c) ^= (zx.d(*(r8 + 0x16e)) << 3 ^ *(arg1 + 0x19c)) & 0x10
    int32_t rdx_3 = *(arg1 + 0x19c)
    *(arg1 + 0x19c) = ((zx.d(*(arg1[1] + 0x352)) << 2 ^ rdx_3) & 0x20) ^ rdx_3
    *(arg1 + 0x16c) = 0
    arg1[0x2f].d = 1
    *(arg1 + 0x174) = 0
    void* rax_10 = arg1[0x12]
    
    if (*(rax_10 + 0xc) s<= 0)
        sub_141c5c6b0(arg1)
        result.b = 0
    else
        int32_t rax_11 = data_143f34a18
        sub_140b34200("InitSources", rax_11)
        void* rdi_1 = arg1[0x11]
        void* rdx_5 = **(rdi_1 + 0xa38)
        int64_t* rbx_1
        
        if (rdx_5 == 0)
            int64_t* rax_13 = j_sub_140a82f30(0x98)
            rbx_1 = rax_13
            
            if (rax_13 == 0)
                rbx_1 = nullptr
            else
                void* rdx_7 = &rax_13[3]
                *(rdx_7 + 0x10) = 0
                *(rdx_7 + 0x18) = 0
                *(rdx_7 + 0x1c) = 0x80
                void* rcx_8 = *(rdx_7 + 0x10)
                
                if (rcx_8 != 0)
                    rdx_7 = rcx_8
                
                *rdx_7 = 0
                *(rdx_7 + 8) = 0
                rax_13[7].d = 0xffffffff
                *(rax_13 + 0x3c) = 0
                rax_13[9] = 0
                rax_13[0xa].d = 0
                rax_13[0xe].d = 0
                __builtin_memset(&rax_13[0xb], 0, 0x1c)
                __builtin_memset(rax_13, 0, 0x18)
                *(rax_13 + 0x74) = 0xbf800000
                rax_13[0xf].d = 0xbf800000
                *(rax_13 + 0x7c) = 0xbf800000
                rax_13[0x10].d = 0xbf800000
                *(rax_13 + 0x84) = 0xbf800000
                rax_13[0x11] = -0x40800000
                rbx_1[0x12].w &= 0xffe0
                rbx_1[0xe].d
                sub_141c6cae0(&rbx_1[1])
        else
            rbx_1 = *(rdx_5 + 8)
            int64_t rcx_7 = *(rdi_1 + 0xa38)
            *(rdi_1 + 0xa38) = rdx_5
            *(rdx_5 + 8) = 0
            j_sub_140a74f90(rcx_7)
        
        sub_141c6ce50(rbx_1, rdi_1)
        arg1[0x15] = rbx_1
        
        if (rbx_1 != 0)
            int64_t* r8_1 = arg1[2]
            void* rdx_9 = arg1[0x11]
            void* rcx_12 = arg1[3]
            int32_t var_168_1 = 0
            int32_t rdi_2 = 0
            uint128_t var_1d8 = zx.o(0)
            int32_t r10_1 = 0
            int64_t* i_6
            __builtin_memset(&i_6, 0, 0x30)
            int32_t var_190_1 = 0xffffffff
            int32_t var_18c_1 = 0
            int64_t var_180 = 0
            int64_t var_178_1 = 0
            int64_t var_158
            __builtin_memset(&var_158, 0, 0x30)
            void* var_1c8_1 = &arg1[0x10]
            int32_t r11_1 = *(*r8_1 + 0x204)
            int32_t var_168_2 = r11_1
            int32_t var_164_1 = rsi_1
            int64_t* var_170_1 = rbx_1
            uint64_t rax_17
            
            if (*(rcx_12 + 0xc) s> *(rdx_9 + 0x354) || (*(arg1[1] + 0x358) & 2) == 0
                    || *(r8_1 + 0x104) != 1)
                rax_17.b = 0
            else
                rax_17.b = 2
            
            uint8_t r9_1 = (*(rdx_9 + 0x352) u>> 4 & 4) | rax_17.b
            
            if ((r8_1[0x20].d & 0x4000) == 0 || *(*r8_1 + 0x204) != 4)
                rax_17.b = 0
            else
                rax_17.b = 0x40
            
            r9_1 |= rax_17.b
            uint8_t var_118_1 = r9_1
            uint8_t rdx_11 = ((*(arg1 + 0x19c) u>> 4).b & 1) << 5 | r9_1
            int64_t var_128_1 = *(r8_1[0x18] + 0x30)
            int64_t var_120_1 = *(r8_1[0x18] + 0x28)
            uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(r8_1[0x1b].d))
            int32_t var_160_1 = zmm0_1.d
            int32_t var_188_1 = 0
            uint8_t var_118_2 = rdx_11
            int32_t var_15c_1 = _mm_cvtepi32_ps(zx.o(*(r8_1 + 0xdc))).d
            
            if (r11_1 s<= 2)
                void* rax_20 = r8_1[0x15]
                int64_t* r9_2 = r8_1
                
                if (rax_20 != 0)
                    int32_t rsi_2 = 0
                    int32_t var_188_2 = *(rax_20 + 0xc)
                    
                    if (*(r8_1[0x15] + 0x30) s> 0)
                        uint128_t* rbx_2 = nullptr
                        
                        while (true)
                            int64_t r14_1 = *(r8_1[0x15] + 0x28)
                            var_178_1.d = rdi_2 + 1
                            
                            if (rdi_2 + 1 s> r10_1)
                                sub_1405a4f90(&var_180)
                            
                            zmm0_1 = *(rbx_2 + r14_1)
                            rsi_2 += 1
                            rbx_2 = &rbx_2[1]
                            *(var_180 + sx.q(rdi_2) * 0x10) = zmm0_1
                            r9_2 = arg1[2]
                            r8_1 = r9_2
                            rdx_11 = var_118_2 ^ ((*(r9_2[0x15] + 0x38) ^ var_118_2) & 1)
                            var_118_2 = rdx_11
                            
                            if (rsi_2 s>= *(r9_2[0x15] + 0x30))
                                break
                            
                            r10_1 = var_178_1:4.d
                            rdi_2 = var_178_1.d
                
                if ((rdx_11 & 1) != 0)
                    arg1[0x2f].d
                    arg1[0x2f].d = 0
                    r9_2 = arg1[2]
                    rdx_11 = var_118_2
                
                void* rax_29 = *r9_2
                
                if ((*(rax_29 + 0x16d) & 4) != 0)
                    int32_t var_190_2 = *(rax_29 + 0xc)
                    
                    if (sub_14236bbe0(*r9_2, zmm0_1.d) == 0)
                        int64_t* rcx_20 = *arg1[2]
                        (*(*rcx_20 + 0x288))(rcx_20)
                        int32_t var_18c_2 = zmm0_1.d
                    
                    rdx_11 = var_118_2
                
                void* rbx_3 = arg1[0x31]
                int32_t i_7 = arg1[0x32].d
                int32_t rax_35 = *(arg1 + 0x194)
                rdx_11 ^= (*(arg1[2] + 0x100) << 4 ^ rdx_11) & 0x10
                
                if (rax_35 s< 0)
                    if (i_7 != 0)
                        void* rbx_5 = rbx_3 + 0x90
                        int32_t i
                        
                        do
                            int64_t rcx_25 = *rbx_5
                            
                            if (rcx_25 != 0)
                                sub_140a74f90(rcx_25)
                            
                            *(rbx_5 - 0x70) = &data_142d6a040
                            int64_t rcx_26 = *(rbx_5 - 0x18)
                            
                            if (rcx_26 != 0)
                                sub_140a74f90(rcx_26)
                            
                            sub_1405ae180(rbx_5 - 0x68)
                            rbx_5 += 0xa8
                            i = i_7
                            i_7 -= 1
                        while (i != 1)
                        rax_35 = *(arg1 + 0x194)
                    
                    arg1[0x32].d = 0
                    
                    if (rax_35 != 0)
                        sub_1405e4140(&arg1[0x31], 0)
                else
                    if (i_7 != 0)
                        void* rbx_4 = rbx_3 + 0x90
                        int32_t i_1
                        
                        do
                            int64_t rcx_22 = *rbx_4
                            
                            if (rcx_22 != 0)
                                sub_140a74f90(rcx_22)
                            
                            *(rbx_4 - 0x70) = &data_142d6a040
                            int64_t rcx_23 = *(rbx_4 - 0x18)
                            
                            if (rcx_23 != 0)
                                sub_140a74f90(rcx_23)
                            
                            sub_1405ae180(rbx_4 - 0x68)
                            rbx_4 += 0xa8
                            i_1 = i_7
                            i_7 -= 1
                        while (i_1 != 1)
                    
                    arg1[0x32].d = 0
                
                int32_t i_2 = 0
                int64_t rcx_29 = 0
                int32_t i_5 = 0
                int64_t var_278_1 = 0
                
                do
                    int64_t rax_36 = arg1[2]
                    char* rdi_3 = *(rcx_29 + rax_36 + 0x88)
                    void* r13_2 = sx.q(*(rcx_29 + rax_36 + 0x90)) * 0xb0 + rdi_3
                    
                    if (rdi_3 != r13_2)
                        do
                            void* rax_38 = *(rdi_3 + 8)
                            
                            if (rax_38 != 0)
                                int32_t r15_1 = *(rax_38 + 0xc)
                                int64_t var_1b0
                                void* rbx_6 = &var_1b0 + rcx_29
                                int32_t var_27c_1 = (*(rdi_3 + 0x10)).d
                                int64_t rsi_3 = sx.q(*(rbx_6 + 8))
                                int32_t rax_39 = (rsi_3 + 1).d
                                *(rbx_6 + 8) = rax_39
                                
                                if (rax_39 s> *(rbx_6 + 0xc))
                                    sub_1405a4d70(rbx_6)
                                
                                *(*rbx_6 + (rsi_3 << 3)) = r15_1.q
                                int64_t var_108_1 = 0
                                int16_t var_100_1 = 2
                                int64_t var_fc_1 = 0
                                int64_t var_f4_1 = 0
                                void** var_e8
                                sub_141f7a080(&var_e8)
                                var_100_1.b = *rdi_3
                                var_100_1:1.b = i_5.b
                                var_108_1.d = (*(rdi_3 + 0x10)).d
                                char var_7c_1 = rdi_3[0x94]
                                char var_7b_1 = rdi_3[0x95]
                                var_108_1:4.d = r15_1
                                var_fc_1.o = *(rdi_3 + 0x14)
                                int32_t var_80_1 = (*(rdi_3 + 0x90)).d
                                int64_t var_78
                                
                                if (&var_78 != &rdi_3[0x98])
                                    int32_t rbx_7 = *(rdi_3 + 0xa0)
                                    int64_t rsi_5 = *(rdi_3 + 0x98)
                                    int32_t var_70_1 = rbx_7
                                    int32_t var_6c
                                    
                                    if (rbx_7 != 0 || var_6c != 0)
                                        sub_1405c4b20(&var_78, rbx_7, var_6c)
                                        memcpy(var_78, rsi_5, rbx_7 * 0x1c)
                                    else
                                        var_6c = 0
                                
                                int64_t rax_45 = *(rdi_3 + 0xa8)
                                int64_t rbx_8 = sx.q(arg1[0x32].d)
                                int32_t rax_46 = (rbx_8 + 1).d
                                arg1[0x32].d = rax_46
                                
                                if (rax_46 s> *(arg1 + 0x194))
                                    sub_1405e3f90(&arg1[0x31])
                                
                                int32_t* rbx_10 = rbx_8 * 0xa8 + arg1[0x31]
                                *rbx_10 = var_108_1.d.d
                                rbx_10[1] = var_108_1:4.d
                                rbx_10[2].b = var_100_1.b
                                *(rbx_10 + 9) = var_100_1:1.b
                                rbx_10[3] = var_fc_1.d.d
                                rbx_10[4] = var_fc_1:4.d.d
                                rbx_10[5] = var_f4_1.d.d
                                rbx_10[6] = var_f4_1:4.d.d
                                sub_141adec50(&rbx_10[8], &var_e8)
                                *(rbx_10 + 0xa0) = rax_45
                                *(arg1 + 0x19c) |= 0x40
                                int64_t rcx_37 = var_78
                                
                                if (rcx_37 != 0)
                                    sub_140a74f90(rcx_37)
                                
                                var_e8 = &data_142d6a040
                                int64_t var_90
                                
                                if (var_90 != 0)
                                    sub_140a74f90(var_90)
                                
                                void var_e0
                                sub_1405ae180(&var_e0)
                                rcx_29 = var_278_1
                            
                            rdi_3 = &rdi_3[0xb0]
                        while (rdi_3 != r13_2)
                        
                        i_2 = i_5
                    
                    i_2 += 1
                    rcx_29 += 0x10
                    i_5 = i_2
                    var_278_1 = rcx_29
                while (i_2 s< 2)
            
            int64_t var_1b8
            
            if ((rdx_11 & 0x10) == 0)
                if ((rdx_11 & 2) == 0 || (*(arg1[0x11] + 0x352) & 0x40) == 0)
                    int64_t r8_4 = *(arg1[2] + 0x70)
                    void* rax_53 = arg1[0x11]
                    int64_t* var_238
                    int64_t* rax_54
                    int64_t rsi_6
                    int32_t rdi_4
                    
                    if (r8_4 == 0)
                        int64_t* rax_55 = *(rax_53 + 0x7e0)
                        int64_t* rcx_41 = rax_55[1]
                        rsi_6 = *rax_55
                        int64_t var_240 = rsi_6
                        var_238 = rcx_41
                        
                        if (rcx_41 != 0)
                            *(rcx_41 + 0xc) += 1
                        
                        rax_54 = &var_240
                        rdi_4 = 2
                    else
                        void var_200
                        rax_54 = sub_141c5eea0(rax_53, &var_200, r8_4)
                        rdi_4 = 1
                        rsi_6 = *rax_54
                    
                    int64_t* rbx_11 = rax_54[1]
                    rax_54[1] = 0
                    *rax_54 = 0
                    
                    if ((rdi_4.b & 2) != 0)
                        rdi_4 &= 0xfffffffd
                        
                        if (var_238 != 0)
                            int32_t rax_56 = *(var_238 + 0xc)
                            *(var_238 + 0xc) -= 1
                            
                            if (rax_56 == 1)
                                (*(*var_238 + 8))(var_238, 1)
                    
                    int64_t* var_1f8
                    
                    if ((rdi_4.b & 1) != 0 && var_1f8 != 0)
                        int32_t rax_58 = *(var_1f8 + 0xc)
                        *(var_1f8 + 0xc) -= 1
                        
                        if (rax_58 == 1 && var_1f8 != 0)
                            (*(*var_1f8 + 8))(var_1f8, 1)
                    
                    uint128_t zmm1_1 = zx.o(0)
                    uint128_t var_260 = zmm1_1
                    
                    if (rbx_11 != 0)
                        *(rbx_11 + 0xc) += 1
                        zmm1_1 = var_260
                    
                    zmm0_1 = rsi_6.o
                    int64_t var_230_1
                    var_230_1.o = zmm1_1
                    void* rcx_45 = _mm_bsrli_si128(zmm1_1, 8).q
                    uint128_t var_58_1 = zmm0_1
                    var_260 = zmm0_1
                    
                    if (rcx_45 != 0)
                        int32_t rax_60 = *(rcx_45 + 0xc)
                        *(rcx_45 + 0xc) -= 1
                        
                        if (rax_60 == 1)
                            (*(*rbx_11 + 8))(rbx_11, 1)
                    
                    int32_t var_250_1 = 0x3f800000
                    char var_24c_1 = 1
                    int64_t rax_62 = sub_141c5de80(arg1[0x11], &var_260)
                    int64_t rdi_5 = sx.q(var_1b8.d)
                    int64_t rsi_7 = rax_62
                    int32_t rcx_48 = (rdi_5 + 1).d
                    var_1b8.d = rcx_48
                    
                    if (rcx_48 s> 0)
                        sub_1405c4e40(&i_6)
                    
                    void* rdx_21 = var_260:8.q
                    int64_t* rcx_52 = &i_6[rdi_5 * 4]
                    *rcx_52 = var_260.q
                    rcx_52[1] = rdx_21
                    
                    if (rdx_21 != 0)
                        *(rdx_21 + 0xc) += 1
                        rsi_7 = rax_62
                        rdx_21 = var_260:8.q
                    
                    rcx_52[2].d = 0x3f800000
                    *(rcx_52 + 0x14) = 1
                    rcx_52[3] = rsi_7
                    
                    if (rdx_21 != 0)
                        int32_t rax_64 = *(rdx_21 + 0xc)
                        *(rdx_21 + 0xc) -= 1
                        
                        if (rax_64 == 1)
                            int64_t* rcx_53 = var_260:8.q
                            (*(*rcx_53 + 8))(rcx_53, 1)
                    
                    if (rbx_11 != 0)
                        int32_t rax_66 = *(rbx_11 + 0xc)
                        *(rbx_11 + 0xc) -= 1
                        
                        if (rax_66 == 1)
                            (*(*rbx_11 + 8))(rbx_11, 1)
                
                void* rax_68 = arg1[2]
                void* i_3 = *(rax_68 + 0x78)
                
                for (void* r15_3 = sx.q(*(rax_68 + 0x80)) * 0xb0 + i_3; i_3 != r15_3; i_3 += 0xb0)
                    int64_t r8_5 = *(i_3 + 8)
                    
                    if (r8_5 != 0)
                        void* rcx_55 = arg1[0x11]
                        int128_t var_2c0 = zx.o(0)
                        void var_1f0
                        int64_t* rax_70 = sub_141c5eea0(rcx_55, &var_1f0, r8_5)
                        int64_t rsi_8 = 0
                        int64_t* rdx_23 = nullptr
                        int64_t* r9_3 = nullptr
                        int64_t* r8_6 = nullptr
                        int64_t* rdi_6 = nullptr
                        int64_t* rbx_12
                        
                        if (&var_2c0 == rax_70)
                            rbx_12 = var_2c0:8.q
                        else
                            int64_t rcx_56 = *rax_70
                            *rax_70 = 0
                            rdx_23 = rax_70[1]
                            rbx_12 = rdx_23
                            var_2c0:8.q = rdx_23
                            r9_3 = rdx_23
                            var_2c0.q = rcx_56
                            r8_6 = rdx_23
                            rax_70[1] = 0
                            rdi_6 = rdx_23
                        
                        int64_t* var_1e8
                        
                        if (var_1e8 != 0)
                            r8_6 = r9_3
                            int32_t rax_71 = *(var_1e8 + 0xc)
                            *(var_1e8 + 0xc) -= 1
                            
                            if (rax_71 == 1)
                                r8_6 = rdx_23
                                
                                if (var_1e8 != 0)
                                    (*(*var_1e8 + 8))(var_1e8, 1, r8_6)
                                    r8_6 = rdi_6
                            
                            rbx_12 = var_2c0:8.q
                        
                        int32_t var_2b0_1 = (*(i_3 + 0x10)).d
                        
                        if (r8_6 != 0)
                            int32_t rax_73 = 0
                            bool z_1
                            
                            if (0 == rbx_12[1].d)
                                rbx_12[1].d = 0
                                z_1 = true
                            else
                                rax_73 = rbx_12[1].d
                                z_1 = false
                            
                            if (z_1)
                            label_141c601a7:
                                rbx_12 = var_2c0:8.q
                            else
                                while (true)
                                    bool z_2
                                    
                                    if (rax_73 == rbx_12[1].d)
                                        rbx_12[1].d = rax_73 + 1
                                        z_2 = true
                                    else
                                        rbx_12[1].d
                                        z_2 = false
                                    
                                    if (z_2)
                                        break
                                    
                                    rax_73 = 0
                                    bool z_3
                                    
                                    if (0 == rbx_12[1].d)
                                        rbx_12[1].d = 0
                                        z_3 = true
                                    else
                                        rax_73 = rbx_12[1].d
                                        z_3 = false
                                    
                                    if (z_3)
                                        goto label_141c601a7_2
                                
                                void* rax_81 = var_2c0.q
                                
                                if (rax_81 != 0)
                                    rsi_8 = *(rax_81 + 0x130)
                                
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d != 1)
                                label_141c601a7_1:
                                    rbx_12 = var_2c0:8.q
                                else
                                    int64_t* rbx_14 = var_2c0:8.q
                                    (**rbx_14)(rbx_14)
                                    int32_t rax_84 = *(rbx_14 + 0xc)
                                    *(rbx_14 + 0xc) -= 1
                                    
                                    if (rax_84 != 1)
                                    label_141c601a7_2:
                                        rbx_12 = var_2c0:8.q
                                    else
                                        rbx_12 = var_2c0:8.q
                                        (*(*rbx_12 + 8))(rbx_12, 1)
                        
                        int64_t rdi_7 = sx.q(var_1b8.d)
                        int32_t rax_75 = (rdi_7 + 1).d
                        var_1b8.d = rax_75
                        
                        if (rax_75 s> var_1b8:4.d)
                            sub_1405c4e40(&i_6)
                        
                        int64_t* rcx_62 = &i_6[rdi_7 * 4]
                        *rcx_62 = var_2c0.q
                        rcx_62[1] = rbx_12
                        
                        if (rbx_12 != 0)
                            *(rbx_12 + 0xc) += 1
                            rbx_12 = var_2c0:8.q
                        
                        rcx_62[2].d = var_2b0_1.d
                        *(rcx_62 + 0x14) = 0
                        rcx_62[3] = rsi_8
                        
                        if (rbx_12 != 0)
                            int32_t rax_77 = *(rbx_12 + 0xc)
                            *(rbx_12 + 0xc) -= 1
                            
                            if (rax_77 == 1)
                                int64_t* rcx_63 = var_2c0:8.q
                                (*(*rcx_63 + 8))(rcx_63, 1)
            
            for (int64_t* i_4 = i_6; i_4 != &i_4[sx.q(var_1b8.d) * 4]; i_4 = &i_4[4])
                int64_t* rbx_13 = i_4[1]
                
                if (rbx_13 != 0)
                    int32_t rax_79 = 0
                    bool z_4
                    
                    if (0 == rbx_13[1].d)
                        rbx_13[1].d = 0
                        z_4 = true
                    else
                        rax_79 = rbx_13[1].d
                        z_4 = false
                    
                    if (not(z_4))
                        bool z_6
                        
                        do
                            bool z_5
                            
                            if (rax_79 == rbx_13[1].d)
                                rbx_13[1].d = rax_79 + 1
                                z_5 = true
                            else
                                rbx_13[1].d
                                z_5 = false
                            
                            if (z_5)
                                if (*i_4 != 0)
                                    int32_t rax_86 = *(arg1 + 0xbc)
                                    arg1[0x17].d = 0
                                    
                                    if (rax_86 s< 0 && rax_86 != 0)
                                        sub_140775b10(&arg1[0x16], 0)
                                
                                rbx_13[1].d -= 1
                                
                                if (rbx_13[1].d == 1)
                                    (**rbx_13)(rbx_13)
                                    int32_t rax_89 = *(rbx_13 + 0xc)
                                    *(rbx_13 + 0xc) -= 1
                                    
                                    if (rax_89 == 1)
                                        (*(*rbx_13 + 8))(rbx_13, 1)
                                
                                break
                            
                            rax_79 = 0
                            
                            if (0 == rbx_13[1].d)
                                rbx_13[1].d = 0
                                z_6 = true
                            else
                                rax_79 = rbx_13[1].d
                                z_6 = false
                        while (not(z_6))
            
            char rax_94
            
            if (*(arg1[3] + 0xc) s> *(arg1[0x11] + 0x354) || (*(arg1[1] + 0x358) & 2) == 0
                    || *(arg1[2] + 0x104) != 1)
                rax_94 = sub_141e631e0(arg1[2])
            
            int32_t rax_96
            int32_t r14_3
            
            if ((*(arg1[3] + 0xc) s<= *(arg1[0x11] + 0x354) && (*(arg1[1] + 0x358) & 2) != 0
                    && *(arg1[2] + 0x104) == 1) || rax_94 == 0 || *(rax_10 + 0xc) s>= 3)
                r14_3 = 0
                rax_96 = 0
            else
                rax_96 = 4
                r14_3 = 0
            
            *(arg1 + 0x19c) &= 0xfffffffb
            *(arg1 + 0x19c) |= rax_96
            void* r8_7 = arg1[3]
            int128_t var_148
            void* rax_98
            void* rdx_26
            
            if (*(r8_7 + 0xc) s> *(arg1[0x11] + 0x354))
            label_141c603e9:
                rdx_26 = arg1[2]
                rax_98 = arg1[1]
                var_148.q = 0
            else
                rax_98 = arg1[1]
                
                if ((*(rax_98 + 0x358) & 2) == 0)
                    goto label_141c603e9
                
                rdx_26 = arg1[2]
                int64_t rcx_73 = *(rdx_26 + 0x108)
                
                if (rcx_73 == 0)
                    goto label_141c603e9
                
                var_148.q = rcx_73
            
            int32_t r9_4 = *(r8_7 + 0xc)
            void* rcx_74 = rax_98
            
            if (r9_4 == 1 || r9_4 == 2)
                if ((*(rcx_74 + 0x358) & 4) == 0)
                    rcx_74 = rcx_74
                    var_148:8.q = 0
                else
                    int64_t r9_5 = *(rdx_26 + 0x110)
                    
                    if (r9_5 == 0)
                        rcx_74 = rcx_74
                        var_148:8.q = 0
                    else
                        var_148:8.q = r9_5
            else
                rcx_74 = rax_98
                var_148:8.q = 0
            
            int128_t var_138
            int64_t rax_101
            
            if (*(r8_7 + 0xc) - 1 u<= 1 && (*(rcx_74 + 0x358) & 8) != 0)
                rax_101 = *(rdx_26 + 0x118)
                var_138.q = rax_101
            
            if (*(r8_7 + 0xc) - 1 u> 1 || (*(rcx_74 + 0x358) & 8) == 0 || rax_101 == 0)
                var_138.q = 0
            
            int64_t rax_102
            
            if ((*(rcx_74 + 0x358) & 0x10) != 0)
                rax_102 = *(rdx_26 + 0x120)
                var_138:8.q = rax_102
            
            if ((*(rcx_74 + 0x358) & 0x10) == 0 || rax_102 == 0)
                var_138:8.q = 0
            
            rdx_26.b = 1
            sub_141e6bef0(arg1, rdx_26.b)
            *(arg1[0x12] + 0x44) = int.d(sub_142366f80(*arg1[2]).d)
            void* rcx_79 = arg1[0x12]
            int32_t rax_104 = *(rcx_79 + 0x40)
            
            if (rax_104 u<= 1)
                int32_t var_218_1 = *(rcx_79 + 0x58)
                void* rax_109 = arg1[0x13]
                int32_t var_20c_1 = 0
                *(rax_109 + 0x10) = (*(rcx_79 + 0x50)).o
                *(rax_109 + 0x20) = 0
            else if (rax_104 - 2 u<= 1)
                void* rsi_12 = *arg1[2]
                int64_t rdx_27 = *(rsi_12 + 0x268)
                
                if (rdx_27 != 0)
                    int64_t rdi_8 = 0
                    int32_t rbx_16 = *(rsi_12 + 0x270) * *(rsi_12 + 0x204)
                    int64_t var_2a0 = 0
                    int32_t var_294_1 = 0
                    int32_t count = rbx_16 << 2
                    int32_t count_1 = count
                    
                    if (count s> 0)
                        sub_1405daba0(&var_2a0)
                        rdx_27 = *(rsi_12 + 0x268)
                        r14_3 = var_294_1
                        count_1 = count
                        rdi_8 = var_2a0
                    
                    memcpy(rdi_8, rdx_27, count)
                    int64_t* rbx_18 = arg1[0x13] + 0x80
                    
                    if (rbx_18 != &var_2a0)
                        int64_t rcx_82 = *rbx_18
                        
                        if (rcx_82 != 0)
                            sub_140a74f90(rcx_82)
                        
                        *rbx_18 = rdi_8
                        rbx_18[1].d = count_1
                        *(rbx_18 + 0xc) = r14_3
                    else if (rdi_8 != 0)
                        sub_140a74f90(rdi_8)
            
            void* rax_110 = arg1[0x12]
            int64_t rcx_84 = *(rax_110 + 0x38)
            *(rax_110 + 0x38) = 0
            rbx_1 = arg1[0x13]
            
            if (rbx_1[0xd] == 0)
                bool cond:3_1 = rbx_1[0xf].d != 3
                rbx_1[0xd] = rcx_84
                
                if (not(cond:3_1))
                    int64_t* rax_112 = sub_1405f7040(sub_141f88540())
                    int64_t r8_9 = *rax_112
                    (*(r8_9 + 0xa8))(rax_112, rbx_1[0xd], r8_9)
            
            int64_t* rax_114 = arg1[0x14]
            
            if (rax_114 != 0)
                rax_114[1].d += 1
            
            uint128_t zmm1_2 = var_1d8
            uint128_t zmm0_2 = arg1[0x13].o
            int64_t var_270_1
            var_270_1.o = zmm1_2
            void* rcx_87 = _mm_bsrli_si128(zmm1_2, 8).q
            uint128_t var_48_1 = zmm0_2
            var_1d8 = zmm0_2
            
            if (rcx_87 != 0)
                int32_t rax_115 = *(rcx_87 + 8)
                *(rcx_87 + 8) -= 1
                
                if (rax_115 == 1)
                    (**rax_114)(rax_114)
                    int32_t rax_117 = *(rax_114 + 0xc)
                    *(rax_114 + 0xc) -= 1
                    
                    if (rax_117 == 1)
                        (*(*rax_114 + 8))(rax_114, 1)
            
            int64_t* var_288 = nullptr
            int64_t var_290
            
            if (&arg1[0x13] != &var_290)
                arg1[0x13] = 0
                var_290 = 0
                sub_1405aeff0(&arg1[0x14], &var_288)
                int64_t* rcx_91 = var_288
                
                if (rcx_91 != 0)
                    rcx_91[1].d -= 1
                    
                    if (rcx_91[1].d == 1)
                        rbx_1 = var_288
                        (**rbx_1)(rbx_1)
                        int32_t r13_3 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (r13_3 == 1)
                            int64_t* rcx_93 = var_288
                            (*(*rcx_93 + 8))(rcx_93, zx.q(r13_3))
            
            if (sub_141c61180(arg1[0x15], &var_1d8) == 0)
                arg1[0x2c].b = 0
                sub_141c50ff0(&var_1d8)
                sub_140b38680("InitSources", rax_11)
                sub_141c5c6b0(arg1)
                result.b = 0
            else
                arg1[0x2c].b = 2
                (*(*arg1 + 0x28))(arg1)
                rbx_1.b = 1
                sub_141c50ff0(&var_1d8)
                sub_140b38680("InitSources", rax_11)
                result = zx.q(rbx_1.b)
        else
            sub_141c5c6b0(arg1)
            sub_140b38680("InitSources", rax_11)
            result = zx.q(rbx_1.b)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
