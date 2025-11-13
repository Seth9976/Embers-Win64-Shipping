// 函数: sub_14067e660
// 地址: 0x14067e660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t rbx = 0
int16_t* rdi = nullptr
int64_t* r12 = arg3
uint64_t r13 = -1
int64_t* rcx = *arg2
int32_t rdx = rcx[1].d
int16_t* var_1c8
int32_t i_3
wchar32 const* const rdx_6
int32_t rsi_1

if (rdx == 2)
    var_1c8 = nullptr
    i_3 = 0
    sub_1405947f0(&var_1c8, 2)
    rsi_1 = i_3 + 2
    
    if (rsi_1 s> 0)
        sub_140594770(&var_1c8)
    
    rdx_6 = &data_142d4056c
label_14067e79b:
    rdi = var_1c8
    UnDecorator::getReferenceType(rdi, rdx_6, 4)
    uint64_t rcx_8
    int16_t* rdx_7
    
    if (rsi_1 == 0)
        rdx_7 = &data_142d40450
        rcx_8 = 0
    label_14067e7db:
        
        if (rcx_8.d == 0xffffffff)
            rcx_8 = -1
            
            do
                rcx_8 += 1
            while (rdx_7[rcx_8] != 0)
    else
        rcx_8 = zx.q(rsi_1 - 1)
        
        if (rdi != 0)
            rdx_7 = rdi
            
            if (rcx_8.d s> 0 && rdi[sx.q(rsi_1) - 2] == 0)
                rcx_8 = zx.q(rcx_8.d - 1)
            
            goto label_14067e7db
        
        rdx_7 = nullptr
        rcx_8 = 0
    
    (*(*r12 + 0x150))(r12, rdx_7, sx.q(rcx_8.d) * 2)
    rcx = *arg2
else
    if (rdx == 5)
        var_1c8 = nullptr
        i_3 = 0
        sub_1405947f0(&var_1c8, 2)
        rsi_1 = i_3 + 2
        
        if (rsi_1 s> 0)
            sub_140594770(&var_1c8)
        
        rdx_6 = &(*U"{}[\nt")[2]
        goto label_14067e79b
    
    if (rdx == 6)
        var_1c8 = nullptr
        i_3 = 0
        sub_1405947f0(&var_1c8, 2)
        rsi_1 = i_3 + 2
        
        if (rsi_1 s> 0)
            sub_140594770(&var_1c8)
        
        rdx_6 = U"{}[\nt"
        goto label_14067e79b
int32_t rdx_8 = rcx[1].d
int32_t var_158

if (rdx_8 == 5)
    int32_t r15_6 = 0
    int64_t* rax_53
    int64_t r9_4
    rax_53, r9_4 = sub_140b74a70(rcx)
    int16_t* r13_3 = nullptr
    var_1c8 = nullptr
    int32_t i_2 = rax_53[1].d
    int64_t rsi_16 = *rax_53
    i_3 = i_2
    
    if (i_2 != 0)
        sub_14061cb30(&var_1c8, i_2, 0)
        r13_3 = var_1c8
        int16_t* rcx_106 = r13_3
        void* rsi_17 = rsi_16 - r13_3
        int32_t i
        
        do
            *rcx_106 = *(rsi_17 + rcx_106)
            void* rax_55 = *(rsi_17 + rcx_106 + 8)
            *(rcx_106 + 8) = rax_55
            
            if (rax_55 != 0)
                *(rax_55 + 8) += 1
            
            rcx_106 = &rcx_106[8]
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
    
    int16_t* rsi_18 = r13_3
    void* r12_5 = &r13_3[sx.q(i_2) * 8]
    
    if (r13_3 != r12_5)
        do
            r15_6 += 1
            var_158.q = *rsi_18
            void* rax_57 = *(rsi_18 + 8)
            void* var_150_3 = rax_57
            
            if (rax_57 != 0)
                *(rax_57 + 8) += 1
            
            r9_4.b = r15_6 s>= i_2
            sub_14067e660(arg1, &var_158, arg3, r9_4)
            rsi_18 = &rsi_18[8]
        while (rsi_18 != r12_5)
        
        r13_3 = var_1c8
        rbx = 0
    
    if (i_2 != 0)
        void* r15_7 = &r13_3[4]
        int32_t i_1
        
        do
            int64_t* rsi_19 = *r15_7
            
            if (rsi_19 != 0)
                rsi_19[1].d -= 1
                
                if (rsi_19[1].d == 1)
                    (**rsi_19)(rsi_19)
                    int32_t temp9_1 = *(rsi_19 + 0xc)
                    *(rsi_19 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rsi_19 + 8))(rsi_19, 1)
            
            r15_7 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r13_3 != 0)
        sub_140a74f90(r13_3)
    
    r12 = arg3
    r13 = -1
else
    int16_t* var_1b0
    int16_t* var_1a0
    int16_t* var_190
    int16_t* var_178
    int16_t* var_168
    
    if (rdx_8 == 6)
        int32_t var_108_1 = 0
        int64_t* rdx_34 = *(**rcx)()
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        int32_t var_6c_1 = 0x80
        int128_t var_88
        __builtin_memset(&var_88, 0, 0x1c)
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        sub_14066a260(&var_98, rdx_34)
        int128_t* var_150_1 = &var_88
        int32_t var_148_1 = 0xffffffff
        int32_t rcx_65 = 0
        var_158 = 0
        int32_t r8_14 = 0
        int32_t var_154_1 = 1
        int64_t var_144_1 = 0
        int128_t* var_78
        int32_t var_70
        
        if (var_70 != 0)
            int128_t* r9_1 = &var_88
            
            if (var_78 != 0)
                r9_1 = var_78
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_70 - 1)
            int32_t rdx_37 = *r9_1
            
            if (rdx_37 != 0)
            label_14067efc4:
                int32_t rax_34 = neg.d(rdx_37) & rdx_37
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_34)
                int32_t var_154_2 = rax_34
                int32_t rax_35
                
                if (rax_34 == 0)
                    rax_35 = 0x20
                else
                    rax_35 = 0x1f - temp0_1
                
                int32_t rax_36 = r8_14 - rax_35 + 0x1f
                
                if (rax_36 s> var_70)
                    rax_36 = var_70
                
                var_144_1.d = rax_36
            else
                while (true)
                    rcx_65 += 1
                    r8_14 += 0x20
                    var_158 = rcx_65
                    var_144_1:4.d = r8_14
                    
                    if (rcx_65 s> ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                        var_144_1.d = var_70
                        break
                    
                    var_148_1 = 0xffffffff
                    rdx_37 = *(r9_1 + (sx.q(rcx_65) << 2))
                    
                    if (rdx_37 != 0)
                        goto label_14067efc4
        
        double zmm2[0x2] = var_148_1.o
        int128_t var_c0_1 = var_158.o
        var_144_1.d = var_70
        double var_b0_1[0x2] = zmm2
        int16_t* rcx_70 = (0xffffffff << (var_70.b & 0x1f)).q u>> 0x20
        var_168 = rcx_70
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        int128_t var_f0 = (&var_98).o
        int128_t var_e0_1 = var_c0_1
        int64_t var_d0_1 = zmm2.q
        
        while (true)
            int64_t rax_37 = sx.q(var_e0_1:0xc.d)
            int64_t* rdx_38 = var_f0.q
            
            if (rax_37.d == rcx_70.d && var_e0_1.q == &var_88 && rdx_38 == &var_98)
                break
            
            var_1c8 = nullptr
            int32_t var_1c0_2 = 0
            int16_t* r15_3 = *rdx_38 + rax_37 * 0x28
            var_178 = r15_3
            sub_1405947f0(&var_1c8, 2)
            int32_t r14_5 = var_1c0_2 + 2
            
            if (r14_5 s> 0)
                sub_140594770(&var_1c8)
            
            int16_t* rsi_12 = var_1c8
            UnDecorator::getReferenceType(rsi_12, &data_142d4056c, 4)
            
            if (rdi != 0)
                sub_140a74f90(rdi)
            
            var_1c8 = nullptr
            int64_t var_1c0_3 = 0
            uint64_t rcx_76
            int16_t* rdx_40
            
            if (r14_5 == 0)
                rdx_40 = &data_142d40450
                rcx_76 = 0
            label_14067f114:
                
                if (rcx_76.d == 0xffffffff)
                    rcx_76 = -1
                    
                    do
                        rcx_76 += 1
                    while (rdx_40[rcx_76] != 0)
            else
                rcx_76 = zx.q(r14_5 - 1)
                
                if (rsi_12 != 0)
                    rdx_40 = rsi_12
                    
                    if (rcx_76.d s> 0 && rsi_12[sx.q(r14_5) - 2] == 0)
                        rcx_76 = zx.q(rcx_76.d - 1)
                    
                    goto label_14067f114
                
                rdx_40 = nullptr
                rcx_76 = 0
            
            (*(*r12 + 0x150))(r12, rdx_40, sx.q(rcx_76.d) * 2)
            int32_t r12_2 = 0
            int64_t r13_2 = 0
            
            while (true)
                int32_t rax_41 = *(r15_3 + 8)
                int32_t rcx_78 = rax_41 - 1
                
                if (rax_41 == 0)
                    rcx_78 = 0
                
                if (r12_2 s>= rcx_78)
                    break
                
                void* r15_4 = *r15_3
                int16_t* r14_6 = nullptr
                var_190 = nullptr
                int32_t rdi_3 = 0
                int32_t var_188_3 = 0
                int16_t* r15_5 = r15_4 + r13_2
                
                if (r15_4 != neg.q(r13_2) && *r15_5 != 0)
                    sub_1405947f0(&var_190, 2)
                    rdi_3 = var_188_3 + 2
                    
                    if (rdi_3 s> 0)
                        sub_140594770(&var_190)
                    
                    r14_6 = var_190
                    UnDecorator::getReferenceType(r14_6, r15_5, 2)
                    r14_6[sx.q(rdi_3) - 1] = 0
                
                if (rsi_12 != 0)
                    sub_140a74f90(rsi_12)
                
                var_190 = nullptr
                rsi_12 = r14_6
                int64_t var_188_4 = 0
                uint64_t rcx_83
                int16_t* rdx_43
                
                if (rdi_3 == 0)
                    rdx_43 = &data_142d40450
                    rcx_83 = 0
                label_14067f21b:
                    
                    if (rcx_83.d == 0xffffffff)
                        rcx_83 = -1
                        
                        do
                            rcx_83 += 1
                        while (rdx_43[rcx_83] != 0)
                else
                    rcx_83 = zx.q(rdi_3 - 1)
                    
                    if (r14_6 != 0)
                        rdx_43 = r14_6
                        
                        if (rcx_83.d s> 0 && r14_6[sx.q(rdi_3) - 2] == 0)
                            rcx_83 = zx.q(rcx_83.d - 1)
                        
                        goto label_14067f21b
                    
                    rdx_43 = nullptr
                    rcx_83 = 0
                
                (*(*arg3 + 0x150))(arg3, rdx_43, sx.q(rcx_83.d) * 2)
                r15_3 = var_178
                r12_2 += 1
                r13_2 += 2
            
            var_1a0 = nullptr
            int32_t var_198_3 = 0
            sub_1405947f0(&var_1a0, 2)
            int32_t rdi_4 = var_198_3 + 2
            
            if (rdi_4 s> 0)
                sub_140594770(&var_1a0)
            
            int16_t* r14_7 = var_1a0
            UnDecorator::getReferenceType(r14_7, &data_142d4056c, 4)
            
            if (rsi_12 != 0)
                sub_140a74f90(rsi_12)
            
            var_1a0 = nullptr
            int64_t var_198_4 = 0
            uint64_t rcx_89
            int16_t* rdx_45
            
            if (rdi_4 == 0)
                rdx_45 = &data_142d40450
                rcx_89 = 0
            label_14067f3a9:
                
                if (rcx_89.d != 0xffffffff)
                    r13 = -1
                else
                    r13 = -1
                    rcx_89 = -1
                    
                    do
                        rcx_89 += 1
                    while (rdx_45[rcx_89] != 0)
            else
                rcx_89 = zx.q(rdi_4 - 1)
                
                if (r14_7 != 0)
                    rdx_45 = r14_7
                    
                    if (rcx_89.d s> 0 && r14_7[sx.q(rdi_4) - 2] == 0)
                        rcx_89 = zx.q(rcx_89.d - 1)
                    
                    goto label_14067f3a9
                
                rdx_45 = nullptr
                rcx_89 = 0
                r13 = -1
            
            r12 = arg3
            (*(*r12 + 0x150))(r12, rdx_45, sx.q(rcx_89.d) * 2)
            var_1b0 = nullptr
            int32_t var_1a8_3 = 0
            sub_1405947f0(&var_1b0, 2)
            int32_t rsi_13 = var_1a8_3 + 2
            
            if (rsi_13 s> 0)
                sub_140594770(&var_1b0)
            
            rdi = var_1b0
            UnDecorator::getReferenceType(rdi, &data_142d84ee0, 4)
            
            if (r14_7 != 0)
                sub_140a74f90(r14_7)
            
            var_1b0 = nullptr
            int64_t var_1a8_4 = 0
            uint64_t rcx_95
            int16_t* rdx_47
            
            if (rsi_13 == 0)
                rdx_47 = &data_142d40450
                rcx_95 = 0
            label_14067f3de:
                
                if (rcx_95.d == 0xffffffff)
                    rcx_95 = -1
                    
                    do
                        rcx_95 += 1
                    while (rdx_47[rcx_95] != 0)
            else
                rcx_95 = zx.q(rsi_13 - 1)
                
                if (rdi != 0)
                    rdx_47 = rdi
                    
                    if (rcx_95.d s> 0 && rdi[sx.q(rsi_13) - 2] == 0)
                        rcx_95 = zx.q(rcx_95.d - 1)
                    
                    goto label_14067f3de
                
                rdx_47 = nullptr
                rcx_95 = 0
            
            (*(*r12 + 0x150))(r12, rdx_47, sx.q(rcx_95.d) * 2)
            int32_t rsi_15 = var_108_1 + 1
            var_158.q = *(r15_3 + 0x10)
            void* rax_50 = *(r15_3 + 0x18)
            var_108_1 = rsi_15
            void* var_150_2 = rax_50
            
            if (rax_50 != 0)
                *(rax_50 + 8) += 1
            
            int64_t r9_3
            r9_3.b = rsi_15 s>= var_90_1 - var_64_1
            sub_14067e660(arg1, &var_158, r12, r9_3)
            int32_t var_e4
            var_e0_1:8.d &= not.d(var_e4)
            sub_14059bdd0(&var_f0:8)
            rcx_70 = var_168
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        sub_14066cbf0(&var_98, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_104 = var_98
        
        if (rcx_104 != 0)
            sub_140a74f90(rcx_104)
    else
        sub_140b74df0(rcx, &var_158)
        int32_t var_150
        int32_t rax_5 = var_150
        int16_t* const rdx_11 = &data_142d40450
        int32_t r13_1 = 0
        int64_t rcx_10 = 0
        
        if (rax_5 != 0)
            rdx_11 = var_158.q
        
        int16_t* const var_100_1 = rdx_11
        
        while (true)
            int32_t var_108
            var_108.q = rcx_10
            int32_t rax_6
            
            if (rax_5 == 0)
                rax_6 = 0
            else
                rax_6 = rax_5 - 1
            
            if (r13_1 s>= rax_6)
                break
            
            void* r12_1 = &rdx_11[rcx_10]
            var_168 = nullptr
            int32_t var_160_1 = 0
            int16_t* r14_1 = nullptr
            int32_t rsi_2 = 0
            
            if (r12_1 != 0 && *r12_1 != 0)
                sub_1405947f0(&var_168, 2)
                rsi_2 = var_160_1 + 2
                
                if (rsi_2 s> 0)
                    sub_140594770(&var_168)
                
                r14_1 = var_168
                UnDecorator::getReferenceType(r14_1, r12_1, 2)
                r14_1[sx.q(rsi_2) - 1] = 0
            
            if (rdi != 0)
                sub_140a74f90(rdi)
            
            var_168 = nullptr
            int16_t* const rcx_15 = &data_142d40450
            int64_t var_160_2 = 0
            
            if (rsi_2 != 0)
                rcx_15 = r14_1
            
            rdi = r14_1
            int32_t rax_8 = sub_140a54510(rcx_15, &data_142d4056c)
            
            if (rax_8 == 0)
                var_178 = nullptr
                int32_t var_170_1 = 0
                sub_1405947f0(&var_178, rax_8 + 2)
                int32_t rsi_3 = var_170_1 + 2
                
                if (rsi_3 s> 0)
                    sub_140594770(&var_178)
                
                int16_t* r14_2 = var_178
                UnDecorator::getReferenceType(r14_2, &(*U"{}[\nt")[3], 4)
                
                if (rdi != 0)
                    sub_140a74f90(rdi)
                
                var_178 = nullptr
                int64_t var_170_2 = 0
                uint64_t rcx_20
                int16_t* const rdx_16
                
                if (rsi_3 == 0)
                    rdx_16 = &data_142d40450
                    rcx_20 = 0
                label_14067e987:
                    
                    if (rcx_20.d == 0xffffffff)
                        rcx_20 = -1
                        
                        do
                            rcx_20 += 1
                        while (rdx_16[rcx_20] != 0)
                else
                    rcx_20 = zx.q(rsi_3 - 1)
                    
                    if (r14_2 != 0)
                        rdx_16 = r14_2
                        
                        if (rcx_20.d s> 0 && r14_2[sx.q(rsi_3) - 2] == 0)
                            rcx_20 = zx.q(rcx_20.d - 1)
                        
                        goto label_14067e987
                    
                    rdx_16 = nullptr
                    rcx_20 = 0
                
                (*(*arg3 + 0x150))(arg3, rdx_16, sx.q(rcx_20.d) * 2)
                int16_t* var_138 = nullptr
                rdi = nullptr
                int32_t var_130_1 = 0
                rsi_2 = 0
                
                if (r12_1 != 0 && *r12_1 != 0)
                    sub_1405947f0(&var_138, 2)
                    rsi_2 = var_130_1 + 2
                    
                    if (rsi_2 s> 0)
                        sub_140594770(&var_138)
                    
                    rdi = var_138
                    UnDecorator::getReferenceType(rdi, r12_1, 2)
                    rdi[sx.q(rsi_2) - 1] = 0
                
                if (r14_2 != 0)
                    sub_140a74f90(r14_2)
                
                var_138 = nullptr
                int64_t var_130_2 = 0
            
            int16_t* rcx_26 = &data_142d40450
            
            if (rsi_2 != 0)
                rcx_26 = rdi
            
            int32_t rax_12 = sub_140a54510(rcx_26, &data_142d576a0)
            
            if (rax_12 != 0)
                int16_t* rcx_43 = &data_142d40450
                
                if (rsi_2 != 0)
                    rcx_43 = rdi
                
                int32_t rax_18 = sub_140a54510(rcx_43, &data_142d84ee4)
                
                if (rax_18 != 0)
                    uint64_t rcx_60
                    int16_t* rdx_33
                    
                    if (rsi_2 == 0)
                        rdx_33 = &data_142d40450
                        rcx_60 = 0
                    label_14067eea2:
                        
                        if (rcx_60.d == 0xffffffff)
                            rcx_60 = -1
                            
                            do
                                rcx_60 += 1
                            while (rdx_33[rcx_60] != 0)
                    else
                        rcx_60 = zx.q(rsi_2 - 1)
                        
                        if (rdi != 0)
                            rdx_33 = rdi
                            
                            if (rcx_60.d s> 0 && rdi[sx.q(rsi_2) - 2] == 0)
                                rcx_60 = zx.q(rcx_60.d - 1)
                            
                            goto label_14067eea2
                        
                        rdx_33 = nullptr
                        rcx_60 = 0
                    
                    r12 = arg3
                    (*(*r12 + 0x150))(r12, rdx_33, sx.q(rcx_60.d) * 2)
                else
                    var_1a0 = nullptr
                    int32_t var_198_1 = 0
                    sub_1405947f0(&var_1a0, rax_18 + 2)
                    int32_t rsi_7 = var_198_1 + 2
                    
                    if (rsi_7 s> 0)
                        sub_140594770(&var_1a0)
                    
                    int16_t* r14_4 = var_1a0
                    UnDecorator::getReferenceType(r14_4, &(*U"{}[\nt")[3], 4)
                    
                    if (rdi != 0)
                        sub_140a74f90(rdi)
                    
                    var_1a0 = nullptr
                    int64_t var_198_2 = 0
                    uint64_t rcx_48
                    int16_t* const rdx_28
                    
                    if (rsi_7 == 0)
                        rdx_28 = &data_142d40450
                        rcx_48 = 0
                    label_14067ecfa:
                        
                        if (rcx_48.d == 0xffffffff)
                            rcx_48 = -1
                            
                            do
                                rcx_48 += 1
                            while (rdx_28[rcx_48] != 0)
                    else
                        rcx_48 = zx.q(rsi_7 - 1)
                        
                        if (r14_4 != 0)
                            rdx_28 = r14_4
                            
                            if (rcx_48.d s> 0 && r14_4[sx.q(rsi_7) - 2] == 0)
                                rcx_48 = zx.q(rcx_48.d - 1)
                            
                            goto label_14067ecfa
                        
                        rdx_28 = nullptr
                        rcx_48 = 0
                    
                    (*(*arg3 + 0x150))(arg3, rdx_28, sx.q(rcx_48.d) * 2)
                    var_190 = nullptr
                    int32_t var_188_1 = 0
                    sub_1405947f0(&var_190, 2)
                    int32_t rdi_2 = var_188_1 + 2
                    
                    if (rdi_2 s> 0)
                        sub_140594770(&var_190)
                    
                    int16_t* r15_2 = var_190
                    UnDecorator::getReferenceType(r15_2, &(*U"{}[\nt")[5], 4)
                    
                    if (r14_4 != 0)
                        sub_140a74f90(r14_4)
                    
                    var_190 = nullptr
                    int64_t var_188_2 = 0
                    uint64_t rcx_54
                    int16_t* rdx_30
                    
                    if (rdi_2 == 0)
                        rdx_30 = &data_142d40450
                        rcx_54 = 0
                    label_14067edc1:
                        
                        if (rcx_54.d == 0xffffffff)
                            rcx_54 = -1
                            
                            do
                                rcx_54 += 1
                            while (rdx_30[rcx_54] != 0)
                    else
                        rcx_54 = zx.q(rdi_2 - 1)
                        
                        if (r15_2 != 0)
                            rdx_30 = r15_2
                            
                            if (rcx_54.d s> 0 && r15_2[sx.q(rdi_2) - 2] == 0)
                                rcx_54 = zx.q(rcx_54.d - 1)
                            
                            goto label_14067edc1
                        
                        rdx_30 = nullptr
                        rcx_54 = 0
                    
                    (*(*arg3 + 0x150))(arg3, rdx_30, sx.q(rcx_54.d) * 2)
                    var_1c8 = nullptr
                    rdi = nullptr
                    int32_t var_1c0 = 0
                    
                    if (r12_1 != 0 && *r12_1 != 0)
                        sub_1405947f0(&var_1c8, 2)
                        int32_t rsi_9 = var_1c0 + 2
                        
                        if (rsi_9 s> 0)
                            sub_140594770(&var_1c8)
                        
                        rdi = var_1c8
                        UnDecorator::getReferenceType(rdi, r12_1, 2)
                        rdi[sx.q(rsi_9) - 1] = 0
                    
                    if (r15_2 != 0)
                        sub_140a74f90(r15_2)
                    
                    r12 = arg3
                    var_1c8 = nullptr
                    int64_t var_1c0_1 = 0
            else
                int16_t* var_128 = nullptr
                int32_t var_120_1 = 0
                sub_1405947f0(&var_128, rax_12 + 2)
                int32_t rsi_4 = var_120_1 + 2
                
                if (rsi_4 s> 0)
                    sub_140594770(&var_128)
                
                int16_t* r14_3 = var_128
                UnDecorator::getReferenceType(r14_3, &(*U"{}[\nt")[3], 4)
                
                if (rdi != 0)
                    sub_140a74f90(rdi)
                
                var_128 = nullptr
                int64_t var_120_2 = 0
                uint64_t rcx_31
                int16_t* const rdx_21
                
                if (rsi_4 == 0)
                    rdx_21 = &data_142d40450
                    rcx_31 = 0
                label_14067eacd:
                    
                    if (rcx_31.d == 0xffffffff)
                        rcx_31 = -1
                        
                        do
                            rcx_31 += 1
                        while (rdx_21[rcx_31] != 0)
                else
                    rcx_31 = zx.q(rsi_4 - 1)
                    
                    if (r14_3 != 0)
                        rdx_21 = r14_3
                        
                        if (rcx_31.d s> 0 && r14_3[sx.q(rsi_4) - 2] == 0)
                            rcx_31 = zx.q(rcx_31.d - 1)
                        
                        goto label_14067eacd
                    
                    rdx_21 = nullptr
                    rcx_31 = 0
                
                (*(*arg3 + 0x150))(arg3, rdx_21, sx.q(rcx_31.d) * 2)
                int16_t* var_118 = nullptr
                int32_t var_110_1 = 0
                sub_1405947f0(&var_118, 2)
                int32_t rdi_1 = var_110_1 + 2
                
                if (rdi_1 s> 0)
                    sub_140594770(&var_118)
                
                int16_t* r15_1 = var_118
                UnDecorator::getReferenceType(r15_1, &(*U"{}[\nt")[4], 4)
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
                
                var_118 = nullptr
                int64_t var_110_2 = 0
                uint64_t rcx_37
                int16_t* const rdx_23
                
                if (rdi_1 == 0)
                    rdx_23 = &data_142d40450
                    rcx_37 = 0
                label_14067eb90:
                    
                    if (rcx_37.d == 0xffffffff)
                        rcx_37 = -1
                        
                        do
                            rcx_37 += 1
                        while (rdx_23[rcx_37] != 0)
                else
                    rcx_37 = zx.q(rdi_1 - 1)
                    
                    if (r15_1 != 0)
                        rdx_23 = r15_1
                        
                        if (rcx_37.d s> 0 && r15_1[sx.q(rdi_1) - 2] == 0)
                            rcx_37 = zx.q(rcx_37.d - 1)
                        
                        goto label_14067eb90
                    
                    rdx_23 = nullptr
                    rcx_37 = 0
                
                (*(*arg3 + 0x150))(arg3, rdx_23, sx.q(rcx_37.d) * 2)
                var_1b0 = nullptr
                rdi = nullptr
                int32_t var_1a8_1 = 0
                
                if (r12_1 != 0 && *r12_1 != 0)
                    sub_1405947f0(&var_1b0, 2)
                    int32_t rsi_6 = var_1a8_1 + 2
                    
                    if (rsi_6 s> 0)
                        sub_140594770(&var_1b0)
                    
                    rdi = var_1b0
                    UnDecorator::getReferenceType(rdi, r12_1, 2)
                    rdi[sx.q(rsi_6) - 1] = 0
                
                if (r15_1 != 0)
                    sub_140a74f90(r15_1)
                
                r12 = arg3
                var_1b0 = nullptr
                int64_t var_1a8_2 = 0
            
            r13_1 += 1
            rax_5 = var_150
            rcx_10 = var_108.q + 1
            rdx_11 = var_100_1
        
        int64_t rcx_63 = var_158.q
        
        if (rcx_63 != 0)
            sub_140a74f90(rcx_63)
        
        r13 = -1
int32_t rdx_51 = *(*arg2 + 8)
wchar32 const* const rdx_57
int32_t rsi_20

if (rdx_51 == 2)
    var_1c8 = nullptr
    int32_t var_1c0_6 = 0
    sub_1405947f0(&var_1c8, 2)
    rsi_20 = var_1c0_6 + 2
    
    if (rsi_20 s> 0)
        sub_140594770(&var_1c8)
    
    rdx_57 = &data_142d4056c
label_14067f6c5:
    int16_t* r14_8 = var_1c8
    UnDecorator::getReferenceType(r14_8, rdx_57, 4)
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    rdi = r14_8
    uint64_t rcx_120
    int16_t* rdx_58
    
    if (rsi_20 == 0)
        rdx_58 = &data_142d40450
        rcx_120 = 0
    label_14067f717:
        
        if (rcx_120.d == 0xffffffff)
            rcx_120 = -1
            
            do
                rcx_120 += 1
            while (rdx_58[rcx_120] != 0)
    else
        rcx_120 = zx.q(rsi_20 - 1)
        
        if (r14_8 != 0)
            rdx_58 = r14_8
            
            if (rcx_120.d s> 0 && r14_8[sx.q(rsi_20) - 2] == 0)
                rcx_120 = zx.q(rcx_120.d - 1)
            
            goto label_14067f717
        
        rdx_58 = nullptr
        rcx_120 = 0
    
    (*(*r12 + 0x150))(r12, rdx_58, sx.q(rcx_120.d) * 2)
else
    if (rdx_51 == 5)
        var_1c8 = nullptr
        int32_t var_1c0_5 = 0
        sub_1405947f0(&var_1c8, 2)
        rsi_20 = var_1c0_5 + 2
        
        if (rsi_20 s> 0)
            sub_140594770(&var_1c8)
        
        rdx_57 = &data_142d84a20
        goto label_14067f6c5
    
    if (rdx_51 == 6)
        var_1c8 = nullptr
        int32_t var_1c0_4 = 0
        sub_1405947f0(&var_1c8, 2)
        rsi_20 = var_1c0_4 + 2
        
        if (rsi_20 s> 0)
            sub_140594770(&var_1c8)
        
        rdx_57 = &(*U"{}[\nt")[1]
        goto label_14067f6c5

if (arg4 == 0)
    var_1c8 = nullptr
    int32_t var_1c0_7 = 0
    sub_1405947f0(&var_1c8, 2)
    int32_t rsi_21 = var_1c0_7 + 2
    
    if (rsi_21 s> 0)
        sub_140594770(&var_1c8)
    
    int16_t* r14_9 = var_1c8
    UnDecorator::getReferenceType(r14_9, &data_142d7fa60, 4)
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    rdi = r14_9
    int16_t* rdx_60
    
    if (rsi_21 == 0)
        rdx_60 = &data_142d40450
    label_14067f85c:
        
        if (rbx != 0xffffffff)
            r13 = zx.q(rbx)
        else
            do
                r13 += 1
            while (rdx_60[r13] != 0)
    else
        if (r14_9 != 0)
            rdx_60 = r14_9
            rbx = rsi_21 - 1
            
            if (rsi_21 - 1 s> 0 && r14_9[sx.q(rsi_21 - 1) - 1] == 0)
                rbx = rsi_21 - 2
            
            goto label_14067f85c
        
        rdx_60 = nullptr
        r13 = zx.q(rbx)
    
    (*(*r12 + 0x150))(r12, rdx_60, sx.q(r13.d) * 2)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t result = sub_140669d70(arg2)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
