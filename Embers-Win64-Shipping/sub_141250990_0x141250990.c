// 函数: sub_141250990
// 地址: 0x141250990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int64_t* rdi = arg6
uint64_t* rcx_3 = *(arg2 + 0x78)
int64_t* var_2d0 = rdi
void* const var_278

if (arg4 == 0)
    var_278 = nullptr
else
    var_278 = *(arg4 + 0x110)

void* var_120 = nullptr
int32_t var_118 = 0
int32_t var_114 = 2
int64_t* var_110
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
int128_t zmm0 = *(arg8 + 0x40)
int64_t rbx_1 = arg8[2]
void* r13_2 = arg8[6]
int64_t var_218 = rax_8
int64_t var_210 = arg8[1]
int64_t var_200 = arg8[3]
int128_t var_1d8 = zmm0
int64_t var_1f8 = arg8[4]
int64_t var_1f0 = arg8[5]
int64_t rax_13 = arg8[7]
int128_t var_1c8 = *(arg8 + 0x50)
int64_t var_2b0 = rbx_1
int64_t var_208 = rbx_1
void* var_1e8 = r13_2
int64_t var_1e0 = rax_13
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, *(rdx + rcx_3), &var_218, &var_1a8)
int64_t rax_14

if (arg9 == 0)
    if (arg10 == 0)
        rax_14 = data_1439b5590
    else
        rax_14 = data_1439b5578
        
        if (arg10 != 2)
            rax_14 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_14 = data_1439b5548
    else
        rax_14 = data_1439b5530
        
        if (arg10 != 2)
            rax_14 = data_1439b5518
else if (arg10 == 0)
    rax_14 = data_14395da18
else
    rax_14 = data_1439b5500
    
    if (arg10 != 2)
        rax_14 = data_1439b54e8

var_160:8.q = rax_14
var_160.q = *arg7
int64_t var_150_1 = arg7[1]
void var_b8
sub_1419cf510(rcx_3, *(arg1 + 0x10), rax_7, &var_b8)
int32_t rsi_2 = 0
bool var_50 = *(zx.q(rax_7) + rcx_3 + 0xa2)
void* const var_2c8

if (rax_8 != 0)
    uint64_t rdx_6 = ((zx.q(var_c0) & 1) * 0x101010101010101) u>> 0x38
    
    if (rdx_6.d u< 1)
        var_2c8 = 0x98
        int64_t var_2c0_2 = 0
    else
        void* rcx_14 = &var_130
        
        if (var_120 != 0)
            rcx_14 = var_120
        
        void* rbx_2 = rcx_14 + (rdx_6 << 3)
        int64_t* rdx_7 = &var_110
        rsi_2 = sub_14126c010(rbx_2 - 8)
        rbx_1 = var_2b0
        
        if (var_c0:2.w u> 0x50)
            rdx_7 = var_110
        
        int64_t* var_2c0_1 = rdx_7
        var_2c8 = *(rbx_2 - 8)
    
    int64_t* var_328_1 = &var_2c8
    sub_141456250(rax_8, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, rdi, arg7, arg13)

int64_t* result
result.b = rbx_1 != 0

if ((result.b & arg8[4] != 0) != 0)
    uint32_t r12_1 = zx.d(var_c0.w)
    void* rdx_9 = var_120
    uint64_t rcx_19 = zx.q(r12_1) & 3
    uint64_t rcx_20 = rcx_19 - (zx.q(rcx_19.d) u>> 1)
    int64_t rax_26 = (rcx_20 u>> 2 & 0x3333333333333333) + (rcx_20 & 0x3333333333333333)
    uint64_t rcx_27 = ((((rax_26 u>> 4) + rax_26) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
    
    if (rcx_27.d u< 1)
        var_2c8 = 0x98
        int64_t var_2c0_4 = 0
    else
        int64_t rdi_1 = sx.q(rsi_2)
        void* rax_27 = &var_130
        
        if (rdx_9 != 0)
            rax_27 = rdx_9
        
        void* rbx_3 = rax_27 + (rcx_27 << 3)
        rdx_9 = var_120
        int64_t** rcx_29 = &var_110
        rsi_2 += sub_14126c010(rbx_3 - 8)
        var_2c8 = *(rbx_3 - 8)
        
        if (var_c0:2.w u> 0x50)
            rcx_29 = var_110
        
        rdi = var_2d0
        void* var_2c0_3 = rcx_29 + rdi_1
        r13_2 = arg8[6]
    
    uint64_t r12_2 = zx.q(r12_1) & 7
    int64_t r12_3 = r12_2 - (zx.q(r12_2.d) u>> 1 & 0x5555555555555555)
    int64_t rax_38 = (r12_3 u>> 2 & 0x3333333333333333) + (r12_3 & 0x3333333333333333)
    uint64_t rcx_35 = ((((rax_38 u>> 4) + rax_38) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
    
    if (rcx_35.d u< 1)
        var_2b0 = 0x98
        int64_t var_2a8_2 = 0
    else
        int64_t rdi_2 = sx.q(rsi_2)
        void* rax_39 = &var_130
        
        if (rdx_9 != 0)
            rax_39 = rdx_9
        
        void* rbx_4 = rax_39 + (rcx_35 << 3)
        rsi_2 += sub_14126c010(rbx_4 - 8)
        int64_t* rcx_37 = &var_110
        var_2b0 = *(rbx_4 - 8)
        
        if (var_c0:2.w u> 0x50)
            rcx_37 = var_110
        
        rdi = var_2d0
        void* var_2a8_1 = rcx_37 + rdi_2
    
    int64_t* var_328_2 = &var_2c8
    sub_141456250(arg8[2], *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, rdi, arg7, arg13)
    int64_t* var_328_3 = &var_2b0
    result = sub_141456250(arg8[4], *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, rdi, arg7, arg13)

void* rbx_7

if (r13_2 == 0)
    rbx_7 = arg4
else
    uint64_t rcx_41 = zx.q(var_c0) & 0xf
    int64_t rcx_42 = rcx_41 - (zx.q(rcx_41.d) u>> 1 & 0x5555555555555555)
    int64_t rax_51 = (rcx_42 u>> 2 & 0x3333333333333333) + (rcx_42 & 0x3333333333333333)
    uint64_t rdx_17 = ((((rax_51 u>> 4) + rax_51) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
    
    if (rdx_17.d u< 1)
        var_2c8 = 0x98
        int64_t var_2c0_6 = 0
    else
        void* rcx_44 = &var_130
        int64_t rdi_3 = sx.q(rsi_2)
        
        if (var_120 != 0)
            rcx_44 = var_120
        
        void* rbx_6 = rcx_44 + (rdx_17 << 3)
        rsi_2 += sub_14126c010(rbx_6 - 8)
        int64_t** rcx_46 = &var_110
        var_2c8 = *(rbx_6 - 8)
        
        if (var_c0:2.w u> 0x50)
            rcx_46 = var_110
        
        rdi = var_2d0
        void* var_2c0_5 = rcx_46 + rdi_3
    
    rbx_7 = arg4
    int64_t* var_328_4 = &var_2c8
    result = sub_141456250(r13_2, *(arg1 + 8), *(arg1 + 0x10), rbx_7, arg5, rdi, arg7, arg13)

int64_t* r13_3 = arg8
void* r10 = r13_3[8]
var_2c8 = r10

if (r10 != 0)
    uint64_t rcx_49 = zx.q(var_c0) & 0x1f
    int64_t rcx_50 = rcx_49 - (zx.q(rcx_49.d) u>> 1 & 0x5555555555555555)
    int64_t rax_63 = (rcx_50 u>> 2 & 0x3333333333333333) + (rcx_50 & 0x3333333333333333)
    uint64_t r8_11 = ((((rax_63 u>> 4) + rax_63) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
    
    if (r8_11.d u< 1)
        var_2b0 = 0x98
        int64_t var_2a8_4 = 0
    else
        int64_t** rdx_19 = &var_110
        void* rcx_52 = &var_130
        
        if (var_c0:2.w u> 0x50)
            rdx_19 = var_110
        
        if (var_120 != 0)
            rcx_52 = var_120
        
        var_2b0 = *(rcx_52 + (r8_11 << 3) - 8)
        void* var_2a8_3 = sx.q(rsi_2) + rdx_19
    
    int64_t* var_328_5 = &var_2b0
    result = sub_141456250(r10, *(arg1 + 8), *(arg1 + 0x10), rbx_7, arg5, rdi, arg7, arg13)

void* r12_5 = arg2
int32_t rcx_54 = 0
int32_t var_2b4 = 0
int32_t r8_13 = *(r12_5 + 0x70)
int64_t var_288
var_288.d = r8_13

if (r8_13 s> 0)
    result = 1
    int64_t r9_7 = arg3
    int64_t rdx_21 = 0
    int64_t* result_1 = 1
    var_2b0 = 0
    
    do
        if ((r9_7 & result) != 0)
            void* rax_69 = *(r12_5 + 0x68)
            void* r15_1 = r12_5
            int64_t* rcx_55 = *(arg1 + 0x20)
            
            if (rax_69 != 0)
                r15_1 = rax_69
            
            void* r15_3 = r15_1 + rdx_21
            void* var_2d0_1 = r15_3
            int64_t* rax_71 = (*(*rcx_55 + 8))(rcx_55, &var_130)
            int32_t rdx_23 = 0
            int32_t var_2f8_1 = 0
            int64_t* rdi_4 = rax_71
            int64_t* var_340
            int64_t* var_338
            int64_t* var_310
            void* var_308
            
            if (*r13_3 != 0)
                uint64_t rcx_60 = ((zx.q(rax_71[0xe].w) & 1) * 0x101010101010101) u>> 0x38
                int64_t var_268
                
                if (rcx_60.d u< 1)
                    var_268 = 0x98
                    int64_t var_260_2 = 0
                else
                    int64_t* rax_72 = rdi_4[2]
                    int64_t* rsi_3 = rdi_4
                    
                    if (rax_72 != 0)
                        rsi_3 = rax_72
                    
                    void* rcx_62 = &rdi_4[4]
                    var_2f8_1 = sub_14126c010((rcx_60 << 3) + -fffffffffffffff8 + rsi_3)
                    
                    if (*(rdi_4 + 0x72) u> 0x50)
                        rcx_62 = *rcx_62
                    
                    r15_3 = var_2d0_1
                    var_268 = *(rsi_3 + (rcx_60 << 3) + -fffffffffffffff8)
                    void* var_260_1 = rcx_62
                
                var_308 = &rdi_4[0xf]
                var_310 = &var_268
                int64_t* var_318_1 = arg13
                void* var_320_1 = r15_3
                void* var_328_6 = r12_5
                var_338.d = *(arg1 + 0x10)
                var_340.b = rax_7
                sub_141455490(*r13_3, *(r13_3[1] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, rcx_3.d, 
                    var_340, var_338, arg4)
                rdx_23 = var_2f8_1
            
            rax_71.b = r13_3[4] != 0
            int64_t* rsi_7
            int32_t r13_9
            
            if ((rax_71.b & r13_3[2] != 0) == 0)
                r13_9 = var_2f8_1
                rsi_7 = arg8
            else
                uint32_t r13_4 = zx.d(rdi_4[0xe].w)
                uint64_t rcx_67 = zx.q(r13_4) & 3
                uint64_t rcx_68 = rcx_67 - (zx.q(rcx_67.d) u>> 1)
                int64_t rax_83 = (rcx_68 u>> 2 & 0x3333333333333333) + (rcx_68 & 0x3333333333333333)
                uint64_t rcx_75 =
                    ((((rax_83 u>> 4) + rax_83) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                int64_t var_258
                
                if (rcx_75.d u< 1)
                    var_258 = 0x98
                    int64_t var_250_2 = 0
                else
                    int64_t* rax_84 = rdi_4[2]
                    int64_t r12_6 = sx.q(rdx_23)
                    int64_t* rsi_5 = rdi_4
                    
                    if (rax_84 != 0)
                        rsi_5 = rax_84
                    
                    void* rcx_77 = &rdi_4[4]
                    rdx_23 = var_2f8_1 + sub_14126c010((rcx_75 << 3) + -fffffffffffffff8 + rsi_5)
                    var_2f8_1 = rdx_23
                    
                    if (*(rdi_4 + 0x72) u> 0x50)
                        rcx_77 = *rcx_77
                    
                    r15_3 = var_2d0_1
                    var_258 = *(rsi_5 + (rcx_75 << 3) + -fffffffffffffff8)
                    void* var_250_1 = rcx_77 + r12_6
                
                uint64_t r13_5 = zx.q(r13_4) & 7
                int64_t r13_6 = r13_5 - (zx.q(r13_5.d) u>> 1 & 0x5555555555555555)
                int64_t rax_94 = (r13_6 u>> 2 & 0x3333333333333333) + (r13_6 & 0x3333333333333333)
                uint64_t rcx_83 =
                    ((((rax_94 u>> 4) + rax_94) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                int64_t var_248
                
                if (rcx_83.d u< 1)
                    r13_9 = var_2f8_1
                    var_248 = 0x98
                    int64_t var_240_2 = 0
                else
                    int64_t* rax_95 = rdi_4[2]
                    int64_t* rsi_6 = rdi_4
                    
                    if (rax_95 != 0)
                        rsi_6 = rax_95
                    
                    void* rcx_85 = &rdi_4[4]
                    r13_9 = var_2f8_1 + sub_14126c010((rcx_83 << 3) + -fffffffffffffff8 + rsi_6)
                    var_2f8_1 = r13_9
                    
                    if (*(rdi_4 + 0x72) u> 0x50)
                        rcx_85 = *rcx_85
                    
                    r15_3 = var_2d0_1
                    var_248 = *(rsi_6 + (rcx_83 << 3) + -fffffffffffffff8)
                    void* var_240_1 = rcx_85 + sx.q(rdx_23)
                
                rsi_7 = arg8
                void* var_308_1 = &rdi_4[0xf]
                int64_t* var_310_1 = &var_258
                int64_t* var_318_2 = arg13
                void* var_320_2 = r15_3
                void* var_328_7 = arg2
                var_338.d = *(arg1 + 0x10)
                var_340.b = 0
                sub_141455490(rsi_7[2], *(rsi_7[3] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, 
                    rcx_3.d, var_340, var_338, arg4)
                var_308 = &rdi_4[0xf]
                var_310 = &var_248
                int64_t* var_318_3 = arg13
                void* var_320_3 = r15_3
                void* var_328_8 = arg2
                var_338.d = *(arg1 + 0x10)
                var_340.b = 0
                sub_141455490(rsi_7[4], *(rsi_7[5] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, 
                    rcx_3.d, var_340, var_338, arg4)
            
            void* r12_9 = rsi_7[6]
            void* rsi_9
            
            if (r12_9 == 0)
                rsi_9 = &rdi_4[0xf]
            else
                uint64_t rcx_95 = zx.q(rdi_4[0xe].w) & 0xf
                int64_t rcx_96 = rcx_95 - (zx.q(rcx_95.d) u>> 1 & 0x5555555555555555)
                int64_t rax_109 =
                    (rcx_96 u>> 2 & 0x3333333333333333) + (rcx_96 & 0x3333333333333333)
                uint64_t rcx_103 =
                    ((((rax_109 u>> 4) + rax_109) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                int64_t var_238
                
                if (rcx_103.d u< 1)
                    var_238 = 0x98
                    int64_t var_230_2 = 0
                else
                    int64_t* rax_110 = rdi_4[2]
                    int64_t* rsi_8 = rdi_4
                    
                    if (rax_110 != 0)
                        rsi_8 = rax_110
                    
                    int32_t var_2f8_2 =
                        var_2f8_1 + sub_14126c010((rcx_103 << 3) + -fffffffffffffff8 + rsi_8)
                    void* rcx_105 = &rdi_4[4]
                    
                    if (*(rdi_4 + 0x72) u> 0x50)
                        rcx_105 = *rcx_105
                    
                    r15_3 = var_2d0_1
                    rsi_7 = arg8
                    var_238 = *(rsi_8 + (rcx_103 << 3) + -fffffffffffffff8)
                    int64_t rax_113 = sx.q(r13_9)
                    r13_9 = var_2f8_2
                    void* var_230_1 = rax_113 + rcx_105
                
                rsi_9 = &rdi_4[0xf]
                var_308 = rsi_9
                var_310 = &var_238
                int64_t* var_318_4 = arg13
                void* var_320_4 = r15_3
                void* var_328_9 = arg2
                var_338.d = *(arg1 + 0x10)
                var_340.b = 0
                sub_141455490(r12_9, *(rsi_7[7] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, rcx_3.d, 
                    var_340, var_338, arg4)
            
            void* const r10_1 = var_2c8
            
            if (r10_1 == 0)
                r13_3 = arg8
                r12_5 = arg2
            else
                uint64_t rcx_111 = zx.q(rdi_4[0xe].w) & 0x1f
                int64_t rcx_112 = rcx_111 - (zx.q(rcx_111.d) u>> 1 & 0x5555555555555555)
                int64_t rax_123 =
                    (rcx_112 u>> 2 & 0x3333333333333333) + (rcx_112 & 0x3333333333333333)
                uint64_t rdx_38 =
                    ((((rax_123 u>> 4) + rax_123) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                int64_t var_228
                
                if (rdx_38.d u< 1)
                    var_228 = 0x98
                    int64_t var_220_2 = 0
                else
                    void* r8_18 = &rdi_4[4]
                    
                    if (*(rdi_4 + 0x72) u> 0x50)
                        r8_18 = *r8_18
                    
                    int64_t* rax_124 = rdi_4[2]
                    int64_t* rcx_114 = rdi_4
                    
                    if (rax_124 != 0)
                        rcx_114 = rax_124
                    
                    var_228 = rcx_114[rdx_38 - 1]
                    void* var_220_1 = sx.q(r13_9) + r8_18
                
                r13_3 = arg8
                r12_5 = arg2
                var_308 = rsi_9
                var_310 = &var_228
                int64_t* var_318_5 = arg13
                void* var_320_5 = r15_3
                void* var_328_10 = r12_5
                var_338.d = *(arg1 + 0x10)
                var_340.b = 0
                sub_141455490(r10_1, *(r13_3[9] + 0x20), *(arg1 + 8), (*(arg1 + 0x18)).b, rcx_3.d, 
                    var_340, var_338, arg4)
            
            int32_t rsi_10 = 0
            
            if (sub_1411a4ac0(data_143f0f1a0, *(arg1 + 0x10)) != 0)
                int32_t rcx_119 = *(r15_3 + 0x3c)
                int32_t rax_133 = rcx_119 << 0x1d s>> 0x1d
                
                if (rax_133 == 0)
                    rsi_10 = *(var_278 + 0x110)
                else if (rax_133 == 1)
                    rsi_10 = (rcx_119 u>> 3 & 0xffffff) + *(*(arg1 + 8) + 0xdc0)
            
            int32_t rdx_42
            
            if (var_278 == 0)
                rdx_42 = -1
            else
                rdx_42 = *(var_278 + 0x110)
            
            int128_t zmm0_1 = *(r13_3 + 0x40)
            int128_t zmm1_1 = *(r13_3 + 0x50)
            int64_t* rcx_120 = *(arg1 + 0x20)
            var_218 = *r13_3
            int64_t var_210_1 = r13_3[1]
            int64_t var_208_1 = r13_3[2]
            int64_t var_200_1 = r13_3[3]
            int64_t var_1f8_1 = r13_3[4]
            int64_t var_1f0_1 = r13_3[5]
            int128_t var_1d8_1 = zmm0_1
            int64_t var_1e8_1 = r13_3[6]
            var_338.d = arg10
            var_340.d = arg9
            int64_t var_1e0_1 = r13_3[7]
            int128_t var_1c8_1 = zmm1_1
            int128_t var_1b8_1 = *(r13_3 + 0x60)
            uint64_t* var_348
            var_348.d = rdx_42
            (*(*rcx_120 + 0x10))(rcx_120, r12_5, zx.q(var_2b4), zx.q(rsi_10), var_348, var_340, 
                var_338, arg11, &var_1a8, &var_218, rdi_4, var_310, var_308)
            result = result_1
            rcx_54 = var_2b4
            rdx_21 = var_2b0
            r8_13 = var_288.d
            r9_7 = arg3
        
        rcx_54 += 1
        result = rol.q(result, 1)
        rdx_21 += 0x68
        var_2b4 = rcx_54
        result_1 = result
        var_2b0 = rdx_21
    while (rcx_54 s< r8_13)

int128_t var_188
int64_t* rcx_121 = var_188:8.q

if (rcx_121 != 0)
    result = sub_1419d6470(rcx_121)

int64_t* rcx_122 = var_188.q

if (rcx_122 != 0)
    result = sub_1419d6470(rcx_122)

int128_t var_198
int64_t* rcx_123 = var_198:8.q

if (rcx_123 != 0)
    result = sub_1419d6470(rcx_123)

int64_t* rcx_124 = var_198.q

if (rcx_124 != 0)
    result = sub_1419d6470(rcx_124)

int64_t* rcx_125 = var_1a8:8.q

if (rcx_125 != 0)
    result = sub_1419d6470(rcx_125)

if (var_88 != 0)
    result = sub_140a74f90(var_88)

if (var_c0:2.w u> 0x50)
    result = j_sub_140a74f90(var_110)

var_c0:2.w = 0
var_110 = nullptr

if (var_120 != 0)
    result = sub_140a74f90(var_120)

__security_check_cookie(rax_1 ^ &var_368)
return result
