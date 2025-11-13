// 函数: sub_1403f2180
// 地址: 0x1403f2180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
void* r14 = arg2
int64_t rsi = sx.q(arg4)
void* var_3a8 = arg2
int32_t var_3c8 = rsi.d
uint128_t zmm14 = sub_1403ed620(r14, rsi.d * arg5)
uint128_t var_278
memset(&var_278, 0, 0x80)
int32_t i_15 = arg5
uint128_t result

if (i_15 s> 0)
    int64_t rax_2 = rsi << 2
    void* r15_1 = r14
    int64_t var_3b0_1 = rax_2
    uint64_t i_13 = zx.q(i_15)
    uint64_t i
    
    do
        if (arg6 + 1 s> 1)
            int32_t rbx_1 = (rsi - 1).d
            int128_t* rdi_1 = &var_278
            uint64_t j_6 = zx.q(arg6)
            void* rsi_1 = r15_1 + 4
            uint64_t j
            
            do
                result = sub_1403f1cf0(r15_1, rsi_1, rbx_1)
                rdi_1 += 8
                rbx_1 -= 1
                rsi_1 += 4
                result.q = result.q f+ *(rdi_1 - 8)
                *(rdi_1 - 8) = result.q
                j = j_6
                j_6 -= 1
            while (j != 1)
            rsi = zx.q(var_3c8)
            rax_2 = var_3b0_1
        
        r15_1 += rax_2
        i = i_13
        i_13 -= 1
    while (i != 1)
    r14 = var_3a8
    i_15 = arg5

uint128_t result_5
uint128_t result_3 = result_5
int64_t r12_1 = sx.q(arg6)
uint128_t result_14 = 0x3ff0000000000000
uint64_t i_1 = 0
int64_t r8_2 = sx.q(rsi.d)
int64_t rdx_3 = r12_1
int32_t var_3c8_1 = 0
uint128_t zmm15
zmm15.q = zmm14.q f* 9.9999997473787516e-06
uint128_t result_11 = result_14
uint64_t zmm10[0x2] = data_142d8e3c0
uint128_t var_1f8 = var_278
int32_t r15_2 = 0
int64_t rdi_2 = 0
int64_t var_3c0 = r8_2
uint128_t var_258
uint128_t var_1d8 = var_258
uint128_t result_6 = result_3
uint128_t var_238
uint128_t var_1b8 = var_238
uint128_t var_218
uint128_t var_198 = var_218
uint64_t result_13[0x2]
uint64_t result_15[0x2] = result_13
uint128_t var_248
uint128_t var_1c8 = var_248
result.q = zmm15.q f+ zmm14.q
result.q = result.q f+ 9.9999997171806854e-10
uint128_t result_10
uint128_t result_12 = result_10
uint128_t zmm8
uint128_t var_68 = zmm8
uint64_t result_1 = result.q
uint64_t result_2 = result.q
uint128_t var_228
uint128_t var_1a8 = var_228
uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t var_208
uint128_t var_188 = var_208
int64_t var_398
void var_390
void var_388
void var_380
void var_320
void var_318
void var_310
uint128_t result_4
uint128_t result_7
uint64_t result_8[0x2]

if (r12_1.d s<= 0)
label_1403f2e1c:
    result_8 = zx.o(result_1)
    
    if (rdx_3 s>= 4)
        void* rax_33 = arg1 + 8
        
        do
            result_4 = zx.o(*(&var_388 + (i_1 << 3)))
            result_7 = zx.o(*(&var_380 + (i_1 << 3)))
            i_1 += 4
            rax_33 += 0x10
            result.q = result_4.q f* *(&var_320 + (i_1 << 3))
            result_3.q = result_4.q f* result_4.q
            result_4 = _mm_xor_pd(result_4, zmm10)
            result_14.q = result_14.q f+ result_3.q
            result_8[0] = result_8[0] f+ result.q
            result_3.q = result_7.q f* *(&var_318 + (i_1 << 3))
            result.d = fconvert.s(result_4.q)
            result_4 = zx.o((&var_398)[i_1])
            *(rax_33 - 0x18) = result.d
            result_8[0] = result_8[0] f+ result_3.q
            result_3.q = result_4.q f* *(&var_310 + (i_1 << 3))
            result.q = result_7.q f* result_7.q
            result_7 = _mm_xor_pd(result_7, zmm10)
            result_14.q = result_14.q f+ result.q
            result_8[0] = result_8[0] f+ result_3.q
            result.d = fconvert.s(result_7.q)
            result_7 = zx.o(*(&var_390 + (i_1 << 3)))
            *(rax_33 - 0x14) = result.d
            result_3.q = result_7.q f* (&result_1)[i_1]
            result.q = result_4.q f* result_4.q
            result_4 = _mm_xor_pd(result_4, zmm10)
            result_14.q = result_14.q f+ result.q
            result_8[0] = result_8[0] f+ result_3.q
            result.d = fconvert.s(result_4.q)
            *(rax_33 - 0x10) = result.d
            result.q = result_7.q f* result_7.q
            result_14.q = result_14.q f+ result.q
            result.d = fconvert.s(_mm_xor_pd(result_7, zmm10).q)
            *(rax_33 - 0xc) = result.d
        while (i_1 s< rdx_3 - 3)
    
    while (i_1 s< rdx_3)
        result_4 = zx.o(*(&var_388 + (i_1 << 3)))
        i_1 += 1
        result.q = result_4.q f* (&result_1)[i_1]
        result_3.q = result_4.q f* result_4.q
        result_4 = _mm_xor_pd(result_4, zmm10)
        result_14.q = result_14.q f+ result_3.q
        result_8[0] = result_8[0] f+ result.q
        result.d = fconvert.s(result_4.q)
        *(arg1 + (i_1 << 2) - 4) = result.d
    
    zmm15.q = zmm15.q f* result_14.q
    result_8[0] = result_8[0] f- zmm15.q
    result.d = fconvert.s(result_8[0])
else
    int32_t r13_3 = 1
    zmm8 = zx.o(0)
    
    while (true)
        int64_t var_3a0
        void var_378
        void var_328
        double result_9
        
        if (i_15 s> 0)
            int64_t rcx_3 = rdi_2 << 2
            void* r9 = r14
            int64_t rax_4 = r8_2 - rdi_2
            uint64_t i_14 = zx.q(i_15)
            int64_t r12_2 = rax_4 << 2
            var_398 = rax_4
            int64_t r11_2 = r12_2 - rcx_3
            int64_t r12_3 = r12_2 - rcx_3
            var_3a0 = r11_2
            uint64_t i_2
            
            do
                zmm8 = *(r9 + rcx_3)
                void* rsi_2 = r9 + rcx_3
                uint32_t r10 = 0
                int64_t rcx_4 = 0
                result_13 = _mm_cvtps_pd(zmm8.q)
                zmm9 = *(rsi_2 + r12_3 - 4)
                result_10 = _mm_cvtps_pd(zmm9.q)
                
                if (r15_2 s>= 4)
                    void* rdx_5 = r9 + ((rax_4 + 2) << 2)
                    void* r8_4 = r9 + ((rdi_2 - 2) << 2)
                    uint64_t rax_7 = zx.q(((r13_3 - 5) u>> 2) + 1)
                    uint64_t j_5 = zx.q(rax_7.d)
                    r10 = (rax_7 << 2).d
                    uint64_t j_1
                    
                    do
                        result_9 = *(r8_4 + 4)
                        result_8 = *(rdx_5 - 8)
                        result.d = zmm8.d f* result_9.d
                        result_3.q = fconvert.d(result.d)
                        result_7 = zx.o(*(&var_388 + (rcx_4 << 3)))
                        result_4.q = *(&var_278 + (rcx_4 << 3)) f- result_3.q
                        result.d = zmm9.d f* result_8[0].d
                        result_3.q = fconvert.d(result.d)
                        *(&var_278 + (rcx_4 << 3)) = result_4.q
                        result_4.q = *(&var_1f8 + (rcx_4 << 3)) f- result_3.q
                        result = _mm_cvtps_pd(result_9)
                        result_9 = *r8_4
                        result.q = result.q f* result_7.q
                        result_13[0] = result_13[0] f+ result.q
                        *(&var_1f8 + (rcx_4 << 3)) = result_4.q
                        result_4 = zx.o(*(&var_278:8 + (rcx_4 << 3)))
                        result.d = zmm8.d f* result_9.d
                        result_3 = _mm_cvtps_pd(result_8[0])
                        result_8 = *(rdx_5 - 4)
                        result_3.q = result_3.q f* result_7.q
                        result_7 = zx.o(*(&var_380 + (rcx_4 << 3)))
                        result_10.q = result_10.q f+ result_3.q
                        result_3.q = fconvert.d(result.d)
                        result_4.q = result_4.q f- result_3.q
                        result.d = zmm9.d f* result_8[0].d
                        result_3.q = fconvert.d(result.d)
                        *(&var_278:8 + (rcx_4 << 3)) = result_4.q
                        result_4.q = *(&var_1f8:8 + (rcx_4 << 3)) f- result_3.q
                        result = _mm_cvtps_pd(result_9)
                        result_9 = *(r8_4 - 4)
                        result.q = result.q f* result_7.q
                        result_13[0] = result_13[0] f+ result.q
                        *(&var_1f8:8 + (rcx_4 << 3)) = result_4.q
                        result_4 = zx.o(*(&result_5 + (rcx_4 << 3)))
                        result.d = zmm8.d f* result_9.d
                        result_3 = _mm_cvtps_pd(result_8[0])
                        result_8 = *rdx_5
                        result_3.q = result_3.q f* result_7.q
                        result_7 = zx.o(*(&var_378 + (rcx_4 << 3)))
                        result_10.q = result_10.q f+ result_3.q
                        result_3.q = fconvert.d(result.d)
                        result_4.q = result_4.q f- result_3.q
                        result.d = zmm9.d f* result_8[0].d
                        result_3.q = fconvert.d(result.d)
                        *(&result_5 + (rcx_4 << 3)) = result_4.q
                        result_4.q = *(&result_6 + (rcx_4 << 3)) f- result_3.q
                        result = _mm_cvtps_pd(result_9)
                        result_9 = *(r8_4 - 8)
                        result.q = result.q f* result_7.q
                        result_13[0] = result_13[0] f+ result.q
                        result_3 = _mm_cvtps_pd(result_8[0])
                        result_8 = *(rdx_5 + 4)
                        result.d = zmm8.d f* result_9.d
                        result_3.q = result_3.q f* result_7.q
                        result_10.q = result_10.q f+ result_3.q
                        *(&result_6 + (rcx_4 << 3)) = result_4.q
                        result_3.q = fconvert.d(result.d)
                        result_4.q = *(&result_5:8 + (rcx_4 << 3)) f- result_3.q
                        result.d = zmm9.d f* result_8[0].d
                        *(&result_5:8 + (rcx_4 << 3)) = result_4.q
                        result_4 = zx.o(*(&result_6:8 + (rcx_4 << 3)))
                        int64_t var_370[0x9]
                        result_7 = zx.o(var_370[rcx_4])
                        result_3.q = fconvert.d(result.d)
                        rcx_4 += 4
                        rdx_5 += 0x10
                        r8_4 -= 0x10
                        result_4.q = result_4.q f- result_3.q
                        result = _mm_cvtps_pd(result_9)
                        result_3.q = _mm_cvtps_pd(result_8[0]).q f* result_7.q
                        result.q = result.q f* result_7.q
                        *(&var_208:8 + (rcx_4 << 3)) = result_4.q
                        result_10.q = result_10.q f+ result_3.q
                        result_13[0] = result_13[0] f+ result.q
                        j_1 = j_5
                        j_5 -= 1
                    while (j_1 != 1)
                    r11_2 = var_3a0
                    r8_2 = var_3c0
                
                if (r10 s< r15_2)
                    void* rdx_6 = r9 + ((rcx_4 - rdi_2 + r8_2) << 2)
                    int64_t rcx_5 = rcx_4 << 3
                    void* r8_8 = r9 + ((rdi_2 - rcx_4 - 1) << 2)
                    uint64_t j_4 = zx.q(r15_2 - r10)
                    uint64_t j_2
                    
                    do
                        result_4 = zx.o(*(&var_278 + rcx_5))
                        result_9 = *r8_8
                        result_8 = *rdx_6
                        rdx_6 += 4
                        result.d = zmm8.d f* result_9.d
                        r8_8 -= 4
                        result_7 = zx.o(*(&var_388 + rcx_5))
                        result_3.q = fconvert.d(result.d)
                        rcx_5 += 8
                        result_4.q = result_4.q f- result_3.q
                        result.d = zmm9.d f* result_8[0].d
                        result_3.q = fconvert.d(result.d)
                        void var_280
                        *(&var_280 + rcx_5) = result_4.q
                        result_4.q = *(&var_208:8 + rcx_5) f- result_3.q
                        result = _mm_cvtps_pd(result_9)
                        result_3.q = _mm_cvtps_pd(result_8[0]).q f* result_7.q
                        result.q = result.q f* result_7.q
                        *(&var_208:8 + rcx_5) = result_4.q
                        result_10.q = result_10.q f+ result_3.q
                        result_13[0] = result_13[0] f+ result.q
                        j_2 = j_4
                        j_4 -= 1
                    while (j_2 != 1)
                
                int64_t j_3 = 0
                
                if (rdi_2 s>= 0)
                    if (rdi_2 + 1 s>= 4)
                        void* rdx_8 = r9 + ((rdi_2 - 2) << 2)
                        void* rax_15 = r11_2 + 4 + rsi_2
                        
                        do
                            result = zx.o((&result_1)[j_3])
                            result_3 = *(rdx_8 + 8)
                            j_3 += 4
                            rax_15 += 0x10
                            rdx_8 -= 0x10
                            result_3.q = _mm_cvtps_pd(result_3.q).q f* result_13[0]
                            result.q = result.q f- result_3.q
                            result_3 = _mm_cvtps_pd((*(rax_15 - 0x18)).q)
                            *(&var_328 + (j_3 << 3)) = result.q
                            result_3.q = result_3.q f* result_10.q
                            result.q = *(&var_198 + (j_3 << 3)) f- result_3.q
                            result_3 = _mm_cvtps_pd((*(rdx_8 + 0x14)).q)
                            *(&var_198 + (j_3 << 3)) = result.q
                            result_3.q = result_3.q f* result_13[0]
                            result.q = *(&var_320 + (j_3 << 3)) f- result_3.q
                            result_3 = _mm_cvtps_pd((*(rax_15 - 0x14)).q)
                            *(&var_320 + (j_3 << 3)) = result.q
                            result_3.q = result_3.q f* result_10.q
                            result.q = *(&var_198:8 + (j_3 << 3)) f- result_3.q
                            result_3 = _mm_cvtps_pd((*(rdx_8 + 0x10)).q)
                            *(&var_198:8 + (j_3 << 3)) = result.q
                            result_3.q = result_3.q f* result_13[0]
                            result.q = *(&var_318 + (j_3 << 3)) f- result_3.q
                            result_3 = _mm_cvtps_pd((*(rax_15 - 0x10)).q)
                            *(&var_318 + (j_3 << 3)) = result.q
                            result_3.q = result_3.q f* result_10.q
                            result.q = *(&var_188 + (j_3 << 3)) f- result_3.q
                            result_3 = *(rdx_8 + 0xc)
                            *(&var_188 + (j_3 << 3)) = result.q
                            result = zx.o(*(&var_310 + (j_3 << 3)))
                            result_3.q = _mm_cvtps_pd(result_3.q).q f* result_13[0]
                            result.q = result.q f- result_3.q
                            result_3 = *(rax_15 - 0xc)
                            *(&var_310 + (j_3 << 3)) = result.q
                            result = zx.o(*(&var_188:8 + (j_3 << 3)))
                            result_3.q = _mm_cvtps_pd(result_3.q).q f* result_10.q
                            result.q = result.q f- result_3.q
                            *(&var_188:8 + (j_3 << 3)) = result.q
                        while (j_3 s<= rdi_2 - 3)
                    
                    if (j_3 s<= rdi_2)
                        void* rdx_9 = r9 + ((rdi_2 - j_3) << 2)
                        void* r8_13 = r9 + ((var_3c0 - 1 + j_3 - rdi_2) << 2)
                        
                        do
                            result = zx.o((&result_1)[j_3])
                            result_3 = *rdx_9
                            j_3 += 1
                            r8_13 += 4
                            rdx_9 -= 4
                            result_3.q = _mm_cvtps_pd(result_3.q).q f* result_13[0]
                            result.q = result.q f- result_3.q
                            result_3 = *(r8_13 - 4)
                            *(&var_310 + (j_3 << 3)) = result.q
                            result = zx.o(*(&var_188:8 + (j_3 << 3)))
                            result_3.q = _mm_cvtps_pd(result_3.q).q f* result_10.q
                            result.q = result.q f- result_3.q
                            *(&var_188:8 + (j_3 << 3)) = result.q
                        while (j_3 s<= rdi_2)
                
                r8_2 = var_3c0
                rax_4 = var_398
                rcx_3 = rdi_2 << 2
                r9 += r8_2 << 2
                i_2 = i_14
                i_14 -= 1
            while (i_2 != 1)
            r12_1 = zx.q(arg6)
            zmm8 = zx.o(0)
        
        result_7 = zx.o(*(&var_278 + (rdi_2 << 3)))
        result_13 = zx.o(*(&var_1f8 + (rdi_2 << 3)))
        int64_t i_3 = 0
        
        if (rdi_2 s>= 4)
            void* rax_20 = (rdi_2 << 3) + -fffffffffffffff8
            
            do
                result_3 = zx.o(*(&var_388 + (i_3 << 3)))
                result_4 = zx.o(*(&var_380 + (i_3 << 3)))
                i_3 += 4
                rax_20 -= 0x20
                result = result_3
                result_3.q = result_3.q f* *(&var_258 + rax_20)
                result.q = result.q f* *(&var_1d8 + rax_20)
                result_13[0] = result_13[0] f+ result_3.q
                result_3 = zx.o((&var_398)[i_3])
                result_7.q = result_7.q f+ result.q
                result = result_4
                result_4.q = result_4.q f* *(&result_5:8 + rax_20)
                result.q = result.q f* *(&result_6:8 + rax_20)
                result_13[0] = result_13[0] f+ result_4.q
                result_4 = zx.o(*(&var_390 + (i_3 << 3)))
                result_7.q = result_7.q f+ result.q
                result = result_3
                result_3.q = result_3.q f* *(&result_5 + rax_20)
                result.q = result.q f* *(&result_6 + rax_20)
                result_13[0] = result_13[0] f+ result_3.q
                result_7.q = result_7.q f+ result.q
                result = result_4
                result_4.q = result_4.q f* *(&var_278:8 + rax_20)
                result.q = result.q f* *(&var_1f8:8 + rax_20)
                result_13[0] = result_13[0] f+ result_4.q
                result_7.q = result_7.q f+ result.q
            while (i_3 s< rdi_2 - 3)
        
        if (i_3 s< rdi_2)
            void* rax_23 = ((rdi_2 - i_3) << 3) + -fffffffffffffff8
            
            do
                result_3 = zx.o(*(&var_388 + (i_3 << 3)))
                i_3 += 1
                rax_23 -= 8
                result = result_3
                result_3.q = result_3.q f* *(&var_278:8 + rax_23)
                result.q = result.q f* *(&var_1f8:8 + rax_23)
                result_13[0] = result_13[0] f+ result_3.q
                result_7.q = result_7.q f+ result.q
            while (i_3 s< rdi_2)
        
        int64_t var_300[0x3]
        var_300[rdi_2] = result_7.q
        result_9 = result_1
        int64_t var_170[0x11]
        var_170[rdi_2] = result_13.q
        int64_t i_4 = 0
        result_10 = zx.o(result_2)
        void var_2e8
        
        if (rdi_2 s>= 4)
            void* rax_24 = &var_2e8 + (rdi_2 << 3) + 0x160
            
            do
                result_4 = zx.o(*(&var_388 + (i_4 << 3)))
                result_7 = zx.o(*(&var_380 + (i_4 << 3)))
                i_4 += 4
                rax_24 -= 0x20
                result = result_4
                result_3 = result_4
                result_4.q = result_4.q f* *(&var_320 + (i_4 << 3))
                result.q = result.q f* *(rax_24 + 0x30)
                result_3.q = result_3.q f* *(&var_198:8 + (i_4 << 3))
                result_9 = result_9 f+ result_4.q
                result_4 = zx.o((&var_398)[i_4])
                result_13[0] = result_13[0] f+ result.q
                result_10.q = result_10.q f+ result_3.q
                result.q = result_7.q f* *(rax_24 + 0x28)
                result_13[0] = result_13[0] f+ result.q
                result_3 = result_7
                result_7.q = result_7.q f* *(&var_318 + (i_4 << 3))
                result_3.q = result_3.q f* *(&var_188 + (i_4 << 3))
                result.q = result_4.q f* *(rax_24 + 0x20)
                result_9 = result_9 f+ result_7.q
                result_7 = zx.o(*(&var_390 + (i_4 << 3)))
                result_10.q = result_10.q f+ result_3.q
                result_13[0] = result_13[0] f+ result.q
                result_3 = result_4
                result_4.q = result_4.q f* *(&var_310 + (i_4 << 3))
                result_3.q = result_3.q f* *(&var_188:8 + (i_4 << 3))
                result.q = result_7.q f* *(rax_24 + 0x18)
                result_10.q = result_10.q f+ result_3.q
                result_3 = result_7
                result_7.q = result_7.q f* (&result_1)[i_4]
                result_13[0] = result_13[0] f+ result.q
                result_3.q = result_3.q f* (&result_2)[i_4]
                result_9 = result_9 f+ result_4.q f+ result_7.q
                result_10.q = result_10.q f+ result_3.q
            while (i_4 s< rdi_2 - 3)
        
        if (i_4 s< rdi_2)
            void* rdx_12 = &(&result_2)[rdi_2 - i_4]
            
            do
                result_4 = zx.o(*(&var_388 + (i_4 << 3)))
                i_4 += 1
                rdx_12 -= 8
                result = result_4
                result_3 = result_4
                result_4.q = result_4.q f* (&result_1)[i_4]
                result.q = result.q f* *(rdx_12 + 8)
                result_3.q = result_3.q f* (&result_2)[i_4]
                result_9 = result_9 f+ result_4.q
                result_13[0] = result_13[0] f+ result.q
                result_10.q = result_10.q f+ result_3.q
            while (i_4 s< rdi_2)
        
        result_8 = result_13
        result_8[0] = result_8[0] f* -2.0
        result_8[0] = result_8[0] f/ (result_9 f+ result_10.q)
        result.q = result_8.q f* result_8[0]
        result_3.q = result_14.q f- result.q
        result.q = fconvert.d(arg3.d)
        result_3.q = result_3.q f* result_11.q
        int32_t r11_3
        
        if (result.q f< result_3.q)
            r11_3 = var_3c8_1
            result_11 = result_3
        else
            result_3.q = fconvert.d(arg3.d)
            result_3.q = result_3.q f/ result_11.q
            result.q = result_14.q f- result_3.q
            result_8 = sqrt(result.q)
            
            if (not(result_13[0] f<= zmm8.q))
                result_8 = _mm_xor_pd(result_8, zmm10)
            
            r11_3 = 1
            var_3c8_1 = 1
            result_11.q = fconvert.d(arg3.d)
        
        int64_t i_5 = 0
        int64_t r8_15 = sx.q(r13_3) s>> 1
        
        if (r8_15 s>= 4)
            void* rax_27 = &var_3e8 + (rdi_2 << 3) + 0x50
            
            do
                result_7 = zx.o(*(rax_27 + 8))
                result_4 = zx.o(*(&var_388 + (i_5 << 3)))
                i_5 += 4
                rax_27 -= 0x20
                result.q = result_8.q f* result_7.q
                result.q = result.q f+ result_4.q
                result_3.q = result_8.q f* result_4.q
                (&var_3a8)[i_5] = result.q
                result_3.q = result_3.q f+ result_7.q
                result_7 = zx.o(*(rax_27 + 0x20))
                *(rax_27 + 0x28) = result_3.q
                result_4 = zx.o((&var_3a0)[i_5])
                result.q = result_8.q f* result_7.q
                result.q = result.q f+ result_4.q
                result_3.q = result_8.q f* result_4.q
                (&var_3a0)[i_5] = result.q
                result_3.q = result_3.q f+ result_7.q
                result_7 = zx.o(*(rax_27 + 0x18))
                *(rax_27 + 0x20) = result_3.q
                result_4 = zx.o((&var_398)[i_5])
                result.q = result_8.q f* result_7.q
                result.q = result.q f+ result_4.q
                result_3.q = result_8.q f* result_4.q
                (&var_398)[i_5] = result.q
                result_3.q = result_3.q f+ result_7.q
                result_7 = zx.o(*(rax_27 + 0x10))
                *(rax_27 + 0x18) = result_3.q
                result_4 = zx.o(*(&var_390 + (i_5 << 3)))
                result.q = result_8.q f* result_7.q
                result.q = result.q f+ result_4.q
                result_3.q = result_8.q f* result_4.q
                *(&var_390 + (i_5 << 3)) = result.q
                result_3.q = result_3.q f+ result_7.q
                *(rax_27 + 0x10) = result_3.q
            while (i_5 s< r8_15 - 3)
        
        if (i_5 s< r8_15)
            void* rdx_14 = &var_3e8 + ((rdi_2 - i_5) << 3) + 0x58
            
            do
                result_7 = zx.o(*rdx_14)
                result_4 = zx.o(*(&var_388 + (i_5 << 3)))
                i_5 += 1
                rdx_14 -= 8
                result.q = result_8.q f* result_7.q
                result.q = result.q f+ result_4.q
                result_3.q = result_8.q f* result_4.q
                *(&var_390 + (i_5 << 3)) = result.q
                result_3.q = result_3.q f+ result_7.q
                *(rdx_14 + 8) = result_3.q
            while (i_5 s< r8_15)
        
        *(&var_388 + (rdi_2 << 3)) = result_8.q
        
        if (r11_3 != 0)
            int64_t rdx_17 = sx.q(r15_2 + 1)
            
            if (rdx_17 s< rdx_3)
                __builtin_memset(&var_388 + (rdx_17 << 3), 0, (rdx_3 - rdx_17) << 3)
            
            if (r12_1.d u>= 4)
                int64_t rcx_13 = sx.q((r12_1 - 1).d)
                
                if (arg1 u> &var_388 + (rcx_13 << 3) || arg1 + (rcx_13 << 2) u< &var_388)
                    int32_t rax_38 = r12_1.d & 0x80000003
                    
                    if (rax_38 s< 0)
                        rax_38 = ((rax_38 - 1) | 0xfffffffc) + 1
                    
                    do
                        int64_t rax_41 = sx.q(i_1.d)
                        *(arg1 + (rax_41 << 2)) =
                            (_mm_cvtpd_ps(_mm_xor_pd(*(&var_388 + (rax_41 << 3)), zmm10))).q
                        int32_t rax_42 = (i_1 + 2).d
                        i_1 = zx.q(i_1.d + 4)
                        int64_t rcx_14 = sx.q(rax_42)
                        *(arg1 + (rcx_14 << 2)) =
                            (_mm_cvtpd_ps(_mm_xor_pd(*(&var_388 + (rcx_14 << 3)), zmm10))).q
                    while (i_1.d s< r12_1.d - rax_38)
            
            int64_t i_6 = sx.q(i_1.d)
            
            if (i_6 s< rdx_3)
                if (rdx_3 - i_6 s>= 4)
                    void* rdx_22 = arg1 + ((i_6 + 2) << 2)
                    
                    do
                        result = zx.o(*(&var_388 + (i_6 << 3)))
                        result_3 = zx.o(*(&var_380 + (i_6 << 3)))
                        result_4 = zx.o(*(&var_378 + (i_6 << 3)))
                        i_6 += 4
                        rdx_22 += 0x10
                        result = _mm_xor_pd(result, zmm10)
                        result_3 = _mm_xor_pd(result_3, zmm10)
                        result_4 = _mm_xor_pd(result_4, zmm10)
                        result.d = fconvert.s(result.q)
                        *(rdx_22 - 0x18) = result.d
                        result.d = fconvert.s(result_3.q)
                        result_3 = _mm_xor_pd(zx.o(*(&var_390 + (i_6 << 3))), zmm10)
                        *(rdx_22 - 0x14) = result.d
                        result.d = fconvert.s(result_4.q)
                        *(rdx_22 - 0x10) = result.d
                        result.d = fconvert.s(result_3.q)
                        *(rdx_22 - 0xc) = result.d
                    while (i_6 s< rdx_3 - 3)
                
                while (i_6 s< rdx_3)
                    result = zx.o(*(&var_388 + (i_6 << 3)))
                    i_6 += 1
                    result.d = fconvert.s(_mm_xor_pd(result, zmm10).q)
                    *(arg1 + (i_6 << 2) - 4) = result.d
            
            if (arg5 s> 0)
                void* rsi_3 = var_3a8
                uint64_t i_10 = zx.q(arg5)
                uint64_t i_7
                
                do
                    result = sub_1403ed620(rsi_3, r12_1.d)
                    rsi_3 += var_3c0 << 2
                    zmm14.q = zmm14.q f- result.q
                    i_7 = i_10
                    i_10 -= 1
                while (i_7 != 1)
            
            result_11.q = result_11.q f* zmm14.q
            result.d = fconvert.s(result_11.q)
            break
        
        uint32_t r9_1 = 0
        int64_t rcx_6 = 0
        
        if (r13_3 s>= 0)
            if (r13_3 + 1 s>= 4)
                void* rdx_15 = &var_2e8 + (rdi_2 << 3) + 0x160
                uint64_t i_11 = zx.q(r13_3 + 1) u>> 2
                r9_1 = (i_11 << 2).d
                uint64_t i_8
                
                do
                    result_4 = zx.o((&result_1)[rcx_6])
                    result_7 = zx.o(var_300[rcx_6])
                    result = zx.o(*(rdx_15 + 0x18))
                    rdx_15 -= 0x20
                    rcx_6 += 4
                    result.q = result.q f* result_8[0]
                    result.q = result.q f+ result_4.q
                    result_4.q = result_4.q f* result_8[0]
                    result_4.q = result_4.q f+ *(rdx_15 + 0x38)
                    *(&var_328 + (rcx_6 << 3)) = result.q
                    result.q = *(rdx_15 + 0x30) f* result_8[0]
                    result.q = result.q f+ result_7.q
                    *(rdx_15 + 0x38) = result_4.q
                    result_4 = zx.o(*(&var_318 + (rcx_6 << 3)))
                    result_7.q = result_7.q f* result_8[0]
                    result_7.q = result_7.q f+ *(rdx_15 + 0x30)
                    *(&var_320 + (rcx_6 << 3)) = result.q
                    result.q = *(rdx_15 + 0x28) f* result_8[0]
                    result.q = result.q f+ result_4.q
                    *(rdx_15 + 0x30) = result_7.q
                    result_4.q = result_4.q f* result_8[0]
                    result_4.q = result_4.q f+ *(rdx_15 + 0x28)
                    *(&var_318 + (rcx_6 << 3)) = result.q
                    result.q = *(rdx_15 + 0x20) f* result_8[0]
                    *(rdx_15 + 0x28) = result_4.q
                    result_4 = zx.o(*(&var_310 + (rcx_6 << 3)))
                    result.q = result.q f+ result_4.q
                    result_4.q = result_4.q f* result_8[0]
                    result_4.q = result_4.q f+ *(rdx_15 + 0x20)
                    *(&var_310 + (rcx_6 << 3)) = result.q
                    *(rdx_15 + 0x20) = result_4.q
                    i_8 = i_11
                    i_11 -= 1
                while (i_8 != 1)
            
            if (r9_1 s<= r13_3)
                void* rdx_16 = &(&result_1)[rcx_6]
                void* rcx_7 = &var_170[rdi_2 - rcx_6]
                uint64_t i_12 = zx.q(r13_3 - r9_1 + 1)
                uint64_t i_9
                
                do
                    result_4 = zx.o(*rdx_16)
                    result = zx.o(*rcx_7)
                    rcx_7 -= 8
                    rdx_16 += 8
                    result.q = result.q f* result_8[0]
                    result.q = result.q f+ result_4.q
                    result_4.q = result_4.q f* result_8[0]
                    result_4.q = result_4.q f+ *(rcx_7 + 8)
                    *(rdx_16 - 8) = result.q
                    *(rcx_7 + 8) = result_4.q
                    i_9 = i_12
                    i_12 -= 1
                while (i_9 != 1)
        
        r8_2 = var_3c0
        r14 = var_3a8
        i_15 = arg5
        r15_2 += 1
        r13_3 += 1
        rdi_2 += 1
        
        if (r15_2 s>= r12_1.d)
            goto label_1403f2e1c
__security_check_cookie(rax_1 ^ &var_3e8)
return result
