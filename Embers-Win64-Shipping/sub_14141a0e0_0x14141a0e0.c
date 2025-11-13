// 函数: sub_14141a0e0
// 地址: 0x14141a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int32_t r13 = *(arg1 + 0x58)
void* r14 = arg1
int32_t rbx = (*U"1111")[sx.q(sub_1422e48a0(arg1 + 0x10))]
char rax_3 = sub_1410a09e0(rbx)
uint64_t result

if (rax_3 == 0)
    result = sub_1419a4830(rbx)

if (rax_3 != 0 || result.b != 0)
    result = zx.q(r13 - 6)
    
    if (result.d u<= 1)
        r13 = 0

if (r13 != 2)
    result = zx.q(r13 - 8)
    
    if (result.d u> 1)
        bool cond:0_1 = *(r14 + 0xa8) s<= 0
        int64_t var_1e0_1 = data_14395da18
        result = data_14395d9e8
        uint64_t result_2 = result
        int128_t var_218
        __builtin_memset(&var_218, 0, 0x30)
        int64_t var_1bc
        __builtin_memset(&var_1bc, 0, 0x43)
        int128_t var_1d0_1 = zx.o(0)
        int16_t var_178_1 = 0
        int32_t i_1 = 0
        
        if (not(cond:0_1))
            result = 0
            uint64_t result_1 = 0
            int32_t i
            
            do
                int64_t* rcx_3 = *(r14 + 0x28)
                void* rsi_2 = result * 0x5240 + *(r14 + 0xa0)
                int64_t* rax_6 = (*(*rcx_3 + 8))(rcx_3)
                int128_t zmm1 = data_142d3f5a0
                int64_t rcx_4 = *rax_6
                int64_t var_168 = rcx_4
                int32_t var_90_1 = 0
                int32_t var_8c
                __builtin_memset(&var_8c, 0xff, 0x14)
                int128_t var_78_1 = zmm1
                int64_t var_68
                __builtin_memset(&var_68, 0, 0x1a)
                int64_t var_160_1 = 0
                int32_t var_158_1 = 0xffffffff
                int16_t var_154_1 = 0x100
                int64_t var_a8
                __builtin_memset(&var_a8, 0, 0x11)
                int32_t var_94_1 = 0
                int16_t var_50_1
                var_50_1:1.b = *(rcx_4 + 0x38) u> 1
                void var_150
                memset(&var_150, 0, 0xa8)
                int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_7 = rbx_3 + 0x18
                
                if (rax_7 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x1a)
                    rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_7 = rbx_3 + 0x18
                
                *(arg2 + 0x30) = rax_7
                wchar16 const* const rcx_7 = u"ViewCapture"
                wchar16 const j
                
                do
                    j = *rcx_7
                    *(rbx_3 - u"ViewCapture" + rcx_7) = j
                    rcx_7 = &rcx_7[1]
                while (j != 0)
                void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_8 = &rcx_10[0x27]
                
                if (rax_8 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x140)
                    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_8 = &rcx_10[0x27]
                
                *(arg2 + 0x30) = rax_8
                void**** rax_9 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_9 = rcx_10
                *(arg2 + 8) = &rcx_10[1]
                sub_1405d11b0(rcx_10, &var_168, rbx_3)
                *(arg2 + 0x1c4) = 1
                sub_1405d19b0(arg2, &var_168)
                int64_t var_58
                *(arg2 + 0x178) = var_58:7.b
                *(arg2 + 0x179) = 0
                *(arg2 + 0x1c4) = 1
                sub_140fdc870(arg2, &var_218)
                int64_t rax_13
                
                if (r13 != 0)
                    rax_13 = data_14395da00
                else
                    int32_t rax_12 = *(r14 + 0x5c)
                    
                    if (rax_12 != 2)
                        rax_13 = data_1439b66f8
                        
                        if (rax_12 != 1)
                            rax_13 = data_14395da00
                    else
                        rax_13 = data_1439b6548
                
                int64_t var_1e8_1 = rax_13
                void* var_2a8
                sub_1419a2ec0(*(rsi_2 + 0x5150), &var_2a8, &data_143f55f90, 0)
                void* r15_1 = var_2a8
                var_218.q = data_1439c9210
                int64_t rax_15 = 0
                void* var_348 = r15_1
                void* var_2a0
                
                if (r15_1 != 0)
                    int64_t rdx_6 = sx.q(*(r15_1 + 0x10c))
                    int64_t* rbx_6 = *(var_2a0 + 0x10)
                    int64_t rax_16 = rbx_6[3]
                    
                    if (*(rax_16 + (rdx_6 << 3)) == 0)
                        sub_1419ccf30(rbx_6, rdx_6.d)
                        rax_16 = rbx_6[3]
                    
                    rax_15 = *(rax_16 + (rdx_6 << 3))
                    r14 = arg1
                
                var_218:8.q = rax_15
                int32_t var_1c0_1 = 0
                int128_t var_1f8_1
                int64_t* rcx_25
                
                if (r13 == 0)
                    void* var_298
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_298, &data_143ed3a70, 0)
                    int64_t rax_17 = 0
                    void* rbx_7 = var_298
                    
                    if (rbx_7 != 0)
                        int64_t rdx_8 = sx.q(*(rbx_7 + 0x10c))
                        void* var_290
                        int64_t* r14_2 = *(var_290 + 0x10)
                        int64_t rax_19 = r14_2[3]
                        
                        if (*(rax_19 + (rdx_8 << 3)) == 0)
                            sub_1419ccf30(r14_2, rdx_8.d)
                            rax_19 = r14_2[3]
                        
                        rax_17 = *(rax_19 + (rdx_8 << 3))
                        r15_1 = var_348
                    
                    var_1f8_1.q = rax_17
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_7, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_3 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_7 + 0x118) == 0xffff)
                        r14 = arg1
                    else
                        if (r8_3 s< 3)
                            int64_t var_328
                            sub_14137b7f0(&var_328, arg2)
                            sub_141083500(arg2, &var_348, rbx_7 + 0x118, var_328)
                            rcx_25 = &var_328
                        else
                            int64_t var_330
                            sub_14137baa0(&var_330, arg2, 0xf, r8_3)
                            sub_141083500(arg2, &var_348, rbx_7 + 0x118, var_330)
                            rcx_25 = &var_330
                        
                        sub_1405d1550(rcx_25)
                        r14 = arg1
                else if (r13 == 1)
                    void* var_288
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_288, &data_143ed3bd0, 0)
                    int64_t rax_25 = 0
                    void* rbx_8 = var_288
                    
                    if (rbx_8 != 0)
                        int64_t rdx_17 = sx.q(*(rbx_8 + 0x10c))
                        void* var_280
                        int64_t* r14_3 = *(var_280 + 0x10)
                        int64_t rax_27 = r14_3[3]
                        
                        if (*(rax_27 + (rdx_17 << 3)) == 0)
                            sub_1419ccf30(r14_3, rdx_17.d)
                            rax_27 = r14_3[3]
                        
                        rax_25 = *(rax_27 + (rdx_17 << 3))
                        r15_1 = var_348
                    
                    var_1f8_1.q = rax_25
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_8, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_9 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_8 + 0x118) == 0xffff)
                        r14 = arg1
                    else
                        if (r8_9 s< 3)
                            int64_t var_318
                            sub_14137b7f0(&var_318, arg2)
                            sub_141083500(arg2, &var_348, rbx_8 + 0x118, var_318)
                            rcx_25 = &var_318
                        else
                            int64_t var_320
                            sub_14137baa0(&var_320, arg2, 0xf, r8_9)
                            sub_141083500(arg2, &var_348, rbx_8 + 0x118, var_320)
                            rcx_25 = &var_320
                        
                        sub_1405d1550(rcx_25)
                        r14 = arg1
                else if (r13 == 3)
                    void* var_278
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_278, &data_143ed3d30, 0)
                    int64_t rax_29 = 0
                    void* rbx_9 = var_278
                    
                    if (rbx_9 != 0)
                        int64_t rdx_24 = sx.q(*(rbx_9 + 0x10c))
                        void* var_270
                        int64_t* r14_4 = *(var_270 + 0x10)
                        int64_t rax_31 = r14_4[3]
                        
                        if (*(rax_31 + (rdx_24 << 3)) == 0)
                            sub_1419ccf30(r14_4, rdx_24.d)
                            rax_31 = r14_4[3]
                        
                        rax_29 = *(rax_31 + (rdx_24 << 3))
                        r15_1 = var_348
                    
                    var_1f8_1.q = rax_29
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_9, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_13 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_9 + 0x118) == 0xffff)
                        r14 = arg1
                    else
                        if (r8_13 s< 3)
                            int64_t var_308
                            sub_14137b7f0(&var_308, arg2)
                            sub_141083500(arg2, &var_348, rbx_9 + 0x118, var_308)
                            rcx_25 = &var_308
                        else
                            int64_t var_310
                            sub_14137baa0(&var_310, arg2, 0xf, r8_13)
                            sub_141083500(arg2, &var_348, rbx_9 + 0x118, var_310)
                            rcx_25 = &var_310
                        
                        sub_1405d1550(rcx_25)
                        r14 = arg1
                else if (r13 == 4)
                    void* var_268
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_268, &data_143ed3e90, 0)
                    int64_t rax_33 = 0
                    void* rbx_10 = var_268
                    
                    if (rbx_10 != 0)
                        int64_t rdx_31 = sx.q(*(rbx_10 + 0x10c))
                        void* var_260
                        int64_t* r14_5 = *(var_260 + 0x10)
                        int64_t rax_35 = r14_5[3]
                        
                        if (*(rax_35 + (rdx_31 << 3)) == 0)
                            sub_1419ccf30(r14_5, rdx_31.d)
                            rax_35 = r14_5[3]
                        
                        rax_33 = *(rax_35 + (rdx_31 << 3))
                        r15_1 = var_348
                    
                    var_1f8_1.q = rax_33
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_10, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_17 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_10 + 0x118) == 0xffff)
                        r14 = arg1
                    else
                        if (r8_17 s< 3)
                            int64_t var_2f8
                            sub_14137b7f0(&var_2f8, arg2)
                            sub_141083500(arg2, &var_348, rbx_10 + 0x118, var_2f8)
                            rcx_25 = &var_2f8
                        else
                            int64_t var_300
                            sub_14137baa0(&var_300, arg2, 0xf, r8_17)
                            sub_141083500(arg2, &var_348, rbx_10 + 0x118, var_300)
                            rcx_25 = &var_300
                        
                        sub_1405d1550(rcx_25)
                        r14 = arg1
                else if (*(r14 + 0x58) == 5)
                    void* var_258
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_258, &data_143ed3ff0, 0)
                    int64_t rax_37 = 0
                    void* rbx_11 = var_258
                    
                    if (rbx_11 != 0)
                        int64_t rdx_38 = sx.q(*(rbx_11 + 0x10c))
                        void* var_250
                        int64_t* r14_6 = *(var_250 + 0x10)
                        int64_t rax_39 = r14_6[3]
                        
                        if (*(rax_39 + (rdx_38 << 3)) == 0)
                            sub_1419ccf30(r14_6, rdx_38.d)
                            rax_39 = r14_6[3]
                        
                        rax_37 = *(rax_39 + (rdx_38 << 3))
                        r15_1 = var_348
                        r14 = arg1
                    
                    var_1f8_1.q = rax_37
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_11, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_21 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_11 + 0x118) != 0xffff)
                        if (r8_21 s< 3)
                            int64_t var_2e8
                            sub_14137b7f0(&var_2e8, arg2)
                            sub_141083500(arg2, &var_348, rbx_11 + 0x118, var_2e8)
                            sub_1405d1550(&var_2e8)
                        else
                            int64_t var_2f0
                            sub_14137baa0(&var_2f0, arg2, 0xf, r8_21)
                            sub_141083500(arg2, &var_348, rbx_11 + 0x118, var_2f0)
                            sub_1405d1550(&var_2f0)
                else if (r13 == 6)
                    void* var_248
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_248, &data_143ed4150, 0)
                    int64_t rax_41 = 0
                    void* rbx_12 = var_248
                    
                    if (rbx_12 != 0)
                        int64_t rdx_45 = sx.q(*(rbx_12 + 0x10c))
                        void* var_240
                        int64_t* r14_7 = *(var_240 + 0x10)
                        int64_t rax_43 = r14_7[3]
                        
                        if (*(rax_43 + (rdx_45 << 3)) == 0)
                            sub_1419ccf30(r14_7, rdx_45.d)
                            rax_43 = r14_7[3]
                        
                        rax_41 = *(rax_43 + (rdx_45 << 3))
                        r15_1 = var_348
                        r14 = arg1
                    
                    var_1f8_1.q = rax_41
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_12, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_25 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_12 + 0x118) != 0xffff)
                        if (r8_25 s< 3)
                            int64_t var_2d8
                            sub_14137b7f0(&var_2d8, arg2)
                            sub_141083500(arg2, &var_348, rbx_12 + 0x118, var_2d8)
                            sub_1405d1550(&var_2d8)
                        else
                            int64_t var_2e0
                            sub_14137baa0(&var_2e0, arg2, 0xf, r8_25)
                            sub_141083500(arg2, &var_348, rbx_12 + 0x118, var_2e0)
                            sub_1405d1550(&var_2e0)
                else if (r13 == 7)
                    void* var_238
                    sub_1419a2ec0(*(rsi_2 + 0x5150), &var_238, &data_143ed42b0, 0)
                    int64_t rax_45 = 0
                    void* rbx_13 = var_238
                    
                    if (rbx_13 != 0)
                        int64_t rdx_52 = sx.q(*(rbx_13 + 0x10c))
                        void* var_230
                        int64_t* r14_8 = *(var_230 + 0x10)
                        int64_t rax_47 = r14_8[3]
                        
                        if (*(rax_47 + (rdx_52 << 3)) == 0)
                            sub_1419ccf30(r14_8, rdx_52.d)
                            rax_47 = r14_8[3]
                        
                        rax_45 = *(rax_47 + (rdx_52 << 3))
                        r15_1 = var_348
                        r14 = arg1
                    
                    var_1f8_1.q = rax_45
                    sub_1419870b0(arg2, &var_218, 2)
                    sub_141080ac0(rbx_13, arg2, *(arg2 + 0x1a0), *(rsi_2 + 0x10))
                    int32_t r8_29 = *(rsi_2 + 0x1548)
                    var_348 = *(arg2 + 0x1a0)
                    
                    if (*(rbx_13 + 0x118) != 0xffff)
                        if (r8_29 s< 3)
                            int64_t var_2c8
                            sub_14137b7f0(&var_2c8, arg2)
                            sub_141083500(arg2, &var_348, rbx_13 + 0x118, var_2c8)
                            sub_1405d1550(&var_2c8)
                        else
                            int64_t var_2d0
                            sub_14137baa0(&var_2d0, arg2, 0xf, r8_29)
                            sub_141083500(arg2, &var_348, rbx_13 + 0x118, var_2d0)
                            sub_1405d1550(&var_2d0)
                void* r9_5 = sub_141080be0(r15_1, arg2, *(arg2 + 0x188), *(rsi_2 + 0x10))
                void* var_220_1 = var_2a0
                void* var_228 = r15_1
                int32_t rcx_29 = *(rsi_2 + 0x270) - *(rsi_2 + 0x268)
                int32_t r8_6 = *(rsi_2 + 0x159c)
                int32_t rdx_14 = *(rsi_2 + 0x1598)
                int64_t rax_22 = data_143ec4fdc
                int32_t var_350_1 = 1
                int32_t var_2bc_1 = *(rsi_2 + 0x274) - *(rsi_2 + 0x26c)
                int32_t var_358_1 = 1
                int32_t rcx_33 = *(rsi_2 + 0x15a4) - r8_6
                int512_t zmm2
                zmm2.o = zx.o(r8_6)
                zmm2.o = _mm_cvtepi32_ps(zmm2.o)
                int32_t rcx_35 = *(rsi_2 + 0x15a0) - rdx_14
                uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_33))
                int512_t zmm3
                zmm3.o = zx.o(rcx_35)
                void** var_360_1 = &var_228
                int32_t var_378_1 = zmm0_1.d
                zmm3.o = _mm_cvtepi32_ps(zmm3.o)
                uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rdx_14))
                zmm2, zmm3 = sub_1413993b0(arg2, zmm1_1, zmm2, r9_5, zmm3, zmm0_1.d, zmm1_1.d, 
                    zmm2.d, zmm3.d, var_378_1, rcx_29.q, rax_22, var_360_1, var_358_1, var_350_1)
                sub_141096650(arg2)
                int64_t var_60
                sub_1405d1550(&var_60)
                i = i_1 + 1
                result = result_1 + 1
                i_1 = i
                result_1 = result
            while (i s< *(r14 + 0xa8))

__security_check_cookie(rax_1 ^ &var_3b8)
return result
