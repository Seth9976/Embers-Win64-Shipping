// 函数: sub_140d2cb10
// 地址: 0x140d2cb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg1
int32_t rdi = 0
int16_t* rbx
rbx.b = 0
int64_t* r12 = arg3
void* rax_2 = &r14[sx.q(arg1[1].d) * 2]
uint64_t result_1 = 0
int64_t var_c8 = 0
void* var_e8 = nullptr
char arg_20 = 1
char arg_8 = 0
uint64_t result
int64_t* var_178
int32_t var_168
int64_t var_148
int64_t var_140
int64_t var_138
int64_t var_130
int16_t* var_128
int16_t* var_118
int32_t var_110
uint64_t var_b8

if (r14 == rax_2)
label_140d2cd9d:
    var_178 = nullptr
    int64_t* r12_2 = nullptr
    int32_t var_16c_1 = 0
    int32_t i_2 = 0
    arg_8.d = 0
    int32_t r15_4 = 0
    int32_t r13_2 = 0
    int32_t r14_1 = 0
    EnterCriticalSection(&data_143e1d620)
    int32_t r10_1 = data_1439aaac8
    void* r9_3 = &data_1439aaab0
    int32_t var_160_1 = 0x439aaab0
    int32_t rcx_17 = 0
    var_168 = 0
    int32_t r8_3 = 0
    int32_t var_164_1 = 1
    int32_t var_158_1 = 0xffffffff
    int64_t var_154_1 = 0
    
    if (r10_1 != 0)
        void* rax_8 = data_1439aaac0
        
        if (rax_8 != 0)
            r9_3 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *r9_3
        
        if (rdx_10 != 0)
        label_140d2ce50:
            int32_t rax_15 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
            int32_t var_164_2 = rax_15
            int32_t rax_16
            
            if (rax_15 == 0)
                rax_16 = 0x20
            else
                rax_16 = 0x1f - temp0_2
            
            var_154_1.d = r8_3 - rax_16 + 0x1f
            
            if (r8_3 - rax_16 + 0x1f s> r10_1)
                var_154_1.d = r10_1
        else
            while (true)
                int64_t rdx_11 = sx.q(rcx_17)
                r8_3 += 0x20
                rcx_17 += 1
                var_154_1:4.d = r8_3
                var_168 = rcx_17
                
                if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r9_3 + (rdx_11 << 2) + 4)
                var_158_1 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140d2ce50
            
            var_154_1.d = r10_1
    
    double zmm2[0x2] = var_158_1.o
    var_154_1.d = r10_1
    int128_t var_a8 = var_168.o
    double var_98_1 = zmm2[0]
    uint64_t rax_23 = (0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20
    int128_t zmm1 = var_a8
    var_b8 = rax_23
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    int128_t var_88 = (&data_1439aaaa0).o
    int128_t var_78_1 = zmm1
    int64_t var_68_1 = temp0_3.q
    
    while (true)
        int64_t rdx_20 = sx.q(var_78_1:0xc.d)
        
        if (rdx_20.d != rax_23.d || var_78_1.q != &data_1439aaab0)
            rax_23.b = 0
        else
            rax_23.b = 1
        
        int64_t rcx_39 = var_88.q
        
        if (rax_23.b == 0 || rcx_39 != &data_1439aaaa0)
            rax_23.b = 1
        else
            rax_23.b = 0
        
        if (rax_23.b == 0)
            break
        
        int64_t rax_24 = var_c8
        void** rbx_8 = rdx_20 * 0x60 + *rcx_39
        void* rcx_40 = *rbx_8
        
        if (rax_24 == 0 || *(rcx_40 + 0x18) == rax_24)
            if (result_1 == 0)
            label_140d2d16c:
                char rdx_24 = arg_20
                
                if (rdx_24 == 0)
                    var_128 = nullptr
                    int32_t var_120_2 = 0
                    sub_140d21e40(rcx_40, 0, &var_128)
                    int16_t* const r8_8 = &data_142d40450
                    
                    if (var_120_2 != 0)
                        r8_8 = var_128
                    
                    sub_140a2e390(&var_138, u"%s", r8_8)
                    int64_t i_4 = sx.q(i_2)
                    i_2 = (i_4 + 1).d
                    
                    if (i_2 s> r15_4)
                        sub_1405a4f90(&var_178)
                        r12_2 = var_178
                    
                    int64_t* rcx_45 = &r12_2[i_4 * 2]
                    *rcx_45 = 0
                    *rcx_45 = var_138
                    var_138 = 0
                    rcx_45[1].d = var_130.d
                    *(rcx_45 + 0xc) = var_130:4.d
                    int64_t rcx_46 = var_138
                    var_130 = 0
                    
                    if (rcx_46 != 0)
                        sub_140a74f90(rcx_46)
                    
                    int16_t* rcx_47 = var_128
                    
                    if (rcx_47 != 0)
                        sub_140a74f90(rcx_47)
                    
                    rdx_24 = arg_20
                    r14_1 = arg_8.d
                
                int32_t rax_30 = rbx_8[2].d
                void* rbx_9 = var_e8
                r13_2 += 1
                void* var_d0
                var_d0.d = r13_2
                
                if (rbx_9 == 0)
                    arg_8.d = r14_1 + rax_30 - *(rbx_8 + 0x3c)
                    
                    if (rdx_24 == 0)
                        int32_t r11_1 = rbx_8[6].d
                        var_118:4.d = 1
                        int32_t rcx_48 = 0
                        var_118.d = 0
                        int32_t r8_9 = 0
                        var_110 = (&rbx_8[3]).d
                        int32_t var_108_1 = 0xffffffff
                        int64_t var_104_1 = 0
                        
                        if (r11_1 != 0)
                            void* rax_32 = rbx_8[5]
                            void* r9_8 = &rbx_8[3]
                            
                            if (rax_32 != 0)
                                r9_8 = rax_32
                            
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(r11_1 - 1)
                            int32_t rdx_27 = *r9_8
                            
                            if (rdx_27 != 0)
                            label_140d2d2d8:
                                int32_t rax_39 = neg.d(rdx_27) & rdx_27
                                uint64_t rflags_2
                                int32_t temp0_4
                                temp0_4, rflags_2 = _bit_scan_reverse(rax_39)
                                var_118:4.d = rax_39
                                int32_t rax_40
                                
                                if (rax_39 == 0)
                                    rax_40 = 0x20
                                else
                                    rax_40 = 0x1f - temp0_4
                                
                                var_104_1.d = r8_9 - rax_40 + 0x1f
                                
                                if (r8_9 - rax_40 + 0x1f s> r11_1)
                                    var_104_1.d = r11_1
                            else
                                while (true)
                                    int64_t rdx_28 = sx.q(rcx_48)
                                    r8_9 += 0x20
                                    rcx_48 += 1
                                    var_104_1:4.d = r8_9
                                    var_118.d = rcx_48
                                    
                                    if (rdx_28.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_27 = *(r9_8 + (rdx_28 << 2) + 4)
                                    var_108_1 = 0xffffffff
                                    
                                    if (rdx_27 != 0)
                                        goto label_140d2d2d8
                                
                                var_104_1.d = r11_1
                        
                        int32_t rdx_29 = rbx_8[6].d
                        zmm2 = var_108_1.o
                        var_104_1.d = rdx_29
                        double var_48_1[0x2] = zmm2
                        int128_t var_58_1 = var_118.o
                        int32_t rbx_10 = 0xffffffff << (rdx_29 & 0x1f).b
                        int32_t r8_12 = rdx_29 s>> 5
                        int32_t r9_10 = rdx_29 & 0xffffffe0
                        var_98_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                        int32_t var_108_2 = rbx_10
                        int64_t* var_b0_1
                        var_b0_1.o = (&rbx_8[1]).o
                        var_a8 = var_58_1
                        
                        if (rdx_29 != r11_1)
                            void* rax_44 = rbx_8[5]
                            void* r10_2 = &rbx_8[3]
                            
                            if (rax_44 != 0)
                                r10_2 = rax_44
                            
                            int32_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(r11_1 - 1)
                            int32_t rdx_33 = *(r10_2 + (sx.q(r8_12) << 2)) & rbx_10
                            
                            if (rdx_33 != 0)
                            label_140d2d3b6:
                                int32_t rax_50 = neg.d(rdx_33) & rdx_33
                                uint64_t rflags_3
                                int32_t temp0_6
                                temp0_6, rflags_3 = _bit_scan_reverse(rax_50)
                                int32_t rax_51
                                
                                if (rax_50 == 0)
                                    rax_51 = 0x20
                                else
                                    rax_51 = 0x1f - temp0_6
                                
                                var_104_1.d = r9_10 - rax_51 + 0x1f
                                
                                if (r9_10 - rax_51 + 0x1f s> r11_1)
                                    var_104_1.d = r11_1
                            else
                                while (true)
                                    int64_t rcx_52 = sx.q(r8_12)
                                    r9_10 += 0x20
                                    r8_12 += 1
                                    
                                    if (rcx_52.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_33 = *(r10_2 + (rcx_52 << 2) + 4)
                                    var_108_2 = 0xffffffff
                                    
                                    if (rdx_33 != 0)
                                        goto label_140d2d3b6
                                
                                var_104_1.d = r11_1
                        
                        while (true)
                            int64_t rcx_54 = sx.q(var_98_1:4.d)
                            int32_t rax_43
                            
                            if (rcx_54.d != (var_108_2.q u>> 0x20).d || var_a8:8.q != &rbx_8[3])
                                rax_43.b = 0
                            else
                                rax_43.b = 1
                            
                            if (rax_43.b == 0 || var_b0_1 != &rbx_8[1])
                                rax_43.b = 1
                            else
                                rax_43.b = 0
                            
                            if (rax_43.b == 0)
                                break
                            
                            int64_t* rax_52 = sub_140b63b70((rcx_54 << 5) + *var_b0_1, &var_168)
                            int16_t* const r8_13
                            
                            if (rax_52[1].d == 0)
                                r8_13 = &data_142d40450
                            else
                                r8_13 = *rax_52
                            
                            sub_140a2e390(&var_148, u"   %s", r8_13)
                            int64_t i_3 = sx.q(i_2)
                            i_2 = (i_3 + 1).d
                            
                            if (i_2 s> var_16c_1)
                                sub_1405a4f90(&var_178)
                                r12_2 = var_178
                            
                            int64_t* rcx_61 = &r12_2[i_3 * 2]
                            *rcx_61 = 0
                            *rcx_61 = var_148
                            var_148 = 0
                            rcx_61[1].d = var_140.d
                            *(rcx_61 + 0xc) = var_140:4.d
                            int64_t rcx_62 = var_148
                            var_140 = 0
                            
                            if (rcx_62 != 0)
                                sub_140a74f90(rcx_62)
                            
                            int64_t rcx_63 = var_168.q
                            
                            if (rcx_63 != 0)
                                sub_140a74f90(rcx_63)
                            
                            var_98_1.d &= not.d(var_a8:4.d)
                            sub_14059bdd0(&var_a8)
                        
                        r13_2 = var_d0.d
                else if (rax_30 != *(rbx_8 + 0x3c))
                    int32_t rax_59 = sub_140b5ead0(var_e8.d) + rbx_9:4.d
                    void* r8_14 = &rbx_8[8]
                    void* rcx_66 = *(r8_14 + 8)
                    
                    if (rcx_66 != 0)
                        r8_14 = rcx_66
                    
                    int32_t i = *(r8_14 + (((sx.q(rbx_8[0xa].d) - 1) & sx.q(rax_59)) << 2))
                    
                    if (i != 0xffffffff)
                        int64_t rdx_40 = rbx_8[1]
                        
                        do
                            int64_t rcx_68 = sx.q(i) << 5
                            
                            if (*(rcx_68 + rdx_40) == rbx_9)
                                if (i != 0xffffffff)
                                    arg_8.d = r14_1 + 1
                                
                                break
                            
                            i = *(rcx_68 + rdx_40 + 0x18)
                        while (i != 0xffffffff)
                
                r15_4 = var_16c_1
            else
                void* rax_25 = *(rcx_40 + 0x10)
                int64_t rdx_22 = sx.q(*(result_1 + 0x38))
                
                if (rdx_22.d s<= *(rax_25 + 0x38)
                        && *(*(rax_25 + 0x30) + (rdx_22 << 3)) == result_1 + 0x30)
                    goto label_140d2d16c
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        rax_23 = var_b8
        r14_1 = arg_8.d
    
    LeaveCriticalSection(&data_143e1d620)
    int16_t* var_f8 = nullptr
    int32_t var_f0_1 = 0
    sub_1405947f0(&var_f8, 0x17)
    int32_t rax_63 = var_f0_1 + 0x17
    
    if (rax_63 s> 0)
        sub_140594770(&var_f8)
    
    UnDecorator::getReferenceType(var_f8, u"Bound Sparse Delegates", 0x2e)
    
    if (result_1 != 0)
        arg_8.q = *(result_1 + 0x18)
        sub_140b63b70(&arg_8, &var_118)
        int16_t* r8_15 = &data_142d40450
        
        if (var_110 != 0)
            r8_15 = var_118
        
        sub_140a2e390(&var_168, u" - Class=%s", r8_15)
        int32_t r8_17
        
        if (var_160_1 == 0)
            r8_17 = 0
        else
            r8_17 = var_160_1 - 1
        
        sub_140a20ba0(&var_f8, var_168.q, r8_17)
        int64_t rcx_76 = var_168.q
        
        if (rcx_76 != 0)
            sub_140a74f90(rcx_76)
        
        int16_t* rcx_77 = var_118
        
        if (rcx_77 != 0)
            sub_140a74f90(rcx_77)
    
    if (var_c8 != 0)
        int64_t* rax_66 = sub_140b63b70(&var_c8, &var_118)
        int16_t* const r8_18
        
        if (rax_66[1].d == 0)
            r8_18 = &data_142d40450
        else
            r8_18 = *rax_66
        
        sub_140a2e390(&var_168, u" - Name=%s", r8_18)
        int32_t r8_20
        
        if (var_160_1 == 0)
            r8_20 = 0
        else
            r8_20 = var_160_1 - 1
        
        sub_140a20ba0(&var_f8, var_168.q, r8_20)
        int64_t rcx_81 = var_168.q
        
        if (rcx_81 != 0)
            sub_140a74f90(rcx_81)
        
        int16_t* rcx_82 = var_118
        
        if (rcx_82 != 0)
            sub_140a74f90(rcx_82)
    
    if (var_e8 != 0)
        int64_t* rax_67 = sub_140b63b70(&var_e8, &var_118)
        int16_t* const r8_21
        
        if (rax_67[1].d == 0)
            r8_21 = &data_142d40450
        else
            r8_21 = *rax_67
        
        sub_140a2e390(&var_168, u" - Delegate=%s", r8_21)
        
        if (var_160_1 != 0)
            rdi = var_160_1 - 1
        
        sub_140a20ba0(&var_f8, var_168.q, rdi)
        int64_t rcx_86 = var_168.q
        
        if (rcx_86 != 0)
            sub_140a74f90(rcx_86)
        
        int16_t* rcx_87 = var_118
        
        if (rcx_87 != 0)
            sub_140a74f90(rcx_87)
    
    int16_t* const r9_12 = &data_142d40450
    
    if (rax_63 != 0)
        r9_12 = var_f8
    
    sub_140b1f850(arg3, 5, u"%s", r9_12)
    sub_140b1f850(arg3, 5, u"Objects: %d", zx.q(r13_2))
    result = sub_140b1f850(arg3, 5, 
        ------------------------------------------------------------------------", 
        sub_140b1f850(arg3, 5, Delegates: %d", zx.q(r14_1)))
    int64_t* rbx_11 = r12_2
    void* rdi_3 = &r12_2[sx.q(i_2) * 2]
    
    if (r12_2 != rdi_3)
        do
            int16_t* const r9_16
            
            if (rbx_11[1].d == 0)
                r9_16 = &data_142d40450
            else
                r9_16 = *rbx_11
            
            result = sub_140b1f850(arg3, 5, u"%s", r9_16)
            rbx_11 = &rbx_11[2]
        while (rbx_11 != rdi_3)
    
    int16_t* rcx_93 = var_f8
    
    if (rcx_93 != 0)
        result = sub_140a74f90(rcx_93)
    
    int64_t* rbx_12 = r12_2
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_94 = *rbx_12
            
            if (rcx_94 != 0)
                result = sub_140a74f90(rcx_94)
            
            rbx_12 = &rbx_12[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r12_2 != 0)
        return sub_140a74f90(r12_2)
else
    do
        int16_t* const rcx
        
        if (r14[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *r14
        
        result = sub_140a54510(rcx, u"-details")
        
        if (result.d != 0)
            if (sub_140a32ae0(r14, u"name=", 1) == 0)
                if (sub_140a32ae0(r14, u"delegate=", 1) == 0)
                    result = sub_140a32ae0(r14, u"class=", 1)
                    
                    if (result.b != 0)
                        var_168.q = 0
                        int32_t var_160_2 = 0
                        var_138 = 0
                        var_130 = 0
                        sub_1405947f0(&var_138, 2)
                        int32_t rax_19 = var_130.d + 2
                        var_130.d = rax_19
                        
                        if (rax_19 s> 0)
                            sub_140594770(&var_138)
                        
                        int64_t rbx_5 = var_138
                        UnDecorator::getReferenceType(rbx_5, &data_142e1462c, 4)
                        sub_14060a620(r14, &var_138, nullptr, &var_168, 0, 0)
                        
                        if (rbx_5 != 0)
                            sub_140a74f90(rbx_5)
                        
                        rbx = &data_142d40450
                        int16_t* rsi_3 = var_168.q
                        
                        if (var_160_2 != 0)
                            rbx = rsi_3
                        
                        int64_t r9_7
                        result, r9_7 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rbx, 0)
                        result_1 = result
                        
                        if (result != 0)
                            rbx = zx.q(arg_8)
                        else
                            result = sub_140b1f850(r12, (result + 3).b, 
                                No class of specified name found.", r9_7)
                            rbx.b = 1
                            arg_8 = 1
                        
                        if (rsi_3 != 0)
                            result = sub_140a74f90(rsi_3)
                else
                    var_118 = nullptr
                    var_110 = 0
                    var_148 = 0
                    var_140 = 0
                    sub_1405947f0(&var_148, 2)
                    int32_t rax_18 = var_140.d + 2
                    var_140.d = rax_18
                    
                    if (rax_18 s> 0)
                        sub_140594770(&var_148)
                    
                    int64_t rbx_3 = var_148
                    UnDecorator::getReferenceType(rbx_3, &data_142e1462c, 4)
                    sub_14060a620(r14, &var_148, nullptr, &var_118, 0, 0)
                    
                    if (rbx_3 != 0)
                        sub_140a74f90(rbx_3)
                    
                    int16_t* rdx_14 = &data_142d40450
                    int16_t* rbx_4 = var_118
                    
                    if (var_110 != 0)
                        rdx_14 = rbx_4
                    
                    int64_t r9_5
                    result, r9_5 = sub_140b58260(&var_178, rdx_14, 0)
                    void* rdx_15 = *result
                    var_e8 = rdx_15
                    
                    if (rdx_15 == 0)
                        result = sub_140b1f850(r12, 3, u"Invalid delegate name", r9_5)
                        arg_8 = 1
                    
                    if (rbx_4 != 0)
                        result = sub_140a74f90(rbx_4)
                    
                    rbx = zx.q(arg_8)
            else
                var_128 = nullptr
                int32_t var_120_1 = 0
                int16_t* r12_1 = nullptr
                int32_t rsi_1 = 0
                sub_1405947f0(&var_128, 2)
                int32_t r15_1 = var_120_1 + 2
                
                if (r15_1 s> 0)
                    sub_140594770(&var_128)
                
                int16_t* r13_1 = var_128
                UnDecorator::getReferenceType(r13_1, &data_142e1462c, 4)
                int16_t* rdx_1 = &data_142d40450
                
                if (r15_1 != 0)
                    rdx_1 = r13_1
                
                int32_t rax_4 = sub_140a23cf0(r14, rdx_1, 0, 0, 0xffffffff)
                int16_t* rbx_1 = nullptr
                
                if (rax_4 s>= 0)
                    int32_t r15_2
                    
                    if (r15_1 == 0)
                        r15_2 = 0
                    else
                        r15_2 = r15_1 - 1
                    
                    int32_t rdx_2 = r14[1].d
                    int32_t rcx_6 = r15_2 + rax_4
                    
                    if (rdx_2 != 0)
                        rbx_1 = zx.q(rdx_2 - 1)
                    
                    int32_t rax_5
                    
                    if (rcx_6 s>= 0)
                        rax_5 = rbx_1.d
                        
                        if (rcx_6 s< rbx_1.d)
                            rax_5 = rcx_6
                    else
                        rax_5 = 0
                    
                    int64_t r9_1 = sx.q(rax_5)
                    
                    if (sx.q(rcx_6) + 0x7fffffff s< r9_1)
                        rbx_1 = zx.q(rax_5)
                    else if (sx.q(rcx_6) + 0x7fffffff s< sx.q(rbx_1.d))
                        rbx_1 = zx.q(rcx_6 + 0x7fffffff)
                    
                    int16_t* const rcx_9
                    
                    if (rdx_2 == 0)
                        rcx_9 = &data_142d40450
                    else
                        rcx_9 = *r14
                    
                    int32_t rbx_2 = rbx_1.d - rax_5
                    int16_t* var_e0 = nullptr
                    int16_t* r15_3 = &rcx_9[r9_1]
                    int32_t var_d8_1 = 0
                    int32_t rax_6 = 0
                    int32_t var_d4_1 = 0
                    
                    if (r15_3 != 0 && *r15_3 != 0 && rbx_2 s> 0)
                        if (rbx_2 + 1 s> 0)
                            sub_1405947f0(&var_e0, rbx_2 + 1)
                            rax_6 = var_d4_1
                            rsi_1 = var_d8_1
                            r12_1 = var_e0
                        
                        rsi_1 = rsi_1 + 1 + rbx_2
                        
                        if (rsi_1 s> rax_6)
                            sub_140594770(&var_e0)
                            r12_1 = var_e0
                        
                        UnDecorator::getReferenceType(r12_1, r15_3, rbx_2 * 2)
                        r12_1[sx.q(rsi_1) - 1] = 0
                    
                    var_e0 = nullptr
                    rbx_1 = r12_1
                    var_d8_1.q = 0
                
                if (r13_1 != 0)
                    sub_140a74f90(r13_1)
                
                int16_t* rdx_6 = rbx_1
                
                if (rsi_1 == 0)
                    rdx_6 = &data_142d40450
                
                int64_t r9_2
                result, r9_2 = sub_140b58260(&var_b8, rdx_6, 0)
                int64_t rdx_7 = *result
                var_c8 = rdx_7
                
                if (rdx_7 == 0)
                    result = sub_140b1f850(arg3, 3, u"Invalid object name", r9_2)
                    arg_8 = 1
                
                if (rbx_1 != 0)
                    result = sub_140a74f90(r12_1)
                
                r12 = arg3
                rbx = zx.q(arg_8)
        else
            arg_20 = 0
        
        r14 = &r14[2]
    while (r14 != rax_2)
    
    if (rbx.b == 0)
        goto label_140d2cd9d
return result
