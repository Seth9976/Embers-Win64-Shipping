// 函数: sub_141fc5f00
// 地址: 0x141fc5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r12 = arg1
int64_t* rcx = *(arg1 + 0x770)
int64_t result = (*(*rcx + 0x28))(rcx)

if (result == 0)
    return result

void* rdi_1 = **(r12 + 0x90)
char rax_2 = *(r12 + 0xe29)
int32_t rax_3 = data_143de7000
void* var_f8_1 = rdi_1
sub_140b34200("DemoSaveCheckpointTime", rax_3)
int64_t* r14_1 = *(r12 + 0x6f0)
int64_t* var_108_1 = r14_1
int32_t var_138
int64_t var_f0
int128_t var_e0
double zmm2[0x2]

if (*(r12 + 0xe28) == 0)
    int32_t r11_2 = r14_1[5].d
    void* r13_4 = &r14_1[2]
    int32_t var_134_3 = 1
    var_138 = 0
    int32_t rcx_31 = 0
    void* var_130_3 = r13_4
    int32_t r8_11 = 0
    int32_t var_128_3 = 0xffffffff
    int64_t var_124_2 = 0
    
    if (r11_2 != 0)
        void* rax_49 = *(r13_4 + 0x10)
        void* r9_5 = r13_4
        
        if (rax_49 != 0)
            r9_5 = rax_49
        
        int32_t temp0_4
        int32_t temp1_1
        temp0_4:temp1_1 = sx.q(r11_2 - 1)
        int32_t rdx_32 = *r9_5
        
        if (rdx_32 != 0)
        label_141fc655c:
            int32_t rax_56 = ((rdx_32 - 1) & rdx_32) ^ rdx_32
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_56)
            int32_t var_134_4 = rax_56
            int32_t rax_57
            
            if (rax_56 == 0)
                rax_57 = 0x20
            else
                rax_57 = 0x1f - temp0_5
            
            var_124_2.d = r8_11 - rax_57 + 0x1f
            
            if (r8_11 - rax_57 + 0x1f s> r11_2)
                var_124_2.d = r11_2
        else
            while (true)
                int64_t rdx_33 = sx.q(rcx_31)
                r8_11 += 0x20
                rcx_31 += 1
                var_124_2:4.d = r8_11
                var_138 = rcx_31
                
                if (rdx_33.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                    break
                
                rdx_32 = *(r9_5 + (rdx_33 << 2) + 4)
                var_128_3 = 0xffffffff
                
                if (rdx_32 != 0)
                    goto label_141fc655c
            
            var_124_2.d = r11_2
    
    int32_t rdx_34 = r14_1[5].d
    zmm2 = var_128_3.o
    var_124_2.d = rdx_34
    double var_80_2[0x2] = zmm2
    int128_t var_90_2 = var_138.o
    int32_t rsi_3 = 0xffffffff << (rdx_34 & 0x1f).b
    int32_t r8_14 = rdx_34 s>> 5
    int32_t r9_7 = rdx_34 & 0xffffffe0
    int64_t var_c0_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_128_4 = rsi_3
    var_e0 = r14_1.o
    int128_t var_d0_2 = var_90_2
    
    if (rdx_34 != r11_2)
        void* rax_61 = *(r13_4 + 0x10)
        void* rbx_8 = r13_4
        
        if (rax_61 != 0)
            rbx_8 = rax_61
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_2 - 1)
        int32_t rdx_38 = *(rbx_8 + (sx.q(r8_14) << 2)) & rsi_3
        
        if (rdx_38 != 0)
        label_141fc6636:
            int32_t rax_67 = ((rdx_38 - 1) & rdx_38) ^ rdx_38
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_67)
            int32_t r10_2
            
            if (rax_67 == 0)
                r10_2 = 0x20
            else
                r10_2 = 0x1f - temp0_7
            
            var_124_2.d = r9_7 - r10_2 + 0x1f
            
            if (r9_7 - r10_2 + 0x1f s> r11_2)
                var_124_2.d = r11_2
        else
            while (true)
                int64_t rcx_35 = sx.q(r8_14)
                r9_7 += 0x20
                r8_14 += 1
                
                if (rcx_35.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_38 = *(rbx_8 + (rcx_35 << 2) + 4)
                var_128_4 = 0xffffffff
                
                if (rdx_38 != 0)
                    goto label_141fc6636
            
            var_124_2.d = r11_2
        
        rdi_1 = var_f8_1
    
    while (true)
        int64_t rdx_39 = sx.q(var_d0_2:0xc.d)
        int32_t rax_60
        
        if (rdx_39.d != (var_128_4.q u>> 0x20).d || var_d0_2.q != r13_4)
            rax_60.b = 0
        else
            rax_60.b = 1
        
        int64_t* rcx_37 = var_e0.q
        
        if (rax_60.b == 0 || rcx_37 != r14_1)
            rax_60.b = 1
        else
            rax_60.b = 0
        
        if (rax_60.b == 0)
            break
        
        int64_t r14_5 = *rcx_37
        int64_t rsi_4 = rdx_39 * 3
        void* rbx_9 = **(r14_5 + (rsi_4 << 3))
        sub_140d3a3a0(&arg_8, rbx_9)
        
        if (*(rdi_1 + 0x1378) != *(rdi_1 + 0x13a4))
            void* rdx_41 = arg_8
            void* r9_9 = rdi_1 + 0x13a8
            void* r8_15 = *(r9_9 + 8)
            uint32_t r11_4 = (rdx_41 u>> 0x20).d
            
            if (r8_15 != 0)
                r9_9 = r8_15
            
            int32_t i =
                *(r9_9 + (((sx.q(rdx_41.d) ^ sx.q(r11_4)) & (sx.q(*(rdi_1 + 0x13b8)) - 1)) << 2))
            
            if (i != 0xffffffff)
                int64_t r10_3 = *(rdi_1 + 0x1370)
                
                do
                    int64_t i_3 = sx.q(i)
                    int64_t r9_10 = i_3 * 3
                    uint64_t rax_73 = *(r10_3 + (r9_10 << 3))
                    
                    if (rax_73.d != rdx_41.d || (rax_73 u>> 0x20).d != r11_4)
                        rax_73.b = 0
                    else
                        rax_73.b = 1
                    
                    if (rax_73.b != 0)
                        if (i != 0xffffffff)
                            void* rcx_42 = r10_3 + i_3 * 0x18
                            
                            if (rcx_42 != 0 && *(rcx_42 + 8) != 0 &&
                                    (rax_2 == 0 || (*(*(r14_5 + (rsi_4 << 3)) + 0xd0) & 4) != 0))
                                sub_140d3a3a0(&var_f0, rbx_9)
                                int64_t rdi_11 = sx.q(*(r12 + 0xf98))
                                int32_t var_e8_1 = 0xffffffff
                                int32_t rax_76 = (rdi_11 + 1).d
                                *(r12 + 0xf98) = rax_76
                                
                                if (rax_76 s> *(r12 + 0xf9c))
                                    sub_14083a7e0(r12 + 0xf90)
                                
                                int64_t rcx_45 = *(r12 + 0xf90)
                                int64_t rdx_44 = rdi_11 * 3
                                rdi_1 = var_f8_1
                                *(rcx_45 + (rdx_44 << 2)) = var_f0
                                *(rcx_45 + (rdx_44 << 2) + 8) = var_e8_1
                                void* rax_78 = *(r14_5 + (rsi_4 << 3))
                                *(rax_78 + 0xd0) &= 0xfb
                        
                        break
                    
                    i = *(r10_3 + (r9_10 << 3) + 0x10)
                while (i != 0xffffffff)
        
        var_d0_2:8.d &= not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
        r14_1 = var_108_1
else
    int32_t rax_5 = r14_1[1].d - *(r14_1 + 0x34)
    void* rdi_2 = rdi_1 + 0x1370
    void* var_100 = rdi_2
    int64_t r15_1 = 0
    int64_t var_118 = 0
    int32_t rsi_1 = 0
    int64_t var_110_1 = 0
    int32_t rdx_3 = *(rdi_2 + 8) - *(rdi_2 + 0x34)
    
    if (rax_5 s<= rdx_3)
        rdx_3 = rax_5
    
    if (rdx_3 s> 0)
        sub_14119ae20(&var_118, rdx_3)
        rsi_1 = var_110_1.d
        r15_1 = var_118
    
    int32_t r11_1 = *(rdi_2 + 0x28)
    void* r13_1 = rdi_2 + 0x10
    var_138 = 0
    int32_t rcx_2 = 0
    int32_t var_134_1 = 1
    int32_t r8_1 = 0
    void* var_130_1 = r13_1
    int32_t var_128_1 = 0xffffffff
    int64_t var_124_1 = 0
    
    if (r11_1 != 0)
        void* rax_6 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_141fc607c:
            int32_t rax_13 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_134_2 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_1
            
            var_124_1.d = r8_1 - rax_14 + 0x1f
            
            if (r8_1 - rax_14 + 0x1f s> r11_1)
                var_124_1.d = r11_1
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_124_1:4.d = r8_1
                var_138 = rcx_2
                
                if (rdx_7.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                var_128_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_141fc607c
            
            var_124_1.d = r11_1
    
    int32_t rdx_8 = *(rdi_2 + 0x28)
    zmm2 = var_128_1.o
    var_124_1.d = rdx_8
    double var_80_1[0x2] = zmm2
    int128_t var_90_1 = var_138.o
    int32_t r14_2 = 0xffffffff << (rdx_8 & 0x1f).b
    int32_t r8_4 = rdx_8 s>> 5
    int32_t r9_3 = rdx_8 & 0xffffffe0
    int64_t var_c0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_128_2 = r14_2
    var_e0 = rdi_2.o
    int128_t var_d0_1 = var_90_1
    
    if (rdx_8 != r11_1)
        void* rax_18 = *(r13_1 + 0x10)
        void* rbx_1 = r13_1
        
        if (rax_18 != 0)
            rbx_1 = rax_18
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 - 1)
        int32_t rdx_12 = *(rbx_1 + (sx.q(r8_4) << 2)) & r14_2
        
        if (rdx_12 != 0)
        label_141fc6156:
            int32_t rax_24 = ((rdx_12 - 1) & rdx_12) ^ rdx_12
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_24)
            int32_t r10_1
            
            if (rax_24 == 0)
                r10_1 = 0x20
            else
                r10_1 = 0x1f - temp0_3
            
            var_124_1.d = r9_3 - r10_1 + 0x1f
            
            if (r9_3 - r10_1 + 0x1f s> r11_1)
                var_124_1.d = r11_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_6.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(rbx_1 + (rcx_6 << 2) + 4)
                var_128_2 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_141fc6156
            
            var_124_1.d = r11_1
        
        rdi_2 = var_100
    
    char arg_18
    
    while (true)
        int64_t rdx_13 = sx.q(var_d0_1:0xc.d)
        int32_t rax_17
        
        if (rdx_13.d != (var_128_2.q u>> 0x20).d || var_d0_1.q != r13_1)
            rax_17.b = 0
        else
            rax_17.b = 1
        
        int64_t* rcx_8 = var_e0.q
        
        if (rax_17.b == 0 || rcx_8 != rdi_2)
            rax_17.b = 1
        else
            rax_17.b = 0
        
        if (rax_17.b == 0)
            break
        
        int64_t r15_2 = *rcx_8
        int64_t r14_3 = rdx_13 * 3
        void* rdi_4 = *(r15_2 + (r14_3 << 3) + 8)
        
        if (rdi_4 == 0)
            r15_1 = var_118
        else
            void* rdi_5 = *(rdi_4 + 0x70)
            
            if (rdi_5 == 0)
                r15_1 = var_118
            else
                sub_141fb31d0(var_108_1, &arg_18, rdi_5)
                int64_t rax_25 = sx.q(arg_18.d)
                
                if (rax_25.d == 0xffffffff)
                    r15_1 = var_118
                else
                    int64_t* rbx_3 = *var_108_1 + rax_25 * 0x18
                    
                    if (rbx_3 == 0)
                        r15_1 = var_118
                    else
                        void* rbx_4 = *rbx_3
                        
                        if (rbx_4 == 0 || (rax_2 != 0 && (*(rbx_4 + 0xd0) & 4) == 0))
                            r15_1 = var_118
                        else
                            int64_t rax_27 = *(r15_2 + (r14_3 << 3))
                            int64_t rdi_6 = sx.q(rsi_1)
                            int64_t var_b0_1 = *(rdi_5 + 0x20)
                            rsi_1 = (rdi_6 + 1).d
                            var_110_1.d = rsi_1
                            
                            if (rsi_1 s> var_110_1:4.d)
                                sub_14119a860(&var_118)
                                rsi_1 = var_110_1.d
                            
                            r15_1 = var_118
                            *(r15_1 + rdi_6 * 0x10) = rax_27.o
                            *(rbx_4 + 0xd0) &= 0xfb
        
        var_d0_1:8.d &= not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
        rdi_2 = var_100
    
    char r8_6 = arg_8.b
    arg_18 = 0
    sub_141fa3cd0(r15_1, rsi_1, r8_6)
    void* rax_33 = arg_8
    void* rbx_5 = rax_33 + 0xf90
    
    if (rsi_1 s> *(rbx_5 + 0xc))
        sub_14083ad30(rbx_5, rsi_1)
        rax_33 = arg_8
    
    int64_t r14_4 = 0
    int64_t r12_3 = sx.q(rsi_1)
    var_f0 = r12_3
    
    if (rsi_1 != 0)
        int64_t* r13_2 = rax_33 + 0xdc0
        int64_t* var_108_2 = r13_2
        bool cond:12_1
        
        do
            void* rdi_9 = (r14_4 << 4) + r15_1
            void* i_1 = *(rdi_9 + 8)
            void* rax_34
            int64_t rax_35
            void* rdx_19
            
            if (i_1 != 0)
                rax_34 = sub_142527690()
                rdx_19 = *(i_1 + 0x10)
                rax_35 = sx.q(*(rax_34 + 0x38))
            
            void* const i_2
            
            if (i_1 == 0 || rax_35.d s> *(rdx_19 + 0x38)
                    || *(*(rdx_19 + 0x30) + (rax_35 << 3)) != rax_34 + 0x30)
                i_2 = nullptr
            else
                i_2 = i_1
            
            sub_140865c40(r13_2, &arg_18, i_2)
            int64_t rax_37 = sx.q(arg_18.d)
            void* rax_39
            
            if (rax_37.d != 0xffffffff)
                rax_39 = *r13_2 + rax_37 * 0x18
            
            void* r13_3
            
            if (rax_37.d == 0xffffffff || rax_39 == 0 || rax_39 == -8)
                int64_t var_a8 = *(sub_140d21d80(i_2) + 0x18)
                int64_t var_70
                sub_140b63b70(&var_a8, &var_70)
                int64_t var_60
                sub_142441630(&var_60, &var_70)
                int64_t rcx_22 = var_70
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
                
                void* rax_43 = sub_141fb32e0(arg_8, &var_60)
                int64_t rcx_24 = var_60
                r13_3 = rax_43
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                void* const i_4 = i_2
                void* var_130_2 = r13_3 + 0x10
                var_138.q = &i_4
                sub_1413b83d0(var_108_2, &var_100, &var_138, nullptr)
            else
                r13_3 = *(arg_8 + 0xd60) + sx.q(*(rax_39 + 8)) * 0x18
            
            cond:12_1 = r14_4 != r12_3
            
            if (r14_4 s< r12_3)
                while (i_1 == *(rdi_9 + 8))
                    int64_t rax_44 = *rdi_9
                    int64_t rsi_2 = sx.q(*(rbx_5 + 8))
                    int32_t r12_4 = *(r13_3 + 0x10)
                    int32_t rax_45 = (rsi_2 + 1).d
                    *(rbx_5 + 8) = rax_45
                    
                    if (rax_45 s> *(rbx_5 + 0xc))
                        sub_14083a7e0(rbx_5)
                    
                    int64_t rdx_28 = *rbx_5
                    int64_t rcx_28 = rsi_2 * 3
                    r14_4 += 1
                    rdi_9 += 0x10
                    *(rdx_28 + (rcx_28 << 2)) = rax_44
                    *(rdx_28 + (rcx_28 << 2) + 8) = r12_4
                    r12_3 = var_f0
                    
                    if (r14_4 s>= r12_3)
                        break
                
                cond:12_1 = r14_4 != r12_3
            
            r13_2 = var_108_2
            r15_1 = var_118
        while (cond:12_1)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    r12 = arg_8

if (*(r12 + 0xf98) != 0)
    void* const rbx_7 = *(var_f8_1 + 0x68)
    void* rax_46
    int64_t rax_47
    void* rdx_29
    
    if (rbx_7 != 0)
        rax_46 = sub_14254d5d0()
        rdx_29 = *(rbx_7 + 0x10)
        rax_47 = sx.q(*(rax_46 + 0x38))
    
    int64_t r15_3
    
    if (rbx_7 == 0 || rax_47.d s> *(rdx_29 + 0x38)
            || *(*(rdx_29 + 0x30) + (rax_47 << 3)) != rax_46 + 0x30)
        r15_3 = 0
        rbx_7 = nullptr
    else
        r15_3 = 0
    
    sub_142175ca0(rbx_7, r12 + 0xea0)
    float temp0_8[0x2] = _mm_cvtps_pd(*(r12 + 0x750))
    *(r12 + 0xe98) = 1
    *(r12 + 0xfa0) = 0
    *(r12 + 0xfa8) = 0
    *(r12 + 0xfb4) = 0
    *(r12 + 0x890) = temp0_8
    
    if (rax_2 != 0)
        if (r12 + 0xfc8 != r12 + 0x898)
            sub_1409f61f0(r12 + 0xfc8, r12 + 0x898)
            
            if (*(r12 + 0x8d8) == 0)
                memmove(r12 + 0x1000, r12 + 0x8d0, 4)
            
            int64_t rcx_50 = *(r12 + 0x1008)
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            *(r12 + 0x1008) = *(r12 + 0x8d8)
            *(r12 + 0x8d8) = 0
            *(r12 + 0x1010) = *(r12 + 0x8e0)
            *(r12 + 0x8e0) = 0
        
        sub_140b30de0(r12 + 0x1018, r12 + 0x8e8)
        
        if (r12 + 0x1068 != r12 + 0x938)
            sub_140780e10(r12 + 0x1068, r12 + 0x938)
            
            if (*(r12 + 0x978) == 0)
                memmove(r12 + 0x10a0, r12 + 0x970, 4)
            
            int64_t rcx_54 = *(r12 + 0x10a8)
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
            
            *(r12 + 0x10a8) = *(r12 + 0x978)
            *(r12 + 0x978) = 0
            *(r12 + 0x10b0) = *(r12 + 0x980)
            *(r12 + 0x980) = 0
    
    int64_t rbx_12 = data_143f3d468
    
    if (data_143de5480 != 0)
        r15_3.b = GetCurrentThreadId() != data_143de5470
    
    float zmm0_4[0x2] = *(rbx_12 + (r15_3 << 2))
    int128_t zmm1_1 = zx.o(0)
    zmm0_4[0] f- zmm1_1.d
    bool cond:10_1 = zmm0_4[0] f> zmm1_1.d
    
    if (not(zmm0_4[0] f>= zmm1_1.d))
        cond:10_1 = (*(r12 + 0xc54))[0] f> zmm1_1.d
    
    if (not(cond:10_1))
        sub_141fca870(r12)

return sub_140b38680("DemoSaveCheckpointTime", rax_3)
