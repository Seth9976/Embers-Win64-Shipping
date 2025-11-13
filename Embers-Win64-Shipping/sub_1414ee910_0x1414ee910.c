// 函数: sub_1414ee910
// 地址: 0x1414ee910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int64_t* rbx = arg8
void* rcx_3 = *(arg2 + 0x78)
int64_t* var_2c8 = rbx
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

int64_t rax_8 = *rbx
void* r13_2 = rbx[6]
void* r15_1 = rbx[8]
int128_t var_208 = *(rbx + 0x10)
int64_t rdx_1 = *(rdx + rcx_3)
int128_t zmm0 = *(rbx + 0x20)
int64_t var_218 = rax_8
void* rax_9 = rbx[1]
int128_t var_1f8 = zmm0
void* var_210 = rax_9
int128_t var_1c8 = *(rbx + 0x50)
int64_t var_1e0 = rbx[7]
void* var_1e8 = r13_2
int128_t var_1b8 = *(rbx + 0x60)
void* var_1d8 = r15_1
int64_t var_1d0 = rbx[9]
void var_130
sub_141298f00(&var_130, rdx_1, &var_218, &var_1a8)
int64_t rax_12

if (arg9 == 0)
    if (arg10 == 0)
        rax_12 = data_1439b5590
    else
        rax_12 = data_1439b5578
        
        if (arg10 != 2)
            rax_12 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_12 = data_1439b5548
    else
        rax_12 = data_1439b5530
        
        if (arg10 != 2)
            rax_12 = data_1439b5518
else if (arg10 == 0)
    rax_12 = data_14395da18
else
    rax_12 = data_1439b5500
    
    if (arg10 != 2)
        rax_12 = data_1439b54e8

var_160:8.q = rax_12
var_160.q = *arg7
int64_t var_150_1 = arg7[1]
void var_b8
sub_1419cf510(rcx_3, *(arg1 + 0x10), rax_7, &var_b8)
bool cond:3 = *rbx == 0
int32_t var_304 = 0
bool var_50 = *(zx.q(rax_7) + rcx_3 + 0xa2)
int32_t var_2e8
void* const var_2b0

if (not(cond:3))
    sub_141097100(&var_130, &var_2b0, 0, &var_304)
    void* rbx_1 = *(arg1 + 8)
    int64_t* var_338_1 = &var_2b0
    sub_141456250(rax_8, rbx_1, *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    
    if (sub_14122e130((*U"1111")[sx.q(*(rbx_1 + 8))]).b == 0)
        var_2e8 = *(rax_8 + 0x140)
        int16_t var_2e4_1 = *(rax_8 + 0x144)
        sub_14088bf20(&var_2b0, &var_2e8, &arg13[2])
    
    rbx = var_2c8

void* rbx_2 = rbx[4]
void* r14_3 = var_2c8[2]
uint64_t rax_15
rax_15.b = rbx_2 != 0
bool rcx_15 = r14_3 != 0 & rax_15.b
void* const var_280
void* r14_4

if (rcx_15 == 0)
    r14_4 = arg1
else
    sub_141097100(&var_130, &var_2b0, 1, &var_304)
    sub_141097100(&var_130, &var_280, 2, &var_304)
    int64_t* var_338_2 = &var_2b0
    sub_141456250(r14_3, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    r14_4 = arg1
    int64_t* var_338_3 = &var_280
    sub_141456250(rbx_2, *(r14_4 + 8), *(r14_4 + 0x10), arg4, arg5, arg6, arg7, arg13)

void* rbx_3

if (r13_2 == 0)
    rbx_3 = arg4
else
    sub_141097100(&var_130, &var_2b0, 3, &var_304)
    rbx_3 = arg4
    int64_t* var_338_4 = &var_2b0
    sub_141456250(r13_2, *(r14_4 + 8), *(r14_4 + 0x10), rbx_3, arg5, arg6, arg7, arg13)

void* rsi_1

if (r15_1 == 0)
    rsi_1 = arg1
else
    sub_141097100(&var_130, &var_2b0, 4, &var_304)
    int64_t* var_338_5 = &var_2b0
    rsi_1 = arg1
    sub_141456250(r15_1, *(rsi_1 + 8), *(rsi_1 + 0x10), rbx_3, arg5, arg6, arg7, arg13)
    var_2e8 = *(r15_1 + 0x140)
    int16_t var_2e4_2 = *(r15_1 + 0x144)
    sub_14088bf20(&var_2b0, &var_2e8, &arg13[2])

void* rcx_29 = arg2
int32_t rdx_16 = 0
int32_t var_2b4 = 0
int32_t r9_12 = *(rcx_29 + 0x70)
var_2e8 = r9_12

if (r9_12 s> 0)
    int64_t rax_25 = 1
    int64_t r10_1 = arg3
    int64_t r8_12 = 0
    int64_t var_250_1 = 1
    int64_t var_258_1 = 0
    
    do
        if ((r10_1 & rax_25) != 0)
            void* rax_26 = *(rcx_29 + 0x68)
            
            if (rax_26 != 0)
                rcx_29 = rax_26
            
            void* rcx_30 = rcx_29 + r8_12
            int64_t* rcx_31 = *(rsi_1 + 0x20)
            void* rax_28 = (*(*rcx_31 + 8))(rcx_31, &var_130, zx.q(r9_12))
            int64_t r10_2 = rax_8
            int32_t r12_1 = 0
            int32_t r15_2 = 0
            int64_t* var_350
            int64_t* var_348
            void** var_320
            void* var_318
            void* r14_6
            
            if (r10_2 == 0)
                r14_6 = rax_28 + 0x78
            else
                uint64_t rdx_21 = ((zx.q(*(rax_28 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_248
                
                if (rdx_21.d u< 1)
                    var_248 = 0x98
                    int64_t var_240_2 = 0
                else
                    void* rax_29 = *(rax_28 + 0x10)
                    void* rcx_32 = rax_28
                    
                    if (rax_29 != 0)
                        rcx_32 = rax_29
                    
                    void* rdi_1 = *(rcx_32 + (rdx_21 << 3) - 8)
                    int32_t rax_30 = *(rdi_1 + 0x28)
                    int32_t rax_31 = rax_30 + 7
                    
                    if (rax_30 + 7 s< 0)
                        rax_31 += 7
                    
                    int32_t r9_13 = 0
                    int64_t i_4 = sx.q(*(rdi_1 + 0x38))
                    
                    if (i_4 s> 0)
                        int64_t rcx_36 = 0
                        int64_t i
                        
                        do
                            void* rax_34 = *(rdi_1 + 0x30)
                            
                            if ((*(rdi_1 + 0x30) & 1) != 0)
                                rax_34 = (rax_34 s>> 1) + rdi_1 + 0x30
                            
                            uint32_t rax_35 = zx.d(*(rcx_36 + rax_34 + 2))
                            rcx_36 += 0x18
                            r9_13 += rax_35
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_2 = rax_8
                    
                    int64_t* rax_36 = rax_28 + 0x20
                    r12_1 = ((rax_31 s>> 3) + ((*(rdi_1 + 0x18) + *(rdi_1 + 8) + rax_30) << 3) + 7
                        + r9_13) & 0xfffffff8
                    
                    if (*(rax_28 + 0x72) u> 0x50)
                        rax_36 = *rax_36
                    
                    rsi_1 = arg1
                    r15_2 = r12_1
                    var_248 = rdi_1
                    int64_t* var_240_1 = rax_36
                
                r14_6 = rax_28 + 0x78
                var_318 = r14_6
                var_320 = &var_248
                int64_t* var_328_1 = arg13
                void* var_330_1 = rcx_30
                void* var_338_6 = arg2
                var_348.d = *(rsi_1 + 0x10)
                var_350.b = rax_7
                sub_141455490(r10_2, *(rax_9 + 0x20), *(rsi_1 + 8), (*(rsi_1 + 0x18)).b, rcx_3.d, 
                    var_350, var_348, arg4)
            
            if (rcx_15 != 0)
                uint32_t r14_7 = zx.d(*(rax_28 + 0x70))
                uint64_t rcx_43 = zx.q(r14_7) & 3
                uint64_t rcx_44 = rcx_43 - (zx.q(rcx_43.d) u>> 1)
                int64_t rax_45 = (rcx_44 u>> 2 & 0x3333333333333333) + (rcx_44 & 0x3333333333333333)
                uint64_t rdx_30 =
                    ((((rax_45 u>> 4) + rax_45) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_238
                int32_t rsi_4
                
                if (rdx_30.d u< 1)
                    var_238 = 0x98
                    rsi_4 = r15_2
                    int64_t var_230_2 = 0
                else
                    void* rax_46 = *(rax_28 + 0x10)
                    void* rcx_46 = rax_28
                    
                    if (rax_46 != 0)
                        rcx_46 = rax_46
                    
                    void* rdi_2 = *(rcx_46 + (rdx_30 << 3) - 8)
                    int32_t rax_47 = *(rdi_2 + 0x28)
                    int32_t rax_48 = rax_47 + 7
                    
                    if (rax_47 + 7 s< 0)
                        rax_48 += 7
                    
                    int32_t r9_15 = 0
                    int64_t i_5 = sx.q(*(rdi_2 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_50 = 0
                        int64_t i_1
                        
                        do
                            void* rax_51 = *(rdi_2 + 0x30)
                            
                            if ((*(rdi_2 + 0x30) & 1) != 0)
                                rax_51 = (rax_51 s>> 1) + rdi_2 + 0x30
                            
                            uint32_t rax_52 = zx.d(*(rcx_50 + rax_51 + 2))
                            rcx_50 += 0x18
                            r9_15 += rax_52
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_51 = rax_28 + 0x20
                    r12_1 += ((rax_48 s>> 3) + ((*(rdi_2 + 0x18) + *(rdi_2 + 8) + rax_47) << 3) + 7
                        + r9_15) & 0xfffffff8
                    
                    if (*(rax_28 + 0x72) u> 0x50)
                        rcx_51 = *rcx_51
                    
                    rsi_4 = r12_1
                    var_238 = rdi_2
                    void* var_230_1 = sx.q(r15_2) + rcx_51
                
                uint64_t r14_8 = zx.q(r14_7) & 7
                int64_t r14_9 = r14_8 - (zx.q(r14_8.d) u>> 1 & 0x5555555555555555)
                int64_t rax_64 = (r14_9 u>> 2 & 0x3333333333333333) + (r14_9 & 0x3333333333333333)
                uint64_t rdx_37 =
                    ((((rax_64 u>> 4) + rax_64) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_228
                
                if (rdx_37.d u< 1)
                    var_228 = 0x98
                    r15_2 = rsi_4
                    int64_t var_220_2 = 0
                else
                    void* rax_65 = *(rax_28 + 0x10)
                    void* rcx_52 = rax_28
                    
                    if (rax_65 != 0)
                        rcx_52 = rax_65
                    
                    void* rdi_3 = *(rcx_52 + (rdx_37 << 3) - 8)
                    int32_t rax_66 = *(rdi_3 + 0x28)
                    int32_t rax_67 = rax_66 + 7
                    
                    if (rax_66 + 7 s< 0)
                        rax_67 += 7
                    
                    int32_t r9_16 = 0
                    int64_t i_6 = sx.q(*(rdi_3 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_56 = 0
                        int64_t i_2
                        
                        do
                            void* rax_70 = *(rdi_3 + 0x30)
                            
                            if ((*(rdi_3 + 0x30) & 1) != 0)
                                rax_70 = (rax_70 s>> 1) + rdi_3 + 0x30
                            
                            uint32_t rax_71 = zx.d(*(rax_70 + rcx_56 + 2))
                            rcx_56 += 0x18
                            r9_16 += rax_71
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_57 = rax_28 + 0x20
                    r12_1 += ((rax_67 s>> 3) + ((*(rdi_3 + 0x18) + *(rdi_3 + 8) + rax_66) << 3) + 7
                        + r9_16) & 0xfffffff8
                    r15_2 = r12_1
                    
                    if (*(rax_28 + 0x72) u> 0x50)
                        rcx_57 = *rcx_57
                    
                    var_228 = rdi_3
                    void* var_220_1 = sx.q(rsi_4) + rcx_57
                
                r14_6 = rax_28 + 0x78
                void* var_318_1 = r14_6
                void** var_320_1 = &var_238
                int64_t* var_328_2 = arg13
                void* var_330_2 = rcx_30
                void* var_338_7 = arg2
                var_348.d = *(arg1 + 0x10)
                var_350.b = 0
                sub_141455490(var_2c8[2], *(var_2c8[3] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
                var_318 = r14_6
                var_320 = &var_228
                int64_t* var_328_3 = arg13
                void* var_330_3 = rcx_30
                void* var_338_8 = arg2
                var_348.d = *(arg1 + 0x10)
                var_350.b = 0
                sub_141455490(var_2c8[4], *(var_2c8[5] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
            
            int64_t* r10_7 = var_2c8
            void* rdi_5 = r10_7[6]
            void* r12_4
            
            if (rdi_5 == 0)
                r12_4 = arg1
            else
                uint64_t rcx_69 = zx.q(*(rax_28 + 0x70)) & 0xf
                int64_t rcx_70 = rcx_69 - (zx.q(rcx_69.d) u>> 1 & 0x5555555555555555)
                int64_t rax_87 = (rcx_70 u>> 2 & 0x3333333333333333) + (rcx_70 & 0x3333333333333333)
                uint64_t rdx_48 =
                    ((((rax_87 u>> 4) + rax_87) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_48.d u< 1)
                    var_280 = 0x98
                    int64_t var_278_2 = 0
                else
                    void* rax_88 = *(rax_28 + 0x10)
                    void* rcx_72 = rax_28
                    
                    if (rax_88 != 0)
                        rcx_72 = rax_88
                    
                    void* rdi_6 = *(rcx_72 + (rdx_48 << 3) - 8)
                    int32_t rax_89 = *(rdi_6 + 0x28)
                    int32_t rax_90 = rax_89 + 7
                    
                    if (rax_89 + 7 s< 0)
                        rax_90 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_6 + 0x38))
                    int32_t r9_19 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_76 = 0
                        int64_t i_3
                        
                        do
                            void* rax_93 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_93 = (rax_93 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_94 = zx.d(*(rax_93 + rcx_76 + 2))
                            rcx_76 += 0x18
                            r9_19 += rax_94
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                        r10_7 = var_2c8
                    
                    void* rcx_77 = rax_28 + 0x20
                    
                    if (*(rax_28 + 0x72) u> 0x50)
                        rcx_77 = *rcx_77
                    
                    int64_t rax_95 = sx.q(r15_2)
                    r15_2 = (((rax_90 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_89) << 3) + 7
                        + r9_19) & 0xfffffff8) + r12_1
                    var_280 = rdi_6
                    void* var_278_1 = rax_95 + rcx_77
                
                r12_4 = arg1
                rdi_5 = r10_7[6]
                var_318 = r14_6
                var_320 = &var_280
                int64_t* var_328_4 = arg13
                void* var_330_4 = rcx_30
                void* var_338_9 = arg2
                var_348.d = *(r12_4 + 0x10)
                var_350.b = 0
                sub_141455490(rdi_5, *(r10_7[7] + 0x20), *(r12_4 + 8), (*(r12_4 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
                r10_7 = var_2c8
            
            void* rsi_7 = r10_7[8]
            
            if (rsi_7 != 0)
                uint64_t rcx_84 = zx.q(*(rax_28 + 0x70)) & 0x1f
                int64_t rcx_85 = rcx_84 - (zx.q(rcx_84.d) u>> 1 & 0x5555555555555555)
                int64_t rax_105 =
                    (rcx_85 u>> 2 & 0x3333333333333333) + (rcx_85 & 0x3333333333333333)
                uint64_t rcx_92 =
                    ((((rax_105 u>> 4) + rax_105) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rcx_92.d u< 1)
                    var_2b0 = 0x98
                    int64_t var_2a8_2 = 0
                else
                    void* rax_106 = *(rax_28 + 0x10)
                    void* rcx_93 = rax_28 + 0x20
                    void* rdx_56 = rax_28
                    
                    if (rax_106 != 0)
                        rdx_56 = rax_106
                    
                    if (*(rax_28 + 0x72) u> 0x50)
                        rcx_93 = *rcx_93
                    
                    var_2b0 = *(rdx_56 + ((rcx_92 - 1) << 3))
                    void* var_2a8_1 = sx.q(r15_2) + rcx_93
                
                var_318 = r14_6
                var_320 = &var_2b0
                int64_t* var_328_5 = arg13
                void* var_330_5 = rcx_30
                void* var_338_10 = arg2
                var_348.d = *(r12_4 + 0x10)
                var_350.b = 0
                sub_141455490(rsi_7, *(r10_7[9] + 0x20), *(r12_4 + 8), (*(r12_4 + 0x18)).b, 
                    rcx_3.d, var_350, var_348, arg4)
            
            int32_t var_288
            int32_t var_284
            sub_14126c0d0(r12_4, var_270, rcx_30, &var_284, &var_288)
            uint64_t r9_23 = zx.q(var_284)
            int128_t zmm0_1 = *(var_2c8 + 0x10)
            int128_t zmm1_1 = *(var_2c8 + 0x20)
            var_218 = rax_8
            void* var_210_1 = rax_9
            int64_t var_1e0_1 = var_2c8[7]
            int64_t var_1d0_1 = var_2c8[9]
            void* var_1d8_1 = rsi_7
            rsi_1 = arg1
            int128_t var_208_1 = zmm0_1
            var_348.d = arg10
            int128_t var_1f8_1 = zmm1_1
            int64_t* rcx_101 = *(rsi_1 + 0x20)
            var_350.d = arg9
            void* var_1e8_1 = rdi_5
            int128_t var_1c8_1 = *(var_2c8 + 0x50)
            int128_t var_1b8_1 = *(var_2c8 + 0x60)
            int32_t* var_358_11
            var_358_11.d = var_288
            (*(*rcx_101 + 0x10))(rcx_101, arg2, zx.q(var_2b4), r9_23, var_358_11, var_350, var_348, 
                arg11, &var_1a8, &var_218, rax_28, var_320, var_318)
            rax_25 = var_250_1
            rcx_29 = arg2
            rdx_16 = var_2b4
            r8_12 = var_258_1
            r9_12 = var_2e8
            r10_1 = arg3
        
        rdx_16 += 1
        rax_25 = rol.q(rax_25, 1)
        r8_12 += 0x68
        var_2b4 = rdx_16
        var_258_1 = r8_12
        var_250_1 = rax_25
    while (rdx_16 s< r9_12)

int128_t var_188
int64_t* rcx_102 = var_188:8.q

if (rcx_102 != 0)
    sub_1419d6470(rcx_102)

int64_t* rcx_103 = var_188.q

if (rcx_103 != 0)
    sub_1419d6470(rcx_103)

int128_t var_198
int64_t* rcx_104 = var_198:8.q

if (rcx_104 != 0)
    sub_1419d6470(rcx_104)

int64_t* rcx_105 = var_198.q

if (rcx_105 != 0)
    sub_1419d6470(rcx_105)

int64_t* rcx_106 = var_1a8:8.q

if (rcx_106 != 0)
    sub_1419d6470(rcx_106)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_378)
return result
