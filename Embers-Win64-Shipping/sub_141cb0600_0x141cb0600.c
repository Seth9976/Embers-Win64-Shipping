// 函数: sub_141cb0600
// 地址: 0x141cb0600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int64_t* r12 = arg1
char result
int32_t var_474
int32_t var_470
int32_t var_46c
int32_t var_468
void* var_460
int32_t var_458
int32_t var_448
int64_t var_444
int32_t var_438
void* var_430
int32_t var_428
uint128_t var_420
int32_t var_3d8
int32_t var_3d4
int32_t var_3d0
int32_t var_3cc
int32_t var_3c8
int32_t var_3c4
int64_t var_3c0
void** var_3a0
int32_t var_368
int32_t var_358
int64_t* var_350
void** var_348
void** const var_288
int64_t* var_280
uint8_t var_25f
int64_t var_168
int64_t var_118

if ((arg2[5].b & 2) == 0)
    var_438 = 6
    int512_t zmm1_3 = sub_141cb4090(arg2, &var_438, arg4)
    
    if (var_438 s>= 4)
        memset(&var_288, 0, 0x90)
        sub_140b4c2a0(&var_288)
        int64_t* var_1f8_2 = arg2
        var_288 = &data_14320fe98
        int64_t* var_1f0_1
        __builtin_memset(&var_1f0_1, 0, 0x18)
        sub_140b55290(&var_288, 1)
        char rax_176
        int512_t zmm1_4
        rax_176, zmm1_4 = sub_141cb3870(&var_288, zmm1_3)
        uint8_t rcx_162 = var_25f
        
        if (rax_176 == 0)
            rcx_162 |= 1
            int64_t* var_1f8_3 = &data_143f354a0
            var_25f = rcx_162
        
        var_468 = 0
        int32_t* r8_31 = *var_280
        
        if (&r8_31[1] u> var_280[1])
            int32_t* rdx_106 = &var_468
            int64_t* rcx_163 = &var_288
            
            if ((rcx_162 u>> 5 & 1) != 0)
                sub_140b54070(rcx_163, rdx_106, zmm1_4)
            else
                var_288[0x2a](rcx_163, rdx_106, 4)
        else
            var_468 = *r8_31
            *var_280 += 4
        
        int64_t rdi_16 = sx.q(var_468)
        int64_t rax_180 = 0x50 * rdi_16
        
        if (mulu.dp.q(0x50, rdi_16) u>> 0x40 != zx.o(0))
            rax_180 = -1
        
        int64_t rax_181 = rax_180 + 8
        
        if (rax_180 u>= -8)
            rax_181 = -1
        
        int64_t* rax_182 = j_sub_140a82f30(rax_181)
        void* r15_11
        
        if (rax_182 == 0)
            r15_11 = nullptr
        else
            r15_11 = &rax_182[1]
            *rax_182 = rdi_16
            `vector constructor iterator'(r15_11, 0x50, rdi_16, sub_141c918f0)
        
        int64_t rsi_13 = sx.q(r12[0x47].d)
        int32_t rax_183 = (rsi_13 + 1).d
        r12[0x47].d = rax_183
        
        if (rax_183 s> *(r12 + 0x23c))
            sub_1405a4d70(&r12[0x46])
        
        *(r12[0x46] + (rsi_13 << 3)) = r15_11
        int32_t rsi_14 = 0
        
        if (var_468 s> 0)
            do
                int64_t* rdi_19 = sx.q(rsi_14) * 0x50 + r15_11
                sub_141cb31a0(rdi_19, &var_288, zmm1_4)
                zmm1_4 = sub_141c97c90(r12, rdi_19)
                rsi_14 += 1
            while (rsi_14 s< var_468)
        
        var_474 = 0
        int32_t* rdx_110 = *var_280
        
        if (&rdx_110[1] u> var_280[1])
            int32_t* rdx_111 = &var_474
            void** const* rcx_171 = &var_288
            
            if ((var_25f u>> 5 & 1) != 0)
                sub_140b54070(rcx_171, rdx_111, zmm1_4)
            else
                var_288[0x2a](rcx_171, rdx_111, 4)
        else
            var_474 = *rdx_110
            *var_280 += 4
        
        var_430 = nullptr
        int64_t rdi_20
        
        if (*(arg3 + 1) == 0)
            rdi_20 = zx.q(var_474)
        else
            rdi_20 = sx.q(var_474)
            
            if (rdi_20.d s> 0)
                int64_t rax_190 = 0x80 * rdi_20
                
                if (mulu.dp.q(0x80, rdi_20) u>> 0x40 != zx.o(0))
                    rax_190 = -1
                
                int64_t rax_191 = rax_190 + 8
                
                if (rax_190 u>= -8)
                    rax_191 = -1
                
                int64_t* rax_192 = j_sub_140a82f30(rax_191)
                void* rdi_21
                
                if (rax_192 == 0)
                    rdi_21 = nullptr
                else
                    *rax_192 = rdi_20
                    rdi_21 = &rax_192[1]
                    `vector constructor iterator'(rdi_21, 0x80, rdi_20, sub_141c92fc0)
                
                var_430 = rdi_21
                int64_t r15_12 = sx.q(*(arg1 + 0x248))
                int32_t rax_193 = (r15_12 + 1).d
                *(arg1 + 0x248) = rax_193
                
                if (rax_193 s> *(arg1 + 0x24c))
                    sub_1405a4d70(arg1 + 0x240)
                    rdi_21 = var_430
                
                *(*(arg1 + 0x240) + (r15_12 << 3)) = rdi_21
                rdi_20 = zx.q(var_474)
                
                if (rdi_20.d s> *(arg1 + 0x198) - *(arg1 + 0x1c4))
                    sub_141cabaf0(arg1 + 0x190, rdi_20.d)
                    int32_t rdx_115
                    
                    if (rdi_20.d u< 4)
                        rdx_115 = 1
                    else
                        uint32_t rdi_22 = rdi_20.d u>> 1
                        uint64_t rflags_7
                        int32_t temp0_10
                        temp0_10, rflags_7 = _bit_scan_reverse(rdi_22 + 8)
                        int32_t rcx_177
                        
                        if (rdi_22 == 0xfffffff8)
                            rcx_177 = 0x20
                        else
                            rcx_177 = 0x1f - temp0_10
                        
                        int32_t rcx_179 = rcx_177 << 0x1a s>> 0x1f
                        uint64_t rflags_8
                        char temp0_11
                        temp0_11, rflags_8 = _bit_scan_reverse(rdi_22 + 7)
                        char rdx_114
                        
                        if (rcx_179 == 0)
                            rdx_114 = 0x20
                        else
                            rdx_114 = 0x1f - temp0_11
                        
                        rdx_115 = 1 << ((not.d(rcx_179)).b & (0x20 - rdx_114))
                    
                    int32_t rax_199 = *(arg1 + 0x1d8)
                    
                    if (rax_199 == 0 || rax_199 s< rdx_115)
                        *(arg1 + 0x1d8) = rdx_115
                        zmm1_4 = sub_141ca9710(arg1 + 0x190)
                    
                    rdi_20 = zx.q(var_474)
        
        __builtin_memset(&var_168, 0, 0x2c)
        void* rdi_24 = arg3
        int32_t rsi_18 = 0
        int32_t var_13c_2 = 0x80
        int32_t var_138_2 = 0xffffffff
        int32_t var_134_2 = 0
        int64_t var_128_2 = 0
        int32_t var_120_2 = 0
        var_46c = 0
        
        if (rdi_20.d s> 0)
            do
                __builtin_memset(&var_458, 0, 0x20)
                sub_141c95570(&var_288, &var_458)
                sub_141453140(&var_168, 0)
                var_428 = 2
                void* rax_200
                int512_t zmm1_5
                rax_200, zmm1_5 = sub_141c90540(&var_168, 2, &var_428)
                int32_t* rax_201 = *var_280
                
                if (&rax_201[1] u> var_280[1])
                    int64_t* rcx_188 = &var_288
                    
                    if ((var_25f u>> 5 & 1) != 0)
                        sub_140b54070(rcx_188, rax_200, zmm1_5)
                    else
                        var_288[0x2a](rcx_188, rax_200, 4)
                else
                    *rax_200 = *rax_201
                    *var_280 += 4
                
                var_428 = 1
                void* rax_205
                int512_t zmm1_6
                rax_205, zmm1_6 = sub_141c90540(&var_168, 1, &var_428)
                int32_t* rax_206 = *var_280
                
                if (&rax_206[1] u> var_280[1])
                    int64_t* rcx_192 = &var_288
                    
                    if ((var_25f u>> 5 & 1) != 0)
                        sub_140b54070(rcx_192, rax_205, zmm1_6)
                    else
                        var_288[0x2a](rcx_192, rax_205, 4)
                else
                    *rax_205 = *rax_206
                    *var_280 += 4
                
                var_428 = 4
                void* rax_210
                int512_t zmm1_7
                rax_210, zmm1_7 = sub_141c90540(&var_168, 4, &var_428)
                int32_t* rax_211 = *var_280
                
                if (&rax_211[1] u> var_280[1])
                    int64_t* rcx_196 = &var_288
                    
                    if ((var_25f u>> 5 & 1) != 0)
                        sub_140b54070(rcx_196, rax_210, zmm1_7)
                    else
                        var_288[0x2a](rcx_196, rax_210, 4)
                else
                    *rax_210 = *rax_211
                    *var_280 += 4
                
                var_428 = 8
                int32_t* rax_215
                int512_t zmm1_8
                rax_215, zmm1_8 = sub_141c90540(&var_168, 8, &var_428)
                int32_t* rax_216 = *var_280
                
                if (&rax_216[1] u> var_280[1])
                    void** const* rcx_200 = &var_288
                    
                    if ((var_25f u>> 5 & 1) != 0)
                        sub_140b54070(rcx_200, rax_215, zmm1_8)
                    else
                        var_288[0x2a](rcx_200, rax_215, 4)
                else
                    *rax_215 = *rax_216
                    *var_280 += 4
                
                int64_t* rcx_201 = &var_168
                
                if (var_438 s>= 5)
                    var_428 = 0x10
                    int32_t* rax_221
                    int512_t zmm1_9
                    rax_221, zmm1_9 = sub_141c90540(rcx_201, 0x10, &var_428)
                    int32_t* r8_41 = *var_280
                    
                    if (&r8_41[1] u> var_280[1])
                        void** const* rcx_206 = &var_288
                        
                        if ((var_25f & 0x20) != 0)
                            sub_140b54070(rcx_206, rax_221, zmm1_9)
                        else
                            var_288[0x2a](rcx_206, rax_221, 4)
                    else
                        *rax_221 = *r8_41
                        *var_280 += 4
                else
                    sub_14090a150(rcx_201, &var_358)
                    int32_t rax_220 = var_358
                    char* var_480_7 = nullptr
                    *var_350 = 0x10
                    var_350[1].d = 0xffffffff
                    sub_140a23530(&var_168, &var_348, *var_350, var_350, rax_220, var_480_7)
                
                int32_t* rax_224
                rax_224, zmm1_4 = sub_141c90540(&var_168, 0, &data_14320fe24)
                int32_t* r8_42 = *var_280
                
                if (&r8_42[1] u> var_280[1])
                    void** const* rcx_210 = &var_288
                    
                    if ((var_25f & 0x20) != 0)
                        sub_140b54070(rcx_210, rax_224, zmm1_4)
                    else
                        var_288[0x2a](rcx_210, rax_224, 4)
                else
                    *rax_224 = *r8_42
                    *var_280 += 4
                
                char r8_44 = *(rdi_24 + 1)
                
                if (r8_44 == 0)
                    var_460 = nullptr
                else
                    int64_t rdx_132 = sx.q(rsi_18) << 7
                    void* rdx_133 = rdx_132 + var_430
                    bool cond:28_1 = rdx_132 == neg.q(var_430)
                    var_460 = rdx_133
                    
                    if (not(cond:28_1))
                        *rdx_133 = var_458.q
                        int64_t var_450_3
                        *(rdx_133 + 8) = var_450_3
                        *(rdx_133 + 0x10) = var_448.q
                        *(rdx_133 + 0x18) = var_444
                        sub_14090a310(&var_168, &var_3d8, 0)
                        int64_t rax_231 = sx.q(var_3d8)
                        int64_t r12_7 = var_168
                        
                        if (rax_231.d == 0xffffffff)
                            var_428.q = 0
                        else
                            var_428.q = (rax_231 << 4) + r12_7
                        
                        sub_14090a310(&var_168, &var_3d4, 0x10)
                        int64_t rax_232 = sx.q(var_3d4)
                        void* const r13_7
                        
                        if (rax_232.d == 0xffffffff)
                            r13_7 = nullptr
                        else
                            r13_7 = (rax_232 << 4) + r12_7
                        
                        sub_14090a310(&var_168, &var_3d0, 8)
                        int64_t rax_233 = sx.q(var_3d0)
                        void* const r15_15
                        
                        if (rax_233.d == 0xffffffff)
                            r15_15 = nullptr
                        else
                            r15_15 = (rax_233 << 4) + r12_7
                        
                        sub_14090a310(&var_168, &var_3cc, 4)
                        int64_t rax_234 = sx.q(var_3cc)
                        void* const rsi_21
                        
                        if (rax_234.d == 0xffffffff)
                            rsi_21 = nullptr
                        else
                            rsi_21 = (rax_234 << 4) + r12_7
                        
                        sub_14090a310(&var_168, &var_3c8, 1)
                        int64_t rax_235 = sx.q(var_3c8)
                        void* const rdi_30
                        
                        if (rax_235.d == 0xffffffff)
                            rdi_30 = nullptr
                        else
                            rdi_30 = (rax_235 << 4) + r12_7
                        
                        sub_14090a310(&var_168, &var_3c4, 2)
                        int64_t rax_236 = sx.q(var_3c4)
                        void* const rcx_219
                        
                        if (rax_236.d == 0xffffffff)
                            rcx_219 = nullptr
                        else
                            rcx_219 = (rax_236 << 4) + r12_7
                        
                        int32_t r12_8 = *(r15_15 + 4)
                        int32_t r15_16 = *(rsi_21 + 4)
                        int32_t rsi_22 = *(rdi_30 + 4)
                        void* rdi_31 = var_460
                        int32_t r13_8 = *(r13_7 + 4)
                        var_428 = *(var_428.q + 4)
                        int32_t rdx_141 = *(rcx_219 + 4)
                        
                        if (rdx_141 s> *(rdi_31 + 0x2c))
                            sub_1405c5570(rdi_31 + 0x20, rdx_141)
                        
                        if (rsi_22 s> *(rdi_31 + 0x3c))
                            sub_1405c5570(rdi_31 + 0x30, rsi_22)
                        
                        if (r15_16 s> *(rdi_31 + 0x4c))
                            sub_1405c5570(rdi_31 + 0x40, r15_16)
                        
                        if (r12_8 s> *(rdi_31 + 0x5c))
                            sub_1405c5570(rdi_31 + 0x50, r12_8)
                        
                        if (r13_8 s> *(rdi_31 + 0x6c))
                            sub_1405c5570(rdi_31 + 0x60, r13_8)
                        
                        int32_t rax_238 = var_428
                        
                        if (rax_238 s> *(rdi_31 + 0x7c))
                            sub_1405c5570(rdi_31 + 0x70, rax_238)
                        
                        var_368.q = var_460
                        void** var_360_1 = &var_460
                        zmm1_4 = sub_141c8ff10(arg1 + 0x190, &var_3a0, &var_368, nullptr)
                        rdi_24 = arg3
                        rsi_18 = var_46c
                        r8_44 = *(rdi_24 + 1)
                
                var_420.q = &var_168
                var_420:8.q = &var_288
                int128_t var_410
                var_410.q = &var_474
                var_410:8.q = &var_460
                void** var_400_5 = &var_430
                sub_141c96830(&var_420, 2, r8_44, zmm1_4)
                sub_141c96830(&var_420, 1, *(rdi_24 + 1), zmm1_4)
                char r8_46
                
                if (*(rdi_24 + 1) == 0 || *(rdi_24 + 2) == 0)
                    r8_46 = 0
                else
                    r8_46 = 1
                
                sub_141c96830(&var_420, 4, r8_46, zmm1_4)
                char r8_47
                
                if (*(rdi_24 + 1) == 0 || *(rdi_24 + 3) == 0)
                    r8_47 = 0
                else
                    r8_47 = 1
                
                sub_141c96830(&var_420, 8, r8_47, zmm1_4)
                char r8_48
                
                if (*(rdi_24 + 1) == 0 || *(rdi_24 + 3) == 0)
                    r8_48 = 0
                else
                    r8_48 = 1
                
                sub_141c96830(&var_420, 0x10, r8_48, zmm1_4)
                sub_141c96830(&var_420, 0, *(rdi_24 + 1), zmm1_4)
                rsi_18 += 1
                var_46c = rsi_18
            while (rsi_18 s< var_474)
        
        var_470 = 0
        int32_t* rdx_148 = *var_280
        
        if (&rdx_148[1] u> var_280[1])
            int32_t* rdx_149 = &var_470
            void** const* rcx_235 = &var_288
            
            if ((var_25f & 0x20) != 0)
                sub_140b54070(rcx_235, rdx_149, zmm1_4)
            else
                var_288[0x2a](rcx_235, rdx_149, 4)
        else
            var_470 = *rdx_148
            *var_280 += 4
        
        void* const r13_9 = nullptr
        int64_t rdi_32
        
        if (*(rdi_24 + 4) == 0)
            rdi_32 = zx.q(var_470)
        else
            rdi_32 = sx.q(var_470)
            
            if (rdi_32.d s> 0)
                int64_t rax_243 = 0x30 * rdi_32
                
                if (mulu.dp.q(0x30, rdi_32) u>> 0x40 != zx.o(0))
                    rax_243 = -1
                
                void* rax_244 = j_sub_140a82f30(rax_243)
                r13_9 = rax_244
                
                if (rax_244 == 0)
                    r13_9 = nullptr
                else
                    `vector constructor iterator'(rax_244, 0x30, rdi_32, sub_140dda8f0)
                
                int64_t rsi_23 = sx.q(*(arg1 + 0x258))
                int32_t rax_245 = (rsi_23 + 1).d
                *(arg1 + 0x258) = rax_245
                
                if (rax_245 s> *(arg1 + 0x25c))
                    sub_1405a4d70(arg1 + 0x250)
                
                *(*(arg1 + 0x250) + (rsi_23 << 3)) = r13_9
                rdi_32 = zx.q(var_470)
                
                if (rdi_32.d s> *(arg1 + 0x1e8) - *(arg1 + 0x214))
                    sub_1409d93a0(arg1 + 0x1e0, rdi_32.d)
                    int32_t rax_251
                    
                    if (rdi_32.d u< 4)
                        rax_251 = 1
                    else
                        uint32_t rdi_33 = rdi_32.d u>> 1
                        uint64_t rflags_9
                        int32_t temp0_12
                        temp0_12, rflags_9 = _bit_scan_reverse(rdi_33 + 8)
                        int32_t rcx_240
                        
                        if (rdi_33 == 0xfffffff8)
                            rcx_240 = 0x20
                        else
                            rcx_240 = 0x1f - temp0_12
                        
                        int32_t rcx_242 = rcx_240 << 0x1a s>> 0x1f
                        uint64_t rflags_10
                        char temp0_13
                        temp0_13, rflags_10 = _bit_scan_reverse(rdi_33 + 7)
                        
                        if (rcx_242 == 0)
                            rax_251 = 1
                        else
                            rax_251 = 1 << ((not.d(rcx_242)).b & (0x20 - (0x1f - temp0_13)))
                    
                    int32_t rcx_245 = *(arg1 + 0x228)
                    
                    if (rcx_245 == 0 || rcx_245 s< rax_251)
                        *(arg1 + 0x228) = rax_251
                        zmm1_4 = sub_1405c1850(arg1 + 0x1e0)
                    
                    rdi_32 = zx.q(var_470)
        
        int32_t r15_18 = 0
        
        if (rdi_32.d s> 0)
            bool* rdi_35 = r13_9 + 0x18
            
            do
                void** const rax_252 = var_288
                var_460 = nullptr
                rax_252[0x28](&var_288, &var_460)
                
                if (*(arg3 + 4) == 0)
                    __builtin_memset(&var_118, 0, 0x19)
                    sub_14090dc80(&var_288, &var_118, zmm1_4)
                    int64_t var_110
                    sub_1409ac860(&var_288, &var_110, zmm1_4)
                    int64_t rdx_167 = *var_280
                    bool rax_265
                    
                    if (rdx_167 + 4 u> var_280[1])
                        char var_100_1
                        int32_t rax_266
                        rax_266.b = var_100_1 != 0
                        var_46c = rax_266
                        var_288[0x2a](&var_288, &var_46c, 4)
                        rax_265 = var_46c != 0
                        bool var_100_3 = rax_265
                    else
                        bool var_100_2 = *rdx_167 != 0
                        *var_280 += 4
                        rax_265 = var_100_2
                    
                    void var_ff
                    
                    if (rax_265 != 0)
                        var_288[0x2a](&var_288, &var_ff, 0x10)
                else
                    if (var_438 s>= 6)
                        sub_14090dc80(&var_288, &rdi_35[-0x18], zmm1_4)
                        sub_1409ac860(&var_288, &rdi_35[-0x10], zmm1_4)
                        int32_t* rdx_161 = *var_280
                        bool rax_260
                        
                        if (&rdx_161[1] u> var_280[1])
                            int32_t rax_261
                            rax_261.b = *rdi_35 != 0
                            var_46c = rax_261
                            var_288[0x2a](&var_288, &var_46c, 4)
                            rax_260 = var_46c != 0
                            *rdi_35 = rax_260
                        else
                            void* rax_258
                            rax_258.b = *rdx_161 != 0
                            *rdi_35 = rax_258.b
                            *var_280 += 4
                            rax_260 = *rdi_35
                        
                        if (rax_260 != 0)
                            var_288[0x2a](&var_288, &rdi_35[1], 0x10)
                    else
                        int64_t* rdx_154 = *var_280
                        
                        if (&rdx_154[1] u> var_280[1])
                            int64_t* rcx_250 = &var_288
                            
                            if ((var_25f & 0x20) != 0)
                                sub_140b540d0(rcx_250, &rdi_35[-0x18], zmm1_4)
                                sub_1409ac860(&var_288, &rdi_35[-0x10], zmm1_4)
                            else
                                var_288[0x2a](rcx_250, &rdi_35[-0x18], 8)
                                sub_1409ac860(&var_288, &rdi_35[-0x10], zmm1_4)
                        else
                            *(rdi_35 - 0x18) = *rdx_154
                            *var_280 += 8
                            sub_1409ac860(&var_288, &rdi_35[-0x10], zmm1_4)
                    
                    var_3c0 = &rdi_35[-0x18]
                    zmm1_4 = sub_141c8f780(arg1 + 0x1e0, &var_460, &var_3c0)
                
                r15_18 += 1
                rdi_35 = &rdi_35[0x30]
            while (r15_18 s< var_470)
        
        sub_1405ae180(&var_168)
        int64_t* rcx_266 = var_1f0_1
        var_288 = &data_14320fe98
        
        if (rcx_266 != 0)
            (**rcx_266)(rcx_266, 1)
        
        int64_t var_1f0_2 = 0
        int64_t var_1e8
        
        if (var_1e8 != 0)
            sub_140a74f90(var_1e8)
        
        sub_140b4cb40(&var_288)
        result = not.b(*(arg2 + 0x29)) & 1
    else
        result = 0
else
    var_46c = 6
    int512_t zmm1 = sub_141cb4090(arg2, &var_46c, arg4)
    memset(&var_288, 0, 0x90)
    sub_140b4c2a0(&var_288)
    var_288 = &data_1432100a0
    int64_t var_1f0
    __builtin_memset(&var_1f0, 0, 0x54)
    int32_t var_194_1 = 0
    int64_t var_188_1 = 0
    int32_t var_180_1 = 0
    int32_t var_19c_1 = 0x80
    int32_t var_198_1 = 0xffffffff
    sub_140b552b0(&var_288, 1)
    int64_t rax_3
    
    if (arg2 == 0)
        rax_3 = 0
    else
        rax_3 = (*(*arg2 + 0x20))(arg2)
    
    int64_t var_178_1 = rax_3
    var_430 = nullptr
    int64_t* rdx_2 = *var_280
    
    if (&rdx_2[1] u> var_280[1])
        void** rdx_3 = &var_430
        int64_t* rcx_6 = &var_288
        
        if ((var_25f u>> 5 & 1) != 0)
            sub_140b540d0(rcx_6, rdx_3, zmm1)
        else
            var_288[0x2a](rcx_6, rdx_3, 8)
    else
        var_430 = *rdx_2
        *var_280 += 8
    
    var_438 = r12[1].d - *(r12 + 0x34)
    int32_t* rdx_4 = *var_280
    
    if (&rdx_4[1] u> var_280[1])
        int32_t* rdx_5 = &var_438
        int64_t* rcx_8 = &var_288
        
        if ((var_25f u>> 5 & 1) != 0)
            sub_140b54070(rcx_8, rdx_5, zmm1)
        else
            var_288[0x2a](rcx_8, rdx_5, 4)
    else
        var_438 = *rdx_4
        *var_280 += 4
    
    int32_t var_b8_1 = 0xffffffff
    int32_t rdi_2 = r12[1].d - *(r12 + 0x34)
    void** var_3b0 = nullptr
    var_46c = 0
    int32_t var_3a4_1 = 0
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x2c)
    int32_t var_bc_1 = 0x80
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    
    if (rdi_2 s> 0)
        sub_141846970(&var_e8, rdi_2)
        int32_t rdx_8
        
        if (rdi_2 u< 4)
            rdx_8 = 1
        else
            uint32_t rdi_3 = rdi_2 u>> 1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rdi_3 + 8)
            int32_t rcx_10
            
            if (rdi_3 == 0xfffffff8)
                rcx_10 = 0x20
            else
                rcx_10 = 0x1f - temp0_1
            
            int32_t rcx_12 = rcx_10 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rdi_3 + 7)
            char rdx_7
            
            if (rcx_12 == 0)
                rdx_7 = 0x20
            else
                rdx_7 = 0x1f - temp0_2
            
            rdx_8 = 1 << ((not.d(rcx_12)).b & (0x20 - rdx_7))
        
        if (var_a0_1 == 0 || var_a0_1 s< rdx_8)
            int32_t var_a0_2 = rdx_8
            sub_141ca9500(&var_e8)
    
    int32_t r11_1 = r12[5].d
    var_458 = 0
    int32_t var_454_1 = 1
    int32_t rcx_16 = 0
    void* var_450 = &r12[2]
    int32_t r8_1 = 0
    var_448 = 0xffffffff
    var_444 = 0
    
    if (r11_1 != 0)
        void* rax_18 = r12[4]
        void* r9_1 = &r12[2]
        
        if (rax_18 != 0)
            r9_1 = rax_18
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *r9_1
        
        if (rdx_11 != 0)
        label_141cb095b:
            int32_t rax_25 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_3
            int32_t temp0_3
            temp0_3, rflags_3 = _bit_scan_reverse(rax_25)
            var_454_1 = rax_25
            int32_t rax_26
            
            if (rax_25 == 0)
                rax_26 = 0x20
            else
                rax_26 = 0x1f - temp0_3
            
            var_444.d = r8_1 - rax_26 + 0x1f
            
            if (r8_1 - rax_26 + 0x1f s> r11_1)
                var_444.d = r11_1
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_16)
                r8_1 += 0x20
                rcx_16 += 1
                var_444:4.d = r8_1
                var_458 = rcx_16
                
                if (rdx_12.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                var_448 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141cb095b
            
            var_444.d = r11_1
    
    double zmm2_1[0x2] = var_448.o
    uint128_t zmm0_1 = var_458.o
    void* var_398 = arg1
    double var_380_1[0x2] = zmm2_1
    int32_t rdx_13 = *(arg1 + 0x28)
    uint128_t var_390_1 = zmm0_1
    zmm0_1 = var_398.o
    int32_t r8_4 = rdx_13 s>> 5
    zmm1.o = var_390_1
    int32_t r9_3 = rdx_13 & 0xffffffe0
    int32_t r12_1 = 0xffffffff << (rdx_13 & 0x1f).b
    int64_t var_400_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    var_448 = r12_1
    var_444.d = rdx_13
    var_420 = zmm0_1
    uint128_t var_410_1 = zmm1.o
    
    if (rdx_13 != r11_1)
        void* rax_31 = r12[4]
        void* r10_1 = &r12[2]
        
        if (rax_31 != 0)
            r10_1 = rax_31
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r11_1 - 1)
        int32_t rdx_17 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_17 != 0)
        label_141cb0a4a:
            int32_t rax_37 = ((rdx_17 - 1) & rdx_17) ^ rdx_17
            uint64_t rflags_4
            int32_t temp0_5
            temp0_5, rflags_4 = _bit_scan_reverse(rax_37)
            int32_t rax_38
            
            if (rax_37 == 0)
                rax_38 = 0x20
            else
                rax_38 = 0x1f - temp0_5
            
            var_444.d = r9_3 - rax_38 + 0x1f
            
            if (r9_3 - rax_38 + 0x1f s> r11_1)
                var_444.d = r11_1
        else
            while (true)
                int64_t rcx_20 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_20.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    var_444.d = r11_1
                    break
                
                rdx_17 = *(r10_1 + (rcx_20 << 2) + 4)
                var_448 = 0xffffffff
                
                if (rdx_17 != 0)
                    goto label_141cb0a4a
    
    uint32_t rsi_3 = (var_448.q u>> 0x20).d
    
    while (true)
        int64_t rdx_18 = sx.q(var_410_1:0xc.d)
        int32_t rax_30
        
        if (rdx_18.d != rsi_3 || var_410_1.q != &r12[2])
            rax_30.b = 0
        else
            rax_30.b = 1
        
        int64_t* rcx_22 = var_420.q
        
        if (rax_30.b == 0 || rcx_22 != arg1)
            rax_30.b = 1
        else
            rax_30.b = 0
        
        if (rax_30.b == 0)
            break
        
        int64_t r8_5 = rdx_18 * 3
        zmm1 = sub_141cb31a0(*(*rcx_22 + (r8_5 << 3) + 8), &var_288, zmm1, r8_5)
        var_410_1:8.d &= not.d(var_420:0xc.d)
        sub_14059bdd0(&var_420:8)
    
    void* rsi_4 = arg3
    int32_t r15_2 = var_46c
    
    if (*(rsi_4 + 1) != 0)
        var_458 = 0
        int32_t r11_3 = *(arg1 + 0x1b8)
        var_430 = arg1 + 0x190
        int32_t rcx_26 = 0
        var_454_1 = 1
        int32_t r8_6 = 0
        var_450 = arg1 + 0x1a0
        var_448 = 0xffffffff
        var_444 = 0
        
        if (r11_3 != 0)
            void* rax_41 = *(arg1 + 0x1b0)
            void* r9_5 = arg1 + 0x1a0
            
            if (rax_41 != 0)
                r9_5 = rax_41
            
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q(r11_3 - 1)
            int32_t rdx_22 = *r9_5
            
            if (rdx_22 != 0)
            label_141cb0b88:
                int32_t rax_48 = ((rdx_22 - 1) & rdx_22) ^ rdx_22
                uint64_t rflags_5
                int32_t temp0_6
                temp0_6, rflags_5 = _bit_scan_reverse(rax_48)
                var_454_1 = rax_48
                int32_t rax_49
                
                if (rax_48 == 0)
                    rax_49 = 0x20
                else
                    rax_49 = 0x1f - temp0_6
                
                var_444.d = r8_6 - rax_49 + 0x1f
                
                if (r8_6 - rax_49 + 0x1f s> r11_3)
                    var_444.d = r11_3
            else
                while (true)
                    int64_t rdx_23 = sx.q(rcx_26)
                    r8_6 += 0x20
                    rcx_26 += 1
                    var_444:4.d = r8_6
                    var_458 = rcx_26
                    
                    if (rdx_23.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_22 = *(r9_5 + (rdx_23 << 2) + 4)
                    var_448 = 0xffffffff
                    
                    if (rdx_22 != 0)
                        goto label_141cb0b88
                
                var_444.d = r11_3
        
        int32_t rdx_24 = *(arg1 + 0x1b8)
        zmm2_1 = var_448.o
        var_398 = arg1 + 0x190
        int32_t r8_9 = rdx_24 s>> 5
        var_380_1 = zmm2_1
        var_390_1 = var_458.o
        int32_t rsi_5 = 0xffffffff << (rdx_24 & 0x1f).b
        int32_t r9_7 = rdx_24 & 0xffffffe0
        int64_t var_400_2 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        var_448 = rsi_5
        var_444.d = rdx_24
        zmm1.o = var_390_1
        var_420 = var_398.o
        var_410_1 = zmm1.o
        
        if (rdx_24 != r11_3)
            void* rax_53 = *(arg1 + 0x1b0)
            void* r10_2 = arg1 + 0x1a0
            
            if (rax_53 != 0)
                r10_2 = rax_53
            
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q(r11_3 - 1)
            int32_t rdx_28 = *(r10_2 + (sx.q(r8_9) << 2)) & rsi_5
            
            if (rdx_28 != 0)
            label_141cb0c68:
                int32_t rax_59 = ((rdx_28 - 1) & rdx_28) ^ rdx_28
                uint64_t rflags_6
                int32_t temp0_8
                temp0_8, rflags_6 = _bit_scan_reverse(rax_59)
                int32_t r12_2
                
                if (rax_59 == 0)
                    r12_2 = 0x20
                else
                    r12_2 = 0x1f - temp0_8
                
                var_444.d = r9_7 - r12_2 + 0x1f
                
                if (r9_7 - r12_2 + 0x1f s> r11_3)
                    var_444.d = r11_3
            else
                while (true)
                    int64_t rcx_30 = sx.q(r8_9)
                    r9_7 += 0x20
                    r8_9 += 1
                    
                    if (rcx_30.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_28 = *(r10_2 + (rcx_30 << 2) + 4)
                    var_448 = 0xffffffff
                    
                    if (rdx_28 != 0)
                        goto label_141cb0c68
                
                var_444.d = r11_3
        
        void* r14_1 = var_430
        uint32_t r12_4 = (var_448.q u>> 0x20).d
        
        while (true)
            int64_t rcx_32 = sx.q(var_410_1:0xc.d)
            int32_t rax_52
            
            if (rcx_32.d != r12_4 || var_410_1.q != arg1 + 0x1a0)
                rax_52.b = 0
            else
                rax_52.b = 1
            
            int64_t* rdx_29 = var_420.q
            
            if (rax_52.b == 0 || rdx_29 != r14_1)
                rax_52.b = 1
            else
                rax_52.b = 0
            
            if (rax_52.b == 0)
                break
            
            int32_t* rdi_9 = *(*rdx_29 + rcx_32 * 0x30 + 0x20)
            int32_t rcx_35
            rcx_35.b = sub_140b5b8a0(*rdi_9, 0) == 0
            bool rax_61
            
            if ((rdi_9[1] != 0 | rcx_35.b) == 0)
                rax_61 = false
            else
                int32_t rcx_36
                rcx_36.b = sub_140b5b8a0(rdi_9[4], 0) == 0
                int32_t rcx_37
                
                if ((rdi_9[5] != 0 | rcx_36.b) != 0)
                    rcx_37.b = sub_140b5b8a0(rdi_9[6], 0) == 0
                
                if ((rdi_9[5] != 0 | rcx_36.b) == 0 || (rdi_9[7] != 0 | rcx_37.b) != 0)
                    rax_61 = false
                else
                    rax_61 = true
                
                if (rax_61 != 0)
                    rax_61 = false
                else
                    int32_t rcx_38
                    rcx_38.b = sub_140b5b8a0(rdi_9[6], 0) == 0
                    
                    if ((rdi_9[7] != 0 | rcx_38.b) != 0)
                        rax_61 = false
                    else
                        rax_61 = true
            
            if (rax_61 != 0)
            label_141cb0de1:
                var_46c = r15_2
                zmm1 = sub_141c8f270(&var_e8, rdi_9, &var_46c)
                int64_t rsi_9 = sx.q(r15_2)
                r15_2 = (rsi_9 + 1).d
                
                if (r15_2 s> var_3a4_1)
                    sub_1405a4d70(&var_3b0)
                
                var_3b0[rsi_9] = rdi_9
            else
                int32_t rcx_39
                
                if (*(arg3 + 2) != 0)
                    rcx_39.b = sub_140b5b8a0(rdi_9[6], 0) == 0
                
                if (*(arg3 + 2) != 0 && (rdi_9[7] != 0 | rcx_39.b) != 0)
                    goto label_141cb0de1
                
                if (*(arg3 + 3) != 0)
                    int64_t rax_63 = *(rdi_9 + 8)
                    var_430 = nullptr
                    int32_t rcx_40
                    uint32_t rsi_8
                    
                    if (rax_63 == 0)
                        var_3c0 = 0
                        rcx_40 = 0
                        rsi_8 = 0
                        rax_63 = 0
                    else
                        int64_t rsi_7 = *(rdi_9 + 0x10)
                        rcx_40 = rsi_7.d
                        rsi_8 = (rsi_7 u>> 0x20).d
                        var_3c0 = rax_63
                    
                    var_460 = nullptr
                    
                    if (rax_63 == 0)
                        rax_63.b = 0
                    else
                        rcx_40.b = sub_140b5b8a0(rcx_40, 0).b == 0
                        rax_63.b = rsi_8 != 0
                        rcx_40.b |= rax_63.b
                        
                        if (rcx_40.b == 0)
                            rax_63.b = 0
                        else
                            rax_63.b = 1
                    
                    if (rax_63.b != 0)
                        goto label_141cb0de1
            
            var_410_1:8.d &= not.d(var_420:0xc.d)
            sub_14059bdd0(&var_420:8)
        
        rsi_4 = arg3
    
    var_468 = r15_2
    int32_t* rdx_32 = *var_280
    
    if (&rdx_32[1] u> var_280[1])
        int32_t* rdx_33 = &var_468
        int64_t* rcx_46 = &var_288
        
        if ((var_25f u>> 5 & 1) != 0)
            sub_140b54070(rcx_46, rdx_33, zmm1)
        else
            var_288[0x2a](rcx_46, rdx_33, 4)
    else
        var_468 = *rdx_32
        *var_280 += 4
    
    void** rdx_34 = var_3b0
    int32_t rcx_47 = 0
    int64_t** var_3e8 = nullptr
    int64_t var_3e0_1 = 0
    var_168 = 0
    int64_t rax_71 = &rdx_34[sx.q(r15_2)]
    int32_t var_160_1 = 0
    int32_t var_13c_1 = 0x80
    int64_t var_158
    __builtin_memset(&var_158, 0, 0x1c)
    int32_t var_138_1 = 0xffffffff
    int32_t var_134_1 = 0
    void* var_128_1 = nullptr
    int32_t var_120_1 = 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    var_3a0 = rdx_34
    var_3c0 = rax_71
    
    if (rdx_34 != rax_71)
        var_348 = &var_398
        uint128_t var_328
        int128_t* var_338 = &var_328
        
        while (true)
            int128_t* rdi_10 = *rdx_34
            zmm1.o = rdi_10[1]
            var_3e0_1.d = 0
            var_458.o = *rdi_10
            var_448.o = zmm1.o
            
            if (rcx_47 != 0)
                sub_1405c5570(&var_3e8, 0)
            
            sub_141453140(&var_168, 0)
            int32_t var_2f8
            sub_14090a150(&var_168, &var_2f8)
            int32_t rax_72 = var_2f8
            char* var_480_1 = nullptr
            int32_t* var_2f0
            *var_2f0 = 2
            var_2f0[2] = 0xffffffff
            sub_140a23530(&var_168, &var_3c4, *var_2f0, var_2f0, rax_72, var_480_1)
            int32_t var_2e8
            sub_14090a150(&var_168, &var_2e8)
            int32_t rax_73 = var_2e8
            char* var_480_2 = nullptr
            int32_t* var_2e0
            *var_2e0 = 1
            var_2e0[2] = 0xffffffff
            sub_140a23530(&var_168, &var_3c8, *var_2e0, var_2e0, rax_73, var_480_2)
            int32_t var_2d8
            sub_14090a150(&var_168, &var_2d8)
            int32_t rax_74 = var_2d8
            char* var_480_3 = nullptr
            int32_t* var_2d0
            *var_2d0 = 4
            var_2d0[2] = 0xffffffff
            sub_140a23530(&var_168, &var_3cc, *var_2d0, var_2d0, rax_74, var_480_3)
            int32_t var_2c8
            sub_14090a150(&var_168, &var_2c8)
            int32_t rax_75 = var_2c8
            char* var_480_4 = nullptr
            int32_t* var_2c0
            *var_2c0 = 8
            var_2c0[2] = 0xffffffff
            sub_140a23530(&var_168, &var_3d0, 8, var_2c0, rax_75, var_480_4)
            sub_14090a150(&var_168, &var_368)
            int32_t rax_76 = var_368
            char* var_480_5 = nullptr
            int32_t* var_360
            *var_360 = 0x10
            var_360[2] = 0xffffffff
            sub_140a23530(&var_168, &var_3d4, *var_360, var_360, rax_76, var_480_5)
            sub_14090a150(&var_168, &var_358)
            *var_350 = 0
            var_350[1].d = 0xffffffff
            sub_140a23530(&var_168, &var_3d8, 0, var_350, var_358, nullptr)
            var_420.q = arg1
            var_420:8.q = &var_98
            var_410_1.q = &var_e8
            var_410_1:8.q = &var_3e8
            var_398.o = var_420
            int64_t* var_400_3 = &var_168
            var_380_1[1] = var_400_3
            var_390_1 = var_410_1
            sub_141c96c40(&var_348, &rdi_10[2], 2)
            var_328 = var_420
            uint128_t var_318_1 = var_410_1
            uint64_t var_308_1 = var_400_3
            zmm1 = sub_141c96c40(&var_338, &rdi_10[3], 1)
            
            if (*(rsi_4 + 2) != 0)
                zmm0_1 = var_420
                uint128_t var_2b8
                var_460 = &var_2b8
                var_2b8 = zmm0_1
                uint128_t var_2a8_1 = var_410_1
                uint64_t var_298_1 = var_400_3
                zmm1 = sub_141c96c40(&var_460, &rdi_10[4], 4)
            
            if (*(rsi_4 + 3) != 0)
                zmm0_1 = var_420
                var_460 = &var_118
                var_118.o = zmm0_1
                int64_t var_108
                var_108.o = var_410_1
                uint64_t var_f8_1 = var_400_3
                sub_141c96c40(&var_460, &rdi_10[5], 8)
                uint128_t zmm0_4 = var_420
                var_460 = &var_328
                var_328 = zmm0_4
                uint128_t var_318_2 = var_410_1
                uint64_t var_308_2 = var_400_3
                zmm1 = sub_141c96c40(&var_460, &rdi_10[6], 0x10)
            
            int64_t r12_5 = 0
            int64_t* rsi_10 = rdi_10[7].q
            uint64_t r13_3 = sx.q(*(rdi_10 + 0x78)) << 3 u>> 3
            
            if (rsi_10 u> &rsi_10[sx.q(*(rdi_10 + 0x78))])
                r13_3 = 0
            
            void var_130
            
            if (r13_3 != 0)
                do
                    int64_t* r15_3 = *rsi_10
                    
                    if (*sub_141c9fdc0(&var_e8, &var_428, r15_3) != 0xffffffff)
                        int64_t rdi_11 = sx.q(var_3e0_1.d)
                        int32_t rax_82 = (rdi_11 + 1).d
                        var_3e0_1.d = rax_82
                        
                        if (rax_82 s> var_3e0_1:4.d)
                            sub_1405a4d70(&var_3e8)
                        
                        var_3e8[rdi_11] = r15_3
                        void* rax_87
                        
                        if (var_160_1 == var_134_1)
                        label_141cb1383:
                            rax_87 = nullptr
                        else
                            void* rcx_75 = &var_130
                            
                            if (var_128_1 != 0)
                                rcx_75 = var_128_1
                            
                            int32_t rax_86 = *rcx_75
                            
                            if (rax_86 == 0xffffffff)
                            label_141cb1383_1:
                                rax_87 = nullptr
                            else
                                int64_t r8_16 = var_168
                                int64_t rcx_77
                                
                                while (true)
                                    rcx_77 = sx.q(rax_86) * 2
                                    
                                    if (*(r8_16 + (rcx_77 << 3)) == 0)
                                        break
                                    
                                    rax_86 = *(r8_16 + (rcx_77 << 3) + 8)
                                    
                                    if (rax_86 == 0xffffffff)
                                        goto label_141cb1383_2
                                
                                rax_87 = r8_16 + (rcx_77 << 3)
                                
                                if (rax_86 == 0xffffffff)
                                label_141cb1383_2:
                                    rax_87 = nullptr
                        
                        *(rax_87 + 4) += 1
                    
                    rsi_10 = &rsi_10[1]
                    r12_5 += 1
                while (r12_5 != r13_3)
            
            char var_478 = 0
            char var_260
            
            if ((var_260 & 2) != 0)
                bool cond:23_1 = sub_140b5b8a0(var_458, 0) == 0
                var_430 = nullptr
                char rcx_79 = 0
                
                if (var_450 != 0)
                    rcx_79 = 2
                
                var_478 |= rcx_79 | var_454_1 != 0 | cond:23_1
                char rcx_82 = 0
                
                if (sub_140b5b8a0(var_448, 0) == 0)
                    rcx_82 = 4
                
                int32_t rcx_83 = var_444:4.d
                var_478 |= (sbb.b(&data_143e155c0, &data_143e155c0, var_444.d != 0) & 4) | rcx_82
                char rcx_85 = 0
                
                if (sub_140b5b8a0(rcx_83, 0) == 0)
                    rcx_85 = 8
                
                int32_t var_43c
                var_478 |= (sbb.b(&data_143e155c0, &data_143e155c0, var_43c != 0) & 8) | rcx_85
            
            char* rdx_58 = *var_280
            
            if (&rdx_58[1] u> var_280[1])
                var_288[0x2a](&var_288, &var_478, 1)
            else
                var_478 = *rdx_58
                *var_280 += 1
            
            char rax_96 = var_478
            
            if ((rax_96 & 1) != 0)
                var_288[0x28](&var_288, &var_458)
                rax_96 = var_478
            
            if ((rax_96 & 2) != 0)
                var_460 = var_450
                var_288[0x28](&var_288, &var_460)
                void* rax_99 = var_450
                
                if ((var_260 & 1) != 0)
                    rax_99 = var_460
                
                var_450 = rax_99
                rax_96 = var_478
            
            if ((rax_96 & 4) != 0)
                var_288[0x28](&var_288, &var_448)
                rax_96 = var_478
            
            if ((rax_96 & 8) != 0)
                var_288[0x28](&var_288, &var_444:4)
            
            void* rdx_66
            
            if (var_160_1 == var_134_1)
            label_141cb1584:
                rdx_66 = nullptr
            else
                void* rdx_64 = &var_130
                
                if (var_128_1 != 0)
                    rdx_64 = var_128_1
                
                int32_t rax_104 = *(rdx_64 + ((zx.q(var_120_1 - 1) & 2) << 2))
                
                if (rax_104 == 0xffffffff)
                label_141cb1584_1:
                    rdx_66 = nullptr
                else
                    int64_t r8_17 = var_168
                    int64_t rcx_96
                    
                    while (true)
                        rcx_96 = sx.q(rax_104) * 2
                        
                        if (*(r8_17 + (rcx_96 << 3)) == 2)
                            break
                        
                        rax_104 = *(r8_17 + (rcx_96 << 3) + 8)
                        
                        if (rax_104 == 0xffffffff)
                            goto label_141cb1584_2
                    
                    rdx_66 = r8_17 + (rcx_96 << 3)
                    
                    if (rax_104 == 0xffffffff)
                    label_141cb1584_2:
                        rdx_66 = nullptr
            
            int32_t* r8_18 = *var_280
            
            if (&r8_18[1] u> var_280[1])
                int64_t* rcx_98 = &var_288
                
                if ((var_25f & 0x20) != 0)
                    sub_140b54070(rcx_98, rdx_66 + 4, zmm1)
                else
                    var_288[0x2a](rcx_98, rdx_66 + 4, 4)
            else
                *(rdx_66 + 4) = *r8_18
                *var_280 += 4
            
            void* rdx_70
            
            if (var_160_1 == var_134_1)
            label_141cb1644:
                rdx_70 = nullptr
            else
                void* rdx_68 = &var_130
                
                if (var_128_1 != 0)
                    rdx_68 = var_128_1
                
                int32_t rax_111 = *(rdx_68 + ((zx.q(var_120_1 - 1) & 1) << 2))
                
                if (rax_111 == 0xffffffff)
                label_141cb1644_1:
                    rdx_70 = nullptr
                else
                    int64_t r8_19 = var_168
                    int64_t rcx_103
                    
                    while (true)
                        rcx_103 = sx.q(rax_111) * 2
                        
                        if (*(r8_19 + (rcx_103 << 3)) == 1)
                            break
                        
                        rax_111 = *(r8_19 + (rcx_103 << 3) + 8)
                        
                        if (rax_111 == 0xffffffff)
                            goto label_141cb1644_2
                    
                    rdx_70 = r8_19 + (rcx_103 << 3)
                    
                    if (rax_111 == 0xffffffff)
                    label_141cb1644_2:
                        rdx_70 = nullptr
            
            int32_t* r8_20 = *var_280
            
            if (&r8_20[1] u> var_280[1])
                int64_t* rcx_105 = &var_288
                
                if ((var_25f & 0x20) != 0)
                    sub_140b54070(rcx_105, rdx_70 + 4, zmm1)
                else
                    var_288[0x2a](rcx_105, rdx_70 + 4, 4)
            else
                *(rdx_70 + 4) = *r8_20
                *var_280 += 4
            
            void* rdx_74
            
            if (var_160_1 == var_134_1)
            label_141cb1704:
                rdx_74 = nullptr
            else
                void* rdx_72 = &var_130
                
                if (var_128_1 != 0)
                    rdx_72 = var_128_1
                
                int32_t rax_118 = *(rdx_72 + ((zx.q(var_120_1 - 1) & 4) << 2))
                
                if (rax_118 == 0xffffffff)
                label_141cb1704_1:
                    rdx_74 = nullptr
                else
                    int64_t r8_21 = var_168
                    int64_t rcx_110
                    
                    while (true)
                        rcx_110 = sx.q(rax_118) * 2
                        
                        if (*(r8_21 + (rcx_110 << 3)) == 4)
                            break
                        
                        rax_118 = *(r8_21 + (rcx_110 << 3) + 8)
                        
                        if (rax_118 == 0xffffffff)
                            goto label_141cb1704_2
                    
                    rdx_74 = r8_21 + (rcx_110 << 3)
                    
                    if (rax_118 == 0xffffffff)
                    label_141cb1704_2:
                        rdx_74 = nullptr
            
            int32_t* r8_22 = *var_280
            
            if (&r8_22[1] u> var_280[1])
                int64_t* rcx_112 = &var_288
                
                if ((var_25f & 0x20) != 0)
                    sub_140b54070(rcx_112, rdx_74 + 4, zmm1)
                else
                    var_288[0x2a](rcx_112, rdx_74 + 4, 4)
            else
                *(rdx_74 + 4) = *r8_22
                *var_280 += 4
            
            void* rdx_78
            
            if (var_160_1 == var_134_1)
            label_141cb17c4:
                rdx_78 = nullptr
            else
                void* rdx_76 = &var_130
                
                if (var_128_1 != 0)
                    rdx_76 = var_128_1
                
                int32_t rax_125 = *(rdx_76 + ((zx.q(var_120_1 - 1) & 8) << 2))
                
                if (rax_125 == 0xffffffff)
                label_141cb17c4_1:
                    rdx_78 = nullptr
                else
                    int64_t r8_23 = var_168
                    int64_t rcx_117
                    
                    while (true)
                        rcx_117 = sx.q(rax_125) * 2
                        
                        if (*(r8_23 + (rcx_117 << 3)) == 8)
                            break
                        
                        rax_125 = *(r8_23 + (rcx_117 << 3) + 8)
                        
                        if (rax_125 == 0xffffffff)
                            goto label_141cb17c4_2
                    
                    rdx_78 = r8_23 + (rcx_117 << 3)
                    
                    if (rax_125 == 0xffffffff)
                    label_141cb17c4_2:
                        rdx_78 = nullptr
            
            int32_t* r8_24 = *var_280
            
            if (&r8_24[1] u> var_280[1])
                int64_t* rcx_119 = &var_288
                
                if ((var_25f & 0x20) != 0)
                    sub_140b54070(rcx_119, rdx_78 + 4, zmm1)
                else
                    var_288[0x2a](rcx_119, rdx_78 + 4, 4)
            else
                *(rdx_78 + 4) = *r8_24
                *var_280 += 4
            
            void* rdx_82
            
            if (var_160_1 == var_134_1)
            label_141cb1884:
                rdx_82 = nullptr
            else
                void* rdx_80 = &var_130
                
                if (var_128_1 != 0)
                    rdx_80 = var_128_1
                
                int32_t rax_132 = *(rdx_80 + ((zx.q(var_120_1 - 1) & 0x10) << 2))
                
                if (rax_132 == 0xffffffff)
                label_141cb1884_1:
                    rdx_82 = nullptr
                else
                    int64_t r8_25 = var_168
                    int64_t rcx_124
                    
                    while (true)
                        rcx_124 = sx.q(rax_132) * 2
                        
                        if (*(r8_25 + (rcx_124 << 3)) == 0x10)
                            break
                        
                        rax_132 = *(r8_25 + (rcx_124 << 3) + 8)
                        
                        if (rax_132 == 0xffffffff)
                            goto label_141cb1884_2
                    
                    rdx_82 = r8_25 + (rcx_124 << 3)
                    
                    if (rax_132 == 0xffffffff)
                    label_141cb1884_2:
                        rdx_82 = nullptr
            
            int32_t* r8_26 = *var_280
            
            if (&r8_26[1] u> var_280[1])
                int64_t* rcx_126 = &var_288
                
                if ((var_25f & 0x20) != 0)
                    sub_140b54070(rcx_126, rdx_82 + 4, zmm1)
                else
                    var_288[0x2a](rcx_126, rdx_82 + 4, 4)
            else
                *(rdx_82 + 4) = *r8_26
                *var_280 += 4
            
            void* rdx_85
            
            if (var_160_1 == var_134_1)
            label_141cb1933:
                rdx_85 = nullptr
            else
                void* rcx_127 = &var_130
                
                if (var_128_1 != 0)
                    rcx_127 = var_128_1
                
                int32_t rax_139 = *rcx_127
                
                if (rax_139 == 0xffffffff)
                label_141cb1933_1:
                    rdx_85 = nullptr
                else
                    int64_t r8_27 = var_168
                    int64_t rcx_129
                    
                    while (true)
                        rcx_129 = sx.q(rax_139) * 2
                        
                        if (*(r8_27 + (rcx_129 << 3)) == 0)
                            break
                        
                        rax_139 = *(r8_27 + (rcx_129 << 3) + 8)
                        
                        if (rax_139 == 0xffffffff)
                            goto label_141cb1933_2
                    
                    rdx_85 = r8_27 + (rcx_129 << 3)
                    
                    if (rax_139 == 0xffffffff)
                    label_141cb1933_2:
                        rdx_85 = nullptr
            
            int32_t* r8_28 = *var_280
            
            if (&r8_28[1] u> var_280[1])
                void** const* rcx_131 = &var_288
                
                if ((var_25f & 0x20) != 0)
                    sub_140b54070(rcx_131, rdx_85 + 4, zmm1)
                else
                    var_288[0x2a](rcx_131, rdx_85 + 4, 4)
            else
                *(rdx_85 + 4) = *r8_28
                *var_280 += 4
            
            int64_t** rdi_12 = var_3e8
            int64_t rsi_11 = 0
            void* rcx_132 = &rdi_12[sx.q(var_3e0_1.d)]
            uint64_t r15_7 = (rcx_132 - rdi_12 + 7) u>> 3
            
            if (rdi_12 u> rcx_132)
                r15_7 = 0
            
            if (r15_7 != 0)
                do
                    sub_141c9fdc0(&var_e8, &var_46c, *rdi_12)
                    int64_t rax_145 = sx.q(var_46c)
                    void* const rax_147
                    
                    if (rax_145.d == 0xffffffff)
                        rax_147 = nullptr
                    else
                        rax_147 = rax_145 * 0x2c + var_e8
                    
                    var_474 = *(rax_147 + 0x20)
                    int32_t* rdx_88 = *var_280
                    
                    if (&rdx_88[1] u> var_280[1])
                        int32_t* rdx_89 = &var_474
                        void** const* rcx_135 = &var_288
                        
                        if ((var_25f & 0x20) != 0)
                            sub_140b54070(rcx_135, rdx_89, zmm1)
                        else
                            var_288[0x2a](rcx_135, rdx_89, 4)
                    else
                        var_474 = *rdx_88
                        *var_280 += 4
                    
                    rdi_12 = &rdi_12[1]
                    rsi_11 += 1
                while (rsi_11 != r15_7)
            
            rdx_34 = &var_3a0[1]
            var_3a0 = rdx_34
            
            if (rdx_34 == var_3c0)
                break
            
            rcx_47 = var_3e0_1:4.d
            rsi_4 = arg3
    
    var_470 = 0
    
    if (*(arg3 + 4) == 0)
        int32_t* rdx_101 = *var_280
        
        if (&rdx_101[1] u> var_280[1])
            int32_t* rdx_102 = &var_470
            void** const* rcx_151 = &var_288
            
            if ((var_25f & 0x20) != 0)
                sub_140b54070(rcx_151, rdx_102, zmm1)
            else
                var_288[0x2a](rcx_151, rdx_102, 4)
        else
            var_470 = *rdx_101
            *var_280 += 4
    else
        var_470 = *(arg1 + 0x1e8) - *(arg1 + 0x214)
        int32_t* rdx_91 = *var_280
        
        if (&rdx_91[1] u> var_280[1])
            int32_t* rdx_92 = &var_470
            void** const* rcx_137 = &var_288
            
            if ((var_25f & 0x20) != 0)
                sub_140b54070(rcx_137, rdx_92, zmm1)
            else
                var_288[0x2a](rcx_137, rdx_92, 4)
        else
            var_470 = *rdx_91
            *var_280 += 4
        
        void* rsi_12 = arg1 + 0x1f0
        var_458 = 0
        int32_t r8_30 = *(rsi_12 + 0x18)
        int32_t var_454_2 = 1
        void* var_450_1 = rsi_12
        var_448 = 0xffffffff
        var_444 = 0
        
        if (r8_30 != 0)
            sub_14059bdd0(&var_458)
            r8_30 = *(rsi_12 + 0x18)
        
        int32_t rdx_93 = *(arg1 + 0x208)
        zmm0_1 = var_458.o
        zmm2_1 = var_448.o
        char rcx_140 = rdx_93.b & 0x1f
        var_458 = rdx_93 s>> 5
        double var_380_2[0x2] = zmm2_1
        var_398 = arg1 + 0x1e0
        int64_t var_400_4 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        int32_t var_454_3 = 1 << rcx_140
        var_448 = 0xffffffff << rcx_140
        var_444.d = rdx_93
        var_444:4.d = rdx_93 & 0xffffffe0
        zmm1.o = zmm0_1
        var_420 = var_398.o
        int128_t var_410_2 = zmm1.o
        
        if (rdx_93 != r8_30)
            sub_14059bdd0(&var_458)
        
        uint32_t r15_10 = (var_448.q u>> 0x20).d
        
        while (true)
            int64_t rcx_142 = sx.q(var_410_2:0xc.d)
            int32_t rax_161
            
            if (rcx_142.d != r15_10 || var_410_2.q != rsi_12)
                rax_161.b = 0
            else
                rax_161.b = 1
            
            int64_t* rdx_94 = var_420.q
            
            if (rax_161.b == 0 || rdx_94 != arg1 + 0x1e0)
                rax_161.b = 1
            else
                rax_161.b = 0
            
            if (rax_161.b == 0)
                break
            
            void* rdi_14 = *rdx_94 + rcx_142 * 0x18
            var_288[0x28](&var_288, rdi_14)
            int64_t* rdi_15 = *(rdi_14 + 8)
            sub_14090dc80(&var_288, rdi_15, zmm1)
            sub_1409ac860(&var_288, &rdi_15[1], zmm1)
            int32_t* rdx_98 = *var_280
            bool rax_166
            
            if (&rdx_98[1] u> var_280[1])
                int32_t rax_167
                rax_167.b = rdi_15[3].b != 0
                var_474 = rax_167
                var_288[0x2a](&var_288, &var_474, 4)
                rax_166 = var_474 != 0
                rdi_15[3].b = rax_166
            else
                void* rax_164
                rax_164.b = *rdx_98 != 0
                rdi_15[3].b = rax_164.b
                *var_280 += 4
                rax_166 = rdi_15[3].b
            
            if (rax_166 != 0)
                var_288[0x2a](&var_288, rdi_15 + 0x19, 0x10)
            
            var_410_2:8.d &= not.d(var_420:0xc.d)
            sub_14059bdd0(&var_420:8)
    
    sub_1405ae080(&var_98)
    sub_1405ae180(&var_168)
    int64_t** rcx_154 = var_3e8
    
    if (rcx_154 != 0)
        sub_140a74f90(rcx_154)
    
    int512_t zmm1_2 = sub_141821a30(&var_e8)
    void** rax_175 = var_3b0
    
    if (rax_175 != 0)
        zmm1_2 = sub_140a74f90(rax_175)
    
    sub_141c94860(&var_288, zmm1_2)
    result = not.b(*(arg2 + 0x29)) & 1
__security_check_cookie(rax_1 ^ &var_4a8)
return result
