// 函数: sub_1410e5330
// 地址: 0x1410e5330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
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
void* r12_2 = arg8[8]
int128_t var_208 = *(arg8 + 0x10)
int128_t zmm0 = *(arg8 + 0x20)
int64_t rdx_1 = *(rdx + rcx_3)
int64_t var_218 = rax_8
void* rax_9 = arg8[1]
int128_t var_1f8 = zmm0
void* var_210 = rax_9
int128_t var_1e8 = *(arg8 + 0x30)
void* var_1d8 = r12_2
int64_t var_1d0 = arg8[9]
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
int32_t var_308 = 0
void* r14_2 = *arg8
bool var_50 = *(zx.q(rax_7) + rcx_3 + 0xa2)
void* const var_2c8

if (r14_2 != 0)
    sub_141097100(&var_130, &var_2c8, 0, &var_308)
    int64_t* var_338_1 = &var_2c8
    sub_141456250(r14_2, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)

void* r14_3 = arg8[4]
void* r15_1 = arg8[2]
uint64_t rax_14
rax_14.b = r14_3 != 0
bool rcx_13 = r15_1 != 0 & rax_14.b
void* const var_290
void* r15_2

if (rcx_13 == 0)
    r15_2 = arg4
else
    sub_141097100(&var_130, &var_2c8, 1, &var_308)
    sub_141097100(&var_130, &var_290, 2, &var_308)
    int64_t* var_338_2 = &var_2c8
    sub_141456250(r15_1, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r15_2 = arg4
    int64_t* var_338_3 = &var_290
    sub_141456250(r14_3, *(arg1 + 8), *(arg1 + 0x10), r15_2, arg5, arg6, arg7, arg13)

void* rax_19 = arg8[6]
int64_t* r13_1
void* r14_4

if (rax_19 == 0)
    r14_4 = arg1
    r13_1 = arg13
else
    sub_141097100(&var_130, &var_2c8, 3, &var_308)
    r14_4 = arg1
    r13_1 = arg13
    int64_t* var_338_4 = &var_2c8
    sub_141456250(rax_19, *(r14_4 + 8), *(r14_4 + 0x10), r15_2, arg5, arg6, arg7, r13_1)

if (r12_2 != 0)
    sub_141097100(&var_130, &var_2c8, 4, &var_308)
    int64_t* var_338_5 = &var_2c8
    sub_141456250(r12_2, *(r14_4 + 8), *(r14_4 + 0x10), r15_2, arg5, arg6, arg7, r13_1)

void* rcx_24 = arg2
int32_t rdx_13 = 0
var_308 = 0
int32_t r9_12 = *(rcx_24 + 0x70)
int32_t var_2a0 = r9_12

if (r9_12 s> 0)
    int64_t rax_20 = 1
    int64_t r10_1 = arg3
    int64_t r8_9 = 0
    int64_t var_258_1 = 1
    int64_t var_260_1 = 0
    
    do
        if ((r10_1 & rax_20) != 0)
            void* rax_21 = *(rcx_24 + 0x68)
            
            if (rax_21 != 0)
                rcx_24 = rax_21
            
            void* rcx_25 = rcx_24 + r8_9
            int64_t* rcx_26 = *(r14_4 + 0x20)
            void* rax_23 = (*(*rcx_26 + 8))(rcx_26, &var_130, zx.q(r9_12))
            int64_t r10_2 = rax_8
            int32_t r12_3 = 0
            int32_t r15_3 = 0
            int64_t* var_350
            int64_t* var_348
            void** var_320
            void* var_318
            void* rsi_2
            
            if (r10_2 == 0)
                rsi_2 = rax_23 + 0x78
            else
                uint64_t rdx_18 = ((zx.q(*(rax_23 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_250
                
                if (rdx_18.d u< 1)
                    var_250 = 0x98
                    int64_t var_248_2 = 0
                else
                    void* rax_24 = *(rax_23 + 0x10)
                    void* rcx_27 = rax_23
                    
                    if (rax_24 != 0)
                        rcx_27 = rax_24
                    
                    void* rdi_1 = *(rcx_27 + (rdx_18 << 3) - 8)
                    int32_t rax_25 = *(rdi_1 + 0x28)
                    int32_t rax_26 = rax_25 + 7
                    
                    if (rax_25 + 7 s< 0)
                        rax_26 += 7
                    
                    int32_t r9_13 = 0
                    int64_t i_4 = sx.q(*(rdi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rcx_31 = 0
                        int64_t i
                        
                        do
                            void* rax_29 = *(rdi_1 + 0x30)
                            
                            if ((*(rdi_1 + 0x30) & 1) != 0)
                                rax_29 = (rax_29 s>> 1) + rdi_1 + 0x30
                            
                            uint32_t rax_30 = zx.d(*(rcx_31 + rax_29 + 2))
                            rcx_31 += 0x18
                            r9_13 += rax_30
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_2 = rax_8
                    
                    int64_t* rax_31 = rax_23 + 0x20
                    r12_3 = ((rax_26 s>> 3) + ((*(rdi_1 + 0x18) + *(rdi_1 + 8) + rax_25) << 3) + 7
                        + r9_13) & 0xfffffff8
                    
                    if (*(rax_23 + 0x72) u> 0x50)
                        rax_31 = *rax_31
                    
                    var_250 = rdi_1
                    r15_3 = r12_3
                    int64_t* var_248_1 = rax_31
                
                rsi_2 = rax_23 + 0x78
                var_318 = rsi_2
                var_320 = &var_250
                int64_t* var_328_1 = arg13
                void* var_330_1 = rcx_25
                void* var_338_6 = arg2
                var_348.d = *(r14_4 + 0x10)
                var_350.b = rax_7
                sub_141455490(r10_2, *(rax_9 + 0x20), *(r14_4 + 8), (*(r14_4 + 0x18)).b, rcx_3.d, 
                    var_350, var_348, arg4)
            
            if (rcx_13 != 0)
                uint32_t r14_5 = zx.d(*(rax_23 + 0x70))
                uint64_t rcx_38 = zx.q(r14_5) & 3
                uint64_t rcx_39 = rcx_38 - (zx.q(rcx_38.d) u>> 1)
                int64_t rax_40 = (rcx_39 u>> 2 & 0x3333333333333333) + (rcx_39 & 0x3333333333333333)
                uint64_t rdx_27 =
                    ((((rax_40 u>> 4) + rax_40) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_240
                int32_t rsi_4
                
                if (rdx_27.d u< 1)
                    var_240 = 0x98
                    rsi_4 = r15_3
                    int64_t var_238_2 = 0
                else
                    void* rax_41 = *(rax_23 + 0x10)
                    void* rcx_41 = rax_23
                    
                    if (rax_41 != 0)
                        rcx_41 = rax_41
                    
                    void* rdi_2 = *(rcx_41 + (rdx_27 << 3) - 8)
                    int32_t rax_42 = *(rdi_2 + 0x28)
                    int32_t rax_43 = rax_42 + 7
                    
                    if (rax_42 + 7 s< 0)
                        rax_43 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_2 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_45 = 0
                        int64_t i_1
                        
                        do
                            void* rax_46 = *(rdi_2 + 0x30)
                            
                            if ((*(rdi_2 + 0x30) & 1) != 0)
                                rax_46 = (rax_46 s>> 1) + rdi_2 + 0x30
                            
                            uint32_t rax_47 = zx.d(*(rcx_45 + rax_46 + 2))
                            rcx_45 += 0x18
                            r9_15 += rax_47
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_46 = rax_23 + 0x20
                    r12_3 += ((rax_43 s>> 3) + ((*(rdi_2 + 0x18) + *(rdi_2 + 8) + rax_42) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(rax_23 + 0x72) u> 0x50)
                        rcx_46 = *rcx_46
                    
                    rsi_4 = r12_3
                    var_240 = rdi_2
                    void* var_238_1 = sx.q(r15_3) + rcx_46
                
                uint64_t r14_6 = zx.q(r14_5) & 7
                int64_t r14_7 = r14_6 - (zx.q(r14_6.d) u>> 1 & 0x5555555555555555)
                int64_t rax_59 = (r14_7 u>> 2 & 0x3333333333333333) + (r14_7 & 0x3333333333333333)
                uint64_t rdx_34 =
                    ((((rax_59 u>> 4) + rax_59) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_230
                
                if (rdx_34.d u< 1)
                    var_230 = 0x98
                    r15_3 = rsi_4
                    int64_t var_228_2 = 0
                else
                    void* rax_60 = *(rax_23 + 0x10)
                    void* rcx_47 = rax_23
                    
                    if (rax_60 != 0)
                        rcx_47 = rax_60
                    
                    void* rdi_3 = *(rcx_47 + (rdx_34 << 3) - 8)
                    int32_t rax_61 = *(rdi_3 + 0x28)
                    int32_t rax_62 = rax_61 + 7
                    
                    if (rax_61 + 7 s< 0)
                        rax_62 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_3 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_51 = 0
                        int64_t i_2
                        
                        do
                            void* rax_65 = *(rdi_3 + 0x30)
                            
                            if ((*(rdi_3 + 0x30) & 1) != 0)
                                rax_65 = (rax_65 s>> 1) + rdi_3 + 0x30
                            
                            uint32_t rax_66 = zx.d(*(rax_65 + rcx_51 + 2))
                            rcx_51 += 0x18
                            r9_16 += rax_66
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_52 = rax_23 + 0x20
                    r12_3 += ((rax_62 s>> 3) + ((*(rdi_3 + 0x18) + *(rdi_3 + 8) + rax_61) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_3 = r12_3
                    
                    if (*(rax_23 + 0x72) u> 0x50)
                        rcx_52 = *rcx_52
                    
                    var_230 = rdi_3
                    void* var_228_1 = sx.q(rsi_4) + rcx_52
                
                r14_4 = arg1
                rsi_2 = rax_23 + 0x78
                void* var_318_1 = rsi_2
                void** var_320_1 = &var_240
                int64_t* var_328_2 = arg13
                void* var_330_2 = rcx_25
                void* var_338_7 = arg2
                var_348.d = *(r14_4 + 0x10)
                var_350.b = 0
                sub_141455490(arg8[2], *(arg8[3] + 0x20), *(r14_4 + 8), (*(r14_4 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
                var_318 = rsi_2
                var_320 = &var_230
                int64_t* var_328_3 = arg13
                void* var_330_3 = rcx_25
                void* var_338_8 = arg2
                var_348.d = *(r14_4 + 0x10)
                var_350.b = 0
                sub_141455490(arg8[4], *(arg8[5] + 0x20), *(r14_4 + 8), (*(r14_4 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
            
            int64_t* r12_6
            
            if (rax_19 == 0)
                r12_6 = arg8
            else
                uint64_t rcx_64 = zx.q(*(rax_23 + 0x70)) & 0xf
                int64_t rcx_65 = rcx_64 - (zx.q(rcx_64.d) u>> 1 & 0x5555555555555555)
                int64_t rax_82 = (rcx_65 u>> 2 & 0x3333333333333333) + (rcx_65 & 0x3333333333333333)
                uint64_t rdx_45 =
                    ((((rax_82 u>> 4) + rax_82) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_45.d u< 1)
                    var_290 = 0x98
                    int64_t var_288_2 = 0
                else
                    void* rax_83 = *(rax_23 + 0x10)
                    void* rcx_67 = rax_23
                    
                    if (rax_83 != 0)
                        rcx_67 = rax_83
                    
                    void* rdi_5 = *(rcx_67 + (rdx_45 << 3) - 8)
                    int32_t rax_84 = *(rdi_5 + 0x28)
                    int32_t rax_85 = rax_84 + 7
                    
                    if (rax_84 + 7 s< 0)
                        rax_85 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_5 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_71 = 0
                        int64_t i_3
                        
                        do
                            void* rax_88 = *(rdi_5 + 0x30)
                            
                            if ((*(rdi_5 + 0x30) & 1) != 0)
                                rax_88 = (rax_88 s>> 1) + rdi_5 + 0x30
                            
                            uint32_t rax_89 = zx.d(*(rax_88 + rcx_71 + 2))
                            rcx_71 += 0x18
                            r9_19 += rax_89
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_72 = rax_23 + 0x20
                    int32_t rdx_50 = (((rax_85 s>> 3)
                        + ((*(rdi_5 + 0x18) + *(rdi_5 + 8) + rax_84) << 3) + 7 + r9_19) & 0xfffffff8)
                        + r12_3
                    
                    if (*(rax_23 + 0x72) u> 0x50)
                        rcx_72 = *rcx_72
                    
                    rsi_2 = rax_23 + 0x78
                    var_290 = rdi_5
                    void* var_288_1 = sx.q(r15_3) + rcx_72
                    r15_3 = rdx_50
                
                r12_6 = arg8
                var_318 = rsi_2
                var_320 = &var_290
                int64_t* var_328_4 = arg13
                void* var_330_4 = rcx_25
                void* var_338_9 = arg2
                var_348.d = *(r14_4 + 0x10)
                var_350.b = 0
                sub_141455490(r12_6[6], *(r12_6[7] + 0x20), *(r14_4 + 8), (*(r14_4 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
            
            void* rdi_6 = r12_6[8]
            
            if (rdi_6 != 0)
                uint64_t rcx_79 = zx.q(*(rax_23 + 0x70)) & 0x1f
                int64_t rcx_80 = rcx_79 - (zx.q(rcx_79.d) u>> 1 & 0x5555555555555555)
                int64_t rax_100 =
                    (rcx_80 u>> 2 & 0x3333333333333333) + (rcx_80 & 0x3333333333333333)
                uint64_t rcx_87 =
                    ((((rax_100 u>> 4) + rax_100) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_87.d u< 1)
                    var_2c8 = 0x98
                    int64_t var_2c0_2 = 0
                else
                    void* rax_101 = *(rax_23 + 0x10)
                    void* rdx_53 = rax_23
                    
                    if (rax_101 != 0)
                        rdx_53 = rax_101
                    
                    void* rcx_88 = rax_23 + 0x20
                    
                    if (*(rax_23 + 0x72) u> 0x50)
                        rcx_88 = *rcx_88
                    
                    var_2c8 = *(rdx_53 + ((rcx_87 - 1) << 3))
                    void* var_2c0_1 = sx.q(r15_3) + rcx_88
                
                var_318 = rsi_2
                var_320 = &var_2c8
                int64_t* var_328_5 = arg13
                void* var_330_5 = rcx_25
                void* var_338_10 = arg2
                var_348.d = *(r14_4 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_6, *(r12_6[9] + 0x20), *(r14_4 + 8), (*(r14_4 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
            
            int32_t var_2a8
            int32_t var_2a4
            sub_14126c0d0(r14_4, var_270, rcx_25, &var_2a4, &var_2a8)
            int128_t zmm0_1 = *(r12_6 + 0x10)
            int128_t zmm1_1 = *(r12_6 + 0x20)
            int64_t* rcx_95 = *(r14_4 + 0x20)
            uint64_t r9_23 = zx.q(var_2a4)
            uint64_t r8_17 = zx.q(var_308)
            var_218 = *r12_6
            int64_t var_210_1 = r12_6[1]
            int64_t var_1d0_1 = r12_6[9]
            int128_t var_208_1 = zmm0_1
            var_348.d = arg10
            int128_t var_1f8_1 = zmm1_1
            var_350.d = arg9
            int128_t var_1e8_1 = *(r12_6 + 0x30)
            void* var_1d8_1 = rdi_6
            int128_t var_1b8_1 = *(r12_6 + 0x60)
            int128_t var_1c8_1 = *(r12_6 + 0x50)
            int32_t* var_358_11
            var_358_11.d = var_2a8
            (*(*rcx_95 + 0x10))(rcx_95, arg2, r8_17, r9_23, var_358_11, var_350, var_348, arg11, 
                &var_1a8, &var_218, rax_23, var_320, var_318)
            rax_20 = var_258_1
            rcx_24 = arg2
            rdx_13 = var_308
            r8_9 = var_260_1
            r9_12 = var_2a0
            r10_1 = arg3
        
        rdx_13 += 1
        rax_20 = rol.q(rax_20, 1)
        r8_9 += 0x68
        var_308 = rdx_13
        var_260_1 = r8_9
        var_258_1 = rax_20
    while (rdx_13 s< r9_12)

int128_t var_188
int64_t* rcx_96 = var_188:8.q

if (rcx_96 != 0)
    sub_1419d6470(rcx_96)

int64_t* rcx_97 = var_188.q

if (rcx_97 != 0)
    sub_1419d6470(rcx_97)

int128_t var_198
int64_t* rcx_98 = var_198:8.q

if (rcx_98 != 0)
    sub_1419d6470(rcx_98)

int64_t* rcx_99 = var_198.q

if (rcx_99 != 0)
    sub_1419d6470(rcx_99)

int64_t* rcx_100 = var_1a8:8.q

if (rcx_100 != 0)
    sub_1419d6470(rcx_100)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_378)
return result
