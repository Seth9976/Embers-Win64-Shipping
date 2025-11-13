// 函数: sub_142998850
// 地址: 0x142998850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_5c0 = -2
void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
int32_t* var_658 = arg4
int32_t* r14 = arg2
sub_14299cb90(arg1)
int64_t var_650 = 0
sub_14299c610(arg1, &var_650)
int128_t var_5d8
__builtin_memset(&var_5d8, 0, 0x18)
sub_14299e740(arg1, &var_5d8)
uint16_t r15 = 2
int64_t r8 = 0
void* r13 = var_5d8.q
int64_t rax_3
int64_t rdx_2
rdx_2:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, var_5d8:8.q - r13)
int64_t r12_1 = rdx_2 s>> 3
int64_t r12_2 = (var_5d8:8.q - r13) s/ 0x30

if (r12_1 != neg.q(r12_1 u>> 0x3f))
    int64_t* rcx_4 = r13 + 0x10
    
    do
        r15 += (*rcx_4).w + 3
        r8 += 1
        rcx_4 = &rcx_4[6]
    while (r8 u< r12_2)

uint64_t rdi_1 = zx.q(r15)
int64_t rbx_1 = var_650 + rdi_1
int64_t* rdx_3 = arg1
int64_t* r8_1

if (rbx_1 u<= rdx_3[0x18])
    r8_1 = rdx_3[0x17]
else
    rdx_3[0x18] = rbx_1
    int64_t rcx_5 = rdx_3[0x17]
    
    if (rcx_5 != 0)
        j_sub_140a74f90(rcx_5)
    
    int64_t* rax_8 = j_sub_140a82f30(rbx_1)
    r8_1 = rax_8
    rdx_3 = arg1
    rdx_3[0x17] = rax_8

void* rax_10 = rdi_1 + 0x58 + r8_1
int64_t rax_11 = rdx_3[0x11]
int64_t rcx_7 = 0
int64_t r9 = 0

if (rax_11 != 0)
    r9 = rax_11

int64_t var_640 = r9
int64_t rax_12 = rdx_3[0x13]

if (rax_12 != 0)
    rcx_7 = rax_12

var_650 = rcx_7
int32_t rdi_2 = *arg4
int32_t rbx_2 = *(rdx_3 + 0x24)

if (rbx_2 s>= arg4[2])
    rbx_2 = arg4[2]

int32_t rsi_1 = arg4[1]
int32_t i_16 = var_658[3]
int32_t i_13 = rdx_3[5].d

if (i_13 s>= i_16)
    i_13 = i_16

int32_t i_11 = i_13
memset(&r8_1[1], 0, 0x50)
*r8_1 = 2
r8_1[0xa] = sx.q(arg1[2].d)
sub_14299ed70(arg1, rdi_2, rsi_1, rbx_2, i_11)
void* rdx_5 = arg1[0x17]
*(rdx_5 + 0x58) = r15.b
*(rdx_5 + 0x59) = (r15 u>> 8).b
void* rdx_6 = rdx_5 + 0x5a
int64_t r9_2 = 0

if (r12_2 != 0)
    void* r8_4 = r13 + 0x20
    
    do
        void* rcx_11 = r8_4 - 0x20
        
        if (*(r8_4 - 8) u>= 0x10)
            rcx_11 = *rcx_11
        
        char i
        
        for (i = *rcx_11; i != 0; i = *rcx_11)
            *rdx_6 = i
            rdx_6 += 1
            rcx_11 += 1
        
        *rdx_6 = i
        *(rdx_6 + 1) = (*(r8_4 + 0xc) & 1) | (*(r8_4 + 8) + 1) << 4 | (*r8_4 & 3) << 2
        *(rdx_6 + 2) = *(r8_4 + 4)
        rdx_6 += 3
        r9_2 += 1
        r8_4 += 0x30
    while (r9_2 u< r12_2)

int64_t rax_20
int64_t rdx_7
rdx_7:rax_20 = muls.dp.q(0x6bca1af286bca1b, arg1[9] - arg1[8])
int64_t rbx_5 = rdx_7 s>> 2
int64_t rbx_6 = rbx_5 + (rbx_5 u>> 0x3f)
int64_t r12_3 = 0
int32_t j_4 = 0
uint64_t rdi_4 = (rbx_6 + 0x1f) u>> 5
int64_t var_620
sub_1429958f0(&var_620, rdi_4, &j_4)
int64_t var_608 = 0

if (rbx_6 u> 0x7fffffffffffffff)
    sub_1406afea0()
    noreturn

int64_t var_618
int64_t rcx_16 = var_618
int64_t r15_1 = var_620

if (rdi_4 u< (rcx_16 - r15_1) s>> 2)
    int64_t rax_26 = r15_1 + (rdi_4 << 2)
    
    if (rax_26 != rcx_16)
        rcx_16 = rax_26
    
    int64_t var_618_1 = rcx_16

int64_t var_608_1 = rbx_6
int32_t rbx_7 = rbx_6.d & 0x1f

if (rbx_7 u> 0)
    *(r15_1 + (rdi_4 << 2) - 4) &= (1 << rbx_7.b) - 1

int64_t rax_29
int64_t rdx_9
rdx_9:rax_29 = muls.dp.q(0x6bca1af286bca1b, arg1[9] - arg1[8])
int64_t rdx_10 = rdx_9 s>> 2
int64_t var_600[0x3]
sub_142995cd0(&var_600, rdx_10 + (rdx_10 u>> 0x3f))
int32_t i_7 = 0
int64_t* r11 = arg1
int64_t r10 = r11[9]
int64_t rax_32
int64_t rdx_12
rdx_12:rax_32 = muls.dp.q(0x6bca1af286bca1b, r10 - r11[8])
int64_t rdx_13 = rdx_12 s>> 2

if (rdx_13 != neg.q(rdx_13 u>> 0x3f))
    uint64_t i_1 = 0
    int64_t rdx_16
    
    do
        uint64_t rcx_24 = i_1 u>> 5
        *(r15_1 + (rcx_24 << 2)) &= not.d(1 << ((i_1.d & 0x1f) u% 0x20))
        i_7 += 1
        r10 = r11[9]
        int64_t rax_37
        int64_t rdx_15
        rdx_15:rax_37 = muls.dp.q(0x6bca1af286bca1b, r10 - r11[8])
        rdx_16 = rdx_15 s>> 2
        i_1 = zx.q(i_7)
    while (i_1 u< rdx_16 + (rdx_16 u>> 0x3f))

var_658 = r14
int32_t i_15 = i_11

if (rsi_1 s<= i_15)
    int64_t r13_1 = var_600[0]
    
    do
        int32_t i_6 = 0
        int64_t r9_3 = r11[8]
        r10 = r11[9]
        int64_t rax_40
        int64_t rdx_18
        rdx_18:rax_40 = muls.dp.q(0x6bca1af286bca1b, r10 - r9_3)
        int64_t rdx_19 = rdx_18 s>> 2
        
        if (rdx_19 != neg.q(rdx_19 u>> 0x3f))
            uint64_t i_2 = 0
            
            do
                void* rbx_9 = i_2 * 0x98 + r9_3
                int32_t rcx_29 = *(rbx_9 + 0x28)
                int32_t rax_45
                
                if (rsi_1 s< 0)
                    int32_t rax_48
                    
                    if (rcx_29 s< 0)
                        rax_48 = not.d(rcx_29) - rsi_1
                    else
                        rax_48 = rcx_29 - rsi_1 - 1
                    
                    rax_45 = neg.d(divs.dp.d(sx.q(rax_48), rcx_29))
                else
                    rax_45 = divs.dp.d(sx.q(rsi_1), rcx_29)
                
                if (rsi_1 == rcx_29 * rax_45)
                    int64_t* rcx_32 = i_2 * 0x18 + r13_1
                    int32_t** rdx_25 = rcx_32[1]
                    
                    if (rcx_32[2] == rdx_25)
                        std::vector<struct CHN* __ptr64& __ptr64,struct CHN* __ptr64,class std::allocator<struct CHN* __ptr64> >::_Emplace_reallocate<struct CHN* __ptr64& __ptr64>(
                            rcx_32, rdx_25, &var_658)
                        r14 = var_658
                    else
                        *rdx_25 = r14
                        rcx_32[1] += 8
                    
                    r14 += sx.q(sub_1429a6580(*(rbx_9 + 0x2c)) * *(rbx_9 + 0x34))
                    var_658 = r14
                    r11 = arg1
                
                i_6 += 1
                r9_3 = r11[8]
                r10 = r11[9]
                i_2 = zx.q(i_6)
            while (i_2 u< (r10 - r9_3) s/ 0x98)
            
            i_15 = i_11
        
        rsi_1 += 1
    while (rsi_1 s<= i_15)

int32_t i_9 = 0
int64_t r9_4 = r11[0xb]
int64_t rax_59
int64_t rdx_29
rdx_29:rax_59 = muls.dp.q(0x2aaaaaaaaaaaaaab, r11[0xc] - r9_4)
int64_t rdx_30 = rdx_29 s>> 1
int32_t zmm6 = 0x47c35000
int32_t var_698
int64_t* r15_3
int128_t zmm1_1

if (rdx_30 == neg.q(rdx_30 u>> 0x3f))
    r15_3 = r8_1
else
    uint64_t i_3 = 0
    int64_t rdx_54
    
    do
        uint64_t rcx_38 = i_3 * 3
        int64_t rax_62 = sx.q(*(r9_4 + (rcx_38 << 2) + 8))
        int64_t r11_1 = r11[8]
        int64_t rdx_32 = sx.q(*(r9_4 + (rcx_38 << 2) + 4))
        int64_t rcx_39 = sx.q(*(r9_4 + (rcx_38 << 2)))
        int64_t r9_5 = rcx_39 * 0x98
        int64_t rbx_10 = var_600[0]
        int64_t* r12_4 = rbx_10 + rax_62 * 0x18
        int64_t* r15_2 = rbx_10 + rdx_32 * 0x18
        int64_t* rsi_2 = rbx_10 + rcx_39 * 0x18
        int32_t r14_1 = *(rax_62 * 0x98 + r11_1 + 0x2c)
        var_658.d = r14_1
        int32_t i_14 = *(rdx_32 * 0x98 + r11_1 + 0x2c)
        i_11 = i_14
        int32_t j_6 = *(r9_5 + r11_1 + 0x2c)
        j_4 = j_6
        zmm1_1.d = arg1[0x20].d.d f/ zmm6
        var_698.q = &data_143594a40
        struct Imf_2_3::DwaCompressor::LossyDctEncoderBase::VTable* var_558
        sub_1429964b0(&var_558, zmm1_1, var_640, var_650, var_698, *(r9_5 + r11_1 + 0x34), 
            *(r9_5 + r11_1 + 0x38))
        var_558 = &Imf_2_3::DwaCompressor::LossyDctEncoderCsc::`vftable'{for `Imf_2_3::DwaCompressor::LossyDctEncoderBase'}
        void* var_518
        int32_t* var_510
        int64_t var_508
        int32_t* rdx_35
        
        if (var_508 == var_510)
            sub_142991b90(&var_518, var_510, &j_4)
            rdx_35 = var_510
        else
            *var_510 = j_6
            rdx_35 = &var_510[1]
            var_510 = rdx_35
        
        void* rdx_37
        
        if (var_508 == rdx_35)
            sub_142991b90(&var_518, rdx_35, &i_11)
            rdx_37 = var_510
        else
            *rdx_35 = i_14
            rdx_37 = &var_510[1]
            var_510 = rdx_37
        
        if (var_508 == rdx_37)
            sub_142991b90(&var_518, rdx_37, &var_658)
        else
            *rdx_37 = r14_1
            var_510 = &var_510[1]
        
        void var_530
        int64_t* var_528
        int64_t var_520
        int64_t* rax_69
        
        if (var_520 == var_528)
            sub_142991990(&var_530, var_528, rsi_2)
            rax_69 = var_528
        else
            sub_1429959f0(var_528, rsi_2)
            rax_69 = &var_528[3]
            var_528 = rax_69
        
        void* rax_71
        
        if (var_520 == rax_69)
            sub_142991990(&var_530, rax_69, r15_2)
            rax_71 = var_528
        else
            sub_1429959f0(rax_69, r15_2)
            rax_71 = &var_528[3]
            var_528 = rax_71
        
        if (var_520 == rax_71)
            sub_142991990(&var_530, rax_71, r12_4)
        else
            sub_1429959f0(rax_71, r12_4)
            var_528 = &var_528[3]
        
        zmm6 = sub_14299b740(&var_558)
        int32_t var_538
        int64_t rcx_52 = sx.q(var_538)
        r15_3 = r8_1
        r15_3[8] += rcx_52
        int32_t var_534
        int64_t rax_72 = sx.q(var_534)
        r15_3[9] += rax_72
        var_640 += rcx_52 << 1
        var_650 += rax_72 << 1
        int64_t rdx_46 = sx.q(*(arg1[0xb] + (rcx_38 << 2)))
        uint64_t rcx_56 = rdx_46 u>> 5
        int64_t r10_2 = var_620
        *(r10_2 + (rcx_56 << 2)) |= 1 << ((rdx_46.d & 0x1f) u% 0x20)
        int64_t rdx_48 = sx.q(*(arg1[0xb] + (rcx_38 << 2) + 4))
        uint64_t rcx_58 = rdx_48 u>> 5
        *(r10_2 + (rcx_58 << 2)) |= 1 << ((rdx_48.d & 0x1f) u% 0x20)
        int64_t rdx_50 = sx.q(*(arg1[0xb] + (rcx_38 << 2) + 8))
        uint64_t rcx_60 = rdx_50 u>> 5
        *(r10_2 + (rcx_60 << 2)) |= 1 << ((rdx_50.d & 0x1f) u% 0x20)
        var_558 = &Imf_2_3::DwaCompressor::LossyDctEncoderBase::`vftable'
        void var_500
        sub_142996ec0(&var_500)
        void* rcx_62 = var_518
        
        if (rcx_62 == 0)
            r12_3 = 0
        else
            void* rax_85 = rcx_62
            
            if ((var_508 - rcx_62) s>> 2 << 2 u>= 0x1000)
                rcx_62 = *(rcx_62 - 8)
                
                if (rax_85 - rcx_62 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_62)
            r12_3 = 0
            __builtin_memset(&var_518, 0, 0x18)
        
        sub_142997940(&var_530)
        i_9 += 1
        r11 = arg1
        r9_4 = r11[0xb]
        int64_t rax_88
        int64_t rdx_53
        rdx_53:rax_88 = muls.dp.q(0x2aaaaaaaaaaaaaab, r11[0xc] - r9_4)
        rdx_54 = rdx_53 s>> 1
        i_3 = zx.q(i_9)
    while (i_3 u< rdx_54 + (rdx_54 u>> 0x3f))
    r10 = r11[9]

int32_t i_8 = 0
i_11 = 0
int64_t r8_19 = r11[8]
int64_t rax_91
int64_t rdx_56
rdx_56:rax_91 = muls.dp.q(0x6bca1af286bca1b, r10 - r8_19)
int64_t rdx_57 = rdx_56 s>> 2

if (rdx_57 != neg.q(rdx_57 u>> 0x3f))
    uint64_t i_4 = 0
    int64_t r10_4 = var_620
    int64_t rdx_66
    
    do
        void* r14_3 = i_4 * 0x98 + r8_19
        uint64_t rsi_4 = i_4 u>> 5
        int32_t rax_95 = i_4.d & 0x1f
        
        if ((*(r10_4 + (rsi_4 << 2)) & 1 << rax_95.b) == 0)
            int32_t rcx_67 = *(r14_3 + 0x20)
            
            if (rcx_67 == 0)
                int32_t rax_115 = sub_1429a6580(*(r14_3 + 0x2c)) * *(r14_3 + 0x34)
                int32_t j_2 = 0
                uint64_t rbx_13 = i_4 * 3
                int64_t r13_3 = var_600[0]
                
                if ((*(r13_3 + (rbx_13 << 3) + 8) - *(r13_3 + (rbx_13 << 3))) s>> 3 != 0)
                    uint64_t j = 0
                    int64_t rsi_8 = sx.q(rax_115)
                    
                    do
                        memcpy(*(r14_3 + 0x48), *(*(r13_3 + (rbx_13 << 3)) + (j << 3)), rsi_8.d)
                        *(r14_3 + 0x48) += rsi_8
                        j_2 += 1
                        j = zx.q(j_2)
                    while (j u< (*(r13_3 + (rbx_13 << 3) + 8) - *(r13_3 + (rbx_13 << 3))) s>> 3)
                
                r15_3[1] += sx.q(*(r14_3 + 0x94))
                i_8 = i_11
                r11 = arg1
            else if (rcx_67 == 1)
                int64_t* rbx_12 = var_600[0] + i_4 * 0x18
                int32_t rdi_6 = *(r14_3 + 0x2c)
                var_658.d = rdi_6
                zmm1_1.d = r11[0x20].d.d f/ zmm6
                void* const rax_111 = &data_143594a40
                
                if (*(r14_3 + 0x30) != 0)
                    rax_111 = nullptr
                
                var_698.q = rax_111
                int64_t r14_4 = var_650
                struct Imf_2_3::DwaCompressor::LossyDctEncoderBase::VTable* var_2d8
                sub_1429964b0(&var_2d8, zmm1_1, var_640, r14_4, var_698, *(r14_3 + 0x34), 
                    *(r14_3 + 0x38))
                var_2d8 = &Imf_2_3::DwaCompressor::LossyDctEncoder::`vftable'{for `Imf_2_3::DwaCompressor::LossyDctEncoderBase'}
                void var_2b0
                int64_t* var_2a8
                int64_t var_2a0
                
                if (var_2a0 == var_2a8)
                    sub_142991990(&var_2b0, var_2a8, rbx_12)
                else
                    sub_1429959f0(var_2a8, rbx_12)
                    var_2a8 = &var_2a8[3]
                
                void var_298
                int32_t* var_290
                int64_t var_288
                
                if (var_288 == var_290)
                    sub_142991b90(&var_298, var_290, &var_658)
                else
                    *var_290 = rdi_6
                    var_290 = &var_290[1]
                
                zmm6 = sub_14299b740(&var_2d8)
                int32_t var_2b8
                int64_t rcx_81 = sx.q(var_2b8)
                r15_3[8] += rcx_81
                int32_t var_2b4
                int64_t rax_113 = sx.q(var_2b4)
                r15_3[9] += rax_113
                var_640 += rcx_81 << 1
                var_650 = r14_4 + (rax_113 << 1)
                var_2d8 = &Imf_2_3::DwaCompressor::LossyDctEncoderBase::`vftable'
                void var_280
                sub_142996ec0(&var_280)
                sub_140909b10(&var_298)
                sub_142997940(&var_2b0)
                r11 = arg1
                i_8 = i_11
            else if (rcx_67 == 2)
                j_4 = 0
                uint64_t rax_97 = i_4 * 3
                int64_t r13_2 = var_600[0]
                int64_t rcx_69 = *(r13_2 + (rax_97 << 3))
                
                if ((*(r13_2 + (rax_97 << 3) + 8) - rcx_69) s>> 3 != 0)
                    uint64_t j_1 = 0
                    
                    do
                        char* rsi_5 = *(rcx_69 + (j_1 << 3))
                        int32_t k = 0
                        
                        if (*(r14_3 + 0x34) s> 0)
                            do
                                int32_t rdi_5 = 0
                                
                                if (sub_1429a6580(*(r14_3 + 0x2c)) s> 0)
                                    void* rbx_11 = r14_3 + 0x70
                                    int32_t rax_103
                                    
                                    do
                                        **rbx_11 = *rsi_5
                                        *rbx_11 += 1
                                        rsi_5 = &rsi_5[1]
                                        rdi_5 += 1
                                        rbx_11 += 8
                                        rax_103 = sub_1429a6580(*(r14_3 + 0x2c))
                                    while (rdi_5 s< rax_103)
                                
                                k += 1
                            while (k s< *(r14_3 + 0x34))
                        
                        int64_t rax_106 = sx.q(sub_1429a6580(*(r14_3 + 0x2c)) * *(r14_3 + 0x34))
                        r15_3 = r8_1
                        r15_3[7] += rax_106
                        int32_t j_3 = j_4 + 1
                        j_4 = j_3
                        rcx_69 = *(r13_2 + (rax_97 << 3))
                        j_1 = zx.q(j_3)
                    while (j_1 u< (*(r13_2 + (rax_97 << 3) + 8) - rcx_69) s>> 3)
                    
                    i_8 = i_11
                    r11 = arg1
            
            int64_t rbx_14 = var_620
            *(rbx_14 + (rsi_4 << 2)) |= 1 << (rax_95 u% 0x20)
            r10_4 = rbx_14
        
        i_8 += 1
        i_11 = i_8
        r8_19 = r11[8]
        int64_t rax_122
        int64_t rdx_65
        rdx_65:rax_122 = muls.dp.q(0x6bca1af286bca1b, r11[9] - r8_19)
        rdx_66 = rdx_65 s>> 2
        i_4 = zx.q(i_8)
    while (i_4 u< rdx_66 + (rdx_66 u>> 0x3f))

int64_t rbx_15 = r15_3[1]
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
void* r13_5

if (rbx_15 == 0)
    r13_5 = rax_10
else
    j_4 = sub_1403742e0(rbx_15.d)
    int32_t var_698_1 = 9
    
    if (sub_140374160(rax_10, &j_4, arg1[0x19], rbx_15.d) != 0)
        sub_142c99e10(&exceptionObject, "Data compression (zlib) failed.")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn
    
    uint64_t j_5 = zx.q(j_4)
    r13_5 = rax_10 + j_5
    r15_3[2] = j_5
    r11 = arg1

int64_t rdx_69 = r15_3[8]

if (rdx_69 != 0)
    int32_t rcx_95 = r11[2].d
    
    if (rcx_95 == 0)
        r15_3[3] = sx.q(sub_1429bbd60(r11[0x11], rdx_69.d, r13_5))
        r11 = arg1
    else if (rcx_95 == 1)
        i_11 = sub_1403742e0((rdx_69 * 2).d)
        int32_t var_698_2 = 9
        
        if (sub_140374160(r13_5, &i_11, arg1[0x11], r15_3[8].d * 2) != 0)
            sub_14297ab20(&exceptionObject, "Data compression (zlib) failed.")
            _CxxThrowException(&exceptionObject, &data_1439465c8)
            noreturn
        
        r15_3[3] = zx.q(i_11)
        r11 = arg1
    
    r13_5 += r15_3[3]

int64_t rax_131 = r15_3[9]

if (rax_131 != 0)
    int64_t rcx_101 = sx.q(sub_1429bb110(r11[0x1f], r11[0x13], (rax_131 * 2).d, r13_5))
    r15_3[4] = rcx_101
    r13_5 += rcx_101

int64_t rax_133 = r15_3[7]

if (rax_133 != 0)
    int64_t rcx_103 = sx.q(sub_1429bce90(rax_133.d, arg1[0x1b], arg1[0x15]))
    r8_1[6] = rcx_103
    i_11 = sub_1403742e0(rcx_103.d)
    int32_t var_698_3 = 9
    
    if (sub_140374160(r13_5, &i_11, arg1[0x15], r8_1[6].d) != 0)
        sub_142c99e10(&exceptionObject, "Error compressing RLE'd data.")
        _CxxThrowException(&exceptionObject, &data_143946868)
        noreturn
    
    uint64_t i_12 = zx.q(i_11)
    r8_1[5] = i_12
    r13_5 += i_12

int64_t rsi_9 = 0
int64_t i_10 = 0xb
int64_t i_5

do
    int64_t* rdi_7 = arg1[0x17]
    int64_t rbx_17 = *(rdi_7 + r12_3)
    *(rdi_7 + rsi_9) = rbx_17.b
    *(rdi_7 + rsi_9 + 1) = (rbx_17 u>> 8).b
    *(rdi_7 + rsi_9 + 2) = (rbx_17 u>> 0x10).b
    *(rdi_7 + rsi_9 + 3) = (rbx_17 u>> 0x18).b
    *(rdi_7 + rsi_9 + 4) = (rbx_17 u>> 0x20).b
    *(rdi_7 + rsi_9 + 5) = (rbx_17 u>> 0x28).b
    *(rdi_7 + rsi_9 + 6) = (rbx_17 u>> 0x30).b
    *(rdi_7 + rsi_9 + 7) = (rbx_17 u>> 0x38).b
    rsi_9 += 8
    r12_3 += 8
    i_5 = i_10
    i_10 -= 1
while (i_5 != 1)
*arg5 = arg1[0x17]
int32_t r13_6 = r13_5.d - arg1[0x17].d
sub_142997940(&var_600)
sub_140909b10(&var_620)
sub_142996da0(&var_5d8)
__security_check_cookie(rax_1 ^ &var_6b8)
return zx.q(r13_6 + 1)
