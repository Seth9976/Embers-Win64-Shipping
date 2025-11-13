// 函数: sub_140671b40
// 地址: 0x140671b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(arg1[0x1e].b)
int64_t* r13 = arg1
int64_t* var_148
wchar16 const* const rdx_6
uint32_t r8_1

if (rdx == 0)
    var_148 = nullptr
    int32_t var_140_4 = 0
    sub_1405947f0(&var_148, 4)
    int32_t rax_5 = var_140_4 + 4
    var_140_4 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_148)
    
    rdx_6 = &data_142d85f90
label_140671ca3:
    r8_1 = 8
label_140671cae:
    UnDecorator::getReferenceType(var_148, rdx_6, r8_1)
    int64_t* rcx_10 = r13[0x36]
    (*(*rcx_10 + 0x48))(rcx_10, &var_148)
    int64_t* rcx_11 = var_148
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
else
    if (rdx == 1)
        var_148 = nullptr
        int32_t var_140_3 = 0
        sub_1405947f0(&var_148, 5)
        int32_t rax_4 = var_140_3 + 5
        var_140_3 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_148)
        
        r8_1 = 0xa
        rdx_6 = u"POST"
        goto label_140671cae
    
    if (rdx == 2)
        var_148 = nullptr
        int32_t var_140_2 = 0
        sub_1405947f0(&var_148, 4)
        int32_t rax_3 = var_140_2 + 4
        var_140_2 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_148)
        
        rdx_6 = &data_142d85fa8
        goto label_140671ca3
    
    if (rdx == 3)
        var_148 = nullptr
        int32_t var_140_1 = 0
        sub_1405947f0(&var_148, 7)
        int32_t rax_2 = var_140_1 + 7
        var_140_1 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_148)
        
        r8_1 = 0xe
        rdx_6 = u"DELETE"
        goto label_140671cae
    
    if (rdx == 4)
        int64_t* rcx = arg1[0x36]
        (*(*rcx + 0x48))(rcx, &r13[0x34])
uint32_t rcx_12 = zx.d(*(r13 + 0xf1))
int32_t var_108
void* var_100
int64_t var_158
int64_t* var_138
int64_t* var_128
int64_t* var_118
int64_t* var_e0
int64_t* var_d0
int64_t* var_c0
int32_t var_b8
double var_a8[0x2]
int64_t* rcx_80
double zmm3[0x2]

if (rcx_12 == 0)
    var_148 = nullptr
    int32_t var_140_10 = 0
    sub_1405947f0(&var_148, 0x22)
    int32_t rax_41 = var_140_10 + 0x22
    var_140_10 = rax_41
    
    if (rax_41 s> 0)
        sub_140594770(&var_148)
    
    UnDecorator::getReferenceType(var_148, u"application/x-www-form-urlencoded", 0x44)
    var_138 = nullptr
    int64_t var_130_3 = 0
    sub_1405947f0(&var_138, 0xd)
    int32_t rax_42 = var_130_3.d + 0xd
    var_130_3.d = rax_42
    
    if (rax_42 s> 0)
        sub_140594770(&var_138)
    
    UnDecorator::getReferenceType(var_138, u"Content-Type", 0x1a)
    int64_t* rcx_87 = r13[0x36]
    (*(*rcx_87 + 0x78))(rcx_87, &var_138, &var_148)
    int64_t* rcx_88 = var_138
    
    if (rcx_88 != 0)
        sub_140a74f90(rcx_88)
    
    int64_t* rcx_89 = var_148
    
    if (rcx_89 != 0)
        sub_140a74f90(rcx_89)
    
    void* rax_44 = r13[0x16]
    int32_t rcx_90 = 0
    var_d0 = nullptr
    int16_t r12_1 = 0
    int32_t var_c8_1 = 0
    int32_t r8_14 = 0
    var_108 = 0
    int64_t* rbx_8 = *(rax_44 + 0x28)
    int32_t r11_1 = rbx_8[5].d
    void* r9_1 = &rbx_8[2]
    int32_t var_104_2 = 1
    var_100 = r9_1
    int32_t var_f8_2 = 0xffffffff
    int64_t var_f4_2 = 0
    
    if (r11_1 != 0)
        void* rax_45 = *(r9_1 + 0x10)
        
        if (rax_45 != 0)
            r9_1 = rax_45
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_45 = *r9_1
        
        if (rdx_45 != 0)
        label_1406725b9:
            int32_t rax_51 = neg.d(rdx_45) & rdx_45
            uint64_t rflags_1
            int32_t temp0_3
            temp0_3, rflags_1 = _bit_scan_reverse(rax_51)
            int32_t var_104_3 = rax_51
            int32_t rax_52
            
            if (rax_51 == 0)
                rax_52 = 0x20
            else
                rax_52 = 0x1f - temp0_3
            
            var_f4_2.d = r8_14 - rax_52 + 0x1f
            
            if (r8_14 - rax_52 + 0x1f s> r11_1)
                var_f4_2.d = r11_1
        else
            while (true)
                rcx_90 += 1
                r8_14 += 0x20
                var_108 = rcx_90
                var_f4_2:4.d = r8_14
                
                if (rcx_90 s> ((temp5_1 & 0x1f) + temp6_1) s>> 5)
                    break
                
                var_f8_2 = 0xffffffff
                rdx_45 = *(r9_1 + (sx.q(rcx_90) << 2))
                
                if (rdx_45 != 0)
                    goto label_1406725b9
            
            var_f4_2.d = r11_1
    
    double zmm4_2[0x2] = var_f8_2.o
    int64_t* var_40_2 = rbx_8
    int16_t var_70_2 = 0
    zmm3 = var_108.o
    double rax_54 = zmm3[0]
    var_a8 = rbx_8.o
    double rcx_92 = zmm4_2[0]
    zmm4_2[0] = (_mm_unpackhi_pd(zmm4_2, zmm4_2[0])).q
    double var_88_2[0x2] = zmm4_2
    
    if ((rcx_92 u>> 0x20).d s< *(rax_54 i+ 0x18))
        int32_t i = zmm3[1]:4.d
        
        do
            double rsi_3 = var_a8[0]
            int64_t rax_56 = *rsi_3
            int64_t rdi_7 = sx.q(i) * 0x28
            var_118 = nullptr
            int32_t rbx_9 = *(rdi_7 + rax_56 + 8)
            int64_t r14_2 = *(rdi_7 + rax_56)
            
            if (rbx_9 != 0)
                sub_1405a4c70(&var_118, rbx_9, 0)
                memcpy(var_118, r14_2, rbx_9 * 2)
            else
                int32_t var_10c_1 = 0
            
            sub_140b74df0(*(rdi_7 + *rsi_3 + 0x10), &var_108)
            
            if (rbx_9 s> 1 && var_100.d s> 1)
                char* rdx_49 = &data_142d86028
                int64_t r8_18 = -1
                
                if (r12_1 == 0)
                    rdx_49 = &data_142d86024
                
                do
                    r8_18 += 1
                while (rdx_49[r8_18] != 0)
                
                sub_140a20b00(&var_d0, rdx_49, r8_18.d)
                var_148 = nullptr
                int64_t var_140_11 = 0
                sub_1405947f0(&var_148, 2)
                int32_t rsi_4 = var_140_11:4.d
                int32_t rbx_10 = var_140_11.d + 2
                var_140_11.d = rbx_10
                
                if (rbx_10 s> rsi_4)
                    sub_140594770(&var_148)
                    rsi_4 = var_140_11:4.d
                    rbx_10 = var_140_11.d
                
                int64_t* r15_2 = var_148
                var_158.w = 0x3f
                sub_1405a7220(r15_2, 2, U"=", 2, 0x3f)
                sub_14180a750(&var_c0, &var_108)
                sub_14180a750(&var_e0, &var_118)
                int64_t var_d8
                int32_t rdx_53 = var_d8.d
                int64_t* rdi_8
                
                if (rdx_53 s> 1)
                    int32_t rbx_11
                    
                    if (rbx_10 == 0)
                        rbx_11 = 0
                    else
                        rbx_11 = rbx_10 - 1
                    
                    int32_t rcx_105
                    
                    if (rdx_53 == 0)
                        rcx_105 = rdx_53 + 1
                    
                    if (rdx_53 != 0 || rbx_11 == 0)
                        rcx_105 = 0
                    
                    var_130_3.d = rdx_53
                    int32_t rdx_55 = rdx_53 + rcx_105 + rbx_11
                    var_138 = var_e0
                    int32_t rax_58 = var_d8:4.d
                    var_e0 = nullptr
                    var_130_3:4.d = rax_58
                    var_d8 = 0
                    
                    if (rdx_55 s> rax_58)
                        sub_1405947f0(&var_138, rdx_55)
                    
                    sub_140a20ba0(&var_138, r15_2, rbx_11)
                    rdi_8 = var_138
                    rbx_10 = var_130_3.d
                    rsi_4 = var_130_3:4.d
                    var_138 = nullptr
                    var_130_3 = 0
                else
                    rdi_8 = r15_2
                    int64_t var_140_12 = 0
                    r15_2 = nullptr
                
                int32_t rax_59
                int64_t* rbx_12
                
                if (rbx_10 s> 1)
                    int32_t r14_4
                    
                    if (var_b8 == 0)
                        r14_4 = 0
                    else
                        r14_4 = var_b8 - 1
                    
                    var_128 = rdi_8
                    int32_t rdx_57 = r14_4 + rbx_10
                    rdi_8 = nullptr
                    int32_t var_11c_3 = rsi_4
                    
                    if (rdx_57 s> rsi_4)
                        sub_1405947f0(&var_128, rdx_57)
                    
                    sub_140a20ba0(&var_128, var_c0, r14_4)
                    rbx_12 = var_128
                    rax_59 = rbx_10
                    var_128 = nullptr
                    int32_t var_120_2
                    var_120_2.q = 0
                else
                    rbx_12 = var_c0
                    rax_59 = var_b8
                    var_c0 = nullptr
                    var_b8.q = 0
                
                int32_t r8_21 = rax_59 - 1
                
                if (rax_59 == 0)
                    r8_21 = 0
                
                sub_140a20ba0(&var_d0, rbx_12, r8_21)
                
                if (rbx_12 != 0)
                    sub_140a74f90(rbx_12)
                
                if (rdi_8 != 0)
                    sub_140a74f90(rdi_8)
                
                int64_t* rcx_113 = var_e0
                
                if (rcx_113 != 0)
                    sub_140a74f90(rcx_113)
                
                int64_t* rcx_114 = var_c0
                
                if (rcx_114 != 0)
                    sub_140a74f90(rcx_114)
                
                if (r15_2 != 0)
                    sub_140a74f90(r15_2)
            
            int64_t rcx_116 = var_108.q
            r12_1 += 1
            
            if (rcx_116 != 0)
                sub_140a74f90(rcx_116)
            
            int64_t* rcx_117 = var_118
            
            if (rcx_117 != 0)
                sub_140a74f90(rcx_117)
            
            zmm3[1].d &= not.d(var_a8[1]:4.d)
            sub_14059bdd0(&var_a8[1])
            i = zmm3[1]:4.d
        while (i s< *(zmm3[0] i+ 0x18))
        
        r13 = arg1
        
        if (var_70_2.b != 0 && var_70_2:1.b != 0)
            int32_t r10_4 = rbx_8[1].d - *(rbx_8 + 0x34)
            int32_t rax_65
            
            if (r10_4 u< 4)
                rax_65 = 1
            else
                uint32_t rdx_61 = r10_4 u>> 1
                uint64_t rflags_2
                int32_t temp0_5
                temp0_5, rflags_2 = _bit_scan_reverse(rdx_61 + 8)
                uint64_t rflags_3
                char temp0_6
                temp0_6, rflags_3 = _bit_scan_reverse(rdx_61 + 7)
                rax_65 =
                    1 << ((0x20 - (0x1f - temp0_6)) & (not.d((0x1f - temp0_5) << 0x1a s>> 0x1f)).b)
            
            if (r10_4 s> 0)
                int32_t rcx_122 = rbx_8[9].d
                
                if (rcx_122 == 0 || rcx_122 s< rax_65 || rcx_122 s> rax_65)
                    rbx_8[9].d = rax_65
                    sub_140637680(rbx_8)
    
    int64_t* rdi_9 = r13[0x36]
    int64_t** rax_67 = (**rdi_9)(rdi_9, &var_108)
    int32_t rdx_64 = rax_67[1].d
    
    if (rdx_64 s> 1)
        int32_t rbx_15
        
        if (var_c8_1 == 0)
            rbx_15 = 0
        else
            rbx_15 = var_c8_1 - 1
        
        int64_t* rax_68 = *rax_67
        *rax_67 = nullptr
        var_130_3.d = rdx_64
        int32_t rdx_67 = rdx_64 + rbx_15
        var_138 = rax_68
        int32_t rax_69 = *(rax_67 + 0xc)
        var_130_3:4.d = rax_69
        rax_67[1] = 0
        
        if (rdx_67 s> rax_69)
            sub_1405947f0(&var_138, rdx_67)
        
        sub_140a20ba0(&var_138, var_d0, rbx_15)
        var_128 = var_138
        int32_t var_120_4 = var_130_3.d
        int32_t var_11c_5 = var_130_3:4.d
        int64_t var_130_4 = 0
        var_138 = nullptr
    else
        int64_t* rsi_5 = var_d0
        var_128 = nullptr
        int32_t var_120_3 = var_c8_1
        
        if (var_c8_1 != 0)
            sub_1405a4c70(&var_128, var_c8_1, 0)
            memcpy(var_128, rsi_5, var_c8_1 * 2)
        else
            int32_t var_11c_4 = 0
    
    (*(*rdi_9 + 0x50))(rdi_9, &var_128)
    int64_t* rcx_131 = var_128
    
    if (rcx_131 != 0)
        sub_140a74f90(rcx_131)
    
    int64_t rcx_132 = var_108.q
    
    if (rcx_132 != 0)
        sub_140a74f90(rcx_132)
    
    if (r13[0x1c].d s> 1)
        int64_t* rcx_133 = r13[0x36]
        (*(*rcx_133 + 0x60))(rcx_133, &r13[0x1b])
    
    sub_14066eb50(r13)
    rcx_80 = var_d0
label_140672ade:
    
    if (rcx_80 != 0)
        sub_140a74f90(rcx_80)
else
    int32_t var_110
    
    if (rcx_12 == 1)
        var_148 = nullptr
        int32_t var_140_7 = 0
        sub_1405947f0(&var_148, 0x22)
        int32_t rax_25 = var_140_7 + 0x22
        var_140_7 = rax_25
        
        if (rax_25 s> 0)
            sub_140594770(&var_148)
        
        UnDecorator::getReferenceType(var_148, u"application/x-www-form-urlencoded", 0x44)
        var_138 = nullptr
        int32_t var_130_2 = 0
        sub_1405947f0(&var_138, 0xd)
        int32_t rax_26 = var_130_2 + 0xd
        
        if (rax_26 s> 0)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, u"Content-Type", 0x1a)
        int64_t* rcx_48 = r13[0x36]
        (*(*rcx_48 + 0x78))(rcx_48, &var_138, &var_148)
        int64_t* rcx_49 = var_138
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
        
        int64_t* rcx_50 = var_148
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        void* rax_28 = r13[0x16]
        int16_t r15_1 = 0
        var_e0 = nullptr
        int64_t var_d8_2 = 0
        var_108 = 0
        int64_t* rbx_3 = *(rax_28 + 0x28)
        int32_t var_104_1 = 1
        int32_t var_f8_1 = 0xffffffff
        int64_t var_f4_1 = 0
        var_100 = &rbx_3[2]
        
        if (rbx_3[5].d != 0)
            sub_14059bdd0(&var_108)
        
        double zmm4_1[0x2] = var_f8_1.o
        int64_t* var_40_1 = rbx_3
        int16_t var_70_1 = 0
        zmm3 = var_108.o
        double rax_30 = zmm3[0]
        var_a8 = rbx_3.o
        double rcx_52 = zmm4_1[0]
        zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
        double var_88_1[0x2] = zmm4_1
        
        if ((rcx_52 u>> 0x20).d s< *(rax_30 i+ 0x18))
            int32_t i_1 = zmm3[1]:4.d
            
            do
                int64_t* rbx_4 = var_a8[0]
                int64_t rdi_3 = sx.q(i_1) * 0x28
                sub_140596d10(&var_108, *rbx_4 + rdi_3)
                int64_t var_38
                sub_140b74df0(*(*rbx_4 + rdi_3 + 0x10), &var_38)
                int32_t var_30
                
                if (var_100.d s> 1 && var_30 s> 1)
                    void* const rdx_28 = &data_142d86028
                    int64_t r8_6 = -1
                    
                    if (r15_1 == 0)
                        rdx_28 = &data_1437020ab
                    
                    do
                        r8_6 += 1
                    while (*(rdx_28 + r8_6) != 0)
                    
                    sub_140a20b00(&var_e0, rdx_28, r8_6.d)
                    var_148 = nullptr
                    int64_t var_140_8 = 0
                    sub_1405947f0(&var_148, 2)
                    int32_t rsi_2 = var_140_8:4.d
                    int32_t rbx_5 = var_140_8.d + 2
                    var_140_8.d = rbx_5
                    
                    if (rbx_5 s> rsi_2)
                        sub_140594770(&var_148)
                        rsi_2 = var_140_8:4.d
                        rbx_5 = var_140_8.d
                    
                    int64_t* r14_1 = var_148
                    var_158.w = 0x3f
                    sub_1405a7220(r14_1, 2, U"=", 2, 0x3f)
                    sub_14180a750(&var_d0, &var_38)
                    sub_14180a750(&var_138, &var_108)
                    int64_t* rdi_4
                    
                    if (rax_26 s> 1)
                        int32_t rbx_6
                        
                        if (rbx_5 == 0)
                            rbx_6 = 0
                        else
                            rbx_6 = rbx_5 - 1
                        
                        int32_t rax_33
                        
                        if (rax_26 == 0)
                            rax_33 = 1
                        
                        if (rax_26 != 0 || rbx_6 == 0)
                            rax_33 = 0
                        
                        sub_140596690(&var_c0, &var_138, rax_33 + rbx_6)
                        sub_140a20ba0(&var_c0, r14_1, rbx_6)
                        rdi_4 = var_c0
                        rbx_5 = var_b8
                        var_128 = rdi_4
                        int32_t var_b4
                        int32_t var_11c_2 = var_b4
                        var_b8.q = 0
                        var_c0 = nullptr
                    else
                        var_128 = r14_1
                        rdi_4 = r14_1
                        int64_t var_140_9 = 0
                        r14_1 = nullptr
                        int32_t var_11c_1 = rsi_2
                    
                    int32_t var_120_1 = rbx_5
                    int32_t rax_35
                    int64_t* rbx_7
                    int32_t var_c8
                    
                    if (rbx_5 s> 1)
                        int32_t rdi_6
                        
                        if (var_c8 == 0)
                            rdi_6 = 0
                        else
                            rdi_6 = var_c8 - 1
                        
                        int32_t rax_36
                        
                        if (rbx_5 == 0)
                            rax_36 = rbx_5 + 1
                        
                        if (rbx_5 != 0 || rdi_6 == 0)
                            rax_36 = 0
                        
                        sub_140596690(&var_118, &var_128, rax_36 + rdi_6)
                        sub_140a20ba0(&var_118, var_d0, rdi_6)
                        rax_35 = var_110
                        rbx_7 = var_118
                        rdi_4 = var_128
                        var_110.q = 0
                        var_118 = nullptr
                    else
                        rbx_7 = var_d0
                        rax_35 = var_c8
                        var_d0 = nullptr
                        var_c8 = 0
                    int32_t r8_11 = rax_35 - 1
                    
                    if (rax_35 == 0)
                        r8_11 = 0
                    
                    sub_140a20ba0(&var_e0, rbx_7, r8_11)
                    
                    if (rbx_7 != 0)
                        sub_140a74f90(rbx_7)
                    
                    if (rdi_4 != 0)
                        sub_140a74f90(rdi_4)
                    
                    int64_t* rcx_71 = var_138
                    
                    if (rcx_71 != 0)
                        sub_140a74f90(rcx_71)
                    
                    int64_t* rcx_72 = var_d0
                    
                    if (rcx_72 != 0)
                        sub_140a74f90(rcx_72)
                    
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                
                int64_t rcx_74 = var_38
                r15_1 += 1
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                int64_t rcx_75 = var_108.q
                
                if (rcx_75 != 0)
                    sub_140a74f90(rcx_75)
                
                zmm3[1].d &= not.d(var_a8[1]:4.d)
                sub_14059bdd0(&var_a8[1])
                i_1 = zmm3[1]:4.d
            while (i_1 s< *(zmm3[0] i+ 0x18))
            
            r13 = arg1
            
            if (var_70_1.b != 0 && var_70_1:1.b != 0)
                sub_14066b950(rbx_3, rbx_3[1].d - *(rbx_3 + 0x34), 1)
        
        int64_t* rcx_78 = r13[0x36]
        (*(*rcx_78 + 0x60))(rcx_78, &var_e0)
        sub_14066eb50(r13)
        rcx_80 = var_e0
        goto label_140672ade
    
    if (rcx_12 == 2)
        var_138 = nullptr
        int32_t var_130_1 = 0
        sub_1405947f0(&var_138, 0x11)
        int32_t rax_10 = var_130_1 + 0x11
        var_130_1 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, u"application/json", 0x22)
        var_148 = nullptr
        int32_t var_140_6 = 0
        sub_1405947f0(&var_148, 0xd)
        int32_t rax_11 = var_140_6 + 0xd
        var_140_6 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_148)
        
        UnDecorator::getReferenceType(var_148, u"Content-Type", 0x1a)
        int64_t* rcx_27 = r13[0x36]
        (*(*rcx_27 + 0x78))(rcx_27, &var_148, &var_138)
        int64_t* rcx_28 = var_148
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t* rcx_29 = var_138
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        var_e0 = nullptr
        int64_t var_d8_1 = 0
        void*** rax_13 = j_sub_140a82f30(0x40)
        void*** rbx_1 = rax_13
        
        if (rax_13 == 0)
            rbx_1 = nullptr
        else
            void*** rax_14 = j_sub_140a82f30(0xa8)
            void*** rax_15
            
            if (rax_14 == 0)
                rax_15 = nullptr
            else
                int64_t* arg_8 = nullptr
                rax_15 = sub_1406698a0(rax_14, &rbx_1[5], 0, 0, 0)
            
            rbx_1[1] = rax_15
            *rbx_1 = &data_142d84f30
            rbx_1[7] = &var_e0
            __builtin_memset(&rbx_1[2], 0, 0x28)
        
        void*** rax_16 = sub_140666a60(rbx_1)
        var_118 = rbx_1
        var_110.q = rax_16
        int64_t* rbx_2 = var_110.q
        int64_t* rsi_1 = var_118
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            int64_t* rdi_1 = var_110.q
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp11_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        void*** rax_19 = sub_140666b20(r13[0x16] + 0x28)
        var_110.q = rax_19
        var_118 = &rax_19[2]
        sub_140667df0(&var_118, rsi_1, 1)
        int64_t* rdi_2 = var_110.q
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp10_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t* rcx_39 = r13[0x36]
        (*(*rcx_39 + 0x60))(rcx_39, &var_e0)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp12_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rcx_80 = var_e0
        goto label_140672ade
    
    if (rcx_12 == 3)
        var_148 = nullptr
        int32_t var_140_5 = 0
        sub_1405947f0(&var_148, rcx_12 + 0xa)
        int32_t rax_7 = var_140_5 + 0xd
        var_140_5 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_148)
        
        UnDecorator::getReferenceType(var_148, u"Content-Type", 0x1a)
        int64_t* rcx_18 = r13[0x36]
        (*(*rcx_18 + 0x78))(rcx_18, &var_148, &r13[0x19])
        int64_t* rcx_19 = var_148
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t* rcx_20 = r13[0x36]
        (*(*rcx_20 + 0x58))(rcx_20, &r13[0x17])
bool cond:0 = r13[0x24].d == 0
void* rcx_135 = &r13[0x21]
var_100 = rcx_135
var_108 = 0
int32_t var_104_4 = 1
int32_t var_f8_3 = 0xffffffff
int64_t var_f4_3 = 0

if (not(cond:0))
    sub_14059bdd0(&var_108)
    rcx_135 = var_100

double zmm2[0x2] = var_f8_3.o
double var_50_3[0x2] = zmm2
double var_60_3[0x2] = var_108.o
var_108.o = (&r13[0x1f]).o
uint32_t rax_76 = (zmm2[0] u>> 0x20).d
int64_t var_e8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_f8_3.o = var_60_3

if (rax_76 s< *(rcx_135 + 0x18))
    int32_t i_3
    int32_t i_2 = i_3
    
    do
        int64_t* rcx_137 = r13[0x36]
        int64_t rdx_72 = *var_108.q + sx.q(i_2) * 0x28
        (*(*rcx_137 + 0x78))(rcx_137, rdx_72, rdx_72 + 0x10)
        var_f4_3:4.d &= not.d(var_100:4.d)
        sub_14059bdd0(&var_100)
        i_2 = i_3
    while (i_2 s< *(var_f8_3.q + 0x18))

int64_t* rcx_139 = r13[0x36]
int64_t* rax_84 = (*(*rcx_139 + 0x90))(rcx_139)
void*** rax_85 = sub_140a84c80(0, 0x30, 0)
void*** rbx_17 = rax_85

if (rax_85 != 0)
    sub_140669380(rax_85, r13, sub_140670520)

if (&var_108 == rax_84)
    goto label_140672c29

if (rbx_17 != 0)
    (*rbx_17)[8](rbx_17, rax_84)
label_140672c29:
    
    if (rbx_17 != 0)
        (*rbx_17)[7](rbx_17, 0)
        rbx_17 = sub_140a84c80(rbx_17, 0, 0)
    label_140672c49:
        
        if (rbx_17 != 0)
            sub_140a74f90(rbx_17)
    
    jump(*(*r13[0x36] + 0x88))

if (rax_84[1].d != 0)
    int64_t* rcx_146 = *rax_84
    
    if (rcx_146 != 0)
        (*(*rcx_146 + 0x38))(rcx_146, 0)
        int64_t rcx_147 = *rax_84
        
        if (rcx_147 != 0)
            *rax_84 = sub_140a84c80(rcx_147, 0, 0)
        
        rax_84[1].d = 0

goto label_140672c49
