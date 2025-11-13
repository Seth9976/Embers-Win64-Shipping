// 函数: sub_1410e6100
// 地址: 0x1410e6100
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
    int64_t* var_338_4 = &var_2c0
    sub_141456250(r14_1, *(arg1 + 8), *(arg1 + 0x10), r15_3, arg5, arg6, arg7, r12_1)

void* r13_1 = arg8[8]
void* r14_2

if (r13_1 == 0)
    r14_2 = arg1
else
    sub_141097100(&var_130, &var_2c0, 4, &var_308)
    r14_2 = arg1
    int64_t* var_338_5 = &var_2c0
    sub_141456250(r13_1, *(r14_2 + 8), *(r14_2 + 0x10), r15_3, arg5, arg6, arg7, r12_1)

void* rcx_23 = arg2
int32_t rdx_13 = 0
int32_t var_2d4 = 0
int32_t r9_12 = *(rcx_23 + 0x70)
int32_t var_290 = r9_12

if (r9_12 s> 0)
    int64_t rax_26 = 1
    int64_t r10_1 = arg3
    int64_t r8_9 = 0
    int64_t var_260_1 = 1
    int64_t var_268_1 = 0
    
    do
        if ((r10_1 & rax_26) != 0)
            void* rax_27 = *(rcx_23 + 0x68)
            void* rdi_1 = rcx_23
            int64_t* rcx_24 = *(r14_2 + 0x20)
            
            if (rax_27 != 0)
                rdi_1 = rax_27
            
            void* rdi_3 = rdi_1 + r8_9
            void* var_2c8_1 = rdi_3
            int64_t* rax_29 = (*(*rcx_24 + 8))(rcx_24, &var_130, zx.q(r9_12))
            int64_t r11_1 = rax_13
            int64_t* r13_2 = rax_29
            int32_t r12_2 = 0
            int32_t r15_4 = 0
            int64_t* var_350
            int64_t* var_348
            void** var_320
            void* var_318
            void* rsi_2
            
            if (r11_1 == 0)
                rsi_2 = &rax_29[0xf]
            else
                uint64_t rdx_18 = ((zx.q(rax_29[0xe].w) & 1) * 0x101010101010101) u>> 0x38
                void* const var_258
                
                if (rdx_18.d u< 1)
                    var_258 = 0x98
                    int64_t var_250_2 = 0
                else
                    int64_t* rax_30 = rax_29[2]
                    int64_t* rcx_26 = r13_2
                    
                    if (rax_30 != 0)
                        rcx_26 = rax_30
                    
                    void* rsi_1 = rcx_26[rdx_18 - 1]
                    int32_t rax_31 = *(rsi_1 + 0x28)
                    int32_t rax_32 = rax_31 + 7
                    
                    if (rax_31 + 7 s< 0)
                        rax_32 += 7
                    
                    int32_t r10_2 = 0
                    int64_t i_4 = sx.q(*(rsi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rdx_19 = 0
                        int64_t i
                        
                        do
                            void* rax_35 = *(rsi_1 + 0x30)
                            
                            if ((*(rsi_1 + 0x30) & 1) != 0)
                                rax_35 = (rax_35 s>> 1) + rsi_1 + 0x30
                            
                            uint32_t rcx_30 = zx.d(*(rdx_19 + rax_35 + 2))
                            rdx_19 += 0x18
                            r10_2 += rcx_30
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        rdi_3 = var_2c8_1
                        r11_1 = rax_13
                    
                    void* rax_36 = &r13_2[4]
                    r12_2 = ((rax_32 s>> 3) + ((*(rsi_1 + 0x18) + *(rsi_1 + 8) + rax_31) << 3) + 7
                        + r10_2) & 0xfffffff8
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rax_36 = *rax_36
                    
                    r14_2 = arg1
                    r15_4 = r12_2
                    var_258 = rsi_1
                    void* var_250_1 = rax_36
                
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
            rax_29.b = rdi_5[4] != 0
            
            if ((rax_29.b & rdi_5[2] != 0) != 0)
                uint32_t r14_4 = zx.d(r13_2[0xe].w)
                uint64_t rcx_36 = zx.q(r14_4) & 3
                uint64_t rcx_37 = rcx_36 - (zx.q(rcx_36.d) u>> 1)
                int64_t rax_45 = (rcx_37 u>> 2 & 0x3333333333333333) + (rcx_37 & 0x3333333333333333)
                uint64_t rdx_27 =
                    ((((rax_45 u>> 4) + rax_45) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_248
                int32_t rsi_4
                
                if (rdx_27.d u< 1)
                    var_248 = 0x98
                    rsi_4 = r15_4
                    int64_t var_240_2 = 0
                else
                    int64_t* rax_46 = r13_2[2]
                    int64_t* rcx_39 = r13_2
                    
                    if (rax_46 != 0)
                        rcx_39 = rax_46
                    
                    void* rdi_4 = rcx_39[rdx_27 - 1]
                    int32_t rax_47 = *(rdi_4 + 0x28)
                    int32_t rax_48 = rax_47 + 7
                    
                    if (rax_47 + 7 s< 0)
                        rax_48 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_4 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_43 = 0
                        int64_t i_1
                        
                        do
                            void* rax_51 = *(rdi_4 + 0x30)
                            
                            if ((*(rdi_4 + 0x30) & 1) != 0)
                                rax_51 = (rax_51 s>> 1) + rdi_4 + 0x30
                            
                            uint32_t rax_52 = zx.d(*(rcx_43 + rax_51 + 2))
                            rcx_43 += 0x18
                            r9_15 += rax_52
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_44 = &r13_2[4]
                    r12_2 += ((rax_48 s>> 3) + ((*(rdi_4 + 0x18) + *(rdi_4 + 8) + rax_47) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_44 = *rcx_44
                    
                    rsi_4 = r12_2
                    var_248 = rdi_4
                    rdi_5 = arg8
                    void* var_240_1 = sx.q(r15_4) + rcx_44
                
                uint64_t r14_5 = zx.q(r14_4) & 7
                int64_t r14_6 = r14_5 - (zx.q(r14_5.d) u>> 1 & 0x5555555555555555)
                int64_t rax_64 = (r14_6 u>> 2 & 0x3333333333333333) + (r14_6 & 0x3333333333333333)
                uint64_t rdx_34 =
                    ((((rax_64 u>> 4) + rax_64) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_238
                
                if (rdx_34.d u< 1)
                    var_238 = 0x98
                    r15_4 = rsi_4
                    int64_t var_230_2 = 0
                else
                    int64_t* rax_65 = r13_2[2]
                    int64_t* rcx_45 = r13_2
                    
                    if (rax_65 != 0)
                        rcx_45 = rax_65
                    
                    void* rdi_6 = rcx_45[rdx_34 - 1]
                    int32_t rax_66 = *(rdi_6 + 0x28)
                    int32_t rax_67 = rax_66 + 7
                    
                    if (rax_66 + 7 s< 0)
                        rax_67 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_6 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_49 = 0
                        int64_t i_2
                        
                        do
                            void* rax_70 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_70 = (rax_70 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_71 = zx.d(*(rax_70 + rcx_49 + 2))
                            rcx_49 += 0x18
                            r9_16 += rax_71
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_50 = &r13_2[4]
                    r12_2 += ((rax_67 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_66) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_4 = r12_2
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_50 = *rcx_50
                    
                    var_238 = rdi_6
                    rdi_5 = arg8
                    void* var_230_1 = sx.q(rsi_4) + rcx_50
                
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
                uint64_t rcx_62 = zx.q(r13_2[0xe].w) & 0xf
                int64_t rcx_63 = rcx_62 - (zx.q(rcx_62.d) u>> 1 & 0x5555555555555555)
                int64_t rax_87 = (rcx_63 u>> 2 & 0x3333333333333333) + (rcx_63 & 0x3333333333333333)
                uint64_t rdx_45 =
                    ((((rax_87 u>> 4) + rax_87) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_45.d u< 1)
                    var_288 = 0x98
                    int64_t var_280_2 = 0
                else
                    int64_t* rax_88 = r13_2[2]
                    int64_t* rcx_65 = r13_2
                    
                    if (rax_88 != 0)
                        rcx_65 = rax_88
                    
                    void* rdi_7 = rcx_65[rdx_45 - 1]
                    int32_t rax_89 = *(rdi_7 + 0x28)
                    int32_t rax_90 = rax_89 + 7
                    
                    if (rax_89 + 7 s< 0)
                        rax_90 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_7 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_69 = 0
                        int64_t i_3
                        
                        do
                            void* rax_93 = *(rdi_7 + 0x30)
                            
                            if ((*(rdi_7 + 0x30) & 1) != 0)
                                rax_93 = (rax_93 s>> 1) + rdi_7 + 0x30
                            
                            uint32_t rax_94 = zx.d(*(rax_93 + rcx_69 + 2))
                            rcx_69 += 0x18
                            r9_19 += rax_94
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_70 = &r13_2[4]
                    int32_t rdx_50 = (((rax_90 s>> 3)
                        + ((*(rdi_7 + 0x18) + *(rdi_7 + 8) + rax_89) << 3) + 7 + r9_19) & 0xfffffff8)
                        + r12_2
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_70 = *rcx_70
                    
                    rsi_2 = &r13_2[0xf]
                    var_288 = rdi_7
                    void* var_280_1 = sx.q(r15_4) + rcx_70
                    r15_4 = rdx_50
                
                r12_5 = arg8
                var_318 = rsi_2
                rdi_8 = r12_5[6]
                var_320 = &var_288
                int64_t* var_328_4 = arg13
                void* var_330_4 = var_2c8_1
                void* var_338_9 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_8, *(r12_5[7] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            if (r12_5[8] != 0)
                uint64_t rcx_77 = zx.q(r13_2[0xe].w) & 0x1f
                int64_t rcx_78 = rcx_77 - (zx.q(rcx_77.d) u>> 1 & 0x5555555555555555)
                int64_t rax_105 =
                    (rcx_78 u>> 2 & 0x3333333333333333) + (rcx_78 & 0x3333333333333333)
                uint64_t rcx_85 =
                    ((((rax_105 u>> 4) + rax_105) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_85.d u< 1)
                    var_2c0 = 0x98
                    int64_t var_2b8_2 = 0
                else
                    int64_t* rax_106 = r13_2[2]
                    void* rcx_86 = &r13_2[4]
                    int64_t* rdx_53 = r13_2
                    
                    if (rax_106 != 0)
                        rdx_53 = rax_106
                    
                    if (*(r13_2 + 0x72) u> 0x50)
                        rcx_86 = *rcx_86
                    
                    var_2c0 = rdx_53[rcx_85 - 1]
                    void* var_2b8_1 = sx.q(r15_4) + rcx_86
                
                var_318 = rsi_2
                var_320 = &var_2c0
                int64_t* var_328_5 = arg13
                void* var_330_5 = var_2c8_1
                void* var_338_10 = arg2
                var_348.d = *(r14_2 + 0x10)
                var_350.b = 0
                sub_141455490(r12_5[8], *(r12_5[9] + 0x20), *(r14_2 + 8), (*(r14_2 + 0x18)).b, 
                    rax_6.d, var_350, var_348, arg4)
            
            int32_t var_298
            int32_t var_294
            sub_14126c0d0(r14_2, var_278, var_2c8_1, &var_294, &var_298)
            int128_t zmm0_1 = *(r12_5 + 0x40)
            int128_t zmm1_1 = *(r12_5 + 0x50)
            int64_t* rcx_93 = *(r14_2 + 0x20)
            uint64_t r9_23 = zx.q(var_294)
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
            (*(*rcx_93 + 0x10))(rcx_93, arg2, zx.q(var_2d4), r9_23, var_358_11, var_350, var_348, 
                arg11, &var_1a8, &var_218, r13_2, var_320, var_318)
            rax_26 = var_260_1
            rcx_23 = arg2
            rdx_13 = var_2d4
            r8_9 = var_268_1
            r9_12 = var_290
            r10_1 = arg3
        
        rdx_13 += 1
        rax_26 = rol.q(rax_26, 1)
        r8_9 += 0x68
        var_2d4 = rdx_13
        var_268_1 = r8_9
        var_260_1 = rax_26
    while (rdx_13 s< r9_12)

int128_t var_188
int64_t* rcx_94 = var_188:8.q

if (rcx_94 != 0)
    sub_1419d6470(rcx_94)

int64_t* rcx_95 = var_188.q

if (rcx_95 != 0)
    sub_1419d6470(rcx_95)

int128_t var_198
int64_t* rcx_96 = var_198:8.q

if (rcx_96 != 0)
    sub_1419d6470(rcx_96)

int64_t* rcx_97 = var_198.q

if (rcx_97 != 0)
    sub_1419d6470(rcx_97)

int64_t* rcx_98 = var_1a8:8.q

if (rcx_98 != 0)
    sub_1419d6470(rcx_98)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_378)
return result
