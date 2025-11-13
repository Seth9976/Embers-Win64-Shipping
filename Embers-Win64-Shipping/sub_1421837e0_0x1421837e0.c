// 函数: sub_1421837e0
// 地址: 0x1421837e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t var_6c = 0x80
int64_t* var_98 = nullptr
int32_t var_90 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int64_t var_2c0 = 0
int32_t var_2b8 = 0
int32_t var_68 = 0xffffffff
int32_t var_2b0 = 0xffffffff
sub_140d3cc80(sub_14255cbc0(), &var_2c0, 1, 0x10, 0)
int32_t r8_1 = var_2b8
int32_t i = var_2b0 + 1
int64_t rdx_1 = var_2c0
int32_t i_2 = i

if (i s< r8_1)
    while (*(rdx_1 + (sx.q(i) << 3)) == 0)
        int32_t i_3 = i + 1
        i_2 = i_3
        i = i_3
        
        if (i_3 s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    int64_t* rdi_1 = *(rdx_1 + (sx.q(i) << 3))
    void* j = rdi_1[0x15]
    
    if (j == 0)
        j = sub_141ee69e0(rdi_1)
    
    void* j_2 = j
    int64_t r14_1 = rdi_1[0x81]
    uint32_t rdx_3 = (j u>> 4).d
    int64_t var_218 = r14_1
    int32_t r8_3 = (0x9e3779b9 - rdx_3) ^ rdx_3 << 8
    int32_t r10_3 = neg.d(rdx_3 + r8_3) ^ r8_3 u>> 0xd
    int32_t rdx_6 = (rdx_3 - r8_3 - r10_3) ^ r10_3 u>> 0xc
    int32_t r8_6 = (r8_3 - rdx_6 - r10_3) ^ rdx_6 << 0x10
    int32_t r10_6 = (r10_3 - r8_6 - rdx_6) ^ r8_6 u>> 5
    int32_t rdx_9 = (rdx_6 - r8_6 - r10_6) ^ r10_6 u>> 3
    int32_t r8_9 = (r8_6 - rdx_9 - r10_6) ^ rdx_9 << 0xa
    int32_t r10_9 = (r10_6 - r8_9 - rdx_9) ^ r8_9 u>> 0xf
    void* rsi_1
    
    if (var_90 == var_64)
    label_142183a15:
        rsi_1 = sub_14217f460(&var_98, r10_9, &j_2)
    else
        void var_60
        void* rcx_5 = &var_60
        
        if (var_58 != 0)
            rcx_5 = var_58
        
        int32_t rax_23 = *(rcx_5 + ((sx.q(var_50 - 1) & sx.q(r10_9)) << 2))
        
        if (rax_23 == 0xffffffff)
        label_142183a15_1:
            rsi_1 = sub_14217f460(&var_98, r10_9, &j_2)
        else
            int64_t* r8_11 = var_98
            
            while (r8_11[sx.q(rax_23) * 0x11] != j)
                rax_23 = r8_11[sx.q(rax_23) * 0x11 + 0x10].d
                
                if (rax_23 == 0xffffffff)
                    goto label_142183a15_3
            
            if (rax_23 == 0xffffffff)
            label_142183a15_2:
                rsi_1 = sub_14217f460(&var_98, r10_9, &j_2)
            else
                void* rsi_2 = &r8_11[sx.q(rax_23) * 0x11]
                
                if (rsi_2 == 0)
                label_142183a15_3:
                    rsi_1 = sub_14217f460(&var_98, r10_9, &j_2)
                else
                    rsi_1 = rsi_2 + 8
    
    uint32_t rdx_15 = (r14_1 u>> 4).d
    int32_t r8_14 = (0x9e3779b9 - rdx_15) ^ rdx_15 << 8
    int32_t r9_3 = neg.d(rdx_15 + r8_14) ^ r8_14 u>> 0xd
    int32_t rdx_18 = (rdx_15 - r8_14 - r9_3) ^ r9_3 u>> 0xc
    int32_t r8_17 = (r8_14 - rdx_18 - r9_3) ^ rdx_18 << 0x10
    int32_t r9_6 = (r9_3 - r8_17 - rdx_18) ^ r8_17 u>> 5
    int32_t rdx_21 = (rdx_18 - r8_17 - r9_6) ^ r9_6 u>> 3
    int32_t r8_20 = (r8_17 - rdx_21 - r9_6) ^ rdx_21 << 0xa
    int32_t r9_9 = (r9_6 - r8_20 - rdx_21) ^ r8_20 u>> 0xf
    void* rbx_4
    
    if (*(rsi_1 + 8) == *(rsi_1 + 0x34))
    label_142183afa:
        rbx_4 = sub_14217f340(rsi_1, r9_9, &var_218)
    else
        void* rcx_10 = *(rsi_1 + 0x40)
        void* r8_22 = rsi_1 + 0x38
        
        if (rcx_10 != 0)
            r8_22 = rcx_10
        
        int32_t rax_39 = *(r8_22 + (((sx.q(*(rsi_1 + 0x48)) - 1) & sx.q(r9_9)) << 2))
        
        if (rax_39 == 0xffffffff)
        label_142183afa_1:
            rbx_4 = sub_14217f340(rsi_1, r9_9, &var_218)
        else
            int64_t* rbx_3
            
            while (true)
                rbx_3 = (sx.q(rax_39) << 6) + *rsi_1
                
                if (*rbx_3 == r14_1)
                    break
                
                rax_39 = rbx_3[7].d
                
                if (rax_39 == 0xffffffff)
                    goto label_142183afa_2
            
            if (rax_39 == 0xffffffff || rbx_3 == 0)
            label_142183afa_2:
                rbx_4 = sub_14217f340(rsi_1, r9_9, &var_218)
            else
                rbx_4 = &rbx_3[1]
    
    int64_t r14_2 = sx.q(*(rbx_4 + 8))
    int32_t rcx_12 = (r14_2 + 1).d
    *(rbx_4 + 8) = rcx_12
    
    if (rcx_12 s> *(rbx_4 + 0xc))
        sub_14119a860(rbx_4)
    
    int64_t rax_41 = *rbx_4
    int64_t r14_3 = r14_2 * 2
    *(rax_41 + (r14_3 << 3)) = -0x2152411021524111
    *(rax_41 + (r14_3 << 3) + 8) = 0
    *(rax_41 + (r14_3 << 3) + 0xa) = 0
    *(rax_41 + (r14_3 << 3) + 0xc) = 0
    int64_t r13_1 = *rbx_4
    *(r13_1 + (r14_3 << 3)) = rdi_1
    *(rsi_1 + 0x50) += 1
    
    if ((*(*rdi_1 + 0x350))(rdi_1) != 0)
        void* rcx_15 = rdi_1[0xca]
        
        if (rcx_15 != 0)
            int64_t rax_44 = 0
            
            if (0 == *(rcx_15 + 8))
                *(rcx_15 + 8) = 0
            else
                rax_44 = *(rcx_15 + 8)
            
            if (((rax_44 u>> 0x1a).b & 1) == 0)
                float zmm0_2
                float zmm6_1
                zmm0_2, zmm6_1 = sub_14218eae0(&data_143a2edd8)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                
                while (*(rdi_1 + 0x434) != 0)
                    zmm0_2 = sub_140b732d0(zmm6_1)
                
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                sub_14218e220(rdi_1, zmm0_2)
        
        int64_t j_3 = sx.q(rdi_1[0xc1].d)
        int32_t r15_1 = 0
        
        if (j_3 s> 0)
            int64_t* rax_48 = rdi_1[0xc0]
            int64_t j_1
            
            do
                int64_t rcx_19 = *rax_48
                
                if (rcx_19 != 0)
                    r15_1 += *(rcx_19 + 0x118)
                
                rax_48 = &rax_48[1]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        *(r13_1 + (r14_3 << 3) + 0xc) = r15_1
        int32_t rcx_20 = rdi_1[0x87].d
        
        if ((rcx_20 & 0x3fffffff) == 0x3fffffff || rcx_20 s< 0)
            *(rbx_4 + 0x10) += 1
            *(rsi_1 + 0x54) += 1
        else
            *(rbx_4 + 0x14) += 1
            *(rsi_1 + 0x58) += 1
        
        if (rdi_1[0x81] == 0)
            *(rbx_4 + 0x18) += 1
            *(rsi_1 + 0x5c) += 1
        
        if (rdi_1[0xc1].d == 0)
            *(rbx_4 + 0x28) += 1
            *(rsi_1 + 0x6c) += 1
        
        int32_t rax_50
        
        if ((*(rdi_1 + 0x8a) & 1) == 0)
            *(rbx_4 + 0x1c) += 1
            *(rsi_1 + 0x60) += 1
            rax_50.b = 0
        else
            rax_50.b = 1
        
        *(r13_1 + (r14_3 << 3) + 8) = rax_50.b
        char rax_51 = sub_142188730(rdi_1)
        *(r13_1 + (r14_3 << 3) + 0xa) = rax_51 == 0
        
        if (rax_51 != 0)
            *(rbx_4 + 0x20) += 1
            *(rsi_1 + 0x64) += 1
        
        if (*(rdi_1 + 0x431) s>= 0)
            *(r13_1 + (r14_3 << 3) + 9) = 1
        else
            void* rax_52 = rdi_1[0x81]
            int32_t r9_10 = 0
            int64_t r11_1 = 0
            int64_t* r10_10 = *(rax_52 + 0x40)
            uint64_t r12_2 = sx.q(*(rax_52 + 0x48)) << 3 u>> 3
            
            if (r10_10 u> &r10_10[sx.q(*(rax_52 + 0x48))])
                r12_2 = 0
            
            uint64_t rax_54
            
            if (r12_2 != 0)
                do
                    void* rax_55 = *r10_10
                    r10_10 = &r10_10[1]
                    char rdx_28 = *(rax_55 + 0x35)
                    char r8_24 = rdx_28
                    char rcx_23 = *(*(rax_55 + 0x20) + 0xb7)
                    rax_54 = zx.q(r9_10 + 1)
                    
                    if (rcx_23 u<= rdx_28)
                        r8_24 = rcx_23
                    
                    if (r8_24 u< *(rdi_1 + 0x43e))
                        rax_54 = zx.q(r9_10)
                    
                    r11_1 += 1
                    r9_10 = rax_54.d
                while (r11_1 != r12_2)
            
            rax_54.b = r9_10 != 0
            *(r13_1 + (r14_3 << 3) + 9) = rax_54.b
            
            if (r9_10 == 0 && r15_1 == 0)
                *(rbx_4 + 0x24) += 1
                *(rsi_1 + 0x68) += 1
    
    r8_1 = var_2b8
    i = i_2 + 1
    rdx_1 = var_2c0
    i_2 = i
    
    if (i s< r8_1)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_4 = i + 1
            i_2 = i_4
            i = i_4
            
            if (i_4 s>= r8_1)
                break

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

int64_t* var_278 = &var_88
int32_t rcx_26 = 0
int32_t var_280 = 0
int32_t r8_25 = 0
int32_t var_27c = 1
int32_t var_270 = 0xffffffff
int64_t var_26c = 0
int32_t var_70

if (var_70 != 0)
    int64_t* r9_11 = &var_88
    int64_t* var_78
    
    if (var_78 != 0)
        r9_11 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_31 = *r9_11
    
    if (rdx_31 != 0)
    label_142183e58:
        int32_t rax_65 = neg.d(rdx_31) & rdx_31
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_65)
        int32_t var_27c_1 = rax_65
        int32_t rax_66
        
        if (rax_65 == 0)
            rax_66 = 0x20
        else
            rax_66 = 0x1f - temp0_2
        
        int32_t rax_67 = r8_25 - rax_66 + 0x1f
        
        if (rax_67 s> var_70)
            rax_67 = var_70
        
        var_26c.d = rax_67
    else
        while (true)
            int64_t rdx_32 = sx.q(rcx_26)
            r8_25 += 0x20
            rcx_26 += 1
            var_26c:4.d = r8_25
            var_280 = rcx_26
            
            if (rdx_32.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_26c.d = var_70
                break
            
            rdx_31 = *(r9_11 + (rdx_32 << 2) + 4)
            int32_t var_270_1 = 0xffffffff
            
            if (rdx_31 != 0)
                goto label_142183e58

int32_t var_14c = var_70
int128_t var_2a0 = var_280.o
int128_t var_290 = 0xffffffff
double temp0_3[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_1a8 = (&var_98).o
int128_t var_198 = var_2a0
int64_t var_188 = temp0_3.q

while (true)
    int64_t rcx_29 = sx.q(var_198:0xc.d)
    int64_t rdx_34 = var_1a8.q
    char rax_69
    
    if (rcx_29.d != ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d || var_198.q != &var_88
            || rdx_34 != &var_98)
        rax_69 = 1
    else
        rax_69 = 0
    
    if (rax_69 == 0)
        break
    
    void** rcx_31 = rcx_29 * 0x88 + *rdx_34
    void* rax_70 = *rcx_31
    uint64_t var_110 = 0
    int32_t var_108_1 = 0
    int32_t var_e4_1 = 0x80
    int64_t var_100
    __builtin_memset(&var_100, 0, 0x1c)
    int32_t var_e0_1 = 0xffffffff
    int32_t var_dc_1 = 0
    int64_t var_d0_1 = 0
    int32_t var_c8_1 = 0
    sub_142182b30(&var_110, &rcx_31[1])
    int32_t var_c0_1 = rcx_31[0xb].d
    int32_t var_bc_1 = *(rcx_31 + 0x5c)
    int32_t var_b8_1 = rcx_31[0xc].d
    int32_t var_b4_1 = *(rcx_31 + 0x64)
    int32_t var_b0_1 = rcx_31[0xd].d
    int32_t var_ac_1 = *(rcx_31 + 0x6c)
    int32_t var_a8_1 = rcx_31[0xe].d
    int32_t var_a4_1 = *(rcx_31 + 0x74)
    int32_t var_a0_1 = rcx_31[0xf].d
    int64_t var_2d0 = 0
    int64_t var_2c8_1 = 0
    
    if (rax_70 != 0)
        uint64_t rax_80 = zx.q(*(rax_70 + 0x11a))
        
        if (rax_80.d u<= 7)
            wchar16 const* const rdx_36
            int32_t r8_27
            
            switch (rax_80)
                case 0
                    r8_27 = 4
                    rdx_36 = u"None"
                case 1
                    r8_27 = 4
                    rdx_36 = u"Game"
                case 2
                    r8_27 = 6
                    rdx_36 = u"Editor"
                case 3
                    r8_27 = 3
                    rdx_36 = &data_142f2b500
                case 4
                    r8_27 = 0xd
                    rdx_36 = u"EditorPreview"
                case 5
                    r8_27 = 0xb
                    rdx_36 = u"GamePreview"
                case 6
                    r8_27 = 7
                    rdx_36 = u"GameRPC"
                case 7
                    r8_27 = 8
                    rdx_36 = u"Inactive"
            
            sub_140a20ba0(&var_2d0, rdx_36, r8_27)
        
        sub_140a20ba0(&var_2d0, &data_142dd1080, 3)
        int64_t var_170
        int64_t* rax_81 = sub_140d21830(rax_70, &var_170, 0, 0)
        int32_t rcx_38 = rax_81[1].d
        int32_t r8_28 = rcx_38 - 1
        
        if (rcx_38 == 0)
            r8_28 = 0
        
        sub_140a20ba0(&var_2d0, *rax_81, r8_28)
        int64_t rcx_40 = var_170
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
    
    char var_2e7 = 0
    char* var_210 = &var_2e7
    char** var_208 = &var_210
    char var_2e8
    
    if (var_108_1 - var_dc_1 s> 0)
        sub_142188a60(&var_110)
        char*** var_200_1 = &var_208
        sub_14217fd60(var_110, var_108_1 - var_dc_1, var_2e8)
    
    sub_1421987f0(&var_110)
    int32_t var_e8
    int32_t r8_30 = var_e8
    int64_t* var_258_1 = &var_100
    int32_t var_260 = 0
    int32_t var_25c_1 = 1
    int32_t var_250_1 = 0xffffffff
    int64_t var_24c_1 = 0
    
    if (r8_30 != 0)
        sub_14059bdd0(&var_260)
        r8_30 = var_e8
    
    double zmm2[0x2] = var_250_1.o
    uint128_t var_2a0_1 = var_260.o
    int32_t var_12c_1 = r8_30
    double var_290_1[0x2] = zmm2
    double temp0_4[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    uint128_t var_1f8 = (&var_110).o
    uint128_t var_1e8_1 = var_2a0_1
    int64_t var_1d8_1 = temp0_4.q
    
    while (true)
        int64_t rcx_47 = sx.q(var_1e8_1:0xc.d)
        int64_t* rax_84 = var_1f8.q
        
        if (rcx_47.d == ((0xffffffff << (r8_30.b & 0x1f)).q u>> 0x20).d && var_1e8_1.q == &var_100
                && rax_84 == &var_110)
            break
        
        int64_t rax_85 = *rax_84
        uint64_t* var_2e0 = nullptr
        int32_t var_2d8_1 = 0
        void* rdx_42 = *((rcx_47 << 6) + rax_85)
        
        if (rdx_42 != 0)
            uint32_t rcx_49 = zx.d(*(rdx_42 + 0x108))
            uint64_t* rcx_60
            uint128_t zmm0_3
            
            if (rcx_49 == 0)
                sub_1405947f0(&var_2e0, 4)
                int32_t rax_89 = var_2d8_1 + 4
                var_2d8_1 = rax_89
                
                if (rax_89 s> 0)
                    sub_140594770(&var_2e0)
                
                zmm0_3 = 0x77006f004c
            label_14218438b:
                rcx_60 = var_2e0
                *rcx_60 = zmm0_3.q
            label_142184394:
                
                if (rcx_60 != 0)
                    sub_140a74f90(rcx_60)
            else
                if (rcx_49 == 1)
                    sub_1405947f0(&var_2e0, 4)
                    int32_t rax_88 = var_2d8_1 + 4
                    var_2d8_1 = rax_88
                    
                    if (rax_88 s> 0)
                        sub_140594770(&var_2e0)
                    
                    zmm0_3 = 0x640065004d
                    goto label_14218438b
                
                if (rcx_49 == 2)
                    sub_1405947f0(&var_2e0, 5)
                    int32_t rax_87 = var_2d8_1 + 5
                    var_2d8_1 = rax_87
                    
                    if (rax_87 s> 0)
                        sub_140594770(&var_2e0)
                    
                    rcx_60 = var_2e0
                    *rcx_60 = 0x68006700690048
                    rcx_60[1].w = 0
                    goto label_142184394
                
                if (rcx_49 == 3)
                    sub_1405947f0(&var_2e0, rcx_49 + 2)
                    int32_t rax_86 = var_2d8_1 + 5
                    var_2d8_1 = rax_86
                    
                    if (rax_86 s> 0)
                        sub_140594770(&var_2e0)
                    
                    rcx_60 = var_2e0
                    *rcx_60 = 0x74006900720043
                    rcx_60[1].w = 0
                    goto label_142184394
        
        var_1e8_1:8.d &= not.d(var_1f8:0xc.d)
        sub_14059bdd0(&var_1f8:8)
    
    int32_t r8_31 = var_e8
    int64_t* var_238_1 = &var_100
    int32_t var_240 = 0
    int32_t var_23c_1 = 1
    int32_t var_230_1 = 0xffffffff
    int64_t var_22c_1 = 0
    
    if (r8_31 != 0)
        sub_14059bdd0(&var_240)
        r8_31 = var_e8
    
    zmm2 = var_230_1.o
    double var_290_2[0x2] = zmm2
    uint128_t zmm1_1 = var_240.o
    uint128_t var_2a0_2
    var_2a0_2:8.d = 0xffffffff << (r8_31.b & 0x1f)
    var_2a0_2:0xc.d = r8_31
    double temp0_5[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    uint128_t var_1d0 = (&var_110).o
    uint128_t var_1c0_1 = zmm1_1
    int64_t var_1b0_1 = temp0_5.q
    
    while (true)
        int64_t rax_92 = sx.q(var_1c0_1:0xc.d)
        int64_t* r15_2 = var_1d0.q
        
        if (rax_92.d == (var_2a0_2:8.q u>> 0x20).d && var_1c0_1.q == &var_100 && r15_2 == &var_110)
            break
        
        int64_t r15_3 = *r15_2
        int64_t r14_5 = rax_92 << 6
        
        if (*(r14_5 + r15_3 + 0x1c) s> 0 || *(r14_5 + r15_3 + 0x18) s> 0)
            char var_2e8_1 = 0
            sub_142180170(*(r14_5 + r15_3 + 8), *(r14_5 + r15_3 + 0x10), var_2e8)
            int64_t* i_1 = *(r14_5 + r15_3 + 8)
            
            for (void* r14_8 = &i_1[sx.q(*(r14_5 + r15_3 + 0x10)) * 2]; i_1 != r14_8; i_1 = &i_1[2])
                int64_t* rcx_66 = *i_1
                (*(*rcx_66 + 0x350))(rcx_66)
        
        var_1c0_1:8.d &= not.d(var_1d0:0xc.d)
        sub_14059bdd0(&var_1d0:8)
    
    int64_t rcx_68 = var_2d0
    
    if (rcx_68 != 0)
        sub_140a74f90(rcx_68)
    
    sub_1421827f0(&var_110)
    var_198:8.d &= not.d(var_1a8:0xc.d)
    sub_14059bdd0(&var_1a8:8)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t result = sub_142182470(&var_98)
__security_check_cookie(rax_1 ^ &var_318)
return result
