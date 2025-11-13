// 函数: sub_141508440
// 地址: 0x141508440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rax_2 = *(arg2 + 0x20)
int32_t* r12 = arg1
int64_t r10 = *(arg2 + 8)
int64_t r9 = *(arg2 + 0x10)
void* rdi = *(arg2 + 0x18)
uint64_t result_2 = zx.q(*(arg2 + 0x24))
uint64_t result = zx.q(*(arg2 + 0x28) + result_2.d)
int64_t var_188 = r10
int64_t var_130 = r9
int32_t var_11c = result_2.d
int32_t var_198 = result.d

if (result_2.d u< result.d)
    result = zx.q(result_2.d)
    uint64_t result_1 = result_2
    int32_t rcx = var_198
    int16_t var_100_1 = -2
    int32_t r8_41
    
    do
        int32_t r8_1 = *(r10 + (result << 2) + 0x400c)
        uint64_t rax_5 = zx.q(r8_1 u>> 0x1c)
        int32_t var_b8_1 = rax_5.d
        void* r13_1 = *(r12 + (rax_5 << 3) + 8)
        
        if (r13_1 != 0)
            int32_t rax_7 = r8_1 & 0xfff
            int32_t r8_3 = r8_1 u>> 0xc & 0xfff
            uint32_t r9_3 = r8_1 u>> 0x18 & 0xf
            int32_t rcx_4 = (rax_7 << 8 ^ rax_7) & 0xff00ff
            int32_t r10_1 = 0
            uint64_t rax_11 = (zx.q(rcx_4 << 4) ^ zx.q(rcx_4)) & 0xf0f0f0f
            int32_t var_180_1 = 0
            int32_t i = 0
            uint32_t r8_4 = zx.d(*(r13_1 + 0x18))
            int32_t rcx_8 = (r8_3 << 8 ^ r8_3) & 0xff00ff
            int32_t rdx_2 = ((rax_11 << 2).d ^ rax_11.d) & 0x33333333
            uint64_t rax_15 = (zx.q(rcx_8 << 4) ^ zx.q(rcx_8)) & 0xf0f0f0f
            int32_t rcx_11 = ((rax_15 << 2).d ^ rax_15.d) & 0x33333333
            int64_t var_88
            __builtin_memset(&var_88, 0, 0x20)
            int32_t r11_8 = ((((((rcx_11 * 2) ^ rdx_2 ^ rcx_11) * 2) ^ rdx_2) & 0x55555555)
                ^ (((rcx_11 * 2) ^ rcx_11) * 2)) << (r8_4.b * r9_3.b)
            int32_t rax_20 = r11_8 & 0xffffff
            int32_t rbx_3 = r9_3 << 0x18 | rax_20
            int32_t rcx_14 = (rbx_3 u>> 0x10 ^ rbx_3) * 0x85ebca6b
            int32_t rcx_15 = (rcx_14 u>> 0xd ^ rcx_14) * 0xc2b2ae35
            
            if (*(r13_1 + 0x1a) u<= 0)
                r10 = var_188
            else
                do
                    void* r8_6 = zx.q(i) * 0xa8 + r13_1
                    int32_t rdx_3 = *(*(r8_6 + 0xc0) + ((zx.q(*(r8_6 + 0xb4))
                        & (zx.q((rcx_15 u>> 0x10).w) ^ zx.q(rcx_15.w))) << 2))
                    int32_t var_144
                    
                    if (rdx_3 == 0xffffffff)
                    label_141508661:
                        var_144 = 0xffffffff
                    label_141508668:
                        uint64_t rax_33 = zx.q(r10_1)
                        r10_1 += 1
                        var_180_1 = r10_1
                        *(&var_88 + (rax_33 << 2)) = i
                    else
                        int64_t r9_4 = *(r8_6 + 0xa0)
                        int64_t rax_31
                        
                        while (true)
                            rax_31 = sx.q(rdx_3) * 2
                            
                            if (*(r9_4 + (rax_31 << 3)) == rbx_3)
                                break
                            
                            rdx_3 = *(*(r8_6 + 0xc8) + (zx.q(rdx_3) << 2))
                            
                            if (rdx_3 == 0xffffffff)
                                goto label_141508661
                        
                        int32_t rax_97 = *(r9_4 + (rax_31 << 3) + 0xc)
                        var_144:2.w = rax_97.w
                        uint16_t rsi_4 = (rax_97 u>> 0x10).w & 0xfff
                        var_144.w = rsi_4
                        
                        if (var_144 == 0xffffffff)
                            goto label_141508668
                        
                        sub_1414fe4a0(r12, var_130, rax_2, zx.d(rsi_4), (var_144 u>> 0x10).w)
                        r10_1 = var_180_1
                        *(zx.q(rsi_4) * 0x110 + var_130 + 0x10c) += 1
                    i += 1
                while (i u< zx.d(*(r13_1 + 0x1a)))
                
                void* rdi_2 = rdi
                
                if (r10_1 == 0)
                    r10 = var_188
                else
                    int32_t r8_7 = *(r13_1 + 0x50)
                    int32_t r9_5 = 0
                    
                    if (r8_7 != 0)
                        int32_t rax_36
                        
                        do
                            int32_t rdx_7 = ((r8_7 - r9_5) u>> 1) + r9_5
                            int32_t temp3_1 = *(*(r13_1 + 0x48) + (sx.q(rdx_7) << 2))
                            rax_36 = rdx_7 + 1
                            
                            if (r11_8 u>= temp3_1)
                                rax_36 = r9_5
                            
                            if (r11_8 u>= temp3_1)
                                r8_7 = rdx_7
                            
                            r9_5 = rax_36
                        while (rax_36 != r8_7)
                        r10_1 = var_180_1
                    
                    int64_t* rdx_10 =
                        (zx.q(*(*(r13_1 + 0x58) + (sx.q(r9_5) << 1))) << 4) + *(r13_1 + 0x28)
                    int32_t rcx_20 = rdx_10[1].d
                    int32_t r8_9 = rcx_20 & 0xffffff
                    
                    if (r11_8 u< r8_9 || r11_8
                            u>= (1 << (((rcx_20 u>> 0x18).b & 0xf) * (*(r13_1 + 0x20)).b)) + r8_9)
                        r10 = var_188
                    else
                        void* rdx_11 = *rdx_10
                        int32_t r9_7 = r11_8 - r8_9
                        void* var_110_1 = rdx_11
                        int32_t var_118_1 = r9_7
                        
                        if (rdx_11 == 0 || *(rdx_11 + 0x6c) u> *(arg2 + 0x2c))
                            r10 = var_188
                        else
                            uint32_t r11_10 = *(rdx_11 + 0x5c)
                            uint32_t r8_10 = r9_3
                            
                            if (r8_10 u> r11_10)
                                r10 = var_188
                            else
                                int32_t r15_3 = *(rdx_11 + 0x80)
                                int64_t var_60 = 0
                                void* const var_68 = nullptr
                                
                                if (r10_1 != 0)
                                    int64_t rbx_4 = *(rdx_11 + 0x88)
                                    int64_t* r10_3 = &var_88
                                    uint64_t i_10 = zx.q(var_180_1)
                                    uint64_t i_1
                                    
                                    do
                                        int64_t r8_12 = sx.q(*r10_3) << 4
                                        r10_3 += 4
                                        int64_t* r8_13 = r8_12 + rbx_4
                                        uint64_t rcx_24 = zx.q(r8_13[1].b)
                                        void* rdx_12 = &var_60 + rcx_24
                                        void* r9_8 = *r8_13
                                        *(&var_68 + rcx_24) |= *(r8_13 + 0xa)
                                        uint64_t rax_44 = zx.q(*(r9_8 + 0x1c0))
                                        *rdx_12 |= (1 << (zx.d(*(r8_13 + 9)) u% 0x20)).b
                                        int64_t rcx_27 = rax_44 * 0x110
                                        *(rcx_27 + var_130 + 0x10c) += 1
                                        i_1 = i_10
                                        i_10 -= 1
                                    while (i_1 != 1)
                                    r12 = arg1
                                    r8_10 = r9_3
                                    rdx_11 = var_110_1
                                    r9_7 = var_118_1
                                
                                int32_t r14_1 = 0
                                int32_t var_190_1 = 0
                                
                                if (r15_3 == 0)
                                    r10 = var_188
                                else
                                    int32_t rax_45 = *(rdx_11 + 0x80)
                                    int64_t r15_4 = 0
                                    int64_t var_a8_1 = 0
                                    
                                    do
                                        uint32_t r15_5 = zx.d(*(&var_60 + r15_4))
                                        uint32_t var_14c_1 = r15_5
                                        
                                        if (r15_5.b == 0)
                                            r10 = var_188
                                        else
                                            int64_t rax_46 = *(rdx_11 + 0x78)
                                            int64_t rcx_28 = sx.q(r14_1)
                                            int32_t rbx_5 = *(rax_46 + (rcx_28 << 3))
                                            int32_t var_120_1 = rbx_5
                                            uint64_t rax_48 = zx.q(rbx_5) & 0x3fffff
                                            void* const r12_4
                                            
                                            if (rax_48.d u< r12[0x28])
                                                r12_4 = rax_48 * 0x60 + *(arg1 + 0x98)
                                                var_68 = r12_4
                                            
                                            if (rax_48.d u>= r12[0x28]
                                                    || *(r12_4 + 0x5c) != (rbx_5 u>> 0x16).w)
                                                r12_4 = nullptr
                                                var_68 = nullptr
                                            
                                            if (r12_4 == 0)
                                            label_14150951c:
                                                rax_45 = r15_3
                                                r12 = arg1
                                                r10 = var_188
                                            else
                                                uint32_t rsi_1 = zx.d(*(rax_46 + (rcx_28 << 3) + 4))
                                                uint32_t r13_2 = r11_10
                                                uint32_t rax_52 = zx.d(*(r12_4 + 0x25))
                                                uint32_t var_138_1 = rsi_1
                                                
                                                if (rax_52 u<= r11_10)
                                                    r13_2 = rax_52
                                                
                                                char rax_53 = rsi_1.b
                                                uint32_t var_168_1 = r13_2
                                                
                                                if (r8_10 u>= rsi_1)
                                                    rax_53 = r8_10.b
                                                
                                                char var_148_2 = rax_53
                                                uint32_t rax_55 = rsi_1
                                                uint32_t rdx_15 = r9_7 u>> (rax_53 * r8_4.b)
                                                
                                                if (r8_10 u<= rsi_1)
                                                    rax_55 = r8_10
                                                
                                                uint32_t i_14 = r8_10 - rax_55
                                                int32_t rax_57 = rdx_15 & 0x55555555
                                                int32_t r11_11 = 1 << i_14.b
                                                uint32_t i_12 = i_14
                                                int32_t rcx_34 =
                                                    (rax_57 u>> 1 ^ rax_57) & 0x33333333
                                                int32_t rdx_17 = rdx_15 u>> 1 & 0x55555555
                                                int32_t rax_61 = (rcx_34 u>> 2 ^ rcx_34) & 0xf0f0f0f
                                                int32_t r9_12 = (rax_61 u>> 4 ^ rax_61) & 0xff00ff
                                                int32_t rax_65 =
                                                    (rdx_17 u>> 1 ^ rdx_17) & 0x33333333
                                                int32_t rcx_38 = (rax_65 u>> 2 ^ rax_65) & 0xf0f0f0f
                                                int32_t r10_7 = (rcx_38 u>> 4 ^ rcx_38) & 0xff00ff
                                                uint32_t rax_72 = zx.d((modu.dp.d(
                                                    0:(zx.d((r9_12 u>> 8).w) ^ zx.d(r9_12.w)), 
                                                    divu.dp.d(
                                                        0:(zx.d(*(r12_4 + 0x20)) * *(r12_4 + 0x14)
                                                            - 1 + r11_11), 
                                                        r11_11))).w)
                                                int32_t rcx_45 = (rax_72 << 8 ^ rax_72) & 0xff00ff
                                                uint64_t rax_76 =
                                                    (zx.q(rcx_45 << 4) ^ zx.q(rcx_45)) & 0xf0f0f0f
                                                int32_t r9_15 =
                                                    ((rax_76 << 2).d ^ rax_76.d) & 0x33333333
                                                uint32_t rax_83 = zx.d((modu.dp.d(
                                                    0:(zx.d((r10_7 u>> 8).w) ^ zx.d(r10_7.w)), 
                                                    divu.dp.d(
                                                        0:(zx.d(*(r12_4 + 0x22)) * *(r12_4 + 0x18)
                                                            - 1 + r11_11), 
                                                        r11_11))).w)
                                                int32_t rcx_52 = (rax_83 << 8 ^ rax_83) & 0xff00ff
                                                uint64_t rax_87 =
                                                    (zx.q(rcx_52 << 4) ^ zx.q(rcx_52)) & 0xf0f0f0f
                                                int32_t rcx_55 =
                                                    ((rax_87 << 2).d ^ rax_87.d) & 0x33333333
                                                int64_t* rcx_56 = *(r12_4 + 0x48)
                                                uint32_t rdx_26 = (((((rcx_55 * 2) ^ rcx_55 ^ r9_15)
                                                    * 2) ^ r9_15) & 0x55555555)
                                                    ^ (((rcx_55 * 2) ^ rcx_55) * 2)
                                                uint32_t var_178_1 = rdx_26
                                                int32_t rax_92 = (*(*rcx_56 + 8))(rcx_56, 
                                                    zx.q(i_12.b), zx.q(rdx_26))
                                                uint32_t i_8 = i_12
                                                uint32_t r11_12 = var_178_1
                                                
                                                if (rax_92 != 0)
                                                    i_8 += rax_92
                                                    i_12 = i_8
                                                    r11_12 u>>= rax_92.b * r8_4.b
                                                    uint32_t rcx_59 = rax_92 + rsi_1
                                                    var_178_1 = r11_12
                                                    
                                                    if (r9_3 u>= rcx_59)
                                                        rcx_59 = r9_3
                                                    
                                                    var_148_2 = rcx_59.b
                                                
                                                void* const rdx_28 = var_68
                                                int32_t i_2 = 0
                                                int64_t var_58 = 0
                                                int64_t var_50_1 = 0
                                                uint32_t i_9 = i_8
                                                uint32_t i_3 = i_8
                                                int32_t i_6 = 0
                                                
                                                if (*(rdx_28 + 0x2f) u> 0)
                                                    do
                                                        uint32_t rax_93 = zx.d(r15_5.b)
                                                        
                                                        if (test_bit(rax_93, i_2))
                                                            char r9_16 = i_8.b
                                                            uint32_t r10_8 = r11_12
                                                            void* rsi_2 =
                                                                *(*(rdx_28 + 0x38) + (sx.q(i_2) << 3))
                                                            uint64_t rdx_33
                                                            
                                                            if (i_8.b u> r13_2.b)
                                                            label_141508bf8:
                                                                rdx_33 = 0xffffffff
                                                            else
                                                                while (true)
                                                                    int32_t var_f4_1 = ((zx.d(r9_16) & 0xf)
                                                                        | zx.d(i_2.b) << 4) << 0x18
                                                                        | (r10_8 & 0xffffff)
                                                                    int64_t j = rbx_5.q
                                                                    int64_t rcx_69 =
                                                                        (j u>> 0x21 ^ j) * -0xae502812aa7333
                                                                    int64_t rdx_32 = (rcx_69 u>> 0x21
                                                                        ^ rcx_69) * -0x3b314601e57a13ad
                                                                    rdx_33 = zx.q(*(*(rsi_2 + 0x80) + (((
                                                                        rdx_32 u>> 0x21 ^ rdx_32)
                                                                        & zx.q(*(rsi_2 + 0x74))) << 2)))
                                                                    
                                                                    if (rdx_33.d != 0xffffffff)
                                                                        while (*(*(rsi_2 + 0x90)
                                                                                + (sx.q(rdx_33.d) << 3)) != j)
                                                                            rdx_33 =
                                                                                zx.q(*(*(rsi_2 + 0x88) + (rdx_33 << 2)))
                                                                            
                                                                            if (rdx_33.d == 0xffffffff)
                                                                                goto label_141508be8
                                                                        
                                                                        if (rdx_33.d != 0xffffffff)
                                                                            break
                                                                    
                                                                label_141508be8:
                                                                    r9_16 += 1
                                                                    r10_8 u>>= 2
                                                                    
                                                                    if (r9_16 u> r13_2.b)
                                                                        goto label_141508bf8
                                                            
                                                            int32_t r14_4 = r13_2 + 1
                                                            
                                                            if (rdx_33.d != 0xffffffff)
                                                                uint64_t rdx_37 = zx.q(rdx_33.w)
                                                                int16_t var_98_1 = rdx_37.w
                                                                char rax_103 = var_138_1.b
                                                                r14_4 = zx.d(
                                                                    *(*(rsi_2 + 0x90) + (rdx_37 << 3) + 7))
                                                                    & 0xf
                                                                int32_t r15_7 = r14_4 + var_138_1
                                                                
                                                                if (r15_7 u>= var_138_1)
                                                                    rax_103 = r15_7.b
                                                                
                                                                int32_t r13_4 =
                                                                    0xffffffff << (r15_7.b * r8_4.b) & r11_8
                                                                sub_1414fe4a0(arg1, var_130, rax_2, 
                                                                    zx.d(*(rsi_2 + 0x1c0)), rdx_37.w)
                                                                
                                                                if (var_180_1 != 0)
                                                                    int64_t* r12_5 = &var_88
                                                                    uint64_t j_6 = zx.q(var_180_1)
                                                                    int32_t i_13 = i_6
                                                                    void* rcx_84 = *(var_110_1 + 0x88)
                                                                    void* var_90_1 = rcx_84
                                                                    uint64_t j_1
                                                                    
                                                                    do
                                                                        uint64_t r11_15 = zx.q(*r12_5)
                                                                        void* rcx_85 =
                                                                            rcx_84 + (sx.q(r11_15.d) << 4)
                                                                        
                                                                        if (zx.d(*(rcx_85 + 9)) == i_13
                                                                                && zx.d(*(rcx_85 + 8)) == var_190_1)
                                                                            if (r15_7 == r9_3)
                                                                                goto label_141508d9e
                                                                            
                                                                            int32_t rax_111 = zx.d(r15_7.b) << 0x18
                                                                                | (r13_4 & 0xffffff)
                                                                            int32_t rdx_39 = (rax_111 u>> 0x10
                                                                                ^ rax_111) * 0x85ebca6b
                                                                            void* r9_21 = r11_15 * 0xa8 + r13_1
                                                                            int32_t rcx_94 =
                                                                                (rdx_39 u>> 0xd ^ rdx_39) * 0xc2b2ae35
                                                                            int32_t r8_20 = *(*(r9_21 + 0xc0) + (((
                                                                                zx.q(rcx_94) u>> 0x10 ^ zx.q(rcx_94.w))
                                                                                & zx.q(*(r9_21 + 0xb4))) << 2))
                                                                            int32_t var_140
                                                                            
                                                                            if (r8_20 == 0xffffffff)
                                                                            label_141508d64:
                                                                                var_140 = 0xffffffff
                                                                            label_141508d9e:
                                                                                int32_t var_e8 = (
                                                                                    zx.d(*(r13_1 + 0x69c)) << 4
                                                                                    | (zx.d(rax_103) & 0xf)) << 0x18
                                                                                    | (r13_4 & 0xffffff)
                                                                                int32_t var_e4_1 = ((zx.d(r11_15.b) << 4
                                                                                    | (zx.d(r15_7.b) & 0xf)) << 8
                                                                                    | zx.d((*(rsi_2 + 0x1c0)).b)) << 0x10
                                                                                    | zx.d(var_98_1)
                                                                                sub_1414fdf10(rdi_2, &var_e8)
                                                                            else
                                                                                int64_t r10_9 = *(r9_21 + 0xa0)
                                                                                int64_t rcx_99
                                                                                
                                                                                while (true)
                                                                                    rcx_99 = sx.q(r8_20) * 2
                                                                                    
                                                                                    if (*(r10_9 + (rcx_99 << 3)) == rax_111)
                                                                                        break
                                                                                    
                                                                                    r8_20 =
                                                                                        *(*(r9_21 + 0xc8) + (zx.q(r8_20) << 2))
                                                                                    
                                                                                    if (r8_20 == 0xffffffff)
                                                                                        goto label_141508d64
                                                                                
                                                                                int32_t rdx_84 =
                                                                                    *(r10_9 + (rcx_99 << 3) + 0xc)
                                                                                var_140:2.w = rdx_84.w
                                                                                var_140.w = (rdx_84 u>> 0x10).w & 0xfff
                                                                                
                                                                                if (var_140 == 0xffffffff)
                                                                                    goto label_141508d9e
                                                                            i_13 = i_6
                                                                        
                                                                        rcx_84 = var_90_1
                                                                        r12_5 += 4
                                                                        j_1 = j_6
                                                                        j_6 -= 1
                                                                    while (j_1 != 1)
                                                                    rbx_5 = var_120_1
                                                                    i_2 = i_6
                                                                
                                                                r13_2 = var_168_1
                                                            
                                                            i_8 = i_12
                                                            
                                                            if (r14_4 != i_8)
                                                                r15_5 = var_14c_1
                                                                int32_t rax_169 = r14_4
                                                                
                                                                if (r14_4 u>= 2)
                                                                    rax_169 = 2
                                                                
                                                                uint32_t i_11 = r14_4 - rax_169
                                                                
                                                                if (i_11 u<= i_8)
                                                                    i_9 = i_3
                                                                else
                                                                    void* rcx_197 = &var_58 + zx.q(i_11)
                                                                    *rcx_197 |= (1 << (i_2 u% 0x20)).b
                                                                    
                                                                    if (i_3 u>= i_11)
                                                                        i_11 = i_3
                                                                    
                                                                    i_9 = i_11
                                                                    i_3 = i_11
                                                            else
                                                                r15_5 =
                                                                    rax_93 & not.d(1 << (i_2 u% 0x20))
                                                                var_14c_1 = r15_5
                                                                i_9 = i_3
                                                        
                                                        i_2 += 1
                                                        rdx_28 = var_68
                                                        r11_12 = var_178_1
                                                        i_6 = i_2
                                                    while (i_2 u< zx.d(*(var_68 + 0x2f)))
                                                    
                                                    r14_1 = var_190_1
                                                    rsi_1 = var_138_1
                                                
                                                uint64_t r11_16 = zx.q(i_8 + 1)
                                                int32_t var_15c_2 = r11_16.d
                                                
                                                if (r11_16.d u<= i_9)
                                                    uint32_t r12_6 = r8_4
                                                    uint32_t r13_5 = r11_16.d + rsi_1
                                                    uint32_t var_16c_2 = r13_5
                                                    int32_t r10_11 = r13_5 * r8_4
                                                    uint32_t var_194_1 = r12_6
                                                    int32_t var_168_2 = r10_11
                                                    
                                                    do
                                                        uint32_t r14_6 = zx.d(*(&var_58 + r11_16))
                                                        
                                                        if (r14_6 != 0)
                                                            void* const rax_123 = var_68
                                                            int32_t j_2 = 0
                                                            uint32_t r15_10 = var_178_1 u>> r12_6.b
                                                            
                                                            if (*(rax_123 + 0x2f) u> 0)
                                                                do
                                                                    if (not(test_bit(r14_6, j_2)))
                                                                        void* r9_22 =
                                                                            *(*(rax_123 + 0x38) + (sx.q(j_2) << 3))
                                                                        int32_t var_dc_1 = ((zx.d(r11_16.b)
                                                                            & 0xf) | zx.d(j_2.b) << 4) << 0x18
                                                                            | (r15_10 & 0xffffff)
                                                                        int64_t k = rbx_5.q
                                                                        int64_t rcx_118 =
                                                                            (k u>> 0x21 ^ k) * -0xae502812aa7333
                                                                        int64_t r8_24 = (rcx_118 u>> 0x21
                                                                            ^ rcx_118) * -0x3b314601e57a13ad
                                                                        int32_t r8_25 = *(*(r9_22 + 0x80) + (((
                                                                            r8_24 u>> 0x21 ^ r8_24)
                                                                            & zx.q(*(r9_22 + 0x74))) << 2))
                                                                        
                                                                        if (r8_25 == 0xffffffff)
                                                                        label_141508f61:
                                                                            r14_6 |= 1 << (j_2 u% 0x20)
                                                                        else
                                                                            while (
                                                                                    *(*(r9_22 + 0x90) + (sx.q(r8_25) << 3))
                                                                                    != k)
                                                                                r8_25 =
                                                                                    *(*(r9_22 + 0x88) + (zx.q(r8_25) << 2))
                                                                                
                                                                                if (r8_25 == 0xffffffff)
                                                                                    goto label_141508f61_1
                                                                            
                                                                            if (r8_25 == 0xffffffff)
                                                                            label_141508f61_1:
                                                                                r14_6 |= 1 << (j_2 u% 0x20)
                                                                            else
                                                                                sub_1414fe4a0(arg1, var_130, rax_2, 
                                                                                    zx.d(*(r9_22 + 0x1c0)), r8_25.w)
                                                                                r11_16 = zx.q(var_15c_2)
                                                                    
                                                                    j_2 += 1
                                                                while (j_2 u< zx.d(*(rax_123 + 0x2f)))
                                                                
                                                                rdi_2 = rdi
                                                                r13_5 = var_16c_2
                                                                r10_11 = var_168_2
                                                                r12_6 = var_194_1
                                                            
                                                            int32_t var_cc_1 =
                                                                (zx.d(r11_16.b) & 0xf) << 0x18
                                                                | (r15_10 & 0xffffff)
                                                            int64_t rax_134 = rbx_5.q
                                                            int64_t rcx_126 = (rax_134 u>> 0x21
                                                                ^ rax_134) * -0xae502812aa7333
                                                            int64_t rdx_61 = (rcx_126 u>> 0x21
                                                                ^ rcx_126) * -0x3b314601e57a13ad
                                                            uint64_t rcx_130 = (
                                                                zx.q((rdx_61 u>> 0x21).w)
                                                                ^ zx.q(rdx_61.w)) & 0x3ff
                                                            uint64_t r9_23 =
                                                                zx.q(*(rdi_2 + (rcx_130 << 1)))
                                                            int16_t* r8_26 = rdi_2 + (rcx_130 << 1)
                                                            
                                                            if (r9_23.w != 0xffff)
                                                                while (true)
                                                                    uint64_t rdx_62 = zx.q(r9_23.w)
                                                                    
                                                                    if (rax_134 ==
                                                                            *(*(rdi_2 + 0xb000) + (rdx_62 << 3)))
                                                                        int64_t rax_173 = *(rdi_2 + 0xb018)
                                                                        uint32_t rax_174 =
                                                                            zx.d(*(rax_173 + (rdx_62 << 1)))
                                                                        
                                                                        if (rax_174 != 0xffff)
                                                                            uint32_t rcx_201 = zx.d(
                                                                                *(var_188 + (result_1 << 1) + 0x800c))
                                                                                + rax_174
                                                                            int16_t rax_175 = -2
                                                                            
                                                                            if (rcx_201 u<= 0xfffe)
                                                                                rax_175 = rcx_201.w
                                                                            
                                                                            *(rax_173 + (rdx_62 << 1)) = rax_175
                                                                        
                                                                        int64_t rax_176 = *(rdi_2 + 0xb020)
                                                                        *(rax_176 + rdx_62) |= r14_6.b
                                                                        break
                                                                    
                                                                    r9_23 =
                                                                        zx.q(*(rdi_2 + (rdx_62 << 1) + 0x800))
                                                                    
                                                                    if (r9_23.w == 0xffff)
                                                                        goto label_14150902d
                                                                
                                                                goto label_14150909d
                                                            
                                                        label_14150902d:
                                                            uint64_t rdx_63 =
                                                                zx.q(*(rdi_2 + 0xb028))
                                                            
                                                            if (rdx_63.d u< 0x1000)
                                                                *(rdi_2 + 0xb028) = (rdx_63 + 1).d
                                                                r9_23 = zx.q(rdx_63.w)
                                                                *(rdi_2 + (r9_23 << 1) + 0x800) = *r8_26
                                                                *r8_26 = r9_23.w
                                                                *(*(rdi_2 + 0xb000) + (rdx_63 << 3)) =
                                                                    rax_134
                                                                int16_t rcx_135 = -2
                                                                int16_t rax_135 =
                                                                    *(var_188 + (result_1 << 1) + 0x800c)
                                                                
                                                                if (rax_135 u<= var_100_1)
                                                                    rcx_135 = rax_135
                                                                
                                                                *(*(rdi_2 + 0xb018) + (rdx_63 << 1)) =
                                                                    rcx_135
                                                                *(rdx_63 + *(rdi_2 + 0xb020)) = r14_6.b
                                                            label_14150909d:
                                                                
                                                                if (r9_23.w != 0xffff)
                                                                    uint32_t r12_8 = var_138_1
                                                                    
                                                                    if (r13_5 u>= r12_8)
                                                                        r12_8 = r13_5
                                                                    
                                                                    if (var_180_1 != 0)
                                                                        int64_t* r11_17 = &var_88
                                                                        uint64_t j_7 = zx.q(var_180_1)
                                                                        int32_t rdx_64 = var_190_1
                                                                        int64_t r13_7 = *(var_110_1 + 0x88)
                                                                        uint64_t j_3
                                                                        
                                                                        do
                                                                            int64_t r8_28 = sx.q(*r11_17)
                                                                            int64_t rcx_139 = r8_28 * 2
                                                                            
                                                                            if (zx.d(*(r13_7 + (rcx_139 << 3) + 8))
                                                                                    == rdx_64)
                                                                                uint32_t rdx_65 =
                                                                                    zx.d(*(r13_7 + (rcx_139 << 3) + 9))
                                                                                
                                                                                if (test_bit(r14_6, rdx_65))
                                                                                    int32_t var_c4_1 = ((
                                                                                        (zx.d(r8_28.b) & 0xf) << 4
                                                                                        | (rdx_65 & 0xf)) << 4
                                                                                        | (zx.d(r12_8.b) & 0xf)) << 0x10
                                                                                        | zx.d(r9_23.w)
                                                                                    int64_t rax_147 = (((zx.d(var_16c_2.b)
                                                                                        & 0xf) | var_b8_1 << 4) << 0x18 | (
                                                                                        0xffffffff << r10_11.b & r11_8
                                                                                        & 0xffffff)).q
                                                                                    int64_t rcx_156 = (rax_147 u>> 0x21
                                                                                        ^ rax_147) * -0xae502812aa7333
                                                                                    int64_t rdx_70 = (rcx_156 u>> 0x21
                                                                                        ^ rcx_156) * -0x3b314601e57a13ad
                                                                                    uint64_t r10_14 = (
                                                                                        zx.q((rdx_70 u>> 0x21).w)
                                                                                        ^ zx.q(rdx_70.w)) & 0x3ff
                                                                                    uint64_t k_2
                                                                                    
                                                                                    for (int16_t k_1 =
                                                                                            *(rdi_2 + (r10_14 << 1) + 0x2800); 
                                                                                            k_1 != 0xffff; 
                                                                                            k_1 = *(rdi_2 + (k_2 << 1) + 0x3000))
                                                                                        k_2 = zx.q(k_1)
                                                                                        
                                                                                        if (rax_147
                                                                                                == *(*(rdi_2 + 0xb008) + (k_2 << 3)))
                                                                                            goto label_14150921e
                                                                                    
                                                                                    uint64_t r8_30 = zx.q(*(rdi_2 + 0xb030))
                                                                                    
                                                                                    if (r8_30.d u< 0x1f00)
                                                                                        uint64_t rdx_71 = zx.q(r8_30.w)
                                                                                        *(rdi_2 + 0xb030) = (r8_30 + 1).d
                                                                                        *(rdi_2 + (rdx_71 << 1) + 0x3000) =
                                                                                            *(rdi_2 + (r10_14 << 1) + 0x2800)
                                                                                        *(rdi_2 + (r10_14 << 1) + 0x2800) =
                                                                                            rdx_71.w
                                                                                        *(*(rdi_2 + 0xb008) + (r8_30 << 3)) =
                                                                                            rax_147
                                                                                
                                                                            label_14150921e:
                                                                                rdx_64 = var_190_1
                                                                            
                                                                            r11_17 += 4
                                                                            j_3 = j_7
                                                                            j_7 -= 1
                                                                        while (j_3 != 1)
                                                                        rbx_5 = var_120_1
                                                                        r11_16 = zx.q(var_15c_2)
                                                                        r13_5 = var_16c_2
                                                                        r10_11 = var_168_2
                                                                    
                                                                    r12_6 = var_194_1
                                                        
                                                        r12_6 += r8_4
                                                        r11_16 = zx.q(r11_16.d + 1)
                                                        r10_11 += r8_4
                                                        r13_5 += 1
                                                        var_15c_2 = r11_16.d
                                                        var_194_1 = r12_6
                                                        var_16c_2 = r13_5
                                                        var_168_2 = r10_11
                                                    while (r11_16.d u<= i_3)
                                                    
                                                    r14_1 = var_190_1
                                                    i_8 = i_12
                                                
                                                char r15_14 = var_14c_1.b
                                                
                                                if (r15_14 == 0)
                                                    goto label_14150951c
                                                
                                                int32_t var_bc_1 = (zx.d(i_8.b) & 0xf) << 0x18
                                                    | (var_178_1 & 0xffffff)
                                                int64_t rax_152 = rbx_5.q
                                                int64_t rcx_167 =
                                                    (rax_152 u>> 0x21 ^ rax_152) * -0xae502812aa7333
                                                int64_t rdx_75 = (rcx_167 u>> 0x21 ^ rcx_167)
                                                    * -0x3b314601e57a13ad
                                                uint64_t rcx_171 = (zx.q((rdx_75 u>> 0x21).w)
                                                    ^ zx.q(rdx_75.w)) & 0x3ff
                                                uint64_t r9_24 = zx.q(*(rdi_2 + (rcx_171 << 1)))
                                                int16_t* r8_31 = rdi_2 + (rcx_171 << 1)
                                                
                                                if (r9_24.w != 0xffff)
                                                    while (true)
                                                        uint64_t rdx_76 = zx.q(r9_24.w)
                                                        
                                                        if (rax_152 ==
                                                                *(*(rdi_2 + 0xb000) + (rdx_76 << 3)))
                                                            int64_t rax_177 = *(rdi_2 + 0xb018)
                                                            r10 = var_188
                                                            uint32_t rax_178 =
                                                                zx.d(*(rax_177 + (rdx_76 << 1)))
                                                            
                                                            if (rax_178 != 0xffff)
                                                                uint32_t rcx_204 =
                                                                    zx.d(*(r10 + (result_1 << 1) + 0x800c))
                                                                    + rax_178
                                                                int16_t rax_179 = -2
                                                                
                                                                if (rcx_204 u<= 0xfffe)
                                                                    rax_179 = rcx_204.w
                                                                
                                                                *(rax_177 + (rdx_76 << 1)) = rax_179
                                                            
                                                            int64_t rax_180 = *(rdi_2 + 0xb020)
                                                            *(rax_180 + rdx_76) |= r15_14
                                                            break
                                                        
                                                        r9_24 =
                                                            zx.q(*(rdi_2 + (rdx_76 << 1) + 0x800))
                                                        
                                                        if (r9_24.w == 0xffff)
                                                            goto label_14150932d
                                                    
                                                    goto label_1415093a1
                                                
                                            label_14150932d:
                                                uint64_t rdx_77 = zx.q(*(rdi_2 + 0xb028))
                                                r10 = var_188
                                                
                                                if (rdx_77.d u>= 0x1000)
                                                    r12 = arg1
                                                    rax_45 = r15_3
                                                else
                                                    r9_24 = zx.q(rdx_77.w)
                                                    *(rdi_2 + 0xb028) = (rdx_77 + 1).d
                                                    *(rdi_2 + (r9_24 << 1) + 0x800) = *r8_31
                                                    *r8_31 = r9_24.w
                                                    *(*(rdi_2 + 0xb000) + (rdx_77 << 3)) = rax_152
                                                    int16_t rcx_176 = -2
                                                    int16_t rax_153 =
                                                        *(r10 + (result_1 << 1) + 0x800c)
                                                    
                                                    if (rax_153 u<= 0xfffe)
                                                        rcx_176 = rax_153
                                                    
                                                    *(*(rdi_2 + 0xb018) + (rdx_77 << 1)) = rcx_176
                                                    *(rdx_77 + *(rdi_2 + 0xb020)) = r15_14
                                                label_1415093a1:
                                                    
                                                    if (r9_24.w != 0xffff)
                                                        if (var_180_1 != 0)
                                                            int64_t* r11_18 = &var_88
                                                            uint64_t i_7 = zx.q(var_180_1)
                                                            int64_t rsi_6 = *(var_110_1 + 0x88)
                                                            uint64_t i_4
                                                            
                                                            do
                                                                int64_t r10_16 = sx.q(*r11_18)
                                                                int64_t rcx_178 = r10_16 * 2
                                                                
                                                                if (zx.d(*(rsi_6 + (rcx_178 << 3) + 8))
                                                                        == r14_1)
                                                                    uint32_t r8_33 =
                                                                        zx.d(*(rsi_6 + (rcx_178 << 3) + 9))
                                                                    
                                                                    if ((r15_14 & (1 << r8_33.b).b) != 0)
                                                                        int32_t var_ac_1 = ((
                                                                            (zx.d(r10_16.b) & 0xf) << 4
                                                                            | (r8_33 & 0xf)) << 4
                                                                            | (zx.d(var_148_2) & 0xf)) << 0x10
                                                                            | zx.d(r9_24.w)
                                                                        int64_t rax_166 = (
                                                                            (var_b8_1 << 4 | r9_3) << 0x18 | rax_20)
                                                                            .q
                                                                        int64_t rcx_191 = (rax_166 u>> 0x21
                                                                            ^ rax_166) * -0xae502812aa7333
                                                                        int64_t rdx_82 = (rcx_191 u>> 0x21
                                                                            ^ rcx_191) * -0x3b314601e57a13ad
                                                                        uint64_t r10_18 = (
                                                                            zx.q((rdx_82 u>> 0x21).w)
                                                                            ^ zx.q(rdx_82.w)) & 0x3ff
                                                                        uint64_t j_5
                                                                        
                                                                        for (int16_t j_4 =
                                                                                *(rdi_2 + (r10_18 << 1) + 0x2800); 
                                                                                j_4 != 0xffff; 
                                                                                j_4 = *(rdi_2 + (j_5 << 1) + 0x3000))
                                                                            j_5 = zx.q(j_4)
                                                                            
                                                                            if (rax_166
                                                                                    == *(*(rdi_2 + 0xb008) + (j_5 << 3)))
                                                                                goto label_14150950e
                                                                        
                                                                        uint64_t r8_36 = zx.q(*(rdi_2 + 0xb030))
                                                                        
                                                                        if (r8_36.d u< 0x1f00)
                                                                            uint64_t rdx_83 = zx.q(r8_36.w)
                                                                            *(rdi_2 + 0xb030) = (r8_36 + 1).d
                                                                            *(rdi_2 + (rdx_83 << 1) + 0x3000) =
                                                                                *(rdi_2 + (r10_18 << 1) + 0x2800)
                                                                            *(rdi_2 + (r10_18 << 1) + 0x2800) =
                                                                                rdx_83.w
                                                                            *(*(rdi_2 + 0xb008) + (r8_36 << 3)) =
                                                                                rax_166
                                                                
                                                            label_14150950e:
                                                                r11_18 += 4
                                                                i_4 = i_7
                                                                i_7 -= 1
                                                            while (i_4 != 1)
                                                        
                                                        goto label_14150951c
                                                    
                                                    r12 = arg1
                                                    rax_45 = r15_3
                                        
                                        r14_1 += 1
                                        rdx_11 = var_110_1
                                        r15_4 = var_a8_1 + 1
                                        r8_10 = r9_3
                                        r9_7 = var_118_1
                                        var_190_1 = r14_1
                                        r11_10 = *(rdx_11 + 0x5c)
                                        var_a8_1 = r15_4
                                    while (r14_1 u< rax_45)
            
            rcx = var_198
        
        r8_41 = var_11c + 1
        result = result_1 + 1
        var_11c = r8_41
        result_1 = result
    while (r8_41 u< rcx)
    r9 = var_130

int32_t i_5 = 0

if (r12[0x24] u> 0)
    do
        int64_t rcx_205 = *(r12 + 0x88)
        result = sx.q(i_5)
        
        if (*(rcx_205 + (result << 3)) != 0)
            void* rsi_8 = *(rcx_205 + (zx.q(i_5.w) << 3))
            void* rdi_5 = zx.q(i_5) * 0x110 + r9
            result = zx.q(*(rdi_5 + 0x104))
            
            if (result.d != 0)
                *(rdi_5 + 0x108) += result.d
                result = EnterCriticalSection(rsi_8 + 0x20)
                uint64_t rbx_7 = 0
                
                if (*(rdi_5 + 0x104) u> 0)
                    int64_t r15_16 = (rsi_8 + 0x20)->__offset(0x48).q
                    
                    do
                        uint64_t rdx_86 = zx.q(*(rdi_5 + (rbx_7 << 1)))
                        
                        if (*(r15_16 + (rdx_86 << 1)) != 0xffff)
                            int64_t r10_19 = *(rsi_8 + 0x60)
                            int32_t r9_28 = (
                                zx.d(*((rsi_8 + 0x20)->__offset(0x70).q + (rdx_86 << 3) + 7)) & 0xf)
                                + (*r12 << 4)
                            int64_t rax_187 = *(rsi_8 + 0x68)
                            *(r10_19 + (rdx_86 << 2)) = r9_28
                            int16_t rdx_87 = *(rax_187 + (rdx_86 << 1))
                            
                            if (rdx_87 == 0 || r9_28 u>= *(r10_19 + (zx.q(
                                    *(*(rsi_8 + 0x58) + (zx.q(((zx.d(rdx_87) - 1) s>> 1).w) << 1))) << 2)))
                                result = sub_141505070(rsi_8 + 0x48, rdx_87)
                            else
                                result = sub_14151c590(rsi_8 + 0x48, rdx_87)
                        
                        rbx_7 = zx.q(rbx_7.d + 1)
                    while (rbx_7.d u< *(rdi_5 + 0x104))
                
                if (rsi_8 != -0x20)
                    result = LeaveCriticalSection(rsi_8 + 0x20)
        
        r9 = var_130
        i_5 += 1
    while (i_5 u< r12[0x24])

__security_check_cookie(rax_1 ^ &var_1c8)
return result
