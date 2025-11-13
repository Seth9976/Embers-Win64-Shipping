// 函数: sub_141e8c030
// 地址: 0x141e8c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 0xf8
int64_t* r15 = arg1 + 0x10
void* lpCriticalSection_1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t r11 = r15[5].d
int64_t* var_160 = r15
int32_t var_158 = 0
int32_t r8 = 0
int32_t var_154 = 1
int32_t rcx_1 = 0
void* var_150 = &r15[2]
int32_t var_148 = 0xffffffff
int64_t var_144 = 0

if (r11 != 0)
    void* rax_1 = r15[4]
    void* r9_1 = &r15[2]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141e8c0fb:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_154_1 = rax_8
        int32_t var_a8_1 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_144.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_144.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_144:4.d = rcx_1
            var_158 = r8
            
            if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_148_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e8c0fb
        
        var_144.d = r11

int32_t rdx_6 = r15[5].d
int128_t var_108 = var_158.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t* var_110
var_110.d = r8_2
int128_t var_f8 = 0xffffffff
int64_t var_70 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t zmm1 = var_108
var_108:8.d = r14
var_108:0xc.d = rdx_6
var_f8.d = r9_3
int128_t var_90 = r15.o
int128_t var_80 = zmm1

if (rdx_6 != r11)
    void* rax_11 = r15[4]
    void* r10_1 = &r15[2]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r14
    
    if (rdx_10 != 0)
    label_141e8c1eb:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t var_a4_1 = temp0_3
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_3
        
        var_108:0xc.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_108:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_f8.d = r9_3
            var_110.d = r8_2
            
            if (rcx_6.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_108:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e8c1eb
        
        var_108:0xc.d = r11

while (true)
    int64_t rax_21 = sx.q(var_80:0xc.d)
    int64_t* rcx_8 = var_90.q
    
    if (rax_21.d == (var_108:8.q u>> 0x20).d && var_80.q == &r15[2] && rcx_8 == r15)
        void* rdi_2 = arg1
        sub_141e82770(rdi_2)
        int32_t r8_3 = 0
        int64_t* r12 = *(rdi_2 + 0x60)
        int64_t r13 = 0
        uint64_t rsi_2 = sx.q(*(rdi_2 + 0x68)) << 3 u>> 3
        
        if (r12 u> &r12[sx.q(*(rdi_2 + 0x68))])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rsi_3 = *r12
                int64_t* rax_26 = rsi_3[2]
                
                if (rax_26 != 0)
                    void* r14_1 = *rax_26
                    
                    if (r14_1 != 0)
                        int32_t arg_20
                        sub_140865c40(r15, &arg_20, r14_1)
                        int64_t rax_27 = sx.q(arg_20)
                        r8_3 = 0
                        void* const rcx_14
                        
                        if (rax_27.d == 0xffffffff)
                            rcx_14 = nullptr
                        else
                            rcx_14 = *r15 + rax_27 * 0x18
                        
                        int64_t* rdx_14 = rcx_14 + 8
                        
                        if (rcx_14 == 0)
                            rdx_14 = nullptr
                        
                        if (rdx_14 != 0)
                            void* rdx_15 = *rdx_14
                            bool z_1
                            
                            if (0 == *(rdx_15 + 8))
                                *(rdx_15 + 8) = 0
                                z_1 = true
                            else
                                *(rdx_15 + 8)
                                z_1 = false
                            
                            if (z_1)
                                void* rax_30 = sub_141e7edb0(rdi_2, r14_1)
                                int64_t rdx_17 = *rsi_3
                                int64_t* rax_31 = (*(rdx_17 + 0x60))(rsi_3, rdx_17)
                                
                                if (rax_31 != 0)
                                    int64_t rdx_18 = *rax_31
                                    int32_t i = (*(rdx_18 + 0x30))(rax_31, rdx_18)
                                    
                                    if (i s>= 0 && i s< **(r14_1 + 0x2e8))
                                        int32_t* r8_5 = *rax_30
                                        int64_t r9_5 = sx.q(*(rax_30 + 8))
                                        int32_t* rdx_19 = r8_5
                                        void* rax_32 = &r8_5[r9_5]
                                        
                                        if (r8_5 != rax_32)
                                            while (*rdx_19 != i)
                                                rdx_19 = &rdx_19[1]
                                                
                                                if (rdx_19 == rax_32)
                                                    goto label_141e8c38b
                                        
                                        if (r8_5 == rax_32
                                            || ((rdx_19 - r8_5) s>> 2).d == 0xffffffff)
                                        label_141e8c38b:
                                            int32_t rax_33 = (r9_5 + 1).d
                                            *(rax_30 + 8) = rax_33
                                            
                                            if (rax_33 s> *(rax_30 + 0xc))
                                                sub_1405a4cf0(rax_30)
                                            
                                            *((r9_5 << 2) + *rax_30) = i
                                        
                                        int32_t* r8_6 = *rax_30
                                        int32_t i_1 = mods.dp.d(sx.q(i + 1), **(r14_1 + 0x2e8))
                                        int32_t* rcx_21 = r8_6
                                        int64_t rdx_25 = sx.q(*(rax_30 + 8))
                                        int32_t* r14_2 = rdx_25 << 2
                                        void* rax_37 = r14_2 + r8_6
                                        
                                        if (r8_6 != rax_37)
                                            while (*rcx_21 != i_1)
                                                rcx_21 = &rcx_21[1]
                                                
                                                if (rcx_21 == rax_37)
                                                    goto label_141e8c3ee
                                        
                                        if (r8_6 == rax_37
                                            || ((rcx_21 - r8_6) s>> 2).d == 0xffffffff)
                                        label_141e8c3ee:
                                            int32_t rax_38 = (rdx_25 + 1).d
                                            *(rax_30 + 8) = rax_38
                                            
                                            if (rax_38 s> *(rax_30 + 0xc))
                                                sub_1405a4cf0(rax_30)
                                            
                                            *(r14_2 + *rax_30) = i_1
                                        
                                        r15 = var_160
                                        *(rax_30 + 0x10) = 1
                                
                                rdi_2 = arg1
                                r8_3 = 0
                
                r12 = &r12[1]
                r13 += 1
            while (r13 != rsi_2)
            
            lpCriticalSection = lpCriticalSection_1
        
        int64_t r13_1 = 0
        int64_t* r12_1 = *(rdi_2 + 0x120)
        uint64_t rcx_26 = sx.q(*(rdi_2 + 0x128)) << 3 u>> 3
        
        if (r12_1 u> &r12_1[sx.q(*(rdi_2 + 0x128))])
            rcx_26 = 0
        
        if (rcx_26 != 0)
            do
                int64_t* rsi_6 = *r12_1
                void* rax_43 = (*(*rsi_6 + 0x78))(rsi_6)
                
                if (rax_43 == 0)
                    r8_3 = 0
                else
                    int32_t var_168
                    sub_140865c40(r15, &var_168, rax_43)
                    int64_t rcx_29 = sx.q(var_168)
                    void* const r8_8
                    
                    if (rcx_29.d == 0xffffffff)
                        r8_8 = nullptr
                    else
                        r8_8 = *r15 + rcx_29 * 0x18
                    
                    int64_t* rdx_27 = r8_8 + 8
                    r8_3 = 0
                    
                    if (r8_8 == 0)
                        rdx_27 = nullptr
                    
                    if (rdx_27 != 0)
                        void* rdx_28 = *rdx_27
                        bool z_2
                        
                        if (0 == *(rdx_28 + 8))
                            *(rdx_28 + 8) = 0
                            z_2 = true
                        else
                            *(rdx_28 + 8)
                            z_2 = false
                        
                        if (z_2)
                            void* rax_46 = sub_141e7edb0(rdi_2, rax_43)
                            int64_t rdx_30 = *rsi_6
                            int32_t i_2 = (*(rdx_30 + 0x68))(rsi_6, rdx_30)
                            
                            if (i_2 s>= 0 && i_2 s< **(rax_43 + 0x2e8))
                                int32_t* r8_9 = *rax_46
                                int64_t r9_6 = sx.q(*(rax_46 + 8))
                                int32_t* rdx_31 = r8_9
                                void* rax_47 = &r8_9[r9_6]
                                
                                if (r8_9 != rax_47)
                                    while (*rdx_31 != i_2)
                                        rdx_31 = &rdx_31[1]
                                        
                                        if (rdx_31 == rax_47)
                                            goto label_141e8c54b
                                
                                if (r8_9 == rax_47 || ((rdx_31 - r8_9) s>> 2).d == 0xffffffff)
                                label_141e8c54b:
                                    int32_t rax_48 = (r9_6 + 1).d
                                    *(rax_46 + 8) = rax_48
                                    
                                    if (rax_48 s> *(rax_46 + 0xc))
                                        sub_1405a4cf0(rax_46)
                                    
                                    *((r9_6 << 2) + *rax_46) = i_2
                                
                                int32_t* r8_10 = *rax_46
                                int32_t i_3 = mods.dp.d(sx.q(i_2 + 1), **(rax_43 + 0x2e8))
                                int32_t* rcx_36 = r8_10
                                int64_t rdx_37 = sx.q(*(rax_46 + 8))
                                int32_t* r14_4 = rdx_37 << 2
                                void* rax_52 = r14_4 + r8_10
                                
                                if (r8_10 != rax_52)
                                    while (*rcx_36 != i_3)
                                        rcx_36 = &rcx_36[1]
                                        
                                        if (rcx_36 == rax_52)
                                            goto label_141e8c5ae
                                
                                if (r8_10 == rax_52 || ((rcx_36 - r8_10) s>> 2).d == 0xffffffff)
                                label_141e8c5ae:
                                    int32_t rax_53 = (rdx_37 + 1).d
                                    *(rax_46 + 8) = rax_53
                                    
                                    if (rax_53 s> *(rax_46 + 0xc))
                                        sub_1405a4cf0(rax_46)
                                    
                                    *(r14_4 + *rax_46) = i_3
                                
                                *(rax_46 + 0x10) = 1
                            
                            rdi_2 = arg1
                            r8_3 = 0
                
                r15 = var_160
                r12_1 = &r12_1[1]
                r13_1 += 1
            while (r13_1 != rcx_26)
            
            lpCriticalSection = lpCriticalSection_1
        
        int32_t var_134 = 1
        int32_t r10_2 = *(rdi_2 + 0x98)
        void* r9_7 = rdi_2 + 0x80
        void* var_130 = r9_7
        int32_t rcx_40 = 0
        int32_t var_138 = 0
        int32_t var_128 = 0xffffffff
        int64_t var_124 = 0
        
        if (r10_2 != 0)
            void* rax_55 = *(r9_7 + 0x10)
            
            if (rax_55 != 0)
                r9_7 = rax_55
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_2 - 1)
            int32_t rdx_40 = *r9_7
            
            if (rdx_40 != 0)
            label_141e8c67b:
                int32_t rax_62 = neg.d(rdx_40) & rdx_40
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_62)
                int32_t var_134_1 = rax_62
                int32_t var_a0_1 = temp0_4
                int32_t rax_63
                
                if (rax_62 == 0)
                    rax_63 = 0x20
                else
                    rax_63 = 0x1f - temp0_4
                
                var_124.d = r8_3 - rax_63 + 0x1f
                
                if (r8_3 - rax_63 + 0x1f s> r10_2)
                    var_124.d = r10_2
            else
                while (true)
                    int64_t rdx_41 = sx.q(rcx_40)
                    r8_3 += 0x20
                    rcx_40 += 1
                    var_124:4.d = r8_3
                    var_138 = rcx_40
                    
                    if (rdx_41.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_40 = *(r9_7 + (rdx_41 << 2) + 4)
                    int32_t var_128_1 = 0xffffffff
                    
                    if (rdx_40 != 0)
                        goto label_141e8c67b
                
                var_124.d = r10_2
        
        void* var_40 = rdi_2 + 0x70
        int128_t zmm0_1 = var_138.o
        int128_t var_50 = 0xffffffff
        int16_t var_b0 = 0
        void* rax_65 = zmm0_1.q
        int128_t var_d8 = zmm0_1
        double var_e8[0x2] = (rdi_2 + 0x70).o
        zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        
        if (0 s< *(rax_65 + 0x18))
            int32_t i_4 = var_d8:0xc.d
            
            do
                int64_t rdi_6 = sx.q(i_4) * 0x28
                int32_t var_164
                sub_140865c40(var_160, &var_164, *(rdi_6 + *var_e8[0]))
                int64_t rax_68 = sx.q(var_164)
                
                if (rax_68.d != 0xffffffff)
                    void* r14_5 = *var_160 + rax_68 * 0x18
                    
                    if (r14_5 != 0)
                        int64_t* r14_6 = *(r14_5 + 8)
                        
                        if (r14_6 != 0)
                            bool z_3
                            
                            if (0 == r14_6[1].d)
                                r14_6[1].d = 0
                                z_3 = true
                            else
                                r14_6[1].d
                                z_3 = false
                            
                            if (z_3)
                                void* rdi_7 = rdi_6 + *var_e8[0]
                                sub_14086c240(&r14_6[6], rdi_7 + 8)
                                r14_6[8].b = *(rdi_7 + 0x18)
                                sub_141e8cb60(r14_6)
                                sub_141e84750(zmm0_1:8.q, var_d8:0xc.d)
                                var_b0.b = 1
                
                var_d8:8.d &= not.d(var_e8[1]:4.d)
                sub_14059bdd0(&var_e8[1])
                i_4 = var_d8:0xc.d
            while (i_4 s< *(var_d8.q + 0x18))
            
            if (var_b0.b != 0 && var_b0:1.b != 0)
                sub_140d1a980(rdi_2 + 0x70, *(rdi_2 + 0x78) - *(rdi_2 + 0xa4), 1)
        
        void* result = sub_141e82770(arg1)
        
        if (lpCriticalSection == 0)
            return result
        
        return LeaveCriticalSection(lpCriticalSection)
    
    sub_141e8cb60(*(*rcx_8 + rax_21 * 0x18 + 8))
    int32_t var_84
    var_80:8.d &= not.d(var_84)
    sub_14059bdd0(&var_90:8)
