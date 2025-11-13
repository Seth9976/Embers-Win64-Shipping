// 函数: sub_1426cfca0
// 地址: 0x1426cfca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b18
int64_t rax_1 = __security_cookie ^ &var_b18
void* r15 = arg1
int32_t var_ac0 = 0
int32_t rdi = 0
int64_t* r13 = arg3
int64_t var_a20
sub_140a96170(&var_a20)
void* var_a18
int32_t var_a10
int32_t var_168
int64_t var_158

if (*(r15 + 0x34) != 1 && *(r15 + 0x4a) == 3)
    int64_t var_ab8
    int64_t var_aa8
    int64_t* var_970
    int64_t* var_938
    int64_t* var_878
    int64_t var_790
    int64_t* rdx_16
    char var_b0
    
    if (*(r15 + 0x60) == 0)
        int64_t* rbx_9
        
        if (*(r15 + 0x80) == 0)
            void var_5b8
            rbx_9 = _vfprintf_p_l(&var_5b8, u"not ", u"EnvQueryGenerator")
            rdi = 0x1e0
        else
            sub_1405d9400()
            int64_t var_978 = data_143cd6fd8
            int64_t* rax_57 = data_143cd6fe0
            var_970 = rax_57
            
            if (rax_57 != 0)
                rax_57[1].d += 1
            
            rbx_9 = &var_978
            int32_t var_968_1 = data_143cd6fe8
            rdi = 0x1d0
        
        var_ab8 = 0
        int32_t var_ab0_1 = 0
        sub_1405947f0(&var_ab8, 0xb)
        int32_t rax_60 = var_ab0_1 + 0xb
        var_ab0_1 = rax_60
        
        if (rax_60 s> 0)
            sub_140594770(&var_ab8)
        
        sub_1405a7220(var_ab8, 0xb, "{0} {1}{2}", 0xb, 0x3f)
        int64_t* r12_2 = rbx_9[1]
        int64_t r14_1 = *rbx_9
        
        if (r12_2 != 0)
            r12_2[1].d += 1
        
        int32_t rbx_10 = rbx_9[2].d
        void var_440
        int64_t* rax_61 = sub_140aae420(&var_440, r13)
        void var_428
        var_ac0.q = _vfprintf_p_l(&var_428, u"require", u"EnvQueryGenerator")
        void var_5d0
        char* var_4b8
        char** rax_64 = sub_140a96390(&var_4b8, sub_140aae2f0(&var_5d0, &var_ab8))
        int64_t* rcx_36 = var_ac0.q
        int32_t var_d8_1 = 4
        int64_t var_c8_1 = *rcx_36
        void* rax_66 = rcx_36[1]
        void* var_c0_1 = rax_66
        
        if (rax_66 != 0)
            *(rax_66 + 8) += 1
        
        int32_t var_b8_1 = rcx_36[2].d
        var_b0 = 1
        int32_t var_a8_1 = 4
        int64_t var_98_1 = r14_1
        int64_t* var_90_1 = r12_2
        
        if (r12_2 != 0)
            r12_2[1].d += 1
        
        int64_t var_68_1 = *rax_61
        void* rax_69 = rax_61[1]
        int32_t var_88_1 = rbx_10
        char var_80_1 = 1
        int32_t var_78_1 = 4
        void* var_60_1 = rax_69
        
        if (rax_69 != 0)
            *(rax_69 + 8) += 1
        
        int32_t var_58_1 = rax_61[2].d
        int64_t i_1 = 3
        char var_50_1 = 1
        void* var_9e0 = nullptr
        int32_t var_9d8_1 = 3
        sub_1405a4b40(&var_9e0, 3, 0)
        void var_d0
        void* rdx_13 = &var_d0
        int64_t* rcx_39 = var_9e0 + 8
        int32_t i_12 = 3
        int32_t i
        
        do
            rcx_39[-1].d = *(rdx_13 - 8)
            *rcx_39 = *rdx_13
            *rcx_39 = *rdx_13
            *rcx_39 = *rdx_13
            *rcx_39 = *rdx_13
            rcx_39[4].b = 0
            
            if (*(rdx_13 + 0x20) != 0)
                rcx_39[1] = *(rdx_13 + 8)
                void* rax_77 = *(rdx_13 + 0x10)
                rcx_39[2] = rax_77
                
                if (rax_77 != 0)
                    *(rax_77 + 8) += 1
                
                rcx_39[3].d = *(rdx_13 + 0x18)
                rcx_39[4].b = 1
            
            rcx_39 = &rcx_39[6]
            rdx_13 += 0x30
            i = i_12
            i_12 -= 1
        while (i != 1)
        char* var_838 = *rax_64
        void* rax_80 = rax_64[1]
        void* var_830_1 = rax_80
        
        if (rax_80 != 0)
            *(rax_80 + 8) += 1
        
        void var_5e8
        int64_t* rax_81 = sub_140aac870(&var_5e8, &var_838, &var_9e0)
        int64_t var_940 = *rax_81
        int64_t* rax_83 = rax_81[1]
        var_938 = rax_83
        
        if (rax_83 != 0)
            rax_83[1].d += 1
        
        int32_t var_930_1 = rax_81[2].d
        int64_t* var_5e0
        
        if (var_5e0 != 0)
            var_5e0[1].d -= 1
            
            if (var_5e0[1].d == 1)
                (**var_5e0)(var_5e0)
                int32_t rax_87 = *(var_5e0 + 0xc)
                *(var_5e0 + 0xc) -= 1
                
                if (rax_87 == 1)
                    (*(*var_5e0 + 8))(var_5e0, 1)
        
        sub_140596f50(&var_9e0)
        int64_t __saved_r12
        int64_t* r15_3 = &__saved_r12
        
        do
            i_1 -= 1
            r15_3 = &r15_3[-6]
            
            if (*r15_3 != 0)
                *r15_3 = 0
                int64_t* rbx_12 = r15_3[-2]
                
                if (rbx_12 != 0)
                    rbx_12[1].d -= 1
                    
                    if (rbx_12[1].d == 1)
                        (**rbx_12)(rbx_12)
                        int32_t rax_91 = *(rbx_12 + 0xc)
                        *(rbx_12 + 0xc) -= 1
                        
                        if (rax_91 == 1)
                            (*(*rbx_12 + 8))(rbx_12, 1)
        while (i_1 != 0)
        
        int64_t* rbx_14 = rax_64[1]
        
        if (rbx_14 != 0)
            rbx_14[1].d -= 1
            
            if (rbx_14[1].d == 1)
                (**rbx_14)(rbx_14)
                int32_t rax_95 = *(rbx_14 + 0xc)
                *(rbx_14 + 0xc) -= 1
                
                if (rax_95 == 1)
                    (*(*rbx_14 + 8))(rbx_14, zx.q((i_1 + 1).d))
        
        int64_t* rbx_15 = *(var_ac0.q + 8)
        
        if (rbx_15 != 0)
            rbx_15[1].d -= 1
            
            if (rbx_15[1].d == 1)
                (**rbx_15)(rbx_15)
                int32_t rax_100 = *(rbx_15 + 0xc)
                *(rbx_15 + 0xc) -= 1
                
                if (rax_100 == 1)
                    (*(*rbx_15 + 8))(rbx_15, 1)
        
        if (r12_2 != 0)
            r12_2[1].d -= 1
            
            if (r12_2[1].d == 1)
                (**r12_2)(r12_2)
                int32_t rax_104 = *(r12_2 + 0xc)
                *(r12_2 + 0xc) -= 1
                
                if (rax_104 == 1)
                    (*(*r12_2 + 8))(r12_2, 1)
        
        int64_t* rbx_16 = rax_61[1]
        
        if (rbx_16 != 0)
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t rax_108 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (rax_108 == 1)
                    (*(*rbx_16 + 8))(rbx_16, 1)
        
        rdx_16 = &var_940
    else
        var_aa8 = 0
        int32_t var_aa0_1 = 0
        sub_1405947f0(&var_aa8, 0xd)
        int32_t rax_2 = var_aa0_1 + 0xd
        var_aa0_1 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_aa8)
        
        void var_488
        int64_t* rax_4 = sub_140aae2f0(&var_488, 
            sub_1426ed850(r15 + 0x50, &var_790, 
                sub_1405a7220(var_aa8, 0xd, "{0} {1}: {2}", 0xd, 0x3f)))
        void var_470
        int64_t* rax_5 = sub_140aae420(&var_470, r13)
        void var_458
        int64_t* rax_6 = _vfprintf_p_l(&var_458, u"require", u"EnvQueryGenerator")
        var_ac0.q = rax_6
        void var_5a0
        char* var_4c8
        char** rax_8 = sub_140a96390(&var_4c8, sub_140aae2f0(&var_5a0, &var_aa8))
        var_168 = 4
        var_158 = *rax_6
        void* rax_10 = rax_6[1]
        void* var_150_1 = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        int32_t var_148_1 = rax_6[2].d
        int64_t var_128_1 = *rax_5
        void* rax_13 = rax_5[1]
        char var_140_1 = 1
        int32_t var_138_1 = 4
        void* var_120_1 = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        int32_t var_118_1 = rax_5[2].d
        int64_t var_f8_1 = *rax_4
        void* rax_16 = rax_4[1]
        char var_110_1 = 1
        int32_t var_108_1 = 4
        void* var_f0_1 = rax_16
        
        if (rax_16 != 0)
            *(rax_16 + 8) += 1
        
        int32_t var_e8_1 = rax_4[2].d
        int64_t i_3 = 3
        char var_e0_1 = 1
        void* var_9f0 = nullptr
        int32_t var_9e8_1 = 3
        sub_1405a4b40(&var_9f0, 3, 0)
        void var_160
        void* rdx_6 = &var_160
        int64_t* rcx_12 = var_9f0 + 8
        int32_t i_11 = 3
        int32_t i_2
        
        do
            rcx_12[-1].d = *(rdx_6 - 8)
            *rcx_12 = *rdx_6
            *rcx_12 = *rdx_6
            *rcx_12 = *rdx_6
            *rcx_12 = *rdx_6
            rcx_12[4].b = 0
            
            if (*(rdx_6 + 0x20) != 0)
                rcx_12[1] = *(rdx_6 + 8)
                void* rax_24 = *(rdx_6 + 0x10)
                rcx_12[2] = rax_24
                
                if (rax_24 != 0)
                    *(rax_24 + 8) += 1
                
                rcx_12[3].d = *(rdx_6 + 0x18)
                rcx_12[4].b = 1
            
            rcx_12 = &rcx_12[6]
            rdx_6 += 0x30
            i_2 = i_11
            i_11 -= 1
        while (i_2 != 1)
        char* var_808 = *rax_8
        void* rax_27 = rax_8[1]
        void* var_800_1 = rax_27
        
        if (rax_27 != 0)
            *(rax_27 + 8) += 1
        
        void var_600
        int64_t* rax_28 = sub_140aac870(&var_600, &var_808, &var_9f0)
        int64_t var_880 = *rax_28
        int64_t* rax_30 = rax_28[1]
        var_878 = rax_30
        
        if (rax_30 != 0)
            rax_30[1].d += 1
        
        int32_t var_870_1 = rax_28[2].d
        int64_t* var_5f8
        
        if (var_5f8 != 0)
            var_5f8[1].d -= 1
            
            if (var_5f8[1].d == 1)
                (**var_5f8)(var_5f8)
                int32_t rax_34 = *(var_5f8 + 0xc)
                *(var_5f8 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*var_5f8 + 8))(var_5f8, 1)
        
        sub_140596f50(&var_9f0)
        char* rdi_1 = &var_b0
        
        do
            i_3 -= 1
            rdi_1 = &rdi_1[-0x30]
            
            if (*rdi_1 != 0)
                *rdi_1 = 0
                int64_t* rbx_3 = *(rdi_1 - 0x10)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_38 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_38 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
        while (i_3 != 0)
        
        int64_t* rbx_4 = rax_8[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_42 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*rbx_4 + 8))(rbx_4, zx.q((i_3 + 1).d))
        
        int64_t* rbx_6 = *(var_ac0.q + 8)
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t rax_46 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_46 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        int64_t* rbx_7 = rax_5[1]
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t rax_50 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_50 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        int64_t* rbx_8 = rax_4[1]
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t rax_54 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (rax_54 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        rdx_16 = &var_880
        rdi = 0xf
    int64_t rax_110 = *rdx_16
    *rdx_16 = var_a20
    void* rcx_56 = var_a18
    var_a20 = rax_110
    var_a18 = rdx_16[1]
    rdx_16[1] = rcx_56
    var_a10 = rdx_16[2].d
    
    if (test_bit(rdi, 8))
        rdi &= 0xfffffeff
        
        if (var_938 != 0)
            var_938[1].d -= 1
            
            if (var_938[1].d == 1)
                (**var_938)(var_938)
                int32_t rax_115 = *(var_938 + 0xc)
                *(var_938 + 0xc) -= 1
                
                if (rax_115 == 1)
                    (*(*var_938 + 8))(var_938, 1)
    
    if (rdi.b s< 0)
        rdi &= 0xffffff7f
        int64_t* var_5c8
        
        if (var_5c8 != 0)
            var_5c8[1].d -= 1
            
            if (var_5c8[1].d == 1)
                (**var_5c8)(var_5c8)
                int32_t rax_119 = *(var_5c8 + 0xc)
                *(var_5c8 + 0xc) -= 1
                
                if (rax_119 == 1)
                    (*(*var_5c8 + 8))(var_5c8, 1)
    
    if ((rdi.b & 0x40) != 0)
        int64_t rcx_61 = var_ab8
        rdi &= 0xffffffbf
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
    
    if ((rdi.b & 0x20) != 0)
        rdi &= 0xffffffdf
        int64_t* var_5b0
        
        if (var_5b0 != 0)
            var_5b0[1].d -= 1
            
            if (var_5b0[1].d == 1)
                (**var_5b0)(var_5b0)
                int32_t rax_123 = *(var_5b0 + 0xc)
                *(var_5b0 + 0xc) -= 1
                
                if (rax_123 == 1)
                    (*(*var_5b0 + 8))(var_5b0, 1)
    
    if ((rdi.b & 0x10) != 0)
        rdi &= 0xffffffef
        
        if (var_970 != 0)
            var_970[1].d -= 1
            
            if (var_970[1].d == 1)
                (**var_970)(var_970)
                int32_t rax_127 = *(var_970 + 0xc)
                *(var_970 + 0xc) -= 1
                
                if (rax_127 == 1)
                    (*(*var_970 + 8))(var_970, 1)
    
    if ((rdi.b & 8) != 0)
        rdi &= 0xfffffff7
        
        if (var_878 != 0)
            var_878[1].d -= 1
            
            if (var_878[1].d == 1)
                (**var_878)(var_878)
                int32_t rax_131 = *(var_878 + 0xc)
                *(var_878 + 0xc) -= 1
                
                if (rax_131 == 1)
                    (*(*var_878 + 8))(var_878, 1)
    
    if ((rdi.b & 4) != 0)
        rdi &= 0xfffffffb
        int64_t* var_598
        
        if (var_598 != 0)
            var_598[1].d -= 1
            
            if (var_598[1].d == 1)
                (**var_598)(var_598)
                int32_t rax_135 = *(var_598 + 0xc)
                *(var_598 + 0xc) -= 1
                
                if (rax_135 == 1)
                    (*(*var_598 + 8))(var_598, 1)
    
    if ((rdi.b & 2) != 0)
        int64_t rcx_71 = var_790
        rdi &= 0xfffffffd
        
        if (rcx_71 != 0)
            sub_140a74f90(rcx_71)
    
    if ((rdi.b & 1) != 0)
        int64_t rcx_72 = var_aa8
        rdi &= 0xfffffffe
        
        if (rcx_72 != 0)
            sub_140a74f90(rcx_72)
    
    r15 = arg1
    r13 = arg3

void var_7c0
sub_140a95a00(&var_7c0)
int64_t i_13 = 2
int32_t var_7ac = 2
int64_t var_ad8
sub_140a96170(&var_ad8)
void* var_ad0_1
int32_t var_ac8
int32_t var_288
int64_t var_278
int32_t var_228
int64_t var_218
int64_t var_ad0

if (*(r15 + 0x34) != 0)
    int64_t rax_144 = *(r15 + 0x180)
    int32_t var_2e8
    int64_t var_2d8
    
    if (*(r15 + 0xf9) == 4)
        int64_t var_a98
        int64_t var_988
        int64_t var_898
        int128_t var_828
        void var_558
        void var_540
        int64_t* rax_153
        int64_t rbx_24
        
        if (rax_144 == 0)
            var_a98 = 0
            int32_t var_a90_1 = 0
            var_828 = zx.o(0)
            sub_1405947f0(&var_a98, 5)
            int32_t rax_154 = var_a90_1 + 5
            var_a90_1 = rax_154
            
            if (rax_154 s> 0)
                sub_140594770(&var_a98)
            
            int64_t rdx_23 = sub_1405a7220(var_a98, 5, "x{0}", 5, 0x3f)
            __andps_xmmxud_memxud(*(r15 + 0x1a0), data_142d3f770)
            rdi = rdi | 0x800 | 0x7000
            void var_410
            int64_t* rax_155 = sub_140aa1120(&var_410, rdx_23, &var_7c0, &var_828)
            char* var_4d8
            char** rax_157 = sub_140a96390(&var_4d8, sub_140aae2f0(&var_558, &var_a98))
            int32_t var_380 = 4
            int64_t var_370 = *rax_155
            void* rax_159 = rax_155[1]
            void* var_368_1 = rax_159
            
            if (rax_159 != 0)
                *(rax_159 + 8) += 1
            
            int32_t var_360_1 = rax_155[2].d
            void var_350
            void* var_ae0_1 = &var_350
            char* var_818 = *rax_157
            void* rax_162 = rax_157[1]
            char var_358_1 = 1
            int128_t var_758 = (&var_380).o
            void* var_810_1 = rax_162
            
            if (rax_162 != 0)
                *(rax_162 + 8) += 1
            
            void var_748
            void var_570
            int64_t* rax_164 = sub_140aac870(&var_570, &var_818, sub_1405d4de0(&var_748, &var_758))
            rbx_24 = *rax_164
            void* rax_165 = rax_164[1]
            var_898 = rbx_24
            void* var_890_1 = rax_165
            
            if (rax_165 != 0)
                *(rax_165 + 8) += 1
            
            int32_t var_888_1 = rax_164[2].d
            sub_1405970a0(&var_570)
            sub_140596f50(&var_748)
            sub_1405d57e0(&var_370)
            sub_1405970a0(rax_157)
            sub_1405970a0(rax_155)
            rax_153 = &var_898
        else
            int64_t* r9_5 = *(r15 + 0x180)
            int64_t var_780
            int64_t var_770
            int32_t rax_147
            int64_t* rcx_82
            
            if (r9_5 == 0)
                rcx_82 = (**(r15 + 0x170))(r15 + 0x170, &var_780)
                rax_147 = 0x400400
            else
                rcx_82 = (*(*r9_5 + 0x268))(r9_5, &var_770, *(r15 + 0x188))
                rax_147 = 0x200400
            
            rdi = rdi | 0x200 | rax_147
            var_988 = *rcx_82
            *rcx_82 = 0
            int32_t var_980_1 = rcx_82[1].d
            int32_t var_97c_1 = *(rcx_82 + 0xc)
            rcx_82[1] = 0
            
            if (test_bit(rdi, 0x16))
                int64_t rcx_83 = var_780
                rdi &= 0xffbfffff
                
                if (rcx_83 != 0)
                    sub_140a74f90(rcx_83)
            
            if (test_bit(rdi, 0x15))
                int64_t rcx_84 = var_770
                rdi &= 0xffdfffff
                
                if (rcx_84 != 0)
                    sub_140a74f90(rcx_84)
            
            rax_153 = sub_140aae2f0(&var_540, &var_988)
            rbx_24 = *rax_153
        
        int64_t var_a48 = rbx_24
        void* rbx_25 = rax_153[1]
        void* var_a40_1 = rbx_25
        
        if (rbx_25 != 0)
            *(rbx_25 + 8) += 1
            rbx_25 = var_a40_1
        
        int32_t rax_167 = rax_153[2].d
        
        if (test_bit(rdi, 0xe))
            rdi &= 0xffffbfff
            sub_1405970a0(&var_898)
        
        if (test_bit(rdi, 0xd))
            rdi &= 0xffffdfff
            sub_1405970a0(&var_558)
        
        if (test_bit(rdi, 0xc))
            int64_t rcx_102 = var_a98
            rdi &= 0xffffefff
            
            if (rcx_102 != 0)
                sub_140a74f90(rcx_102)
        
        if (test_bit(rdi, 0xb))
            int64_t* r15_5 = var_828:8.q
            rdi &= 0xfffff7ff
            
            if (r15_5 != 0)
                r15_5[1].d -= 1
                
                if (r15_5[1].d == 1)
                    (**r15_5)(r15_5)
                    int32_t rsi_2 = *(r15_5 + 0xc)
                    *(r15_5 + 0xc) -= 1
                    
                    if (rsi_2 == 1)
                        (*(*r15_5 + 8))(r15_5, zx.q(rsi_2))
                
                rbx_25 = var_a40_1
        
        if (test_bit(rdi, 0xa))
            rdi &= 0xfffffbff
            sub_1405970a0(&var_540)
        
        if (test_bit(rdi, 9))
            int64_t rcx_106 = var_988
            rdi &= 0xfffffdff
            
            if (rcx_106 != 0)
                sub_140a74f90(rcx_106)
        
        int64_t var_a88 = 0
        int32_t var_a80_1 = 0
        sub_1405947f0(&var_a88, 0xa)
        int32_t rax_171 = var_a80_1 + 0xa
        var_a80_1 = rax_171
        
        if (rax_171 s> 0)
            sub_140594770(&var_a88)
        
        sub_1405a7220(var_a88, 0xa, "{0} [{1}]", 0xa, 0x3f)
        int64_t var_7d8 = var_a48
        void* var_7d0_1 = rbx_25
        
        if (rbx_25 != 0)
            *(rbx_25 + 8) += 1
            rbx_25 = var_a40_1
        
        int32_t var_7c8_1 = rax_167
        void var_3f8
        int64_t* rax_174 = _vfprintf_p_l(&var_3f8, u"constant score", u"EnvQueryGenerator")
        void var_510
        char* var_4e8
        char** rax_176 = sub_140a96390(&var_4e8, sub_140aae2f0(&var_510, &var_a88))
        int32_t var_348 = 4
        int64_t var_338_1 = *rax_174
        void* rax_178 = rax_174[1]
        void* var_330_1 = rax_178
        
        if (rax_178 != 0)
            *(rax_178 + 8) += 1
            rbx_25 = var_a40_1
        
        int32_t var_328_1 = rax_174[2].d
        int64_t var_308_1 = var_a48
        char var_320_1 = 1
        int32_t var_318_1 = 4
        void* var_300_1 = rbx_25
        
        if (rbx_25 != 0)
            *(rbx_25 + 8) += 1
        
        int32_t var_2f8_1 = rax_167
        int32_t* var_ae0_2 = &var_2e8
        char* var_848 = *rax_176
        void* rax_183 = rax_176[1]
        char var_2f0_1 = 1
        int128_t var_738 = (&var_348).o
        void* var_840_1 = rax_183
        
        if (rax_183 != 0)
            *(rax_183 + 8) += 1
        
        void var_728
        void var_528
        int64_t* rax_185 = sub_140aac870(&var_528, &var_848, sub_1405d4de0(&var_728, &var_738))
        int64_t var_9d0 = *rax_185
        void* rax_187 = rax_185[1]
        
        if (rax_187 != 0)
            *(rax_187 + 8) += 1
        
        int32_t rax_188 = rax_185[2].d
        sub_1405970a0(&var_528)
        sub_140596f50(&var_728)
        int64_t i_8 = 2
        int64_t* rsi_3 = &var_2d8
        int64_t i_4
        
        do
            rsi_3 -= 0x30
            sub_1405d57e0(rsi_3)
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
        sub_1405970a0(rax_176)
        sub_1405970a0(rax_174)
        sub_1405970a0(&var_7d8)
        int64_t rcx_122 = var_ad8
        var_ad8 = var_9d0
        var_9d0 = rcx_122
        var_ad0_1 = rax_187
        int64_t var_9c8_2 = var_ad0
        var_ac8 = rax_188
        sub_1405970a0(&var_9d0)
        sub_1405970a0(&var_510)
        int64_t rcx_126 = var_a88
        
        if (rcx_126 != 0)
            sub_140a74f90(rcx_126)
        
        sub_1405970a0(&var_a48)
    else if (rax_144 == 0)
        int64_t var_8c8
        void var_678
        int64_t* rax_216
        int64_t rdx_41
        int64_t rsi_5
        
        if (*(r15 + 0x1a0) f<= 0f)
            rdi |= 0x10000
            rax_216, rdx_41 = _vfprintf_p_l(&var_678, u"not ", u"EnvQueryGenerator")
            rsi_5 = *rax_216
        else
            rdi |= 0x8000
            rdx_41 = sub_1405d9400()
            rsi_5 = data_143cd6fd8
            void* rax_214 = data_143cd6fe0
            var_8c8 = rsi_5
            void* var_8c0_1 = rax_214
            
            if (rax_214 != 0)
                *(rax_214 + 8) += 1
            
            int32_t var_8b8_1 = data_143cd6fe8
            rax_216 = &var_8c8
        
        void* rbx_26 = rax_216[1]
        int64_t var_a08 = rsi_5
        void* var_a00_1 = rbx_26
        
        if (rbx_26 != 0)
            *(rbx_26 + 8) += 1
            rbx_26 = var_a00_1
        
        int32_t rax_217 = rax_216[2].d
        
        if (test_bit(rdi, 0x10))
            rdi &= 0xfffeffff
            rdx_41 = sub_1405970a0(&var_678)
        
        if (test_bit(rdi, 0xf))
            rdi &= 0xffff7fff
            rdx_41 = sub_1405970a0(&var_8c8)
        
        __andps_xmmxud_memxud(*(r15 + 0x1a0), data_142d3f770)
        int128_t var_858 = zx.o(0)
        int64_t var_8e0
        sub_140aa1120(&var_8e0, rdx_41, &var_7c0, &var_858)
        sub_1405ec6a0(&var_858)
        int64_t var_a68 = 0
        int32_t var_a60_1 = 0
        sub_1405947f0(&var_a68, 0x12)
        int32_t rax_218 = var_a60_1 + 0x12
        var_a60_1 = rax_218
        
        if (rax_218 s> 0)
            sub_140594770(&var_a68)
        
        sub_1405a7220(var_a68, 0x12, "{0} {1}{2} [x{3}]", 0x12, 0x3f)
        int64_t rax_219 = var_8e0
        int64_t var_958 = rax_219
        void* var_8d8
        
        if (var_8d8 != 0)
            *(var_8d8 + 8) += 1
            rbx_26 = var_a00_1
        
        int64_t var_7a8 = rsi_5
        void* var_7a0_1 = rbx_26
        
        if (rbx_26 != 0)
            *(rbx_26 + 8) += 1
            rbx_26 = var_a00_1
        
        int32_t var_798_1 = rax_217
        void var_3b0
        int64_t* rax_223 = sub_140aae420(&var_3b0, r13)
        void var_398
        int64_t* rax_224 = _vfprintf_p_l(&var_398, u"prefer", u"EnvQueryGenerator")
        void var_648
        char* var_498
        char** rax_226 = sub_140a96390(&var_498, sub_140aae2f0(&var_648, &var_a68))
        var_228 = 4
        var_218 = *rax_224
        void* rax_228 = rax_224[1]
        void* var_210_1 = rax_228
        
        if (rax_228 != 0)
            *(rax_228 + 8) += 1
            rbx_26 = var_a00_1
        
        int32_t var_208_1 = rax_224[2].d
        char var_200_1 = 1
        int32_t var_1f8_1 = 4
        int64_t var_1e8_1 = rsi_5
        void* var_1e0_1 = rbx_26
        
        if (rbx_26 != 0)
            *(rbx_26 + 8) += 1
        
        int32_t var_1d8_1 = rax_217
        int64_t var_1b8_1 = *rax_223
        void* rax_232 = rax_223[1]
        char var_1d0_1 = 1
        int32_t var_1c8_1 = 4
        void* var_1b0_1 = rax_232
        
        if (rax_232 != 0)
            *(rax_232 + 8) += 1
        
        int32_t var_1a8_1 = rax_223[2].d
        int64_t var_188_1 = rax_219
        char var_1a0_1 = 1
        int32_t var_198_1 = 4
        void* var_180_1 = var_8d8
        
        if (var_8d8 != 0)
            *(var_8d8 + 8) += 1
        
        int32_t var_8d0
        int32_t var_178_1 = var_8d0
        int32_t* var_ae0_4 = &var_168
        char* var_7e8 = *rax_226
        void* rax_238 = rax_226[1]
        char var_170_1 = 1
        int128_t var_6d8 = (&var_228).o
        void* var_7e0_1 = rax_238
        
        if (rax_238 != 0)
            *(rax_238 + 8) += 1
        
        void var_6e8
        void var_660
        int64_t* rax_240 = sub_140aac870(&var_660, &var_7e8, sub_1405d4de0(&var_6e8, &var_6d8))
        int64_t var_9a0 = *rax_240
        void* rax_242 = rax_240[1]
        
        if (rax_242 != 0)
            *(rax_242 + 8) += 1
        
        int32_t rax_243 = rax_240[2].d
        sub_1405970a0(&var_660)
        sub_140596f50(&var_6e8)
        int64_t i_10 = 4
        int64_t* rsi_6 = &var_158
        int64_t i_5
        
        do
            rsi_6 -= 0x30
            sub_1405d57e0(rsi_6)
            i_5 = i_10
            i_10 -= 1
        while (i_5 != 1)
        sub_1405970a0(rax_226)
        sub_1405970a0(rax_224)
        sub_1405970a0(&var_7a8)
        sub_1405970a0(rax_223)
        sub_1405970a0(&var_958)
        int64_t rcx_174 = var_ad8
        var_ad8 = var_9a0
        var_9a0 = rcx_174
        var_ad0_1 = rax_242
        int64_t var_998_2 = var_ad0
        var_ac8 = rax_243
        sub_1405970a0(&var_9a0)
        sub_1405970a0(&var_648)
        int64_t rcx_178 = var_a68
        
        if (rcx_178 != 0)
            sub_140a74f90(rcx_178)
        
        sub_1405970a0(&var_8e0)
        sub_1405970a0(&var_a08)
    else
        int64_t var_a78 = 0
        int32_t var_a70_1 = 0
        sub_1405947f0(&var_a78, 9)
        int32_t rax_192 = var_a70_1 + 9
        var_a70_1 = rax_192
        
        if (rax_192 s> 0)
            sub_140594770(&var_a78)
        
        int64_t var_6c8
        void var_3e0
        int64_t* rax_194 = sub_140aae2f0(&var_3e0, 
            sub_1426ed850(r15 + 0x170, &var_6c8, sub_1405a7220(var_a78, 9, "{0}: {1}", 9, 0x3f)))
        void var_3c8
        int64_t* rax_195 = _vfprintf_p_l(&var_3c8, u"score factor", u"EnvQueryGenerator")
        void var_690
        char* var_4f8
        char** rax_197 = sub_140a96390(&var_4f8, sub_140aae2f0(&var_690, &var_a78))
        var_2e8 = 4
        var_2d8 = *rax_195
        void* rax_199 = rax_195[1]
        void* var_2d0_1 = rax_199
        
        if (rax_199 != 0)
            *(rax_199 + 8) += 1
        
        int32_t var_2c8_1 = rax_195[2].d
        int64_t var_2a8_1 = *rax_194
        void* rax_202 = rax_194[1]
        char var_2c0_1 = 1
        int32_t var_2b8_1 = 4
        void* var_2a0_1 = rax_202
        
        if (rax_202 != 0)
            *(rax_202 + 8) += 1
        
        int32_t var_298_1 = rax_194[2].d
        int32_t* var_ae0_3 = &var_288
        char* var_868 = *rax_197
        void* rax_205 = rax_197[1]
        char var_290_1 = 1
        int128_t var_718 = (&var_2e8).o
        void* var_860_1 = rax_205
        
        if (rax_205 != 0)
            *(rax_205 + 8) += 1
        
        void var_708
        void var_6a8
        int64_t* rax_207 = sub_140aac870(&var_6a8, &var_868, sub_1405d4de0(&var_708, &var_718))
        int64_t var_9b8 = *rax_207
        void* rax_209 = rax_207[1]
        
        if (rax_209 != 0)
            *(rax_209 + 8) += 1
        
        int32_t rax_210 = rax_207[2].d
        sub_1405970a0(&var_6a8)
        sub_140596f50(&var_708)
        int64_t i_9 = 2
        int64_t* rsi_4 = &var_278
        int64_t i_6
        
        do
            rsi_4 -= 0x30
            sub_1405d57e0(rsi_4)
            i_6 = i_9
            i_9 -= 1
        while (i_6 != 1)
        sub_1405970a0(rax_197)
        sub_1405970a0(rax_195)
        sub_1405970a0(rax_194)
        int64_t rcx_145 = var_ad8
        var_ad8 = var_9b8
        var_9b8 = rcx_145
        var_ad0_1 = rax_209
        int64_t var_9b0_2 = var_ad0
        var_ac8 = rax_210
        sub_1405970a0(&var_9b8)
        sub_1405970a0(&var_690)
        int64_t rcx_149 = var_6c8
        
        if (rcx_149 != 0)
            sub_140a74f90(rcx_149)
        
        int64_t rcx_150 = var_a78
        
        if (rcx_150 != 0)
            sub_140a74f90(rcx_150)
else
    void var_588
    int64_t* rax_137 = _vfprintf_p_l(&var_588, u"don't score", u"EnvQueryGenerator")
    int64_t rcx_76 = var_ad8
    var_ad8 = *rax_137
    *rax_137 = rcx_76
    var_ad0_1 = rax_137[1]
    rax_137[1] = var_ad0
    var_ac8 = rax_137[2].d
    int64_t* var_580
    
    if (var_580 != 0)
        var_580[1].d -= 1
        
        if (var_580[1].d == 1)
            (**var_580)(var_580)
            int32_t rsi_1 = *(var_580 + 0xc)
            *(var_580 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_580 + 8))(var_580, zx.q(rsi_1))
int64_t var_a58
int64_t var_928
int64_t var_910
void var_618
int32_t rax_251
int64_t* rcx_182

if (sub_140ab3dc0(&var_a20) == 0)
    var_a58 = 0
    int32_t var_a50_1 = 0
    sub_1405947f0(&var_a58, 9)
    int32_t rax_252 = var_a50_1 + 9
    var_a50_1 = rax_252
    
    if (rax_252 s> 0)
        sub_140594770(&var_a58)
    
    sub_1405a7220(var_a58, 9, "{0}, {1}", 9, 0x3f)
    int64_t rax_253 = var_ad8
    int64_t var_8f8 = rax_253
    void* var_8f0_1 = var_ad0_1
    
    if (var_ad0_1 != 0)
        *(var_ad0_1 + 8) += 1
    
    int64_t r13_5 = var_a20
    int64_t var_8b0 = r13_5
    void* var_8a8_1 = var_a18
    
    if (var_a18 != 0)
        *(var_a18 + 8) += 1
    
    char* var_4a8
    char** rax_256 = sub_140a96390(&var_4a8, sub_140aae2f0(&var_618, &var_a58))
    var_288 = 4
    var_278 = r13_5
    void* var_270_1 = var_a18
    
    if (var_a18 != 0)
        *(var_a18 + 8) += 1
    
    int64_t var_248_1 = rax_253
    int32_t var_268_1 = var_a10
    char var_260_1 = 1
    int32_t var_258_1 = 4
    void* var_240_1 = var_ad0_1
    
    if (var_ad0_1 != 0)
        *(var_ad0_1 + 8) += 1
    
    int32_t var_238_1 = var_ac8
    int32_t* var_ae0_5 = &var_228
    char* var_7f8 = *rax_256
    void* rax_260 = rax_256[1]
    char var_230_1 = 1
    int128_t var_6f8 = (&var_288).o
    void* var_7f0_1 = rax_260
    
    if (rax_260 != 0)
        *(rax_260 + 8) += 1
    
    void var_6b8
    void var_630
    int64_t* rax_262 = sub_140aac870(&var_630, &var_7f8, sub_1405d4de0(&var_6b8, &var_6f8))
    var_910 = *rax_262
    void* rax_264 = rax_262[1]
    void* var_908_1 = rax_264
    
    if (rax_264 != 0)
        *(rax_264 + 8) += 1
    
    int32_t var_900_1 = rax_262[2].d
    sub_1405970a0(&var_630)
    sub_140596f50(&var_6b8)
    int64_t* rbx_28 = &var_218
    int64_t i_7
    
    do
        rbx_28 -= 0x30
        sub_1405d57e0(rbx_28)
        i_7 = i_13
        i_13 -= 1
    while (i_7 != 1)
    sub_1405970a0(rax_256)
    sub_1405970a0(&var_8b0)
    sub_1405970a0(&var_8f8)
    rcx_182 = &var_910
    rax_251 = 0x1c0000
else
    var_928 = var_ad8
    void* var_920_1 = var_ad0_1
    
    if (var_ad0_1 != 0)
        *(var_ad0_1 + 8) += 1
    
    rcx_182 = &var_928
    int32_t var_918_1 = var_ac8
    rax_251 = 0x20000

int32_t rdi_4 = rdi | rax_251
*arg2 = *rcx_182
void* rax_267 = rcx_182[1]
arg2[1] = rax_267

if (rax_267 != 0)
    *(rax_267 + 8) += 1

arg2[2].d = rcx_182[2].d

if (test_bit(rdi_4, 0x14))
    rdi_4 &= 0xffefffff
    sub_1405970a0(&var_910)

if (test_bit(rdi_4, 0x13))
    rdi_4 &= 0xfff7ffff
    sub_1405970a0(&var_618)

if (test_bit(rdi_4, 0x12))
    int64_t rcx_199 = var_a58
    rdi_4 &= 0xfffbffff
    
    if (rcx_199 != 0)
        sub_140a74f90(rcx_199)

if (test_bit(rdi_4, 0x11))
    sub_1405970a0(&var_928)

sub_1405970a0(&var_ad8)
sub_1405970a0(&var_a20)
__security_check_cookie(rax_1 ^ &var_b18)
return arg2
