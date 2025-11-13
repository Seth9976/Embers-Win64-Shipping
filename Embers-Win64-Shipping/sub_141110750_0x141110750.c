// 函数: sub_141110750
// 地址: 0x141110750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* rax_6 = *(arg2 + 0x78)
void* const var_278

if (arg4 == 0)
    var_278 = nullptr
else
    var_278 = *(arg4 + 0x110)

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
char rax_12 = arg12 & 1

if ((2 & arg12) != 0)
    rax_12 = 2

int32_t var_7c = 4
int32_t var_70 = 0
int32_t var_138 = 0
uint32_t rcx_2 = zx.d(rax_12)
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_160
__builtin_memset(&var_160, 0, 0x18)
int128_t zmm0 = *(arg5 + 0x170)
int128_t var_178
__builtin_memset(&var_178, 0xff, 0x14)
int128_t var_148 = zmm0
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
zmm0 = *(arg8 + 0x40)
void* r15_2 = arg8[2]
void* r12 = arg8[4]
void* r14_1 = arg8[6]
int64_t var_218 = rax_13
void* rax_14 = arg8[1]
void* var_210 = rax_14
int128_t var_1d8 = zmm0
int64_t var_200 = arg8[3]
int64_t var_1f0 = arg8[5]
int128_t var_1c8 = *(arg8 + 0x50)
void* var_208 = r15_2
void* var_1f8 = r12
void* var_1e8 = r14_1
int64_t var_1e0 = arg8[7]
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, *(rdx + rax_6), &var_218, &var_1a8)
int64_t rax_18

if (arg9 == 0)
    if (arg10 == 0)
        rax_18 = data_1439b5590
    else
        rax_18 = data_1439b5578
        
        if (arg10 != 2)
            rax_18 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_18 = data_1439b5548
    else
        rax_18 = data_1439b5530
        
        if (arg10 != 2)
            rax_18 = data_1439b5518
else if (arg10 == 0)
    rax_18 = data_14395da18
else
    rax_18 = data_1439b5500
    
    if (arg10 != 2)
        rax_18 = data_1439b54e8

var_160:8.q = rax_18
var_160.q = *arg7
int64_t var_150 = arg7[1]
void var_b8
sub_1419cf510(rax_6, *(arg1 + 0x10), rax_12, &var_b8)
int32_t var_308 = 0
bool var_50 = *(zx.q(rax_12) + rax_6 + 0xa2)
void* const var_2c0

if (rax_13 != 0)
    sub_141097100(&var_130, &var_2c0, 0, &var_308)
    int64_t* var_338_1 = &var_2c0
    sub_141456250(rax_13, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    int16_t* r8_4 = rax_13 + 0x140
    
    if (rax_13 == 0)
        r8_4 = nullptr
    
    sub_141227c90(arg4, &arg13[2], r8_4, &var_2c0)

uint64_t rax_21
rax_21.b = r15_2 != 0
void* const var_288
void* r15_3

if ((rax_21.b & r12 != 0) == 0)
    r15_3 = arg4
else
    sub_141097100(&var_130, &var_2c0, 1, &var_308)
    sub_141097100(&var_130, &var_288, 2, &var_308)
    int64_t* var_338_2 = &var_2c0
    sub_141456250(r15_2, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r15_3 = arg4
    int64_t* var_338_3 = &var_288
    sub_141456250(r12, *(arg1 + 8), *(arg1 + 0x10), r15_3, arg5, arg6, arg7, arg13)

int64_t* r12_1

if (r14_1 == 0)
    r12_1 = arg13
else
    sub_141097100(&var_130, &var_2c0, 3, &var_308)
    r12_1 = arg13
    sub_14126c710(r14_1, *(arg1 + 8), *(arg1 + 0x10), r15_3, arg5, arg6, arg7, r12_1, &var_2c0)

void* r13_1 = arg8[8]
void* r14_2

if (r13_1 == 0)
    r14_2 = arg1
else
    sub_141097100(&var_130, &var_2c0, 4, &var_308)
    r14_2 = arg1
    int64_t* var_338_5 = &var_2c0
    sub_141456250(r13_1, *(r14_2 + 8), *(r14_2 + 0x10), r15_3, arg5, arg6, arg7, r12_1)

void* rcx_24 = arg2
int64_t r8_10 = 0
int32_t rdx_15 = 0
int32_t var_2d4 = 0
int32_t r9_13 = *(rcx_24 + 0x70)
int32_t var_290 = r9_13

if (r9_13 s> 0)
    int64_t rax_27 = 1
    int64_t r10_1 = arg3
    int64_t var_260_1 = 1
    int64_t var_268_1 = 0
    
    do
        if ((r10_1 & rax_27) != 0)
            void* rax_28 = *(rcx_24 + 0x68)
            void* rdi_1 = rcx_24
            int64_t* rcx_25 = *(r14_2 + 0x20)
            
            if (rax_28 != 0)
                rdi_1 = rax_28
            
            void* rdi_3 = rdi_1 + r8_10
            void* var_2c8_1 = rdi_3
            int64_t* rax_30 = (*(*rcx_25 + 8))(rcx_25, &var_130, zx.q(r9_13))
            int64_t r11_1 = rax_13
            int64_t* r13_2 = rax_30
            int32_t r12_2 = 0
            int32_t r15_4 = 0
            int64_t* var_350
            int64_t* var_348
            void** var_320
            void* var_318
            void* rsi_2
            
            if (r11_1 == 0)
                rsi_2 = &rax_30[0xf]
            else
                uint64_t rdx_20 = ((zx.q(rax_30[0xe].w) & 1) * 0x101010101010101) u>> 0x38
                void* const var_258
                
                if (rdx_20.d u< 1)
                    var_258 = 0x98
                    int64_t var_250_2 = 0
                else
                    int64_t* rax_31 = rax_30[2]
                    int64_t* rcx_27 = r13_2
                    
                    if (rax_31 != 0)
                        rcx_27 = rax_31
                    
                    void* rsi_1 = rcx_27[rdx_20 - 1]
                    int32_t rax_32 = *(rsi_1 + 0x28)
                    int32_t rax_33 = rax_32 + 7
                    
                    if (rax_32 + 7 s< 0)
                        rax_33 += 7
                    
                    int32_t r10_2 = 0
                    int64_t i_4 = sx.q(*(rsi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rdx_21 = 0
                        int64_t i
                        
                        do
                            void* rax_36 = *(rsi_1 + 0x30)
                            
                            if ((*(rsi_1 + 0x30) & 1) != 0)
                                rax_36 = (rax_36 s>> 1) + rsi_1 + 0x30
                            
                            uint32_t rcx_31 = zx.d(*(rdx_21 + rax_36 + 2))
                            rdx_21 += 0x18
                            r10_2 += rcx_31
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        rdi_3 = var_2c8_1
                        r11_1 = rax_13
                    
                    void* rax_37 = &r13_2[4]
                    r12_2 = ((rax_33 s>> 3) + ((*(rsi_1 + 0x18) + *(rsi_1 + 8) + rax_32) << 3) + 7
                        + r10_2) & 0xfffffff8
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rax_37 = *rax_37
                    
                    r14_2 = arg1
                    r15_4 = r12_2
                    var_258 = rsi_1
                    void* var_250_1 = rax_37
                
                rsi_2 = &r13_2[0xf]
                var_318 = rsi_2
                var_320 = &var_258
                int64_t* var_328_1 = arg13
                void* var_330_1 = rdi_3
                void* var_338_6 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = rax_12
                sub_141455490(r11_1, *(rax_14 + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, rax_6.d, 
                    var_350, var_348, arg4)
            
            int64_t* rdi_5 = arg8
            rax_30.b = rdi_5[4] != 0
            
            if ((rax_30.b & rdi_5[2] != 0) != 0)
                uint32_t r14_4 = zx.d(r13_2[0xe].w)
                uint64_t rcx_37 = zx.q(r14_4) & 3
                uint64_t rcx_38 = rcx_37 - (zx.q(rcx_37.d) u>> 1)
                int64_t rax_46 = (rcx_38 u>> 2 & 0x3333333333333333) + (rcx_38 & 0x3333333333333333)
                uint64_t rdx_29 =
                    ((((rax_46 u>> 4) + rax_46) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_248
                int32_t rsi_4
                
                if (rdx_29.d u< 1)
                    var_248 = 0x98
                    rsi_4 = r15_4
                    int64_t var_240_2 = 0
                else
                    int64_t* rax_47 = r13_2[2]
                    int64_t* rcx_40 = r13_2
                    
                    if (rax_47 != 0)
                        rcx_40 = rax_47
                    
                    void* rdi_4 = rcx_40[rdx_29 - 1]
                    int32_t rax_48 = *(rdi_4 + 0x28)
                    int32_t rax_49 = rax_48 + 7
                    
                    if (rax_48 + 7 s< 0)
                        rax_49 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_5 = sx.q(*(rdi_4 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_44 = 0
                        int64_t i_1
                        
                        do
                            void* rax_52 = *(rdi_4 + 0x30)
                            
                            if ((*(rdi_4 + 0x30) & 1) != 0)
                                rax_52 = (rax_52 s>> 1) + rdi_4 + 0x30
                            
                            uint32_t rax_53 = zx.d(*(rcx_44 + rax_52 + 2))
                            rcx_44 += 0x18
                            r9_16 += rax_53
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_45 = &r13_2[4]
                    r12_2 += ((rax_49 s>> 3) + ((*(rdi_4 + 0x18) + *(rdi_4 + 8) + rax_48) << 3) + 7
                        + r9_16) & 0xfffffff8
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_45 = *rcx_45
                    
                    rsi_4 = r12_2
                    var_248 = rdi_4
                    rdi_5 = arg8
                    void* var_240_1 = sx.q(r15_4) + rcx_45
                
                uint64_t r14_5 = zx.q(r14_4) & 7
                int64_t r14_6 = r14_5 - (zx.q(r14_5.d) u>> 1 & 0x5555555555555555)
                int64_t rax_65 = (r14_6 u>> 2 & 0x3333333333333333) + (r14_6 & 0x3333333333333333)
                uint64_t rdx_36 =
                    ((((rax_65 u>> 4) + rax_65) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_238
                
                if (rdx_36.d u< 1)
                    var_238 = 0x98
                    r15_4 = rsi_4
                    int64_t var_230_2 = 0
                else
                    int64_t* rax_66 = r13_2[2]
                    int64_t* rcx_46 = r13_2
                    
                    if (rax_66 != 0)
                        rcx_46 = rax_66
                    
                    void* rdi_6 = rcx_46[rdx_36 - 1]
                    int32_t rax_67 = *(rdi_6 + 0x28)
                    int32_t rax_68 = rax_67 + 7
                    
                    if (rax_67 + 7 s< 0)
                        rax_68 += 7
                    
                    int32_t r9_17 = 0
                    int64_t i_6 = sx.q(*(rdi_6 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_50 = 0
                        int64_t i_2
                        
                        do
                            void* rax_71 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_71 = (rax_71 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_72 = zx.d(*(rax_71 + rcx_50 + 2))
                            rcx_50 += 0x18
                            r9_17 += rax_72
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_51 = &r13_2[4]
                    r12_2 += ((rax_68 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_67) << 3) + 7
                        + r9_17) & 0xfffffff8
                    r15_4 = r12_2
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_51 = *rcx_51
                    
                    var_238 = rdi_6
                    rdi_5 = arg8
                    void* var_230_1 = sx.q(rsi_4) + rcx_51
                
                r14_2 = arg1
                rsi_2 = &r13_2[0xf]
                void* var_318_1 = rsi_2
                void** var_320_1 = &var_248
                int64_t* var_328_2 = arg13
                void* var_330_2 = var_2c8_1
                void* var_338_7 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_5[2], *(rdi_5[3] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
                var_318 = rsi_2
                var_320 = &var_238
                int64_t* var_328_3 = arg13
                void* var_330_3 = var_2c8_1
                void* var_338_8 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_5[4], *(rdi_5[5] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            void* rdi_8 = rdi_5[6]
            int64_t* r12_5
            
            if (rdi_8 == 0)
                r12_5 = arg8
            else
                uint64_t rcx_63 = zx.q(r13_2[0xe].w) & 0xf
                int64_t rcx_64 = rcx_63 - (zx.q(rcx_63.d) u>> 1 & 0x5555555555555555)
                int64_t rax_88 = (rcx_64 u>> 2 & 0x3333333333333333) + (rcx_64 & 0x3333333333333333)
                uint64_t rdx_47 =
                    ((((rax_88 u>> 4) + rax_88) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* rax_97
                
                if (rdx_47.d u< 1)
                    var_288 = 0x98
                    rax_97 = nullptr
                else
                    int64_t* rax_89 = r13_2[2]
                    int64_t* rcx_66 = r13_2
                    
                    if (rax_89 != 0)
                        rcx_66 = rax_89
                    
                    void* rdi_7 = rcx_66[rdx_47 - 1]
                    int32_t rax_90 = *(rdi_7 + 0x28)
                    int32_t rax_91 = rax_90 + 7
                    
                    if (rax_90 + 7 s< 0)
                        rax_91 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_7 + 0x38))
                    int32_t r9_20 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_70 = 0
                        int64_t i_3
                        
                        do
                            void* rax_94 = *(rdi_7 + 0x30)
                            
                            if ((*(rdi_7 + 0x30) & 1) != 0)
                                rax_94 = (rax_94 s>> 1) + rdi_7 + 0x30
                            
                            uint32_t rax_95 = zx.d(*(rax_94 + rcx_70 + 2))
                            rcx_70 += 0x18
                            r9_20 += rax_95
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_71 = &r13_2[4]
                    int32_t rdx_52 = (((rax_91 s>> 3)
                        + ((*(rdi_7 + 0x18) + *(rdi_7 + 8) + rax_90) << 3) + 7 + r9_20) & 0xfffffff8)
                        + r12_2
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_71 = *rcx_71
                    
                    rsi_2 = &r13_2[0xf]
                    rax_97 = sx.q(r15_4) + rcx_71
                    var_288 = rdi_7
                    r15_4 = rdx_52
                
                r12_5 = arg8
                var_318 = rsi_2
                rdi_8 = r12_5[6]
                var_320 = &var_288
                int64_t* var_328_4 = arg13
                void* var_330_4 = var_2c8_1
                void* var_338_9 = arg2
                void* var_280_1 = rax_97
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_8, *(r12_5[7] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            if (r12_5[8] != 0)
                uint64_t rcx_78 = zx.q(r13_2[0xe].w) & 0x1f
                int64_t rcx_79 = rcx_78 - (zx.q(rcx_78.d) u>> 1 & 0x5555555555555555)
                int64_t rax_106 =
                    (rcx_79 u>> 2 & 0x3333333333333333) + (rcx_79 & 0x3333333333333333)
                uint64_t rcx_86 =
                    ((((rax_106 u>> 4) + rax_106) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* rax_111
                
                if (rcx_86.d u< 1)
                    var_2c0 = 0x98
                    rax_111 = nullptr
                else
                    int64_t* rax_107 = r13_2[2]
                    void* rcx_87 = &r13_2[4]
                    int64_t* rdx_55 = r13_2
                    
                    if (rax_107 != 0)
                        rdx_55 = rax_107
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_87 = *rcx_87
                    
                    var_2c0 = rdx_55[rcx_86 - 1]
                    rax_111 = sx.q(r15_4) + rcx_87
                
                var_318 = rsi_2
                var_320 = &var_2c0
                int64_t* var_328_5 = arg13
                void* var_330_5 = var_2c8_1
                void* var_338_10 = arg2
                void* var_2b8_1 = rax_111
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(r12_5[8], *(r12_5[9] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            int32_t var_298
            int32_t var_294
            sub_14126c0d0(r14_2, var_278, var_2c8_1, &var_294, &var_298)
            int128_t zmm0_1 = *(r12_5 + 0x40)
            int128_t zmm1_1 = *(r12_5 + 0x50)
            int64_t* rcx_94 = *(r14_2 + 0x20)
            uint64_t r9_24 = zx.q(var_294)
            var_218 = *r12_5
            int64_t var_210_1 = r12_5[1]
            int64_t var_208_1 = r12_5[2]
            int64_t var_200_1 = r12_5[3]
            int64_t var_1f8_1 = r12_5[4]
            int64_t var_1f0_1 = r12_5[5]
            int64_t var_1e0_1 = r12_5[7]
            int128_t var_1d8_1 = zmm0_1
            var_348.d = arg10
            var_350.d = arg9
            void* var_1e8_1 = rdi_8
            int128_t var_1c8_1 = zmm1_1
            int128_t var_1b8_1 = *(r12_5 + 0x60)
            int32_t* var_358_11
            var_358_11.d = var_298
            (*(*rcx_94 + 0x10))(rcx_94, arg2, zx.q(var_2d4), r9_24, var_358_11, var_350, var_348, 
                arg11, &var_1a8, &var_218, r13_2, var_320, var_318)
            rax_27 = var_260_1
            rcx_24 = arg2
            rdx_15 = var_2d4
            r8_10 = var_268_1
            r9_13 = var_290
            r10_1 = arg3
        
        rdx_15 += 1
        rax_27 = rol.q(rax_27, 1)
        r8_10 += 0x68
        var_2d4 = rdx_15
        var_268_1 = r8_10
        var_260_1 = rax_27
    while (rdx_15 s< r9_13)

int128_t var_188
int64_t* rcx_95 = var_188:8.q

if (rcx_95 != 0)
    sub_1419d6470(rcx_95)

int64_t* rcx_96 = var_188.q

if (rcx_96 != 0)
    sub_1419d6470(rcx_96)

int128_t var_198
int64_t* rcx_97 = var_198:8.q

if (rcx_97 != 0)
    sub_1419d6470(rcx_97)

int64_t* rcx_98 = var_198.q

if (rcx_98 != 0)
    sub_1419d6470(rcx_98)

int64_t* rcx_99 = var_1a8:8.q

if (rcx_99 != 0)
    sub_1419d6470(rcx_99)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_378)
return result
