// 函数: sub_1425d3c60
// 地址: 0x1425d3c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t result = __security_cookie ^ &var_188
int64_t result_1 = result
void* rbx = *(arg1 + 0x20)
void* r15 = arg1

if (rbx != 0)
    void* rax_1 = sub_14258cb80()
    void* r8_1 = *(rbx + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(r8_1 + 0x38))
        int64_t result_2 = result
        result = *(r8_1 + 0x30)
        
        if (*(result + (result_2 << 3)) == rax_1 + 0x30)
            int64_t* r13_1 = *(rbx + 0x2f8)
            void* rsi_2 = &r13_1[sx.q(*(rbx + 0x300))]
            int32_t var_5c_1 = 0x80
            int64_t var_88 = 0
            int64_t* rdx = nullptr
            int32_t var_80_1 = 0
            int32_t r9_2 = 0
            int64_t var_78
            __builtin_memset(&var_78, 0, 0x1c)
            int32_t var_58_1 = 0xffffffff
            int32_t var_54_1 = 0
            void* var_48_1 = nullptr
            int32_t var_40_1 = 0
            void* var_c8_1 = rsi_2
            int32_t var_158
            int128_t var_130
            int128_t var_f8
            int128_t zmm1
            double zmm2[0x2]
            
            if (r13_1 != rsi_2)
                do
                    void* rdi_1 = *r13_1
                    
                    if (rdi_1 != r15 && rdi_1 != 0)
                        void* rax_3 = sub_1425d4f70()
                        void* rdx_1 = *(rdi_1 + 0x10)
                        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                        
                        if (rax_4.d s<= *(rdx_1 + 0x38)
                                && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                            int32_t rbx_4 = var_80_1 - *(rdi_1 + 0x84) - var_54_1 + *(rdi_1 + 0x58)
                            
                            if (rbx_4 s> var_80_1 - var_54_1)
                                sub_140976540(&var_88, rbx_4)
                                int32_t rdx_4
                                
                                if (rbx_4 u< 4)
                                    rdx_4 = 1
                                else
                                    uint32_t rbx_5 = rbx_4 u>> 1
                                    uint64_t rflags_1
                                    int32_t temp0_1
                                    temp0_1, rflags_1 = _bit_scan_reverse(rbx_5 + 8)
                                    int32_t rcx_4
                                    
                                    if (rbx_5 == 0xfffffff8)
                                        rcx_4 = 0x20
                                    else
                                        rcx_4 = 0x1f - temp0_1
                                    
                                    int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
                                    uint64_t rflags_2
                                    char temp0_2
                                    temp0_2, rflags_2 = _bit_scan_reverse(rbx_5 + 7)
                                    char rdx_3
                                    
                                    if (rcx_6 == 0)
                                        rdx_3 = 0x20
                                    else
                                        rdx_3 = 0x1f - temp0_2
                                    
                                    rdx_4 = 1 << ((not.d(rcx_6)).b & (0x20 - rdx_3))
                                
                                if (var_40_1 == 0 || var_40_1 s< rdx_4)
                                    var_40_1 = rdx_4
                                    sub_1405c1850(&var_88)
                            
                            int32_t r10_1 = *(rdi_1 + 0x78)
                            int32_t var_154_1 = 1
                            int32_t rcx_10 = 0
                            var_158 = 0
                            int32_t r8_4 = 0
                            void* var_150_1 = rdi_1 + 0x60
                            int32_t var_148_1 = 0xffffffff
                            int64_t var_144_1 = 0
                            
                            if (r10_1 != 0)
                                void* rax_10 = *(rdi_1 + 0x70)
                                void* r9_3 = rdi_1 + 0x60
                                
                                if (rax_10 != 0)
                                    r9_3 = rax_10
                                
                                int32_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(r10_1 - 1)
                                int32_t rdx_7 = *r9_3
                                
                                if (rdx_7 != 0)
                                label_1425d3eac:
                                    int32_t rax_17 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
                                    uint64_t rflags_3
                                    int32_t temp0_3
                                    temp0_3, rflags_3 = _bit_scan_reverse(rax_17)
                                    int32_t var_154_2 = rax_17
                                    int32_t rax_18
                                    
                                    if (rax_17 == 0)
                                        rax_18 = 0x20
                                    else
                                        rax_18 = 0x1f - temp0_3
                                    
                                    var_144_1.d = r8_4 - rax_18 + 0x1f
                                    
                                    if (r8_4 - rax_18 + 0x1f s> r10_1)
                                        var_144_1.d = r10_1
                                else
                                    while (true)
                                        int64_t rdx_8 = sx.q(rcx_10)
                                        r8_4 += 0x20
                                        rcx_10 += 1
                                        var_144_1:4.d = r8_4
                                        var_158 = rcx_10
                                        
                                        if (rdx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_7 = *(r9_3 + (rdx_8 << 2) + 4)
                                        var_148_1 = 0xffffffff
                                        
                                        if (rdx_7 != 0)
                                            goto label_1425d3eac
                                    
                                    var_144_1.d = r10_1
                            
                            int32_t rdx_9 = *(rdi_1 + 0x78)
                            zmm2 = var_148_1.o
                            int32_t r8_7 = rdx_9 s>> 5
                            double var_e8_1[0x2] = zmm2
                            var_f8 = var_158.o
                            int32_t rdi_2 = 0xffffffff << (rdx_9 & 0x1f).b
                            int32_t r9_5 = rdx_9 & 0xffffffe0
                            int32_t var_148_2 = rdi_2
                            int64_t var_110_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                            var_144_1.d = rdx_9
                            zmm1 = var_f8
                            var_130 = (rdi_1 + 0x50).o
                            int128_t var_120_1 = zmm1
                            
                            if (rdx_9 != r10_1)
                                void* rax_22 = *(rdi_1 + 0x70)
                                void* r11_1 = rdi_1 + 0x60
                                
                                if (rax_22 != 0)
                                    r11_1 = rax_22
                                
                                int32_t temp5_1
                                int32_t temp6_1
                                temp5_1:temp6_1 = sx.q(r10_1 - 1)
                                int32_t rdx_13 = *(r11_1 + (sx.q(r8_7) << 2)) & rdi_2
                                
                                if (rdx_13 != 0)
                                label_1425d3f88:
                                    int32_t rax_28 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
                                    uint64_t rflags_4
                                    int32_t temp0_5
                                    temp0_5, rflags_4 = _bit_scan_reverse(rax_28)
                                    int32_t rax_29
                                    
                                    if (rax_28 == 0)
                                        rax_29 = 0x20
                                    else
                                        rax_29 = 0x1f - temp0_5
                                    
                                    var_144_1.d = r9_5 - rax_29 + 0x1f
                                    
                                    if (r9_5 - rax_29 + 0x1f s> r10_1)
                                        var_144_1.d = r10_1
                                else
                                    while (true)
                                        int64_t rcx_14 = sx.q(r8_7)
                                        r9_5 += 0x20
                                        r8_7 += 1
                                        
                                        if (rcx_14.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_13 = *(r11_1 + (rcx_14 << 2) + 4)
                                        var_148_2 = 0xffffffff
                                        
                                        if (rdx_13 != 0)
                                            goto label_1425d3f88
                                    
                                    var_144_1.d = r10_1
                            
                            while (true)
                                int64_t rcx_16 = sx.q(var_120_1:0xc.d)
                                int32_t rax_21
                                
                                if (rcx_16.d != (var_148_2.q u>> 0x20).d
                                        || var_120_1.q != rdi_1 + 0x60)
                                    rax_21.b = 0
                                else
                                    rax_21.b = 1
                                
                                int64_t* rdx_14 = var_130.q
                                
                                if (rax_21.b == 0 || rdx_14 != rdi_1 + 0x50)
                                    rax_21.b = 1
                                else
                                    rax_21.b = 0
                                
                                if (rax_21.b == 0)
                                    break
                                
                                int64_t rdx_15 = *rdx_14
                                int64_t rcx_17 = rcx_16 * 3
                                void* rbx_8 = *(rdx_15 + (rcx_17 << 3) + 8)
                                int64_t* rsi_3 = rdx_15 + (rcx_17 << 3)
                                
                                if (rbx_8 != 0)
                                    void* rax_30 = sub_1425d5100()
                                    void* rdx_16 = *(rbx_8 + 0x10)
                                    int64_t rax_31 = sx.q(*(rax_30 + 0x38))
                                    
                                    if (rax_31.d s<= *(rdx_16 + 0x38)
                                            && *(*(rdx_16 + 0x30) + (rax_31 << 3))
                                            == rax_30 + 0x30)
                                        int64_t rbx_9 = *rsi_3
                                        
                                        if (var_80_1 == var_54_1)
                                        label_1425d40bd:
                                            int32_t var_c0
                                            sub_140598750(&var_88, &var_c0)
                                            int64_t* var_b8
                                            *var_b8 = *rsi_3
                                            var_b8[1] = rsi_3[1]
                                            var_b8[2].d = 0xffffffff
                                            int64_t rbx_10 = *var_b8
                                            void var_d8
                                            sub_1405b8300(&var_88, &var_d8, 
                                                (rbx_10 u>> 0x20).d + sub_140b5ead0(rbx_10.d), 
                                                var_b8, var_c0, nullptr)
                                        else
                                            void var_50
                                            void* rcx_22 = &var_50
                                            int64_t rdx_18 = sx.q(var_40_1 - 1)
                                                & sx.q(sub_140b5ead0(rbx_9.d) + rbx_9:4.d)
                                            
                                            if (var_48_1 != 0)
                                                rcx_22 = var_48_1
                                            
                                            int32_t rax_38 = *(rcx_22 + (rdx_18 << 2))
                                            
                                            if (rax_38 == 0xffffffff)
                                                goto label_1425d40bd
                                            
                                            int64_t r8_9 = var_88
                                            int64_t rdx_20
                                            
                                            while (true)
                                                int64_t rdx_19 = sx.q(rax_38) * 3
                                                rdx_20 = rdx_19 << 3
                                                
                                                if (*(r8_9 + (rdx_19 << 3)) == rbx_9)
                                                    break
                                                
                                                rax_38 = *(r8_9 + rdx_20 + 0x10)
                                                
                                                if (rax_38 == 0xffffffff)
                                                    goto label_1425d40bd
                                            
                                            if (rax_38 == 0xffffffff)
                                                goto label_1425d40bd
                                            
                                            int64_t rax_39 = r8_9 + rdx_20
                                            
                                            if (rax_39 == 0 || rax_39 == -8)
                                                goto label_1425d40bd
                                
                                var_120_1:8.d &= not.d(var_130:0xc.d)
                                sub_14059bdd0(&var_130:8)
                            
                            rsi_2 = var_c8_1
                            r15 = arg1
                    
                    r13_1 = &r13_1[1]
                while (r13_1 != rsi_2)
                
                int32_t var_60
                r9_2 = var_60
                int64_t* var_68
                rdx = var_68
            
            int32_t var_154_3 = 1
            int32_t rcx_28 = 0
            var_158 = 0
            int64_t* var_150_2 = &var_78
            int32_t r8_11 = 0
            int32_t var_148_3 = 0xffffffff
            int64_t var_144_2 = 0
            
            if (r9_2 != 0)
                int64_t* r10_2 = &var_78
                
                if (rdx != 0)
                    r10_2 = rdx
                
                int32_t temp0_6
                int32_t temp1_1
                temp0_6:temp1_1 = sx.q(r9_2 - 1)
                int32_t rdx_25 = *r10_2
                
                if (rdx_25 != 0)
                label_1425d41cc:
                    int32_t rax_53 = ((rdx_25 - 1) & rdx_25) ^ rdx_25
                    uint64_t rflags_5
                    int32_t temp0_7
                    temp0_7, rflags_5 = _bit_scan_reverse(rax_53)
                    int32_t var_154_4 = rax_53
                    int32_t rax_54
                    
                    if (rax_53 == 0)
                        rax_54 = 0x20
                    else
                        rax_54 = 0x1f - temp0_7
                    
                    int32_t rax_55 = r8_11 - rax_54 + 0x1f
                    
                    if (rax_55 s> r9_2)
                        rax_55 = r9_2
                    
                    var_144_2.d = rax_55
                else
                    while (true)
                        int64_t rdx_26 = sx.q(rcx_28)
                        r8_11 += 0x20
                        rcx_28 += 1
                        var_144_2:4.d = r8_11
                        var_158 = rcx_28
                        
                        if (rdx_26.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                            var_144_2.d = r9_2
                            break
                        
                        rdx_25 = *(r10_2 + (rdx_26 << 2) + 4)
                        var_148_3 = 0xffffffff
                        
                        if (rdx_25 != 0)
                            goto label_1425d41cc
            
            zmm2 = var_148_3.o
            int64_t* var_100_2 = &var_88
            var_144_2.d = r9_2
            var_f8 = var_158.o
            double var_e8_2 = zmm2[0]
            zmm1 = var_f8
            double temp0_8[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
            var_130 = var_100_2.o
            int128_t var_120_2 = zmm1
            int64_t var_110_2 = temp0_8.q
            
            while (true)
                int64_t rcx_31 = sx.q(var_120_2:0xc.d)
                char rax_57
                
                if (rcx_31.d != ((0xffffffff << (r9_2.b & 0x1f)).q u>> 0x20).d
                        || var_120_2.q != &var_78)
                    rax_57 = 0
                else
                    rax_57 = 1
                
                int64_t* rdx_28 = var_130.q
                
                if (rax_57 == 0 || rdx_28 != &var_88)
                    rax_57 = 1
                else
                    rax_57 = 0
                
                if (rax_57 == 0)
                    break
                
                int64_t rax_58 = *rdx_28
                int64_t rcx_32 = rcx_31 * 3
                int64_t rbx_12 = *(rax_58 + (rcx_32 << 3))
                int64_t* rsi_4 = rax_58 + (rcx_32 << 3)
                
                if (*(r15 + 0x58) == *(r15 + 0x84))
                labelid_1c:
                    sub_1425cf720(r15 + 0x50, rsi_4, &rsi_4[1])
                else
                    int32_t rax_61 = sub_140b5ead0(rbx_12.d) + rbx_12:4.d
                    void* r8_13 = r15 + 0x88
                    void* rcx_34 = *(r8_13 + 8)
                    
                    if (rcx_34 != 0)
                        r8_13 = rcx_34
                    
                    int32_t rax_63 = *(r8_13 + (((sx.q(*(r15 + 0x98)) - 1) & sx.q(rax_61)) << 2))
                    
                    if (rax_63 == 0xffffffff)
                    label_1425d4312:
                        sub_1425cf720(r15 + 0x50, rsi_4, &rsi_4[1])
                    else
                        int64_t r8_14 = *(r15 + 0x50)
                        int64_t rdx_32
                        
                        while (true)
                            rdx_32 = sx.q(rax_63)
                            int64_t rcx_35 = rdx_32 * 3
                            
                            if (*(r8_14 + (rcx_35 << 3)) == rbx_12)
                                break
                            
                            rax_63 = *(r8_14 + (rcx_35 << 3) + 0x10)
                            
                            if (rax_63 == 0xffffffff)
                                goto label_1425d4312_2
                        
                        if (rax_63 == 0xffffffff)
                        label_1425d4312_1:
                            sub_1425cf720(r15 + 0x50, rsi_4, &rsi_4[1])
                        else
                            void* rcx_38 = r8_14 + rdx_32 * 0x18
                            
                            if (rcx_38 == 0 || rcx_38 == -8)
                            label_1425d4312_2:
                                sub_1425cf720(r15 + 0x50, rsi_4, &rsi_4[1])
                            else
                                *(rcx_38 + 8) = rsi_4[1]
                
                var_120_2:8.d &= not.d(var_130:0xc.d)
                sub_14059bdd0(&var_130:8)
            
            if (arg2 != 0)
                int32_t rcx_40 = 0
                int32_t var_154_5 = 1
                var_158 = 0
                int32_t r10_3 = *(r15 + 0x78)
                void* rbx_13 = r15 + 0x60
                int32_t r8_16 = 0
                void* var_150_3 = rbx_13
                int32_t var_148_5 = 0xffffffff
                int64_t var_144_3 = 0
                
                if (r10_3 != 0)
                    void* rax_68 = *(rbx_13 + 0x10)
                    void* r9_8 = rbx_13
                    
                    if (rax_68 != 0)
                        r9_8 = rax_68
                    
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(r10_3 - 1)
                    int32_t rdx_36 = *r9_8
                    
                    if (rdx_36 != 0)
                    label_1425d43de:
                        int32_t rax_75 = ((rdx_36 - 1) & rdx_36) ^ rdx_36
                        uint64_t rflags_6
                        int32_t temp0_9
                        temp0_9, rflags_6 = _bit_scan_reverse(rax_75)
                        int32_t var_154_6 = rax_75
                        int32_t rax_76
                        
                        if (rax_75 == 0)
                            rax_76 = 0x20
                        else
                            rax_76 = 0x1f - temp0_9
                        
                        var_144_3.d = r8_16 - rax_76 + 0x1f
                        
                        if (r8_16 - rax_76 + 0x1f s> r10_3)
                            var_144_3.d = r10_3
                    else
                        while (true)
                            int64_t rdx_37 = sx.q(rcx_40)
                            r8_16 += 0x20
                            rcx_40 += 1
                            var_144_3:4.d = r8_16
                            var_158 = rcx_40
                            
                            if (rdx_37.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_36 = *(r9_8 + (rdx_37 << 2) + 4)
                            var_148_5 = 0xffffffff
                            
                            if (rdx_36 != 0)
                                goto label_1425d43de
                        
                        var_144_3.d = r10_3
                
                int32_t rdx_38 = *(r15 + 0x78)
                zmm2 = var_148_5.o
                var_130.q = r15 + 0x50
                var_144_3.d = rdx_38
                var_120_2 = zmm2
                var_130 = var_158.o
                int32_t rdi_4 = 0xffffffff << (rdx_38 & 0x1f).b
                int128_t zmm0_1 = var_130
                int32_t r8_19 = rdx_38 s>> 5
                int32_t r9_10 = rdx_38 & 0xffffffe0
                var_e8_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                int32_t var_148_6 = rdi_4
                var_100_2.o = zmm0_1
                var_f8 = var_120_2
                
                if (rdx_38 != r10_3)
                    void* rax_80 = *(rbx_13 + 0x10)
                    void* r11_2 = rbx_13
                    
                    if (rax_80 != 0)
                        r11_2 = rax_80
                    
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q(r10_3 - 1)
                    int32_t rdx_42 = *(r11_2 + (sx.q(r8_19) << 2)) & rdi_4
                    
                    if (rdx_42 != 0)
                    label_1425d44c7:
                        int32_t rax_86 = ((rdx_42 - 1) & rdx_42) ^ rdx_42
                        uint64_t rflags_7
                        int32_t temp0_11
                        temp0_11, rflags_7 = _bit_scan_reverse(rax_86)
                        int32_t rax_87
                        
                        if (rax_86 == 0)
                            rax_87 = 0x20
                        else
                            rax_87 = 0x1f - temp0_11
                        
                        var_144_3.d = r9_10 - rax_87 + 0x1f
                        
                        if (r9_10 - rax_87 + 0x1f s> r10_3)
                            var_144_3.d = r10_3
                    else
                        while (true)
                            int64_t rcx_44 = sx.q(r8_19)
                            r9_10 += 0x20
                            r8_19 += 1
                            
                            if (rcx_44.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_42 = *(r11_2 + (rcx_44 << 2) + 4)
                            var_148_6 = 0xffffffff
                            
                            if (rdx_42 != 0)
                                goto label_1425d44c7
                        
                        var_144_3.d = r10_3
                    
                    rbx_13 = r15 + 0x60
                
                while (true)
                    int64_t rcx_46 = sx.q(var_e8_2:4.d)
                    int32_t rax_79
                    
                    if (rcx_46.d != (var_148_6.q u>> 0x20).d || var_f8:8.q != rbx_13)
                        rax_79.b = 0
                    else
                        rax_79.b = 1
                    
                    if (rax_79.b == 0 || var_100_2 != r15 + 0x50)
                        rax_79.b = 1
                    else
                        rax_79.b = 0
                    
                    if (rax_79.b == 0)
                        break
                    
                    void* r15_2 = *(*var_100_2 + rcx_46 * 0x18 + 8)
                    
                    if (r15_2 != 0)
                        void* rax_88 = sub_1425d5100()
                        void* rdx_45 = *(r15_2 + 0x10)
                        int64_t rax_89 = sx.q(*(rax_88 + 0x38))
                        
                        if (rax_89.d s<= *(rdx_45 + 0x38)
                                && *(*(rdx_45 + 0x30) + (rax_89 << 3)) == rax_88 + 0x30)
                            int32_t r10_4 = *(r15 + 0x78)
                            void* rsi_5 = r15 + 0x60
                            int32_t rcx_49 = 0
                            int32_t var_154_7 = 1
                            int32_t r8_21 = 0
                            var_158 = 0
                            void* var_150_4 = rsi_5
                            int32_t var_148_7 = 0xffffffff
                            int64_t var_144_4 = 0
                            
                            if (r10_4 != 0)
                                void* rax_91 = *(rsi_5 + 0x10)
                                void* r9_12 = rsi_5
                                
                                if (rax_91 != 0)
                                    r9_12 = rax_91
                                
                                int32_t temp12_1
                                int32_t temp13_1
                                temp12_1:temp13_1 = sx.q(r10_4 - 1)
                                int32_t rdx_48 = *r9_12
                                
                                if (rdx_48 != 0)
                                label_1425d45ee:
                                    int32_t rax_98 = ((rdx_48 - 1) & rdx_48) ^ rdx_48
                                    uint64_t rflags_8
                                    int32_t temp0_12
                                    temp0_12, rflags_8 = _bit_scan_reverse(rax_98)
                                    int32_t var_154_8 = rax_98
                                    int32_t rax_99
                                    
                                    if (rax_98 == 0)
                                        rax_99 = 0x20
                                    else
                                        rax_99 = 0x1f - temp0_12
                                    
                                    var_144_4.d = r8_21 - rax_99 + 0x1f
                                    
                                    if (r8_21 - rax_99 + 0x1f s> r10_4)
                                        var_144_4.d = r10_4
                                else
                                    while (true)
                                        int64_t rdx_49 = sx.q(rcx_49)
                                        r8_21 += 0x20
                                        rcx_49 += 1
                                        var_144_4:4.d = r8_21
                                        var_158 = rcx_49
                                        
                                        if (rdx_49.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_48 = *(r9_12 + (rdx_49 << 2) + 4)
                                        var_148_7 = 0xffffffff
                                        
                                        if (rdx_48 != 0)
                                            goto label_1425d45ee
                                    
                                    var_144_4.d = r10_4
                            
                            int32_t rdx_50 = *(r15 + 0x78)
                            int128_t zmm0_2 = var_158.o
                            zmm2 = var_148_7.o
                            var_158 = rdx_50 s>> 5
                            char rcx_52 = rdx_50.b & 0x1f
                            int32_t var_154_9 = 1 << rcx_52
                            double var_98_1[0x2] = zmm2
                            int64_t var_110_3 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                            var_144_4.d = rdx_50
                            var_144_4:4.d = rdx_50 & 0xffffffe0
                            var_130 = (r15 + 0x50).o
                            int128_t var_120_3 = zmm0_2
                            
                            if (rdx_50 != r10_4)
                                sub_14059bdd0(&var_158)
                            
                            while (true)
                                int64_t rcx_54 = sx.q(var_120_3:0xc.d)
                                int32_t rax_106
                                
                                if (rcx_54.d != ((0xffffffff << rcx_52).q u>> 0x20).d
                                        || var_120_3.q != rsi_5)
                                    rax_106.b = 0
                                else
                                    rax_106.b = 1
                                
                                int64_t* rdx_51 = var_130.q
                                
                                if (rax_106.b == 0 || rdx_51 != r15 + 0x50)
                                    rax_106.b = 1
                                else
                                    rax_106.b = 0
                                
                                if (rax_106.b == 0)
                                    break
                                
                                int64_t rdx_52 = *rdx_51
                                int64_t rcx_55 = rcx_54 * 3
                                void* rbx_15 = *(rdx_52 + (rcx_55 << 3) + 8)
                                
                                if (rbx_15 != 0)
                                    void* rax_107 = sub_1425d5100()
                                    void* rdx_53 = *(rbx_15 + 0x10)
                                    int64_t rax_108 = sx.q(*(rax_107 + 0x38))
                                    
                                    if (rax_108.d s> *(rdx_53 + 0x38)
                                            || *(*(rdx_53 + 0x30) + (rax_108 << 3))
                                            != rax_107 + 0x30)
                                        int64_t* rbx_16 = *(rdx_52 + (rcx_55 << 3) + 8)
                                        
                                        if (rbx_16 != 0)
                                            void* rax_110 = sub_1425d5030()
                                            void* rcx_57 = rbx_16[2]
                                            int64_t rax_111 = sx.q(*(rax_110 + 0x38))
                                            
                                            if (rax_111.d s<= *(rcx_57 + 0x38)
                                                    && *(*(rcx_57 + 0x30) + (rax_111 << 3))
                                                    == rax_110 + 0x30)
                                                (*(*rbx_16 + 0x270))(rbx_16, r15_2)
                                
                                var_120_3:8.d &= not.d(var_130:0xc.d)
                                sub_14059bdd0(&var_130:8)
                            
                            rbx_13 = r15 + 0x60
                    
                    var_e8_2.d &= not.d(var_f8:4.d)
                    sub_14059bdd0(&var_f8)
            
            result = sub_1405ae080(&var_88)

__security_check_cookie(result_1 ^ &var_188)
return result
