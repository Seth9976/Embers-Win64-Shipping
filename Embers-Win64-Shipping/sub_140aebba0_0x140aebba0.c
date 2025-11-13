// 函数: sub_140aebba0
// 地址: 0x140aebba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

uint64_t rbx
rbx.b = 0
int64_t* var_100 = nullptr
char arg_10 = 0
int64_t* r15 = nullptr
int16_t* var_158 = nullptr
int64_t var_150 = 0
int16_t* wcs1_1 = nullptr
int32_t var_108 = 0

while (true)
    int16_t* var_148 = rdx
    
    while (true)
        int16_t rax_1 = *rdx
        
        if (rax_1 == 0xd || rax_1 == 0xa)
            rdx = &rdx[1]
            break
        
        int32_t arg_18 = 0
        sub_140b1e510(&var_148, &wcs1_1, &arg_18, 0)
        rdx = var_148
        
        if (rdx == 0 || *rdx == 0)
            rbx.b = 1
            arg_10 = 1
        
        int16_t* string_7
        int16_t* wcs1
        
        if (var_108 == 0)
            wcs1 = &data_142d40450
        else
            wcs1 = wcs1_1
            
            if (*wcs1 != 0)
                do
                    int64_t rax_2 = -1
                    
                    do
                        rax_2 += 1
                    while (wcs1[rax_2] != 0)
                    
                    if (iswspace(wcs1[sx.q(rax_2.d) - 1]) == 0)
                        break
                    
                    int64_t rax_5 = -1
                    
                    do
                        rax_5 += 1
                    while (wcs1[rax_5] != 0)
                    
                    wcs1[sx.q(rax_5.d) - 1] = 0
                while (*wcs1 != 0)
                
                rdx = var_148
            
            if (*wcs1 != 0x5b)
                goto label_140aebe89
            
            int64_t rax_7 = -1
            
            do
                rax_7 += 1
            while (wcs1[rax_7] != 0)
            
            if (wcs1[sx.q(rax_7.d) - 1] == 0x5d)
                int64_t rax_9 = -1
                
                do
                    rax_9 += 1
                while (wcs1[1 + rax_9] != 0)
                
                int32_t rdx_2 = 0
                int64_t var_138 = 0
                int32_t rcx_2 = 0
                int32_t var_130_1 = 0
                int32_t var_12c_1 = 0
                wcs1[sx.q(rax_9.d)] = 0
                
                if (wcs1 != -2 && wcs1[1] != 0)
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (wcs1[1 + rbx_1] != 0)
                    
                    if (rbx_1.d + 1 s> 0)
                        sub_1405947f0(&var_138, rbx_1.d + 1)
                        rcx_2 = var_12c_1
                        rdx_2 = var_130_1
                    
                    int32_t rax_11 = rbx_1.d + 1 + rdx_2
                    int32_t var_130_2 = rax_11
                    
                    if (rax_11 s> rcx_2)
                        sub_140594770(&var_138)
                    
                    UnDecorator::getReferenceType(var_138, &wcs1[1], (rbx_1.d + 1) * 2)
                
                int64_t* rax_12 = sub_140af00b0(rsi, &var_138)
                int64_t rcx_7 = var_138
                r15 = rax_12
                var_100 = rax_12
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                if (var_158 != &wcs1[1])
                    int32_t rbx_4
                    
                    if (wcs1 == -2 || wcs1[1] == 0)
                        rbx_4 = 0
                    else
                        int64_t rbx_3 = -1
                        
                        do
                            rbx_3 += 1
                        while (wcs1[1 + rbx_3] != 0)
                        
                        rbx_4 = rbx_3.d + 1
                    
                    int32_t rcx_8 = var_150:4.d
                    int32_t rdx_6 = 0
                    var_150.d = 0
                    
                    if (rcx_8 != rbx_4)
                        sub_1405947f0(&var_158, rbx_4)
                        rcx_8 = var_150:4.d
                        rdx_6 = var_150.d
                    
                    int32_t rax_13 = rbx_4 + rdx_6
                    var_150.d = rax_13
                    
                    if (rax_13 s> rcx_8)
                        sub_140594770(&var_158)
                    
                    if (rbx_4 != 0)
                        memcpy(var_158, &wcs1[1], rbx_4 * 2)
                
                int16_t* string_9 = nullptr
                int32_t rdx_9 = 0
                int32_t var_120_1 = 0
                int32_t rcx_12 = 0
                int32_t var_11c_1 = 0
                
                if (wcs1 != -2 && wcs1[1] != 0)
                    int64_t rbx_5 = -1
                    
                    do
                        rbx_5 += 1
                    while (wcs1[1 + rbx_5] != 0)
                    
                    if (rbx_5.d + 1 s> 0)
                        sub_1405947f0(&string_9, rbx_5.d + 1)
                        rcx_12 = var_11c_1
                        rdx_9 = var_120_1
                    
                    int32_t rax_14 = rdx_9 + rbx_5.d + 1
                    int32_t var_120_2 = rax_14
                    
                    if (rax_14 s> rcx_12)
                        sub_140594770(&string_9)
                    
                    UnDecorator::getReferenceType(string_9, &wcs1[1], (rbx_5.d + 1) * 2)
                
                sub_140af0230(r15, &string_9, &rsi[0x1e])
                string_7 = string_9
                goto label_140aec3c0
        
    label_140aebe89:
        int32_t var_198
        void* var_190
        int32_t var_188
        
        if (r15 != 0)
            int16_t rax_15 = *wcs1
            
            if (rax_15 != 0 && rax_15 != 0x3b)
                wchar16* rax_16 = wcsstr(wcs1, &data_142e1462c)
                
                if (rax_16 == 0)
                    rdx = var_148
                    rbx = zx.q(arg_10)
                else
                    *rax_16 = 0
                    void* rbx_8 = &rax_16[1]
                    wint_t _C = *wcs1
                    
                    while (_C != 0)
                        if (iswspace(_C) == 0)
                            break
                        
                        _C = wcs1[1]
                        wcs1 = &wcs1[1]
                    
                    int16_t rcx_19 = *wcs1
                    
                    if (rcx_19 == 0x7e)
                        rcx_19 = wcs1[1]
                        wcs1 = &wcs1[1]
                    
                    int16_t r14_1 = rcx_19
                    
                    if (r14_1 - 0x21 u> 0x1f || not(test_bit(0x80003601, zx.d(r14_1 - 0x21))))
                        r14_1 = 0x20
                    else
                        rcx_19 = wcs1[1]
                        wcs1 = &wcs1[1]
                    
                    if (rcx_19 != 0)
                        do
                            int64_t rax_20 = -1
                            
                            do
                                rax_20 += 1
                            while (wcs1[rax_20] != 0)
                            
                            if (iswspace(wcs1[sx.q(rax_20.d) - 1]) == 0)
                                break
                            
                            int64_t rax_23 = -1
                            
                            do
                                rax_23 += 1
                            while (wcs1[rax_23] != 0)
                            
                            wcs1[sx.q(rax_23.d) - 1] = 0
                        while (*wcs1 != 0)
                    
                    wint_t _C_1 = *rbx_8
                    int16_t* string_6 = nullptr
                    int64_t var_1a0_1 = 0
                    
                    while (_C_1 != 0)
                        if (iswspace(_C_1) == 0)
                            while (*rbx_8 != 0)
                                int64_t rax_26 = -1
                                
                                do
                                    rax_26 += 1
                                while (*(rbx_8 + (rax_26 << 1)) != 0)
                                
                                if (iswspace(*(rbx_8 + (sx.q(rax_26.d) << 1) - 2)) == 0)
                                    break
                                
                                int64_t rax_29 = -1
                                
                                do
                                    rax_29 += 1
                                while (*(rbx_8 + (rax_29 << 1)) != 0)
                                
                                *(rbx_8 + (sx.q(rax_29.d) << 1) - 2) = 0
                            
                            break
                        
                        _C_1 = *(rbx_8 + 2)
                        rbx_8 += 2
                    
                    int16_t rax_31 = *rbx_8
                    
                    if (rax_31 == 0x22)
                        j_sub_140b08930(rbx_8, &string_6, nullptr)
                    else if (string_6 != rbx_8)
                        int32_t rsi_2
                        
                        if (rax_31 == 0)
                            rsi_2 = 0
                        else
                            int64_t rsi_1 = -1
                            
                            do
                                rsi_1 += 1
                            while (*(rbx_8 + (rsi_1 << 1)) != 0)
                            
                            rsi_2 = rsi_1.d + 1
                        
                        int32_t rdx_14 = 0
                        var_1a0_1.d = 0
                        
                        if (0 != rsi_2)
                            sub_1405947f0(&string_6, rsi_2)
                            rdx_14 = var_1a0_1.d
                        
                        int32_t rax_32 = rsi_2 + rdx_14
                        var_1a0_1.d = rax_32
                        
                        if (rax_32 s> 0)
                            sub_140594770(&string_6)
                        
                        if (rsi_2 != 0)
                            memcpy(string_6, rbx_8, rsi_2 * 2)
                        
                        rsi = arg1
                    
                    int64_t var_184
                    void* var_140
                    
                    if (r14_1 == 0x2b)
                        void var_78
                        void* rdx_18 = *sub_140b58260(&var_78, wcs1, 1)
                        var_140 = rdx_18
                        
                        if (sub_140af6990(r15, rdx_18, &string_6) == 0)
                            int32_t rdx_19 = var_1a0_1.d
                            int16_t* const string = &data_142d40450
                            int16_t* string_4 = string_6
                            var_190.d = rdx_19
                            
                            if (rdx_19 != 0)
                                string = string_4
                            
                            var_198.q = string_4
                            string_6 = nullptr
                            var_190:4.d = var_1a0_1:4.d
                            int64_t var_1a0_2 = 0
                            var_188.q = 0
                            var_184 = 0
                            wchar16* i_10 = wcschr(string, 0x25)
                            wchar16* i_7 = i_10
                            
                            if (i_10 != 0)
                                wchar16* i
                                
                                do
                                    int64_t* rax_36 = sub_140af9950(i_7)
                                    
                                    if (rax_36 != 0)
                                        sub_140aef750(&var_198, &var_188)
                                        break
                                    
                                    i = wcschr(&i_7[1], (rax_36 + 0x25).w)
                                    i_7 = i
                                while (i != 0)
                            
                            sub_140ae51a0(r15, &var_140, &var_198)
                        label_140aec94d:
                            int64_t rcx_92 = var_188.q
                            
                            if (rcx_92 != 0)
                                sub_140a74f90(rcx_92)
                            
                            int64_t rcx_93 = var_198.q
                            
                            if (rcx_93 != 0)
                                sub_140a74f90(rcx_93)
                    else if (r14_1 == 0x2d)
                        int32_t rbx_9 = var_1a0_1.d
                        int16_t* string_3 = nullptr
                        int16_t* string_8 = string_6
                        var_198.q = 0
                        var_190.d = rbx_9
                        
                        if (rbx_9 != 0)
                            sub_1405a4c70(&var_198, var_1a0_1.d, 0)
                            memcpy(var_198.q, string_8, rbx_9 * 2)
                            string_3 = var_198.q
                            rbx_9 = var_190.d
                        else
                            __builtin_memset(&var_190:4, 0, 0x14)
                        
                        int16_t* const string_1 = &data_142d40450
                        
                        if (rbx_9 != 0)
                            string_1 = string_3
                        
                        wchar16* i_11 = wcschr(string_1, 0x25)
                        wchar16* i_8 = i_11
                        
                        if (i_11 != 0)
                            wchar16* i_1
                            
                            do
                                int64_t* rax_37 = sub_140af9950(i_8)
                                
                                if (rax_37 != 0)
                                    sub_140aef750(&var_198, &var_188)
                                    break
                                
                                i_1 = wcschr(&i_8[1], (rax_37 + 0x25).w)
                                i_8 = i_1
                            while (i_1 != 0)
                        
                        void var_70
                        int64_t rbx_10 = *sub_140b58260(&var_70, wcs1, 1)
                        sub_140a6d3f0(r15, r15[1].d - *(r15 + 0x34), 0)
                        
                        if (r15[9].d != 0)
                            int32_t rax_40 = sub_140b5ead0(rbx_10.d) + rbx_10:4.d
                            void* r8_15 = &r15[7]
                            void* rcx_41 = *(r8_15 + 8)
                            
                            if (rcx_41 != 0)
                                r8_15 = rcx_41
                            
                            int32_t i_2 = *(r8_15 + (((sx.q(r15[9].d) - 1) & sx.q(rax_40)) << 2))
                            
                            if (i_2 != 0xffffffff)
                                int64_t r11_1 = *r15
                                int32_t i_6 = i_2
                                
                                do
                                    i_2 = *(r11_1 + sx.q(i_2) * 0x30 + 0x28)
                                    
                                    if (*(r11_1 + sx.q(i_6) * 0x30) == rbx_10)
                                        if (i_6 != 0xffffffff)
                                            while (true)
                                                int16_t* const r10_1 = &data_142d40450
                                                int64_t r8_19 = sx.q(i_6) * 6
                                                
                                                if (var_190.d != 0)
                                                    r10_1 = var_198.q
                                                
                                                void* rcx_45
                                                
                                                if (*(r11_1 + (r8_19 << 3) + 0x10) == 0)
                                                    rcx_45 = &data_142d40450
                                                else
                                                    rcx_45 = *(r11_1 + (r8_19 << 3) + 8)
                                                
                                                void* r10_2 = r10_1 - rcx_45
                                                uint32_t j
                                                uint32_t r9_1
                                                
                                                do
                                                    r9_1 = zx.d(*rcx_45)
                                                    j = zx.d(*(rcx_45 + r10_2))
                                                    
                                                    if (r9_1 != j)
                                                        break
                                                    
                                                    rcx_45 += 2
                                                while (j != 0)
                                                
                                                if (r9_1 - j == 0)
                                                    sub_140afe3b0(r15, i_6)
                                                    break
                                                
                                                i_6 = i_2
                                                
                                                if (i_2 == 0xffffffff)
                                                    break
                                                
                                                while (true)
                                                    i_2 = *(r11_1 + sx.q(i_2) * 0x30 + 0x28)
                                                    
                                                    if (*(r11_1 + sx.q(i_6) * 0x30) == rbx_10)
                                                        break
                                                    
                                                    i_6 = i_2
                                                    
                                                    if (i_2 == 0xffffffff)
                                                        goto label_140aec370
                                        
                                        break
                                    
                                    i_6 = i_2
                                while (i_2 != 0xffffffff)
                        
                    label_140aec370:
                        int64_t rcx_49 = var_188.q
                        
                        if (rcx_49 != 0)
                            sub_140a74f90(rcx_49)
                        
                        int64_t rcx_50 = var_198.q
                        
                        if (rcx_50 != 0)
                            sub_140a74f90(rcx_50)
                        
                        if (sub_140aec990(r15) != 0)
                            sub_140942f40(r15)
                        
                        rsi = arg1
                    else if (r14_1 == 0x2e)
                        void var_68
                        void* rdx_40 = *sub_140b58260(&var_68, wcs1, 1)
                        var_140 = rdx_40
                        
                        if (sub_140af6990(r15, rdx_40, &string_6) == 0)
                            int32_t rdx_41 = var_1a0_1.d
                            int16_t* string_2 = &data_142d40450
                            int16_t* string_5 = string_6
                            var_190.d = rdx_41
                            
                            if (rdx_41 != 0)
                                string_2 = string_5
                            
                            var_198.q = string_5
                            string_6 = nullptr
                            var_190:4.d = var_1a0_1:4.d
                            int64_t var_1a0_3 = 0
                            var_188.q = 0
                            var_184 = 0
                            wchar16* i_12 = wcschr(string_2, 0x25)
                            wchar16* i_9 = i_12
                            
                            if (i_12 != 0)
                                wchar16* i_3
                                
                                do
                                    int64_t* rax_55 = sub_140af9950(i_9)
                                    
                                    if (rax_55 != 0)
                                        sub_140aef750(&var_198, &var_188)
                                        break
                                    
                                    i_3 = wcschr(&i_9[1], (rax_55 + 0x25).w)
                                    i_9 = i_3
                                while (i_3 != 0)
                            
                            sub_140ae49f0(r15, &var_140, &var_198)
                            goto label_140aec94d
                    else
                        void var_60
                        
                        if (r14_1 == 0x21)
                            sub_140a4f230(r15, *sub_140b58260(&var_60, wcs1, 1))
                        else if (r14_1 == 0x40)
                            int64_t var_f0
                            sub_140b58260(&var_f0, wcs1, 1)
                            int32_t var_a8
                            sub_140a696e0(&r15[0xa], &var_a8)
                            int64_t* var_a0
                            *var_a0 = var_f0
                            var_a0[1] = 0
                            var_a0[1] = string_6
                            string_6 = nullptr
                            var_a0[2].d = var_1a0_1.d
                            *(var_a0 + 0x14) = var_1a0_1:4.d
                            int64_t var_1a0_4 = 0
                            var_a0[3].d = 0xffffffff
                            int64_t rbx_13 = *var_a0
                            void var_f8
                            sub_14090fbf0(&r15[0xa], &var_f8, 
                                (rbx_13 u>> 0x20).d + sub_140b5ead0(rbx_13.d), var_a0, var_a8, 
                                nullptr)
                            rsi = arg1
                        else
                            void var_58
                            
                            if (r14_1 != 0x2a)
                                if (sub_140af6990(r15, *sub_140b58260(&var_58, wcs1, 1), &string_6)
                                        == 0)
                                    int32_t var_118
                                    void var_50
                                    sub_14093f560(r15, &var_118, *sub_140b58260(&var_50, wcs1, 1))
                                    int64_t rax_77 = sx.q(var_118)
                                    int64_t rax_79
                                    int64_t* rbx_19
                                    
                                    if (rax_77.d != 0xffffffff)
                                        rax_79 = rax_77 * 0x30
                                        rbx_19 = rax_79 + *r15 + 8
                                    
                                    if (rax_77.d == 0xffffffff || rax_79 == neg.q(*r15))
                                        rbx_19 = nullptr
                                    
                                    var_198.q = string_6
                                    var_190.d = var_1a0_1.d
                                    var_190:4.d = var_1a0_1:4.d
                                    int64_t var_1a0_6 = 0
                                    var_188.q = 0
                                    var_184 = 0
                                    string_6 = nullptr
                                    sub_140aef990(&var_198)
                                    
                                    if (rbx_19 != 0)
                                        sub_140ae7d20(rbx_19, &var_198)
                                    else
                                        void var_e0
                                        sub_140b58260(&var_e0, wcs1, (rbx_19 + 1).d)
                                        sub_140ae49f0(r15, &var_e0, &var_198)
                                    
                                    goto label_140aec94d
                            else
                                int16_t* r12_1 = var_158
                                int32_t rsi_3 = var_150.d
                                int32_t rcx_74
                                int16_t* rdx_50
                                
                                if (rsi_3 == 0)
                                    rdx_50 = &data_142d40450
                                    rcx_74 = 0
                                else
                                    rdx_50 = r12_1
                                    rcx_74 = rsi_3 - 1
                                
                                int64_t r13_1 = sx.q(sub_1405969c0(rcx_74, rdx_50))
                                void* rsi_5
                                
                                if (rsi[0x1f].d == *(rsi + 0x124))
                                label_140aec790:
                                    var_140 = &var_158
                                    int32_t var_98
                                    sub_140a697f0(&rsi[0x1e], &var_98)
                                    int64_t* var_90
                                    sub_140a5b980(&var_140, var_90)
                                    var_90[0xc].d = 0xffffffff
                                    int32_t arg_20
                                    sub_140aee260(&rsi[0x1e], &arg_20, r13_1.d, var_90, var_98, 
                                        nullptr)
                                    rsi_5 = sx.q(arg_20) * 0x68 + rsi[0x1e]
                                else
                                    void* rdx_51 = rsi[0x26]
                                    void* r9_4 = &rsi[0x25]
                                    
                                    if (rdx_51 != 0)
                                        r9_4 = rdx_51
                                    
                                    int32_t rbx_15 =
                                        *(r9_4 + (((sx.q(rsi[0x27].d) - 1) & r13_1) << 2))
                                    
                                    if (rbx_15 == 0xffffffff)
                                        goto label_140aec790
                                    
                                    int64_t rcx_76 = rsi[0x1e]
                                    int64_t* r15_1
                                    
                                    while (true)
                                        int16_t* rdx_52 = &data_142d40450
                                        r15_1 = sx.q(rbx_15) * 0x68
                                        
                                        if (rsi_3 != 0)
                                            rdx_52 = r12_1
                                        
                                        int16_t* const rcx_77
                                        
                                        if (*(r15_1 + rcx_76 + 8) == 0)
                                            rcx_77 = &data_142d40450
                                        else
                                            rcx_77 = *(r15_1 + rcx_76)
                                        
                                        if (sub_140a54510(rcx_77, rdx_52) == 0)
                                            break
                                        
                                        rcx_76 = rsi[0x1e]
                                        rbx_15 = *(r15_1 + rcx_76 + 0x60)
                                        
                                        if (rbx_15 == 0xffffffff)
                                            goto label_140aec790
                                        
                                        rsi_3 = var_150.d
                                        r12_1 = var_158
                                    
                                    if (rbx_15 == 0xffffffff)
                                        goto label_140aec790
                                    
                                    void* rsi_4 = rsi[0x1e]
                                    rsi_5 = rsi_4 + r15_1
                                    
                                    if (rsi_4 == neg.q(r15_1))
                                        goto label_140aec790
                                
                                int64_t var_e8
                                sub_140b58260(&var_e8, wcs1, 1)
                                int32_t var_88
                                sub_140a696e0(rsi_5 + 0x10, &var_88)
                                int64_t* var_80
                                *var_80 = var_e8
                                var_80[1] = 0
                                var_80[1] = string_6
                                string_6 = nullptr
                                var_80[2].d = var_1a0_1.d
                                *(var_80 + 0x14) = var_1a0_1:4.d
                                int64_t var_1a0_5 = 0
                                var_80[3].d = 0xffffffff
                                int64_t rbx_17 = *var_80
                                void var_f4
                                sub_14090fbf0(rsi_5 + 0x10, &var_f4, 
                                    (rbx_17 u>> 0x20).d + sub_140b5ead0(rbx_17.d), var_80, var_88, 
                                    nullptr)
                                r15 = var_100
                                rsi = arg1
                    string_7 = string_6
                    rsi[0xa].b = 1
                label_140aec3c0:
                    
                    if (string_7 == 0)
                        rdx = var_148
                        rbx = zx.q(arg_10)
                    else
                        sub_140a74f90(string_7)
                        rdx = var_148
                        rbx = zx.q(arg_10)
        
        if (rbx.b == 0)
            continue
        
        sub_140b019a0(rsi)
        sub_140aed200(rsi, rsi[1].d - *(rsi + 0x34), 1)
        bool cond:1 = rsi[5].d == 0
        var_190 = &rsi[2]
        var_198 = 0
        int32_t var_194 = 1
        var_188 = 0xffffffff
        int64_t var_184_1 = 0
        
        if (not(cond:1))
            sub_14059bdd0(&var_198)
        
        uint128_t zmm4 = var_188.o
        int64_t* var_b0 = rsi
        uint128_t zmm0 = var_198.o
        uint128_t var_c0 = zmm4
        int16_t var_160 = 0
        var_188.o = zmm0
        void* result = zmm0.q
        zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
        int32_t rcx_56 = _mm_bsrli_si128(zmm4, 4).d
        var_198.o = rsi.o
        uint128_t var_178 = zmm0
        
        if (rcx_56 s< *(result + 0x18))
            int32_t i_5
            int32_t i_4 = i_5
            
            do
                void* rbx_12 = sx.q(i_4) * 0xb8 + *var_198.q
                sub_140b018c0(rbx_12 + 0x10)
                sub_140a6d3f0(rbx_12 + 0x10, *(rbx_12 + 0x18) - *(rbx_12 + 0x44), 1)
                var_184_1:4.d &= not.d(var_190:4.d)
                sub_14059bdd0(&var_190)
                result = var_188.q
                i_4 = i_5
            while (i_4 s< *(result + 0x18))
            
            if (var_160.b != 0 && var_160:1.b != 0)
                result = sub_140aed200(rsi, rsi[1].d - *(rsi + 0x34), 1)
        
        int16_t* wcs1_2 = wcs1_1
        
        if (wcs1_2 != 0)
            result = sub_140a74f90(wcs1_2)
        
        int16_t* rcx_61 = var_158
        
        if (rcx_61 == 0)
            return result
        
        return sub_140a74f90(rcx_61)
