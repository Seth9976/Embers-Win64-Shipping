// 函数: sub_1411b2ca0
// 地址: 0x1411b2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void* rax_5 = *(arg2 + 0x78)
int64_t* var_2b8 = arg8
void* const var_268

if (arg4 == 0)
    var_268 = nullptr
else
    var_268 = *(arg4 + 0x110)

int64_t var_120 = 0
int32_t var_118 = 0
int32_t var_114 = 2
void var_110
memset(&var_110, 0, 0x50)
char var_4f = arg7[7].b
int32_t var_c0 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_70 = 0
int64_t var_150 = 0
int32_t var_138 = 0
int32_t var_134 = *(arg2 + 0x9c) u>> 7 & 0x3f
int32_t var_7c = 4
int32_t var_168 = 0xffffffff
char rax_12 = arg12 & 1

if ((arg12 & 2) != 0)
    rax_12 = 2

uint32_t rcx_2 = zx.d(rax_12)
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_160 = zx.o(0)
int128_t var_178 = data_142d3f800
int128_t var_148 = *(arg5 + 0x170)
int64_t* rdx

if (rax_12 == 0)
    rdx = 0x118
else if (rcx_2 == 1)
    rdx = 0x120
else if (rcx_2 != 2)
    rdx = 0x118
else
    rdx = 0x128

int64_t rax_13 = *arg8
void* rdi_1 = arg8[6]
int128_t var_208 = *(arg8 + 0x10)
int128_t zmm0 = *(arg8 + 0x20)
int64_t rdx_1 = *(rdx + rax_5)
int64_t var_218 = rax_13
int128_t var_1f8 = zmm0
int64_t var_210 = arg8[1]
void* var_1e8 = rdi_1
int128_t var_1d8 = *(arg8 + 0x40)
int64_t var_1e0 = arg8[7]
int128_t var_1c8 = *(arg8 + 0x50)
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, rdx_1, &var_218, &var_1a8)
int64_t rax_16

if (arg9 == 0)
    if (arg10 == 0)
        rax_16 = data_1439b5590
    else
        rax_16 = data_1439b5578
        
        if (arg10 != 2)
            rax_16 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_16 = data_1439b5548
    else
        rax_16 = data_1439b5530
        
        if (arg10 != 2)
            rax_16 = data_1439b5518
else if (arg10 == 0)
    rax_16 = data_14395da18
else
    rax_16 = data_1439b5500
    
    if (arg10 != 2)
        rax_16 = data_1439b54e8

var_160:8.q = rax_16
var_160.q = *arg7
int64_t var_150_1 = arg7[1]
void var_b8
sub_1419cf510(rax_5, *(arg1 + 0x10), rax_12, &var_b8)
bool cond:3 = *arg8 == 0
int32_t var_2f8 = 0
bool var_50 = *(zx.q(rax_12) + rax_5 + 0xa2)
void* const var_2a0

if (not(cond:3))
    sub_141097100(&var_130, &var_2a0, 0, &var_2f8)
    int64_t* var_348_1 = &var_2a0
    sub_141456250(*arg8, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)

void* r14_1 = arg8[4]
void* r15_1 = arg8[2]
uint64_t rax_19
rax_19.b = r14_1 != 0
bool rcx_11 = r15_1 != 0 & rax_19.b
void* const var_278
void* r15_2

if (rcx_11 == 0)
    r15_2 = arg4
else
    sub_141097100(&var_130, &var_2a0, 1, &var_2f8)
    sub_141097100(&var_130, &var_278, 2, &var_2f8)
    int64_t* var_348_2 = &var_2a0
    sub_141456250(r15_1, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r15_2 = arg4
    int64_t* var_348_3 = &var_278
    sub_141456250(r14_1, *(arg1 + 8), *(arg1 + 0x10), r15_2, arg5, arg6, arg7, arg13)

int32_t var_308
int64_t var_288
int64_t* r14_2

if (rdi_1 == 0)
    r14_2 = arg13
else
    sub_141097100(&var_130, &var_288, 3, &var_2f8)
    r14_2 = arg13
    int64_t* var_348_4 = &var_288
    sub_141456250(rdi_1, *(arg1 + 8), *(arg1 + 0x10), r15_2, arg5, arg6, arg7, r14_2)
    var_308 = *(rdi_1 + 0x140)
    int16_t var_304_1 = *(rdi_1 + 0x144)
    sub_14088bf20(&var_288, &var_308, &r14_2[2])
    var_308 = *(rdi_1 + 0x146)
    int16_t var_304_2 = *(rdi_1 + 0x14a)
    sub_14088bf20(&var_288, &var_308, r14_2 + 0x14)
    var_308 = *(rdi_1 + 0x14c)
    int16_t var_304_3 = *(rdi_1 + 0x150)
    sub_14088bf20(&var_288, &var_308, &r14_2[3])

int64_t* rdi_2 = var_2b8
void* r13_1 = rdi_2[8]
void* rsi_1

if (r13_1 == 0)
    rsi_1 = arg1
else
    sub_141097100(&var_130, &var_2a0, 4, &var_2f8)
    int64_t* var_348_5 = &var_2a0
    rsi_1 = arg1
    sub_141456250(r13_1, *(rsi_1 + 8), *(rsi_1 + 0x10), r15_2, arg5, arg6, arg7, r14_2)

void* rcx_25 = arg2
int32_t rdx_16 = 0
int32_t var_2c4 = 0
int32_t r9_12 = *(rcx_25 + 0x70)
var_308 = r9_12

if (r9_12 s> 0)
    int64_t rax_29 = 1
    int64_t r10_1 = arg3
    int64_t r8_12 = 0
    var_288 = 1
    int64_t var_258_1 = 0
    
    do
        if ((r10_1 & rax_29) != 0)
            void* rax_30 = *(rcx_25 + 0x68)
            
            if (rax_30 != 0)
                rcx_25 = rax_30
            
            void* rcx_26 = rcx_25 + r8_12
            int64_t* rcx_27 = *(rsi_1 + 0x20)
            void* rax_32 = (*(*rcx_27 + 8))(rcx_27, &var_130, zx.q(r9_12))
            int64_t r10_2 = *rdi_2
            int32_t r12_1 = 0
            int32_t r15_3 = 0
            int64_t* var_360
            int64_t* var_358
            void** var_330
            void* var_328
            void* r14_3
            
            if (r10_2 == 0)
                r14_3 = rax_32 + 0x78
            else
                uint64_t rdx_21 = ((zx.q(*(rax_32 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_250
                
                if (rdx_21.d u< 1)
                    var_250 = 0x98
                    int64_t var_248_2 = 0
                else
                    void* rax_33 = *(rax_32 + 0x10)
                    void* rcx_28 = rax_32
                    
                    if (rax_33 != 0)
                        rcx_28 = rax_33
                    
                    void* rdi_3 = *(rcx_28 + (rdx_21 << 3) - 8)
                    int32_t rax_34 = *(rdi_3 + 0x28)
                    int32_t rax_35 = rax_34 + 7
                    
                    if (rax_34 + 7 s< 0)
                        rax_35 += 7
                    
                    int32_t r9_13 = 0
                    int64_t i_4 = sx.q(*(rdi_3 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rcx_32 = 0
                        int64_t i
                        
                        do
                            void* rax_38 = *(rdi_3 + 0x30)
                            
                            if ((*(rdi_3 + 0x30) & 1) != 0)
                                rax_38 = (rax_38 s>> 1) + rdi_3 + 0x30
                            
                            uint32_t rax_39 = zx.d(*(rcx_32 + rax_38 + 2))
                            rcx_32 += 0x18
                            r9_13 += rax_39
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_2 = rax_13
                    
                    int64_t* rax_40 = rax_32 + 0x20
                    r12_1 = ((rax_35 s>> 3) + ((*(rdi_3 + 0x18) + *(rdi_3 + 8) + rax_34) << 3) + 7
                        + r9_13) & 0xfffffff8
                    
                    if (*(rax_32 + 0x72) u> 0x50)
                        rax_40 = *rax_40
                    
                    rsi_1 = arg1
                    r15_3 = r12_1
                    var_250 = rdi_3
                    rdi_2 = var_2b8
                    int64_t* var_248_1 = rax_40
                
                r14_3 = rax_32 + 0x78
                var_328 = r14_3
                var_330 = &var_250
                int64_t* var_338_1 = arg13
                void* var_340_1 = rcx_26
                void* var_348_6 = arg2
                var_358.d = *(rsi_1 + 0x10)
                var_360.b = rax_12
                sub_141455490(r10_2, *(rdi_2[1] + 0x20), *(rsi_1 + 8), (*(rsi_1 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            if (rcx_11 != 0)
                uint32_t r14_4 = zx.d(*(rax_32 + 0x70))
                uint64_t rcx_39 = zx.q(r14_4) & 3
                uint64_t rcx_40 = rcx_39 - (zx.q(rcx_39.d) u>> 1)
                int64_t rax_49 = (rcx_40 u>> 2 & 0x3333333333333333) + (rcx_40 & 0x3333333333333333)
                uint64_t rdx_30 =
                    ((((rax_49 u>> 4) + rax_49) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_240
                int32_t rsi_4
                
                if (rdx_30.d u< 1)
                    var_240 = 0x98
                    rsi_4 = r15_3
                    int64_t var_238_2 = 0
                else
                    void* rax_50 = *(rax_32 + 0x10)
                    void* rcx_42 = rax_32
                    
                    if (rax_50 != 0)
                        rcx_42 = rax_50
                    
                    void* rdi_4 = *(rcx_42 + (rdx_30 << 3) - 8)
                    int32_t rax_51 = *(rdi_4 + 0x28)
                    int32_t rax_52 = rax_51 + 7
                    
                    if (rax_51 + 7 s< 0)
                        rax_52 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_4 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_46 = 0
                        int64_t i_1
                        
                        do
                            void* rax_55 = *(rdi_4 + 0x30)
                            
                            if ((*(rdi_4 + 0x30) & 1) != 0)
                                rax_55 = (rax_55 s>> 1) + rdi_4 + 0x30
                            
                            uint32_t rax_56 = zx.d(*(rax_55 + rcx_46 + 2))
                            rcx_46 += 0x18
                            r9_15 += rax_56
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_47 = rax_32 + 0x20
                    r12_1 += ((rax_52 s>> 3) + ((*(rdi_4 + 0x18) + *(rdi_4 + 8) + rax_51) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(rax_32 + 0x72) u> 0x50)
                        rcx_47 = *rcx_47
                    
                    rsi_4 = r12_1
                    var_240 = rdi_4
                    void* var_238_1 = sx.q(r15_3) + rcx_47
                
                uint64_t r14_5 = zx.q(r14_4) & 7
                int64_t r14_6 = r14_5 - (zx.q(r14_5.d) u>> 1 & 0x5555555555555555)
                int64_t rax_68 = (r14_6 u>> 2 & 0x3333333333333333) + (r14_6 & 0x3333333333333333)
                uint64_t rdx_37 =
                    ((((rax_68 u>> 4) + rax_68) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_230
                
                if (rdx_37.d u< 1)
                    var_230 = 0x98
                    r15_3 = rsi_4
                    int64_t var_228_2 = 0
                else
                    void* rax_69 = *(rax_32 + 0x10)
                    void* rcx_48 = rax_32
                    
                    if (rax_69 != 0)
                        rcx_48 = rax_69
                    
                    void* rdi_5 = *(rcx_48 + (rdx_37 << 3) - 8)
                    int32_t rax_70 = *(rdi_5 + 0x28)
                    int32_t rax_71 = rax_70 + 7
                    
                    if (rax_70 + 7 s< 0)
                        rax_71 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_5 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_52 = 0
                        int64_t i_2
                        
                        do
                            void* rax_74 = *(rdi_5 + 0x30)
                            
                            if ((*(rdi_5 + 0x30) & 1) != 0)
                                rax_74 = (rax_74 s>> 1) + rdi_5 + 0x30
                            
                            uint32_t rax_75 = zx.d(*(rax_74 + rcx_52 + 2))
                            rcx_52 += 0x18
                            r9_16 += rax_75
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_53 = rax_32 + 0x20
                    r12_1 += ((rax_71 s>> 3) + ((*(rdi_5 + 0x18) + *(rdi_5 + 8) + rax_70) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_3 = r12_1
                    
                    if (*(rax_32 + 0x72) u> 0x50)
                        rcx_53 = *rcx_53
                    
                    var_230 = rdi_5
                    void* var_228_1 = sx.q(rsi_4) + rcx_53
                
                rsi_1 = arg1
                rdi_2 = var_2b8
                r14_3 = rax_32 + 0x78
                void* var_328_1 = r14_3
                void** var_330_1 = &var_240
                int64_t* var_338_2 = arg13
                void* var_340_2 = rcx_26
                void* var_348_7 = arg2
                var_358.d = *(rsi_1 + 0x10)
                var_360.b = 0
                sub_141455490(rdi_2[2], *(rdi_2[3] + 0x20), *(rsi_1 + 8), (*(rsi_1 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
                var_328 = r14_3
                var_330 = &var_230
                int64_t* var_338_3 = arg13
                void* var_340_3 = rcx_26
                void* var_348_8 = arg2
                var_358.d = *(rsi_1 + 0x10)
                var_360.b = 0
                sub_141455490(rdi_2[4], *(rdi_2[5] + 0x20), *(rsi_1 + 8), (*(rsi_1 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            void* rdi_7 = rdi_2[6]
            int64_t* r12_4
            
            if (rdi_7 == 0)
                r12_4 = var_2b8
            else
                uint64_t rcx_65 = zx.q(*(rax_32 + 0x70)) & 0xf
                int64_t rcx_66 = rcx_65 - (zx.q(rcx_65.d) u>> 1 & 0x5555555555555555)
                int64_t rax_91 = (rcx_66 u>> 2 & 0x3333333333333333) + (rcx_66 & 0x3333333333333333)
                uint64_t rdx_48 =
                    ((((rax_91 u>> 4) + rax_91) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_48.d u< 1)
                    var_278 = 0x98
                    int64_t var_270_2 = 0
                else
                    void* rax_92 = *(rax_32 + 0x10)
                    void* rcx_68 = rax_32
                    
                    if (rax_92 != 0)
                        rcx_68 = rax_92
                    
                    void* rdi_6 = *(rcx_68 + (rdx_48 << 3) - 8)
                    int32_t rax_93 = *(rdi_6 + 0x28)
                    int32_t rax_94 = rax_93 + 7
                    
                    if (rax_93 + 7 s< 0)
                        rax_94 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_6 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_72 = 0
                        int64_t i_3
                        
                        do
                            void* rax_97 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_97 = (rax_97 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_98 = zx.d(*(rax_97 + rcx_72 + 2))
                            rcx_72 += 0x18
                            r9_19 += rax_98
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_73 = rax_32 + 0x20
                    
                    if (*(rax_32 + 0x72) u> 0x50)
                        rcx_73 = *rcx_73
                    
                    rsi_1 = arg1
                    int64_t rax_99 = sx.q(r15_3)
                    r15_3 = (((rax_94 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_93) << 3) + 7
                        + r9_19) & 0xfffffff8) + r12_1
                    var_278 = rdi_6
                    void* var_270_1 = rax_99 + rcx_73
                
                r12_4 = var_2b8
                var_328 = r14_3
                rdi_7 = r12_4[6]
                var_330 = &var_278
                int64_t* var_338_4 = arg13
                void* var_340_4 = rcx_26
                void* var_348_9 = arg2
                var_358.d = *(rsi_1 + 0x10)
                var_360.b = 0
                sub_141455490(rdi_7, *(r12_4[7] + 0x20), *(rsi_1 + 8), (*(rsi_1 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            if (r12_4[8] != 0)
                uint64_t rcx_80 = zx.q(*(rax_32 + 0x70)) & 0x1f
                int64_t rcx_81 = rcx_80 - (zx.q(rcx_80.d) u>> 1 & 0x5555555555555555)
                int64_t rax_109 =
                    (rcx_81 u>> 2 & 0x3333333333333333) + (rcx_81 & 0x3333333333333333)
                uint64_t rcx_88 =
                    ((((rax_109 u>> 4) + rax_109) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_88.d u< 1)
                    var_2a0 = 0x98
                    int64_t var_298_2 = 0
                else
                    void* rax_110 = *(rax_32 + 0x10)
                    void* rcx_89 = rax_32 + 0x20
                    void* rdx_56 = rax_32
                    
                    if (rax_110 != 0)
                        rdx_56 = rax_110
                    
                    if (*(rax_32 + 0x72) u> 0x50)
                        rcx_89 = *rcx_89
                    
                    var_2a0 = *(rdx_56 + ((rcx_88 - 1) << 3))
                    void* var_298_1 = sx.q(r15_3) + rcx_89
                
                var_328 = r14_3
                var_330 = &var_2a0
                int64_t* var_338_5 = arg13
                void* var_340_5 = rcx_26
                void* var_348_10 = arg2
                var_358.d = *(rsi_1 + 0x10)
                var_360.b = 0
                sub_141455490(r12_4[8], *(r12_4[9] + 0x20), *(rsi_1 + 8), (*(rsi_1 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            int32_t var_290
            int32_t var_28c
            sub_14126c0d0(rsi_1, var_268, rcx_26, &var_28c, &var_290)
            int128_t zmm0_1 = *(r12_4 + 0x10)
            int128_t zmm1_1 = *(r12_4 + 0x20)
            int64_t* rcx_96 = *(rsi_1 + 0x20)
            uint64_t r9_23 = zx.q(var_28c)
            var_218 = *r12_4
            int64_t var_210_1 = r12_4[1]
            int64_t var_1e0_1 = r12_4[7]
            int128_t var_208_1 = zmm0_1
            var_358.d = arg10
            int128_t var_1f8_1 = zmm1_1
            var_360.d = arg9
            int128_t var_1d8_1 = *(r12_4 + 0x40)
            void* var_1e8_1 = rdi_7
            int128_t var_1c8_1 = *(r12_4 + 0x50)
            int128_t var_1b8_1 = *(r12_4 + 0x60)
            int32_t* var_368_11
            var_368_11.d = var_290
            (*(*rcx_96 + 0x10))(rcx_96, arg2, zx.q(var_2c4), r9_23, var_368_11, var_360, var_358, 
                arg11, &var_1a8, &var_218, rax_32, var_330, var_328)
            rax_29 = var_288
            rcx_25 = arg2
            rdx_16 = var_2c4
            r8_12 = var_258_1
            r9_12 = var_308
            r10_1 = arg3
            rdi_2 = var_2b8
        
        rdx_16 += 1
        rax_29 = rol.q(rax_29, 1)
        r8_12 += 0x68
        var_2c4 = rdx_16
        var_258_1 = r8_12
        var_288 = rax_29
    while (rdx_16 s< r9_12)

int128_t var_188
int64_t* rcx_97 = var_188:8.q

if (rcx_97 != 0)
    sub_1419d6470(rcx_97)

int64_t* rcx_98 = var_188.q

if (rcx_98 != 0)
    sub_1419d6470(rcx_98)

int128_t var_198
int64_t* rcx_99 = var_198:8.q

if (rcx_99 != 0)
    sub_1419d6470(rcx_99)

int64_t* rcx_100 = var_198.q

if (rcx_100 != 0)
    sub_1419d6470(rcx_100)

int64_t* rcx_101 = var_1a8:8.q

if (rcx_101 != 0)
    sub_1419d6470(rcx_101)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_388)
return result
