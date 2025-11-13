// 函数: sub_1411b5680
// 地址: 0x1411b5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void* rcx_3 = *(arg2 + 0x78)
void* const var_270

if (arg4 == 0)
    var_270 = nullptr
else
    var_270 = *(arg4 + 0x110)

int64_t var_120 = 0
int32_t var_118 = 0
int32_t var_114 = 2
void var_110
memset(&var_110, 0, 0x50)
char var_4f = arg7[7].b
int32_t var_c0 = 0
int32_t var_134 = *(arg2 + 0x9c) u>> 7 & 0x3f
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_70 = 0
int64_t var_150 = 0
int32_t var_138 = 0
int32_t var_7c = 4
int32_t var_168 = 0xffffffff
char rax_7 = arg12 & 1

if ((2 & arg12) != 0)
    rax_7 = 2

uint32_t rcx_6 = zx.d(rax_7)
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_160 = zx.o(0)
int128_t var_178 = data_142d3f800
int128_t var_148 = *(arg5 + 0x170)
int64_t* rdx

if (rax_7 == 0)
    rdx = 0x118
else if (rcx_6 == 1)
    rdx = 0x120
else if (rcx_6 != 2)
    rdx = 0x118
else
    rdx = 0x128

int64_t rax_8 = *arg8
void* r15_2 = arg8[6]
int128_t var_208 = *(arg8 + 0x10)
int128_t zmm0 = *(arg8 + 0x20)
int64_t rdx_1 = *(rdx + rcx_3)
int64_t var_218 = rax_8
void* rax_9 = arg8[1]
int128_t var_1f8 = zmm0
void* var_210 = rax_9
int128_t var_1d8 = *(arg8 + 0x40)
void* var_1e8 = r15_2
int64_t var_1e0 = arg8[7]
int128_t var_1c8 = *(arg8 + 0x50)
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, rdx_1, &var_218, &var_1a8)
int64_t rax_11

if (arg9 == 0)
    if (arg10 == 0)
        rax_11 = data_1439b5590
    else
        rax_11 = data_1439b5578
        
        if (arg10 != 2)
            rax_11 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_11 = data_1439b5548
    else
        rax_11 = data_1439b5530
        
        if (arg10 != 2)
            rax_11 = data_1439b5518
else if (arg10 == 0)
    rax_11 = data_14395da18
else
    rax_11 = data_1439b5500
    
    if (arg10 != 2)
        rax_11 = data_1439b54e8

var_160:8.q = rax_11
var_160.q = *arg7
int64_t var_150_1 = arg7[1]
void var_b8
sub_1419cf510(rcx_3, *(arg1 + 0x10), rax_7, &var_b8)
int32_t var_304 = 0
void* rsi_2 = *arg8
bool var_50 = *(zx.q(rax_7) + rcx_3 + 0xa2)
void* const var_2b0

if (rsi_2 != 0)
    sub_141097100(&var_130, &var_2b0, 0, &var_304)
    int64_t* var_348_1 = &var_2b0
    sub_141456250(rsi_2, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)

void* rsi_3 = arg8[4]
void* r14_1 = arg8[2]
uint64_t rax_14
rax_14.b = rsi_3 != 0
bool rcx_13 = r14_1 != 0 & rax_14.b
void* const var_288
void* r14_2

if (rcx_13 == 0)
    r14_2 = arg4
else
    sub_141097100(&var_130, &var_2b0, 1, &var_304)
    sub_141097100(&var_130, &var_288, 2, &var_304)
    int64_t* var_348_2 = &var_2b0
    sub_141456250(r14_1, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r14_2 = arg4
    int64_t* var_348_3 = &var_288
    sub_141456250(rsi_3, *(arg1 + 8), *(arg1 + 0x10), r14_2, arg5, arg6, arg7, arg13)

int32_t var_318
int64_t var_2a0
void* rsi_4
int64_t* r13_1

if (r15_2 == 0)
    rsi_4 = arg1
    r13_1 = arg13
else
    sub_141097100(&var_130, &var_2a0, 3, &var_304)
    rsi_4 = arg1
    r13_1 = arg13
    int64_t* var_348_4 = &var_2a0
    sub_141456250(r15_2, *(rsi_4 + 8), *(rsi_4 + 0x10), r14_2, arg5, arg6, arg7, r13_1)
    var_318 = *(r15_2 + 0x140)
    int16_t var_314_1 = *(r15_2 + 0x144)
    sub_14088bf20(&var_2a0, &var_318, &r13_1[2])
    var_318 = *(r15_2 + 0x146)
    int16_t var_314_2 = *(r15_2 + 0x14a)
    sub_14088bf20(&var_2a0, &var_318, r13_1 + 0x14)
    var_318 = *(r15_2 + 0x14c)
    int16_t var_314_3 = *(r15_2 + 0x150)
    sub_14088bf20(&var_2a0, &var_318, &r13_1[3])
    var_318 = *(r15_2 + 0x152)
    int16_t var_314_4 = *(r15_2 + 0x156)
    sub_14088bf20(&var_2a0, &var_318, r13_1 + 0x1c)

void* r15_3 = arg8[8]

if (r15_3 != 0)
    sub_141097100(&var_130, &var_2b0, 4, &var_304)
    int64_t* var_348_5 = &var_2b0
    sub_141456250(r15_3, *(rsi_4 + 8), *(rsi_4 + 0x10), r14_2, arg5, arg6, arg7, r13_1)

void* rcx_28 = arg2
int32_t rdx_17 = 0
int32_t var_2dc = 0
int32_t r9_12 = *(rcx_28 + 0x70)
var_318 = r9_12

if (r9_12 s> 0)
    int64_t rax_27 = 1
    int64_t r10_1 = arg3
    int64_t r8_13 = 0
    var_2a0 = 1
    int64_t var_260_1 = 0
    
    do
        if ((r10_1 & rax_27) != 0)
            void* rax_28 = *(rcx_28 + 0x68)
            
            if (rax_28 != 0)
                rcx_28 = rax_28
            
            void* rcx_29 = rcx_28 + r8_13
            int64_t* rcx_30 = *(rsi_4 + 0x20)
            void* rax_30 = (*(*rcx_30 + 8))(rcx_30, &var_130, zx.q(r9_12))
            int64_t r10_2 = rax_8
            int32_t r12_1 = 0
            int32_t r15_4 = 0
            int64_t* var_360
            int64_t* var_358
            void** var_330
            void* var_328
            void* r14_3
            
            if (r10_2 == 0)
                r14_3 = rax_30 + 0x78
            else
                uint64_t rdx_22 = ((zx.q(*(rax_30 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_258
                
                if (rdx_22.d u< 1)
                    var_258 = 0x98
                    int64_t var_250_2 = 0
                else
                    void* rax_31 = *(rax_30 + 0x10)
                    void* rcx_31 = rax_30
                    
                    if (rax_31 != 0)
                        rcx_31 = rax_31
                    
                    void* rdi_1 = *(rcx_31 + (rdx_22 << 3) - 8)
                    int32_t rax_32 = *(rdi_1 + 0x28)
                    int32_t rax_33 = rax_32 + 7
                    
                    if (rax_32 + 7 s< 0)
                        rax_33 += 7
                    
                    int32_t r9_13 = 0
                    int64_t i_4 = sx.q(*(rdi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rcx_35 = 0
                        int64_t i
                        
                        do
                            void* rax_36 = *(rdi_1 + 0x30)
                            
                            if ((*(rdi_1 + 0x30) & 1) != 0)
                                rax_36 = (rax_36 s>> 1) + rdi_1 + 0x30
                            
                            uint32_t rax_37 = zx.d(*(rcx_35 + rax_36 + 2))
                            rcx_35 += 0x18
                            r9_13 += rax_37
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_2 = rax_8
                    
                    int64_t* rax_38 = rax_30 + 0x20
                    r12_1 = ((rax_33 s>> 3) + ((*(rdi_1 + 0x18) + *(rdi_1 + 8) + rax_32) << 3) + 7
                        + r9_13) & 0xfffffff8
                    
                    if (*(rax_30 + 0x72) u> 0x50)
                        rax_38 = *rax_38
                    
                    rsi_4 = arg1
                    r15_4 = r12_1
                    var_258 = rdi_1
                    int64_t* var_250_1 = rax_38
                
                r14_3 = rax_30 + 0x78
                var_328 = r14_3
                var_330 = &var_258
                int64_t* var_338_1 = arg13
                void* var_340_1 = rcx_29
                void* var_348_6 = arg2
                var_358.d = *(rsi_4 + 0x10)
                var_360.b = rax_7
                sub_141455490(r10_2, *(rax_9 + 0x20), *(rsi_4 + 8), (*(rsi_4 + 0x18)).b, rcx_3.d, 
                    var_360, var_358, arg4)
            
            int64_t* rdi_4
            
            if (rcx_13 == 0)
                rdi_4 = arg8
            else
                uint32_t r14_4 = zx.d(*(rax_30 + 0x70))
                uint64_t rcx_42 = zx.q(r14_4) & 3
                uint64_t rcx_43 = rcx_42 - (zx.q(rcx_42.d) u>> 1)
                int64_t rax_47 = (rcx_43 u>> 2 & 0x3333333333333333) + (rcx_43 & 0x3333333333333333)
                uint64_t rdx_31 =
                    ((((rax_47 u>> 4) + rax_47) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_248
                int32_t rsi_7
                
                if (rdx_31.d u< 1)
                    var_248 = 0x98
                    rsi_7 = r15_4
                    int64_t var_240_2 = 0
                else
                    void* rax_48 = *(rax_30 + 0x10)
                    void* rcx_45 = rax_30
                    
                    if (rax_48 != 0)
                        rcx_45 = rax_48
                    
                    void* rdi_2 = *(rcx_45 + (rdx_31 << 3) - 8)
                    int32_t rax_49 = *(rdi_2 + 0x28)
                    int32_t rax_50 = rax_49 + 7
                    
                    if (rax_49 + 7 s< 0)
                        rax_50 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_2 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_49 = 0
                        int64_t i_1
                        
                        do
                            void* rax_53 = *(rdi_2 + 0x30)
                            
                            if ((*(rdi_2 + 0x30) & 1) != 0)
                                rax_53 = (rax_53 s>> 1) + rdi_2 + 0x30
                            
                            uint32_t rax_54 = zx.d(*(rcx_49 + rax_53 + 2))
                            rcx_49 += 0x18
                            r9_15 += rax_54
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_50 = rax_30 + 0x20
                    r12_1 += ((rax_50 s>> 3) + ((*(rdi_2 + 0x18) + *(rdi_2 + 8) + rax_49) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(rax_30 + 0x72) u> 0x50)
                        rcx_50 = *rcx_50
                    
                    rsi_7 = r12_1
                    var_248 = rdi_2
                    void* var_240_1 = sx.q(r15_4) + rcx_50
                
                uint64_t r14_5 = zx.q(r14_4) & 7
                int64_t r14_6 = r14_5 - (zx.q(r14_5.d) u>> 1 & 0x5555555555555555)
                int64_t rax_66 = (r14_6 u>> 2 & 0x3333333333333333) + (r14_6 & 0x3333333333333333)
                uint64_t rdx_38 =
                    ((((rax_66 u>> 4) + rax_66) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_238
                
                if (rdx_38.d u< 1)
                    var_238 = 0x98
                    r15_4 = rsi_7
                    int64_t var_230_2 = 0
                else
                    void* rax_67 = *(rax_30 + 0x10)
                    void* rcx_51 = rax_30
                    
                    if (rax_67 != 0)
                        rcx_51 = rax_67
                    
                    void* rdi_3 = *(rcx_51 + (rdx_38 << 3) - 8)
                    int32_t rax_68 = *(rdi_3 + 0x28)
                    int32_t rax_69 = rax_68 + 7
                    
                    if (rax_68 + 7 s< 0)
                        rax_69 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_3 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_55 = 0
                        int64_t i_2
                        
                        do
                            void* rax_72 = *(rdi_3 + 0x30)
                            
                            if ((*(rdi_3 + 0x30) & 1) != 0)
                                rax_72 = (rax_72 s>> 1) + rdi_3 + 0x30
                            
                            uint32_t rax_73 = zx.d(*(rax_72 + rcx_55 + 2))
                            rcx_55 += 0x18
                            r9_16 += rax_73
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_56 = rax_30 + 0x20
                    r12_1 += ((rax_69 s>> 3) + ((*(rdi_3 + 0x18) + *(rdi_3 + 8) + rax_68) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_4 = r12_1
                    
                    if (*(rax_30 + 0x72) u> 0x50)
                        rcx_56 = *rcx_56
                    
                    var_238 = rdi_3
                    void* var_230_1 = sx.q(rsi_7) + rcx_56
                
                rsi_4 = arg1
                rdi_4 = arg8
                r14_3 = rax_30 + 0x78
                void* var_328_1 = r14_3
                void** var_330_1 = &var_248
                int64_t* var_338_2 = arg13
                void* var_340_2 = rcx_29
                void* var_348_7 = arg2
                var_358.d = *(rsi_4 + 0x10)
                var_360.b = 0
                sub_141455490(rdi_4[2], *(rdi_4[3] + 0x20), *(rsi_4 + 8), (*(rsi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
                var_328 = r14_3
                var_330 = &var_238
                int64_t* var_338_3 = arg13
                void* var_340_3 = rcx_29
                void* var_348_8 = arg2
                var_358.d = *(rsi_4 + 0x10)
                var_360.b = 0
                sub_141455490(rdi_4[4], *(rdi_4[5] + 0x20), *(rsi_4 + 8), (*(rsi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
            
            void* rdi_6 = rdi_4[6]
            int64_t* r12_4
            
            if (rdi_6 == 0)
                r12_4 = arg8
            else
                uint64_t rcx_68 = zx.q(*(rax_30 + 0x70)) & 0xf
                int64_t rcx_69 = rcx_68 - (zx.q(rcx_68.d) u>> 1 & 0x5555555555555555)
                int64_t rax_89 = (rcx_69 u>> 2 & 0x3333333333333333) + (rcx_69 & 0x3333333333333333)
                uint64_t rdx_49 =
                    ((((rax_89 u>> 4) + rax_89) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_49.d u< 1)
                    var_288 = 0x98
                    int64_t var_280_2 = 0
                else
                    void* rax_90 = *(rax_30 + 0x10)
                    void* rcx_71 = rax_30
                    
                    if (rax_90 != 0)
                        rcx_71 = rax_90
                    
                    void* rdi_5 = *(rcx_71 + (rdx_49 << 3) - 8)
                    int32_t rax_91 = *(rdi_5 + 0x28)
                    int32_t rax_92 = rax_91 + 7
                    
                    if (rax_91 + 7 s< 0)
                        rax_92 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_5 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_75 = 0
                        int64_t i_3
                        
                        do
                            void* rax_95 = *(rdi_5 + 0x30)
                            
                            if ((*(rdi_5 + 0x30) & 1) != 0)
                                rax_95 = (rax_95 s>> 1) + rdi_5 + 0x30
                            
                            uint32_t rax_96 = zx.d(*(rax_95 + rcx_75 + 2))
                            rcx_75 += 0x18
                            r9_19 += rax_96
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_76 = rax_30 + 0x20
                    
                    if (*(rax_30 + 0x72) u> 0x50)
                        rcx_76 = *rcx_76
                    
                    rsi_4 = arg1
                    int64_t rax_97 = sx.q(r15_4)
                    r15_4 = (((rax_92 s>> 3) + ((*(rdi_5 + 0x18) + *(rdi_5 + 8) + rax_91) << 3) + 7
                        + r9_19) & 0xfffffff8) + r12_1
                    var_288 = rdi_5
                    void* var_280_1 = rax_97 + rcx_76
                
                r12_4 = arg8
                var_328 = r14_3
                rdi_6 = r12_4[6]
                var_330 = &var_288
                int64_t* var_338_4 = arg13
                void* var_340_4 = rcx_29
                void* var_348_9 = arg2
                var_358.d = *(rsi_4 + 0x10)
                var_360.b = 0
                sub_141455490(rdi_6, *(r12_4[7] + 0x20), *(rsi_4 + 8), (*(rsi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
            
            if (r12_4[8] != 0)
                uint64_t rcx_83 = zx.q(*(rax_30 + 0x70)) & 0x1f
                int64_t rcx_84 = rcx_83 - (zx.q(rcx_83.d) u>> 1 & 0x5555555555555555)
                int64_t rax_107 =
                    (rcx_84 u>> 2 & 0x3333333333333333) + (rcx_84 & 0x3333333333333333)
                uint64_t rcx_91 =
                    ((((rax_107 u>> 4) + rax_107) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_91.d u< 1)
                    var_2b0 = 0x98
                    int64_t var_2a8_2 = 0
                else
                    void* rax_108 = *(rax_30 + 0x10)
                    void* rcx_92 = rax_30 + 0x20
                    void* rdx_57 = rax_30
                    
                    if (rax_108 != 0)
                        rdx_57 = rax_108
                    
                    if (*(rax_30 + 0x72) u> 0x50)
                        rcx_92 = *rcx_92
                    
                    var_2b0 = *(rdx_57 + ((rcx_91 - 1) << 3))
                    void* var_2a8_1 = sx.q(r15_4) + rcx_92
                
                var_328 = r14_3
                var_330 = &var_2b0
                int64_t* var_338_5 = arg13
                void* var_340_5 = rcx_29
                void* var_348_10 = arg2
                var_358.d = *(rsi_4 + 0x10)
                var_360.b = 0
                sub_141455490(r12_4[8], *(r12_4[9] + 0x20), *(rsi_4 + 8), (*(rsi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
            
            int32_t var_290
            int32_t var_28c
            sub_14126c0d0(rsi_4, var_270, rcx_29, &var_28c, &var_290)
            int128_t zmm0_1 = *(r12_4 + 0x10)
            int128_t zmm1_1 = *(r12_4 + 0x20)
            int64_t* rcx_99 = *(rsi_4 + 0x20)
            uint64_t r9_23 = zx.q(var_28c)
            var_218 = *r12_4
            int64_t var_210_1 = r12_4[1]
            int64_t var_1e0_1 = r12_4[7]
            int128_t var_208_1 = zmm0_1
            var_358.d = arg10
            int128_t var_1f8_1 = zmm1_1
            var_360.d = arg9
            int128_t var_1d8_1 = *(r12_4 + 0x40)
            void* var_1e8_1 = rdi_6
            int128_t var_1c8_1 = *(r12_4 + 0x50)
            int128_t var_1b8_1 = *(r12_4 + 0x60)
            int32_t* var_368_11
            var_368_11.d = var_290
            (*(*rcx_99 + 0x10))(rcx_99, arg2, zx.q(var_2dc), r9_23, var_368_11, var_360, var_358, 
                arg11, &var_1a8, &var_218, rax_30, var_330, var_328)
            rax_27 = var_2a0
            rcx_28 = arg2
            rdx_17 = var_2dc
            r8_13 = var_260_1
            r9_12 = var_318
            r10_1 = arg3
        
        rdx_17 += 1
        rax_27 = rol.q(rax_27, 1)
        r8_13 += 0x68
        var_2dc = rdx_17
        var_260_1 = r8_13
        var_2a0 = rax_27
    while (rdx_17 s< r9_12)

int128_t var_188
int64_t* rcx_100 = var_188:8.q

if (rcx_100 != 0)
    sub_1419d6470(rcx_100)

int64_t* rcx_101 = var_188.q

if (rcx_101 != 0)
    sub_1419d6470(rcx_101)

int128_t var_198
int64_t* rcx_102 = var_198:8.q

if (rcx_102 != 0)
    sub_1419d6470(rcx_102)

int64_t* rcx_103 = var_198.q

if (rcx_103 != 0)
    sub_1419d6470(rcx_103)

int64_t* rcx_104 = var_1a8:8.q

if (rcx_104 != 0)
    sub_1419d6470(rcx_104)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_388)
return result
