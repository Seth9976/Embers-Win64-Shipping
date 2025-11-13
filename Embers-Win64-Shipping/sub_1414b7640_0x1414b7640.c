// 函数: sub_1414b7640
// 地址: 0x1414b7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* rax_5 = *(arg2 + 0x78)
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
void* rsi_1 = arg8[6]
int128_t var_208 = *(arg8 + 0x10)
int128_t zmm0 = *(arg8 + 0x20)
int64_t rdx_1 = *(rdx + rax_5)
int64_t var_218 = rax_13
void* rax_14 = arg8[1]
int128_t var_1f8 = zmm0
void* var_210 = rax_14
int128_t var_1d8 = *(arg8 + 0x40)
void* var_1e8 = rsi_1
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
int32_t var_304 = 0
bool var_50 = *(zx.q(rax_12) + rax_5 + 0xa2)
void* const var_2c8

if (not(cond:3))
    sub_141097100(&var_130, &var_2c8, 0, &var_304)
    int64_t* var_338_1 = &var_2c8
    sub_141456250(*arg8, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)

void* r15_1 = arg8[4]
void* r12_1 = arg8[2]
uint64_t rax_19
rax_19.b = r15_1 != 0
bool rcx_11 = r12_1 != 0 & rax_19.b
void* const var_288
void* r12_2

if (rcx_11 == 0)
    r12_2 = arg4
else
    sub_141097100(&var_130, &var_2c8, 1, &var_304)
    sub_141097100(&var_130, &var_288, 2, &var_304)
    int64_t* var_338_2 = &var_2c8
    sub_141456250(r12_1, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r12_2 = arg4
    int64_t* var_338_3 = &var_288
    sub_141456250(r15_1, *(arg1 + 8), *(arg1 + 0x10), r12_2, arg5, arg6, arg7, arg13)

int32_t var_2b8
int64_t* r15_2

if (rsi_1 == 0)
    r15_2 = arg13
else
    sub_141097100(&var_130, &var_2c8, 3, &var_304)
    r15_2 = arg13
    int64_t* var_338_4 = &var_2c8
    sub_141456250(rsi_1, *(arg1 + 8), *(arg1 + 0x10), r12_2, arg5, arg6, arg7, r15_2)
    var_2b8 = *(rsi_1 + 0x140)
    int16_t var_2b4_1 = *(rsi_1 + 0x144)
    sub_14088bf20(&var_2c8, &var_2b8, &r15_2[2])

void* rsi_2 = arg8[8]
void* r14_1

if (rsi_2 == 0)
    r14_1 = arg1
else
    sub_141097100(&var_130, &var_2c8, 4, &var_304)
    int64_t* var_338_5 = &var_2c8
    r14_1 = arg1
    sub_141456250(rsi_2, *(arg1 + 8), *(arg1 + 0x10), r12_2, arg5, arg6, arg7, r15_2)

void* rcx_23 = arg2
int32_t rdx_14 = 0
int32_t var_2d4 = 0
int32_t r9_12 = *(rcx_23 + 0x70)
var_2b8 = r9_12

if (r9_12 s> 0)
    int64_t rax_26 = 1
    int64_t r10_1 = arg3
    int64_t r8_10 = 0
    int64_t var_258_1 = 1
    int64_t var_260_1 = 0
    
    do
        if ((r10_1 & rax_26) != 0)
            void* rax_27 = *(rcx_23 + 0x68)
            
            if (rax_27 != 0)
                rcx_23 = rax_27
            
            void* rcx_24 = rcx_23 + r8_10
            int64_t* rcx_25 = *(r14_1 + 0x20)
            void* rax_29 = (*(*rcx_25 + 8))(rcx_25, &var_130, zx.q(r9_12))
            int64_t r10_2 = rax_13
            int32_t r12_3 = 0
            int32_t r15_3 = 0
            int64_t* var_350
            int64_t* var_348
            void** var_320
            void* var_318
            void* rsi_4
            
            if (r10_2 == 0)
                rsi_4 = rax_29 + 0x78
            else
                uint64_t rdx_19 = ((zx.q(*(rax_29 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_250
                
                if (rdx_19.d u< 1)
                    var_250 = 0x98
                    int64_t var_248_2 = 0
                else
                    void* rax_30 = *(rax_29 + 0x10)
                    void* rcx_26 = rax_29
                    
                    if (rax_30 != 0)
                        rcx_26 = rax_30
                    
                    void* rdi_1 = *(rcx_26 + (rdx_19 << 3) - 8)
                    int32_t rax_31 = *(rdi_1 + 0x28)
                    int32_t rax_32 = rax_31 + 7
                    
                    if (rax_31 + 7 s< 0)
                        rax_32 += 7
                    
                    int32_t r9_13 = 0
                    int64_t i_4 = sx.q(*(rdi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rcx_30 = 0
                        int64_t i
                        
                        do
                            void* rax_35 = *(rdi_1 + 0x30)
                            
                            if ((*(rdi_1 + 0x30) & 1) != 0)
                                rax_35 = (rax_35 s>> 1) + rdi_1 + 0x30
                            
                            uint32_t rax_36 = zx.d(*(rcx_30 + rax_35 + 2))
                            rcx_30 += 0x18
                            r9_13 += rax_36
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_2 = rax_13
                    
                    int64_t* rax_37 = rax_29 + 0x20
                    r12_3 = ((rax_32 s>> 3) + ((*(rdi_1 + 0x18) + *(rdi_1 + 8) + rax_31) << 3) + 7
                        + r9_13) & 0xfffffff8
                    
                    if (*(rax_29 + 0x72) u> 0x50)
                        rax_37 = *rax_37
                    
                    var_250 = rdi_1
                    r15_3 = r12_3
                    int64_t* var_248_1 = rax_37
                
                rsi_4 = rax_29 + 0x78
                var_318 = rsi_4
                var_320 = &var_250
                int64_t* var_328_1 = arg13
                void* var_330_1 = rcx_24
                void* var_338_6 = arg2
                var_348.d = *(r14_1 + 0x10)
                var_350.b = rax_12
                sub_141455490(r10_2, *(rax_14 + 0x20), *(r14_1 + 8), (*(r14_1 + 0x18)).b, rax_5.d, 
                    var_350, var_348, arg4)
            
            int64_t* rdi_4
            
            if (rcx_11 == 0)
                rdi_4 = arg8
            else
                uint32_t r14_2 = zx.d(*(rax_29 + 0x70))
                uint64_t rcx_37 = zx.q(r14_2) & 3
                uint64_t rcx_38 = rcx_37 - (zx.q(rcx_37.d) u>> 1)
                int64_t rax_46 = (rcx_38 u>> 2 & 0x3333333333333333) + (rcx_38 & 0x3333333333333333)
                uint64_t rdx_28 =
                    ((((rax_46 u>> 4) + rax_46) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_240
                int32_t rsi_6
                
                if (rdx_28.d u< 1)
                    var_240 = 0x98
                    rsi_6 = r15_3
                    int64_t var_238_2 = 0
                else
                    void* rax_47 = *(rax_29 + 0x10)
                    void* rcx_40 = rax_29
                    
                    if (rax_47 != 0)
                        rcx_40 = rax_47
                    
                    void* rdi_2 = *(rcx_40 + (rdx_28 << 3) - 8)
                    int32_t rax_48 = *(rdi_2 + 0x28)
                    int32_t rax_49 = rax_48 + 7
                    
                    if (rax_48 + 7 s< 0)
                        rax_49 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_2 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_44 = 0
                        int64_t i_1
                        
                        do
                            void* rax_52 = *(rdi_2 + 0x30)
                            
                            if ((*(rdi_2 + 0x30) & 1) != 0)
                                rax_52 = (rax_52 s>> 1) + rdi_2 + 0x30
                            
                            uint32_t rax_53 = zx.d(*(rax_52 + rcx_44 + 2))
                            rcx_44 += 0x18
                            r9_15 += rax_53
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_45 = rax_29 + 0x20
                    r12_3 += ((rax_49 s>> 3) + ((*(rdi_2 + 0x18) + *(rdi_2 + 8) + rax_48) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(rax_29 + 0x72) u> 0x50)
                        rcx_45 = *rcx_45
                    
                    rsi_6 = r12_3
                    var_240 = rdi_2
                    void* var_238_1 = sx.q(r15_3) + rcx_45
                
                uint64_t r14_3 = zx.q(r14_2) & 7
                int64_t r14_4 = r14_3 - (zx.q(r14_3.d) u>> 1 & 0x5555555555555555)
                int64_t rax_65 = (r14_4 u>> 2 & 0x3333333333333333) + (r14_4 & 0x3333333333333333)
                uint64_t rdx_35 =
                    ((((rax_65 u>> 4) + rax_65) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_230
                
                if (rdx_35.d u< 1)
                    var_230 = 0x98
                    r15_3 = rsi_6
                    int64_t var_228_2 = 0
                else
                    void* rax_66 = *(rax_29 + 0x10)
                    void* rcx_46 = rax_29
                    
                    if (rax_66 != 0)
                        rcx_46 = rax_66
                    
                    void* rdi_3 = *(rcx_46 + (rdx_35 << 3) - 8)
                    int32_t rax_67 = *(rdi_3 + 0x28)
                    int32_t rax_68 = rax_67 + 7
                    
                    if (rax_67 + 7 s< 0)
                        rax_68 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_3 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_50 = 0
                        int64_t i_2
                        
                        do
                            void* rax_71 = *(rdi_3 + 0x30)
                            
                            if ((*(rdi_3 + 0x30) & 1) != 0)
                                rax_71 = (rax_71 s>> 1) + rdi_3 + 0x30
                            
                            uint32_t rax_72 = zx.d(*(rax_71 + rcx_50 + 2))
                            rcx_50 += 0x18
                            r9_16 += rax_72
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_51 = rax_29 + 0x20
                    r12_3 += ((rax_68 s>> 3) + ((*(rdi_3 + 0x18) + *(rdi_3 + 8) + rax_67) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_3 = r12_3
                    
                    if (*(rax_29 + 0x72) u> 0x50)
                        rcx_51 = *rcx_51
                    
                    var_230 = rdi_3
                    void* var_228_1 = sx.q(rsi_6) + rcx_51
                
                r14_1 = arg1
                rdi_4 = arg8
                rsi_4 = rax_29 + 0x78
                void* var_318_1 = rsi_4
                void** var_320_1 = &var_240
                int64_t* var_328_2 = arg13
                void* var_330_2 = rcx_24
                void* var_338_7 = arg2
                var_348.d = *(r14_1 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_4[2], *(rdi_4[3] + 0x20), *(r14_1 + 8), (*(r14_1 + 0x18)).b, 
                    rax_5.d, var_350, var_348, arg4)
                var_318 = rsi_4
                var_320 = &var_230
                int64_t* var_328_3 = arg13
                void* var_330_3 = rcx_24
                void* var_338_8 = arg2
                var_348.d = *(r14_1 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_4[4], *(rdi_4[5] + 0x20), *(r14_1 + 8), (*(r14_1 + 0x18)).b, 
                    rax_5.d, var_350, var_348, arg4)
            
            void* rdi_6 = rdi_4[6]
            int64_t* r12_6
            
            if (rdi_6 == 0)
                r12_6 = arg8
            else
                uint64_t rcx_63 = zx.q(*(rax_29 + 0x70)) & 0xf
                int64_t rcx_64 = rcx_63 - (zx.q(rcx_63.d) u>> 1 & 0x5555555555555555)
                int64_t rax_88 = (rcx_64 u>> 2 & 0x3333333333333333) + (rcx_64 & 0x3333333333333333)
                uint64_t rdx_46 =
                    ((((rax_88 u>> 4) + rax_88) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_46.d u< 1)
                    var_288 = 0x98
                    int64_t var_280_2 = 0
                else
                    void* rax_89 = *(rax_29 + 0x10)
                    void* rcx_66 = rax_29
                    
                    if (rax_89 != 0)
                        rcx_66 = rax_89
                    
                    void* rdi_5 = *(rcx_66 + (rdx_46 << 3) - 8)
                    int32_t rax_90 = *(rdi_5 + 0x28)
                    int32_t rax_91 = rax_90 + 7
                    
                    if (rax_90 + 7 s< 0)
                        rax_91 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_5 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_70 = 0
                        int64_t i_3
                        
                        do
                            void* rax_94 = *(rdi_5 + 0x30)
                            
                            if ((*(rdi_5 + 0x30) & 1) != 0)
                                rax_94 = (rax_94 s>> 1) + rdi_5 + 0x30
                            
                            uint32_t rax_95 = zx.d(*(rax_94 + rcx_70 + 2))
                            rcx_70 += 0x18
                            r9_19 += rax_95
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_71 = rax_29 + 0x20
                    int32_t rdx_51 = (((rax_91 s>> 3)
                        + ((*(rdi_5 + 0x18) + *(rdi_5 + 8) + rax_90) << 3) + 7 + r9_19) & 0xfffffff8)
                        + r12_3
                    
                    if (*(rax_29 + 0x72) u> 0x50)
                        rcx_71 = *rcx_71
                    
                    rsi_4 = rax_29 + 0x78
                    var_288 = rdi_5
                    void* var_280_1 = sx.q(r15_3) + rcx_71
                    r15_3 = rdx_51
                
                r12_6 = arg8
                var_318 = rsi_4
                rdi_6 = r12_6[6]
                var_320 = &var_288
                int64_t* var_328_4 = arg13
                void* var_330_4 = rcx_24
                void* var_338_9 = arg2
                var_348.d = *(r14_1 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_6, *(r12_6[7] + 0x20), *(r14_1 + 8), (*(r14_1 + 0x18)).b, 
                    rax_5.d, var_350, var_348, arg4)
            
            if (r12_6[8] != 0)
                uint64_t rcx_78 = zx.q(*(rax_29 + 0x70)) & 0x1f
                int64_t rcx_79 = rcx_78 - (zx.q(rcx_78.d) u>> 1 & 0x5555555555555555)
                int64_t rax_106 =
                    (rcx_79 u>> 2 & 0x3333333333333333) + (rcx_79 & 0x3333333333333333)
                uint64_t rcx_86 =
                    ((((rax_106 u>> 4) + rax_106) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_86.d u< 1)
                    var_2c8 = 0x98
                    int64_t var_2c0_2 = 0
                else
                    void* rax_107 = *(rax_29 + 0x10)
                    void* rcx_87 = rax_29 + 0x20
                    void* rdx_54 = rax_29
                    
                    if (rax_107 != 0)
                        rdx_54 = rax_107
                    
                    if (*(rax_29 + 0x72) u> 0x50)
                        rcx_87 = *rcx_87
                    
                    var_2c8 = *(rdx_54 + ((rcx_86 - 1) << 3))
                    void* var_2c0_1 = sx.q(r15_3) + rcx_87
                
                var_318 = rsi_4
                var_320 = &var_2c8
                int64_t* var_328_5 = arg13
                void* var_330_5 = rcx_24
                void* var_338_10 = arg2
                var_348.d = *(r14_1 + 0x10)
                var_350.b = 0
                sub_141455490(r12_6[8], *(r12_6[9] + 0x20), *(r14_1 + 8), (*(r14_1 + 0x18)).b, 
                    rax_5.d, var_350, var_348, arg4)
            
            int32_t var_298
            int32_t var_294
            sub_14126c0d0(r14_1, var_270, rcx_24, &var_294, &var_298)
            int128_t zmm0_1 = *(r12_6 + 0x10)
            int128_t zmm1_1 = *(r12_6 + 0x20)
            int64_t* rcx_94 = *(r14_1 + 0x20)
            uint64_t r9_23 = zx.q(var_294)
            var_218 = *r12_6
            int64_t var_210_1 = r12_6[1]
            int64_t var_1e0_1 = r12_6[7]
            int128_t var_208_1 = zmm0_1
            var_348.d = arg10
            int128_t var_1f8_1 = zmm1_1
            var_350.d = arg9
            int128_t var_1d8_1 = *(r12_6 + 0x40)
            void* var_1e8_1 = rdi_6
            int128_t var_1c8_1 = *(r12_6 + 0x50)
            int128_t var_1b8_1 = *(r12_6 + 0x60)
            int32_t* var_358_11
            var_358_11.d = var_298
            (*(*rcx_94 + 0x10))(rcx_94, arg2, zx.q(var_2d4), r9_23, var_358_11, var_350, var_348, 
                arg11, &var_1a8, &var_218, rax_29, var_320, var_318)
            rax_26 = var_258_1
            rcx_23 = arg2
            rdx_14 = var_2d4
            r8_10 = var_260_1
            r9_12 = var_2b8
            r10_1 = arg3
        
        rdx_14 += 1
        rax_26 = rol.q(rax_26, 1)
        r8_10 += 0x68
        var_2d4 = rdx_14
        var_260_1 = r8_10
        var_258_1 = rax_26
    while (rdx_14 s< r9_12)

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
