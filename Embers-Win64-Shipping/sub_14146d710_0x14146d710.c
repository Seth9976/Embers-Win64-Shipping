// 函数: sub_14146d710
// 地址: 0x14146d710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* rax_6 = *(arg2 + 0x78)
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
zmm0 = *(arg8 + 0x50)
void* r15_2 = arg8[2]
void* r12 = arg8[4]
void* r14_1 = arg8[6]
void* r13 = arg8[8]
int64_t var_218 = rax_13
void* rax_14 = arg8[1]
void* var_210 = rax_14
int64_t var_200 = arg8[3]
int64_t var_1f0 = arg8[5]
int64_t var_1e0 = arg8[7]
int128_t var_1c8 = zmm0
void* var_208 = r15_2
void* var_1f8 = r12
void* var_1e8 = r14_1
void* var_1d8 = r13
int64_t var_1d0 = arg8[9]
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, *(rdx + rax_6), &var_218, &var_1a8)
int64_t rax_19

if (arg9 == 0)
    if (arg10 == 0)
        rax_19 = data_1439b5590
    else
        rax_19 = data_1439b5578
        
        if (arg10 != 2)
            rax_19 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_19 = data_1439b5548
    else
        rax_19 = data_1439b5530
        
        if (arg10 != 2)
            rax_19 = data_1439b5518
else if (arg10 == 0)
    rax_19 = data_14395da18
else
    rax_19 = data_1439b5500
    
    if (arg10 != 2)
        rax_19 = data_1439b54e8

var_160:8.q = rax_19
var_160.q = *arg7
int64_t var_150 = arg7[1]
void var_b8
sub_1419cf510(rax_6, *(arg1 + 0x10), rax_12, &var_b8)
int32_t var_308 = 0
bool var_50 = *(zx.q(rax_12) + rax_6 + 0xa2)
void* const var_2b8
int32_t var_2a8

if (rax_13 != 0)
    sub_141097100(&var_130, &var_2b8, 0, &var_308)
    int64_t* var_338_1 = &var_2b8
    sub_141456250(rax_13, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    var_2a8 = *(rax_13 + 0x140)
    int16_t var_2a4_1 = *(rax_13 + 0x144)
    sub_14088bf20(&var_2b8, &var_2a8, &arg13[2])

uint64_t rax_23
rax_23.b = r15_2 != 0
void* const var_280
void* r15_3

if ((rax_23.b & r12 != 0) == 0)
    r15_3 = arg1
else
    sub_141097100(&var_130, &var_2b8, 1, &var_308)
    sub_141097100(&var_130, &var_280, 2, &var_308)
    int64_t* var_338_2 = &var_2b8
    sub_141456250(r15_2, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r15_3 = arg1
    int64_t* var_338_3 = &var_280
    sub_141456250(r12, *(r15_3 + 8), *(r15_3 + 0x10), arg4, arg5, arg6, arg7, arg13)

void* r12_1

if (r14_1 == 0)
    r12_1 = arg4
else
    sub_141097100(&var_130, &var_2b8, 3, &var_308)
    r12_1 = arg4
    int64_t* var_338_4 = &var_2b8
    sub_141456250(r14_1, *(r15_3 + 8), *(r15_3 + 0x10), r12_1, arg5, arg6, arg7, arg13)

void* r14_2

if (r13 == 0)
    r14_2 = arg1
else
    sub_141097100(&var_130, &var_2b8, 4, &var_308)
    r14_2 = arg1
    int64_t* var_338_5 = &var_2b8
    sub_141456250(r13, *(r14_2 + 8), *(r14_2 + 0x10), r12_1, arg5, arg6, arg7, arg13)

void* rcx_25 = arg2
int32_t rdx_14 = 0
int32_t var_2cc = 0
int32_t r9_12 = *(rcx_25 + 0x70)
var_2a8 = r9_12

if (r9_12 s> 0)
    int64_t rax_33 = 1
    int64_t r10_1 = arg3
    int64_t r8_11 = 0
    int64_t var_258_1 = 1
    int64_t var_260_1 = 0
    
    do
        if ((r10_1 & rax_33) != 0)
            void* rax_34 = *(rcx_25 + 0x68)
            void* rdi_1 = rcx_25
            int64_t* rcx_26 = *(r14_2 + 0x20)
            
            if (rax_34 != 0)
                rdi_1 = rax_34
            
            void* rdi_3 = rdi_1 + r8_11
            void* var_2c0_1 = rdi_3
            int64_t* rax_36 = (*(*rcx_26 + 8))(rcx_26, &var_130, zx.q(r9_12))
            int64_t r11_1 = rax_13
            int64_t* r13_1 = rax_36
            int32_t r12_2 = 0
            int32_t r15_4 = 0
            int64_t* var_350
            int64_t* var_348
            void** var_320
            void* var_318
            void* rsi_2
            
            if (r11_1 == 0)
                rsi_2 = &rax_36[0xf]
            else
                uint64_t rdx_19 = ((zx.q(rax_36[0xe].w) & 1) * 0x101010101010101) u>> 0x38
                void* const var_250
                
                if (rdx_19.d u< 1)
                    var_250 = 0x98
                    int64_t var_248_2 = 0
                else
                    int64_t* rax_37 = rax_36[2]
                    int64_t* rcx_28 = r13_1
                    
                    if (rax_37 != 0)
                        rcx_28 = rax_37
                    
                    void* rsi_1 = rcx_28[rdx_19 - 1]
                    int32_t rax_38 = *(rsi_1 + 0x28)
                    int32_t rax_39 = rax_38 + 7
                    
                    if (rax_38 + 7 s< 0)
                        rax_39 += 7
                    
                    int32_t r10_2 = 0
                    int64_t i_4 = sx.q(*(rsi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rdx_20 = 0
                        int64_t i
                        
                        do
                            void* rax_42 = *(rsi_1 + 0x30)
                            
                            if ((*(rsi_1 + 0x30) & 1) != 0)
                                rax_42 = (rax_42 s>> 1) + rsi_1 + 0x30
                            
                            uint32_t rcx_32 = zx.d(*(rdx_20 + rax_42 + 2))
                            rdx_20 += 0x18
                            r10_2 += rcx_32
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        rdi_3 = var_2c0_1
                        r11_1 = rax_13
                    
                    void* rax_43 = &r13_1[4]
                    r12_2 = ((rax_39 s>> 3) + ((*(rsi_1 + 0x18) + *(rsi_1 + 8) + rax_38) << 3) + 7
                        + r10_2) & 0xfffffff8
                    
                    if (*(r13_1 + 0x72) u> 0x50)
                        rax_43 = *rax_43
                    
                    r14_2 = arg1
                    r15_4 = r12_2
                    var_250 = rsi_1
                    void* var_248_1 = rax_43
                
                rsi_2 = &r13_1[0xf]
                var_318 = rsi_2
                var_320 = &var_250
                int64_t* var_328_1 = arg13
                void* var_330_1 = rdi_3
                void* var_338_6 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = rax_12
                sub_141455490(r11_1, *(rax_14 + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, rax_6.d, 
                    var_350, var_348, arg4)
            
            int64_t* rdi_5 = arg8
            rax_36.b = rdi_5[4] != 0
            
            if ((rax_36.b & rdi_5[2] != 0) != 0)
                uint32_t r14_4 = zx.d(r13_1[0xe].w)
                uint64_t rcx_38 = zx.q(r14_4) & 3
                uint64_t rcx_39 = rcx_38 - (zx.q(rcx_38.d) u>> 1)
                int64_t rax_52 = (rcx_39 u>> 2 & 0x3333333333333333) + (rcx_39 & 0x3333333333333333)
                uint64_t rdx_28 =
                    ((((rax_52 u>> 4) + rax_52) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_240
                int32_t rsi_4
                
                if (rdx_28.d u< 1)
                    var_240 = 0x98
                    rsi_4 = r15_4
                    int64_t var_238_2 = 0
                else
                    int64_t* rax_53 = r13_1[2]
                    int64_t* rcx_41 = r13_1
                    
                    if (rax_53 != 0)
                        rcx_41 = rax_53
                    
                    void* rdi_4 = rcx_41[rdx_28 - 1]
                    int32_t rax_54 = *(rdi_4 + 0x28)
                    int32_t rax_55 = rax_54 + 7
                    
                    if (rax_54 + 7 s< 0)
                        rax_55 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_4 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_45 = 0
                        int64_t i_1
                        
                        do
                            void* rax_58 = *(rdi_4 + 0x30)
                            
                            if ((*(rdi_4 + 0x30) & 1) != 0)
                                rax_58 = (rax_58 s>> 1) + rdi_4 + 0x30
                            
                            uint32_t rax_59 = zx.d(*(rcx_45 + rax_58 + 2))
                            rcx_45 += 0x18
                            r9_15 += rax_59
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_46 = &r13_1[4]
                    r12_2 += ((rax_55 s>> 3) + ((*(rdi_4 + 0x18) + *(rdi_4 + 8) + rax_54) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(r13_1 + 0x72) u> 0x50)
                        rcx_46 = *rcx_46
                    
                    rsi_4 = r12_2
                    var_240 = rdi_4
                    rdi_5 = arg8
                    void* var_238_1 = sx.q(r15_4) + rcx_46
                
                uint64_t r14_5 = zx.q(r14_4) & 7
                int64_t r14_6 = r14_5 - (zx.q(r14_5.d) u>> 1 & 0x5555555555555555)
                int64_t rax_71 = (r14_6 u>> 2 & 0x3333333333333333) + (r14_6 & 0x3333333333333333)
                uint64_t rdx_35 =
                    ((((rax_71 u>> 4) + rax_71) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_230
                
                if (rdx_35.d u< 1)
                    var_230 = 0x98
                    r15_4 = rsi_4
                    int64_t var_228_2 = 0
                else
                    int64_t* rax_72 = r13_1[2]
                    int64_t* rcx_47 = r13_1
                    
                    if (rax_72 != 0)
                        rcx_47 = rax_72
                    
                    void* rdi_6 = rcx_47[rdx_35 - 1]
                    int32_t rax_73 = *(rdi_6 + 0x28)
                    int32_t rax_74 = rax_73 + 7
                    
                    if (rax_73 + 7 s< 0)
                        rax_74 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_6 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_51 = 0
                        int64_t i_2
                        
                        do
                            void* rax_77 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_77 = (rax_77 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_78 = zx.d(*(rax_77 + rcx_51 + 2))
                            rcx_51 += 0x18
                            r9_16 += rax_78
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_52 = &r13_1[4]
                    r12_2 += ((rax_74 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_73) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_4 = r12_2
                    
                    if (*(r13_1 + 0x72) u> 0x50)
                        rcx_52 = *rcx_52
                    
                    var_230 = rdi_6
                    rdi_5 = arg8
                    void* var_228_1 = sx.q(rsi_4) + rcx_52
                
                r14_2 = arg1
                rsi_2 = &r13_1[0xf]
                void* var_318_1 = rsi_2
                void** var_320_1 = &var_240
                int64_t* var_328_2 = arg13
                void* var_330_2 = var_2c0_1
                void* var_338_7 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_5[2], *(rdi_5[3] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
                var_318 = rsi_2
                var_320 = &var_230
                int64_t* var_328_3 = arg13
                void* var_330_3 = var_2c0_1
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
                uint64_t rcx_64 = zx.q(r13_1[0xe].w) & 0xf
                int64_t rcx_65 = rcx_64 - (zx.q(rcx_64.d) u>> 1 & 0x5555555555555555)
                int64_t rax_94 = (rcx_65 u>> 2 & 0x3333333333333333) + (rcx_65 & 0x3333333333333333)
                uint64_t rdx_46 =
                    ((((rax_94 u>> 4) + rax_94) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_46.d u< 1)
                    var_280 = 0x98
                    int64_t var_278_2 = 0
                else
                    int64_t* rax_95 = r13_1[2]
                    int64_t* rcx_67 = r13_1
                    
                    if (rax_95 != 0)
                        rcx_67 = rax_95
                    
                    void* rdi_7 = rcx_67[rdx_46 - 1]
                    int32_t rax_96 = *(rdi_7 + 0x28)
                    int32_t rax_97 = rax_96 + 7
                    
                    if (rax_96 + 7 s< 0)
                        rax_97 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_7 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_71 = 0
                        int64_t i_3
                        
                        do
                            void* rax_100 = *(rdi_7 + 0x30)
                            
                            if ((*(rdi_7 + 0x30) & 1) != 0)
                                rax_100 = (rax_100 s>> 1) + rdi_7 + 0x30
                            
                            uint32_t rax_101 = zx.d(*(rax_100 + rcx_71 + 2))
                            rcx_71 += 0x18
                            r9_19 += rax_101
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_72 = &r13_1[4]
                    int32_t rdx_51 = (((rax_97 s>> 3)
                        + ((*(rdi_7 + 0x18) + *(rdi_7 + 8) + rax_96) << 3) + 7 + r9_19) & 0xfffffff8)
                        + r12_2
                    
                    if (*(r13_1 + 0x72) u> 0x50)
                        rcx_72 = *rcx_72
                    
                    rsi_2 = &r13_1[0xf]
                    var_280 = rdi_7
                    void* var_278_1 = sx.q(r15_4) + rcx_72
                    r15_4 = rdx_51
                
                r12_5 = arg8
                var_318 = rsi_2
                rdi_8 = r12_5[6]
                var_320 = &var_280
                int64_t* var_328_4 = arg13
                void* var_330_4 = var_2c0_1
                void* var_338_9 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_8, *(r12_5[7] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            void* rsi_6 = r12_5[8]
            
            if (rsi_6 != 0)
                uint64_t rcx_79 = zx.q(r13_1[0xe].w) & 0x1f
                int64_t rcx_80 = rcx_79 - (zx.q(rcx_79.d) u>> 1 & 0x5555555555555555)
                int64_t rax_112 =
                    (rcx_80 u>> 2 & 0x3333333333333333) + (rcx_80 & 0x3333333333333333)
                uint64_t rcx_87 =
                    ((((rax_112 u>> 4) + rax_112) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_87.d u< 1)
                    var_2b8 = 0x98
                    int64_t var_2b0_2 = 0
                else
                    int64_t* rax_113 = r13_1[2]
                    void* rcx_88 = &r13_1[4]
                    int64_t* rdx_54 = r13_1
                    
                    if (rax_113 != 0)
                        rdx_54 = rax_113
                    
                    if (*(r13_1 + 0x72) u> 0x50)
                        rcx_88 = *rcx_88
                    
                    var_2b8 = rdx_54[rcx_87 - 1]
                    void* var_2b0_1 = sx.q(r15_4) + rcx_88
                
                var_318 = &r13_1[0xf]
                var_320 = &var_2b8
                int64_t* var_328_5 = arg13
                void* var_330_5 = var_2c0_1
                void* var_338_10 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rsi_6, *(r12_5[9] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            int32_t var_288
            int32_t var_284
            sub_14126c0d0(r14_2, var_270, var_2c0_1, &var_284, &var_288)
            int128_t zmm0_1 = *(r12_5 + 0x50)
            int64_t* rcx_96 = *(r14_2 + 0x20)
            int128_t zmm1_1 = *(r12_5 + 0x60)
            uint64_t r9_23 = zx.q(var_284)
            var_218 = *r12_5
            int64_t var_210_1 = r12_5[1]
            int64_t var_208_1 = r12_5[2]
            int64_t var_200_1 = r12_5[3]
            int64_t var_1f8_1 = r12_5[4]
            int64_t var_1f0_1 = r12_5[5]
            int64_t var_1e0_1 = r12_5[7]
            int64_t var_1d0_1 = r12_5[9]
            var_348.d = arg10
            var_350.d = arg9
            void* var_1e8_1 = rdi_8
            void* var_1d8_1 = rsi_6
            int128_t var_1c8_1 = zmm0_1
            int128_t var_1b8_1 = zmm1_1
            int32_t* var_358_11
            var_358_11.d = var_288
            (*(*rcx_96 + 0x10))(rcx_96, arg2, zx.q(var_2cc), r9_23, var_358_11, var_350, var_348, 
                arg11, &var_1a8, &var_218, r13_1, var_320, var_318)
            rax_33 = var_258_1
            rcx_25 = arg2
            rdx_14 = var_2cc
            r8_11 = var_260_1
            r9_12 = var_2a8
            r10_1 = arg3
        
        rdx_14 += 1
        rax_33 = rol.q(rax_33, 1)
        r8_11 += 0x68
        var_2cc = rdx_14
        var_260_1 = r8_11
        var_258_1 = rax_33
    while (rdx_14 s< r9_12)

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
__security_check_cookie(rax_1 ^ &var_378)
return result
