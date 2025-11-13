// 函数: sub_141a0eb30
// 地址: 0x141a0eb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = *(arg1 + 0x20)
int64_t* rbx = arg3
void* r13 = arg1
void* rsi = arg2
void* rax_1
int64_t rax_2

if (rdi != 0)
    rax_1, arg2 = sub_141a23150()
    arg3 = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> arg3[7].d || *(arg3[6] + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

int32_t r12 = *(r13 + 0x108)
uint128_t zmm7 = zx.o(0)
float zmm8[0x4] = *(r13 + 0x118)
uint128_t zmm11 = zx.o(*(r13 + 0x100))
int32_t var_e0
uint128_t zmm0
uint128_t zmm1

if (rdi != 0)
    void* rax_4 = *(rdi + 0x130)
    zmm0 = zx.o(*(r13 + 0x410))
    zmm1 = _mm_max_ss((*(rdi + 0x278)).d, 0)
    uint128_t zmm2 = zx.o(*(rax_4 + 0x134))
    var_e0 = *(rax_4 + 0x13c)
    uint64_t var_e8_1 = zmm2.q
    zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm1.d
    zmm7.d = zmm0.d f* 0.75f
    zmm7.d = zmm7.d f* __andps_xmmxud_memxud(zmm2, data_142d3f770).d

int32_t rdi_1 = *(rsi + 0x2c)
int32_t arg_20 = rdi_1
int32_t result_2

if (rdi_1 s< 3)
    result_2 = *(r13 + 0x5a0)
else
    arg2.b = 1
    result_2 = sub_1419edec0(r13, arg2.b)

uint64_t result = sx.q(result_2)
int32_t rdx = 0
int64_t rcx_2 = 0
int32_t arg_10 = 0
int64_t var_f0 = 0
uint128_t zmm6
uint128_t var_48 = zmm6
uint64_t result_1 = result
float var_b8[0x4]

if (result s> 0)
    do
        uint64_t result_4
        
        if (rdi_1 s< 3)
            result = *(r13 + 0x598)
            result_4 = *(result + (rcx_2 << 3))
        else
            arg3.b = 1
            result = sub_1419ede80(r13, rdx, arg3.b)
            rcx_2 = var_f0
            result_4 = result
            rdx = arg_10
        
        if (result_4 != 0)
            int64_t rax_6 = *result_4
            int64_t* var_c8 = nullptr
            int32_t var_c0_1 = 0
            (*(rax_6 + 0x2a0))(result_4, &var_c8, 3, 0, rdi_1, 0, r12, var_f0, result_1, var_e0)
            void* rax_7 = sub_141a225c0()
            void* rdx_2 = *(result_4 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                result_4 = 0
            
            int32_t r15_1 = 0
            
            if (var_c0_1 s> 0)
                int64_t r14_1 = 0
                
                do
                    void* rsi_1 = *(var_c8 + r14_1)
                    
                    if (rsi_1 != 0)
                        void* rax_11 = sub_1425b3af0()
                        void* rdx_3 = *(rsi_1 + 0x10)
                        int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                        
                        if (rax_12.d s<= *(rdx_3 + 0x38)
                                && *(*(rdx_3 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                            int64_t rdi_2 = sx.q(rbx[1].d)
                            int32_t rax_14 = (rdi_2 + 1).d
                            rbx[1].d = rax_14
                            
                            if (rax_14 s> *(rbx + 0xc))
                                sub_1405c4f50(rbx)
                            
                            int64_t r9_3 = rdi_2 * 0x30
                            void** r9_4 = r9_3 + *rbx
                            
                            if (r9_3 == neg.q(*rbx))
                                r9_4 = nullptr
                            else
                                __builtin_memset(r9_4, 0, 0x24)
                                *(r9_4 + 0x2c) &= 0xfffffffe
                                *(r9_4 + 0x24) = 0x3f800000
                            
                            int32_t var_b0_1 = r12
                            int64_t var_ac_1 = (_mm_unpacklo_ps(zmm8, zmm8[0].q)).q
                            float var_a4_1 = zmm8[0]
                            float var_a0_1 = zmm8[0]
                            *(r9_4 + 0x24) = zmm7.d
                            *r9_4 = rsi_1
                            var_b8[0].q = zmm11.q
                            *(r9_4 + 8) = var_b8
                            r9_4[3] = var_ac_1
                            r9_4[4].d = var_a0_1
                            
                            if (result_4 != 0)
                                int64_t* r8_2 = *(result_4 + 0x410)
                                void* rcx_9 = r8_2 + sx.q(*(result_4 + 0x418)) * 0xc
                                float zmm0_1[0x4]
                                
                                if (r8_2 == rcx_9)
                                label_141a0ee40:
                                    zmm0_1 = 0x3f800000
                                else
                                    while (*r8_2 != *(rsi_1 + 0x18))
                                        r8_2 += 0xc
                                        
                                        if (r8_2 == rcx_9)
                                            goto label_141a0ee40
                                    
                                    zmm0_1 = r8_2[1].d
                                
                                zmm0_1[0] = zmm0_1[0] f* zmm7.d
                                *(r9_4 + 0x24) = zmm0_1[0]
                    
                    r15_1 += 1
                    r14_1 += 8
                while (r15_1 s< var_c0_1)
                
                r13 = arg1
                rdi_1 = arg_20
            
            void* rax_18 = sub_1419edf30(r13)
            int64_t* rcx_11
            
            if (rax_18 != 0)
                rcx_11 = *rax_18
            
            void* const rsi_2
            
            if (rax_18 == 0 || rcx_11 == 0)
                rsi_2 = nullptr
            else
                int64_t rdx_6 = *rcx_11
                rsi_2 = (*(rdx_6 + 0x38))(rcx_11, rdx_6)
            
            result, arg3 = sub_1423d2320(rdi_1)
            int32_t r15_2
            r15_2.b = result.b == 0
            
            if (rsi_2 != 0)
                result = sub_1420e6790(rsi_2, r15_2)
                
                if (result.b != 0)
                    zmm1 = *(rsi_2 + 0xd0)
                    
                    if (not(zmm1.d f<= 9.99999994e-09f))
                        zmm0 = *(rsi_2 + 0xd4)
                        
                        if (not(zmm0.d f<= 9.99999994e-09f))
                            int64_t rdi_3 = sx.q(rbx[1].d)
                            int32_t rax_20 = (rdi_3 + 1).d
                            zmm6.d = zmm7.d f/ _mm_min_ss(zmm0.d, zmm1.d).d
                            rbx[1].d = rax_20
                            
                            if (rax_20 s> *(rbx + 0xc))
                                sub_1405c4f50(rbx)
                            
                            int64_t rdi_5 = rdi_3 * 0x30
                            int64_t* rdi_6 = rdi_5 + *rbx
                            
                            if (rdi_5 != neg.q(*rbx))
                                *rdi_6 = sub_1420e4c50(rsi_2, r15_2)
                                *(rdi_6 + 8) = *(r13 + 0x100)
                                rdi_6[3] = *(r13 + 0x110)
                                int32_t rax_22 = *(r13 + 0x118)
                                *(rdi_6 + 0x2c) &= 0xfffffffe
                                *(rdi_6 + 0x24) = zmm6.d
                                rdi_6[4].d = rax_22
                                rdi_6[5].d = 0
                            
                            int64_t rdi_7 = sx.q(rbx[1].d)
                            int32_t rax_23 = (rdi_7 + 1).d
                            rbx[1].d = rax_23
                            
                            if (rax_23 s> *(rbx + 0xc))
                                sub_1405c4f50(rbx)
                            
                            int64_t rdi_9 = rdi_7 * 0x30
                            int64_t* rdi_10 = rdi_9 + *rbx
                            
                            if (rdi_9 != neg.q(*rbx))
                                *rdi_10 = sub_1405f7040(rsi_2)
                                *(rdi_10 + 8) = *(r13 + 0x100)
                                rdi_10[3] = *(r13 + 0x110)
                                int32_t rax_25 = *(r13 + 0x118)
                                *(rdi_10 + 0x2c) &= 0xfffffffe
                                *(rdi_10 + 0x24) = zmm6.d
                                rdi_10[4].d = rax_25
                                rdi_10[5].d = 0
                            
                            int64_t rdi_11 = sx.q(rbx[1].d)
                            result = zx.q((rdi_11 + 1).d)
                            rbx[1].d = result.d
                            
                            if (result.d s> *(rbx + 0xc))
                                result, arg3 = sub_1405c4f50(rbx)
                            
                            int64_t rdi_13 = rdi_11 * 0x30
                            int64_t* rdi_14 = rdi_13 + *rbx
                            
                            if (rdi_13 != neg.q(*rbx))
                                *rdi_14 = sub_140963350(rsi_2)
                                *(rdi_14 + 8) = *(r13 + 0x100)
                                rdi_14[3] = *(r13 + 0x110)
                                result = zx.q(*(r13 + 0x118))
                                *(rdi_14 + 0x2c) &= 0xfffffffe
                                *(rdi_14 + 0x24) = zmm6.d
                                rdi_14[4].d = result.d
                                rdi_14[5].d = 0
            
            if (rax_18 != 0)
                int64_t* rcx_20 = *(rax_18 + 8)
                
                if (rcx_20 != 0)
                    result, arg3 = (*(*rcx_20 + 0x30))(rcx_20)
                    uint64_t result_3 = result
                    
                    if (result != 0 && *(result + 0x20) != 0)
                        zmm1 = *(result + 0x28)
                        
                        if (not(zmm1.d f<= 9.99999994e-09f))
                            zmm0 = *(result + 0x2c)
                            
                            if (not(zmm0.d f<= 9.99999994e-09f))
                                int64_t rdi_15 = sx.q(rbx[1].d)
                                result = zx.q((rdi_15 + 1).d)
                                zmm6.d = zmm7.d f/ _mm_min_ss(zmm0.d, zmm1.d).d
                                rbx[1].d = result.d
                                
                                if (result.d s> *(rbx + 0xc))
                                    result, arg3 = sub_1405c4f50(rbx)
                                
                                int64_t rdi_17 = rdi_15 * 0x30
                                int64_t* rdi_18 = rdi_17 + *rbx
                                
                                if (rdi_17 != neg.q(*rbx))
                                    *rdi_18 = sub_1408d7580(result_3)
                                    *(rdi_18 + 8) = *(r13 + 0x100)
                                    rdi_18[3] = *(r13 + 0x110)
                                    result = zx.q(*(r13 + 0x118))
                                    *(rdi_18 + 0x2c) &= 0xfffffffe
                                    *(rdi_18 + 0x24) = zmm6.d
                                    rdi_18[4].d = result.d
                                    rdi_18[5].d = 0
            
            int64_t* rcx_23 = var_c8
            
            if (rcx_23 != 0)
                result, arg3 = sub_140a74f90(rcx_23)
            
            rdi_1 = arg_20
            rdx = arg_10
            rcx_2 = var_f0
        
        rdx += 1
        rcx_2 += 1
        arg_10 = rdx
        var_f0 = rcx_2
    while (rcx_2 s< result_1)

int32_t i = 0

if (*(r13 + 0x518) s> 0)
    result_1.d = zmm8[0]
    int64_t r14_3 = 0
    result_1:4.d = zmm8[0]
    float var_e0_1 = zmm8[0]
    
    do
        int64_t rdi_19 = sx.q(rbx[1].d)
        int32_t rax_29 = (rdi_19 + 1).d
        rbx[1].d = rax_29
        
        if (rax_29 s> *(rbx + 0xc))
            sub_1405c4f50(rbx)
        
        int64_t rdx_15 = rdi_19 * 0x30
        int64_t* rdx_16 = rdx_15 + *rbx
        
        if (rdx_15 == neg.q(*rbx))
            rdx_16 = nullptr
        else
            __builtin_memset(rdx_16, 0, 0x24)
            *(rdx_16 + 0x2c) &= 0xfffffffe
            *(rdx_16 + 0x24) = 0x3f800000
        
        *(rdx_16 + 0x24) = zmm7.d
        i += 1
        int32_t var_b0_2 = r12
        float var_a4_2 = var_e0_1
        float var_a0_2 = zmm8[0]
        zmm0.q = zmm11.q
        *(rdx_16 + 8) = zmm0
        var_b8 = zmm0
        uint64_t var_ac_2
        rdx_16[3] = var_ac_2
        rdx_16[4].d = var_a0_2
        result = *(r13 + 0x510)
        int64_t rcx_25 = *(r14_3 + result)
        r14_3 += 8
        *rdx_16 = rcx_25
    while (i s< *(r13 + 0x518))

if (*(r13 + 0x4f8) != 0)
    int64_t rdi_20 = sx.q(rbx[1].d)
    int32_t rax_31 = (rdi_20 + 1).d
    rbx[1].d = rax_31
    
    if (rax_31 s> *(rbx + 0xc))
        sub_1405c4f50(rbx)
    
    int64_t r8_4 = rdi_20 * 0x30
    uint64_t* r8_5 = r8_4 + *rbx
    
    if (r8_4 == neg.q(*rbx))
        r8_5 = nullptr
    else
        __builtin_memset(r8_5, 0, 0x24)
        *(r8_5 + 0x2c) &= 0xfffffffe
        *(r8_5 + 0x24) = 0x3f800000
    
    int32_t var_b0_3 = r12
    uint64_t var_ac_3 = (_mm_unpacklo_ps(zmm8, zmm8[0].q)).q
    float var_d0_2 = zmm8[0]
    zmm0.q = zmm11.q
    *(r8_5 + 8) = zmm0
    float var_a4_3 = var_d0_2
    var_b8 = zmm0
    r8_5[3] = var_ac_3
    r8_5[4].d = zmm8[0]
    void* rcx_27 = *(*(r13 + 0x4f8) + 0xd0)
    int32_t rax_35
    
    if (rcx_27 == 0)
        rax_35 = 0
    else
        rax_35 = *(rcx_27 + 4)
    
    int32_t rcx_28 = *(r13 + 0x554)
    
    if (rcx_28 s< 0)
        zmm1.d = _mm_cvtepi32_ps(zx.o(rax_35)).d f/ _mm_cvtepi32_ps(zx.o(*(r13 + 0x410) + 1)).d
        zmm1.d = zmm1.d f* zmm7.d
    else
        zmm1 = _mm_cvtepi32_ps(zx.o(0xffffffff << (0xd - rcx_28.b)))
    
    *(r8_5 + 0x24) = zmm1.d
    result = *(r13 + 0x4f8)
    *r8_5 = result

if (*(r13 + 0x480) != 0)
    int64_t rdi_21 = sx.q(rbx[1].d)
    int32_t rax_39 = (rdi_21 + 1).d
    rbx[1].d = rax_39
    
    if (rax_39 s> *(rbx + 0xc))
        sub_1405c4f50(rbx)
    
    int64_t rcx_32 = rdi_21 * 0x30
    uint64_t* rcx_33 = rcx_32 + *rbx
    
    if (rcx_32 == neg.q(*rbx))
        rcx_33 = nullptr
    else
        __builtin_memset(rcx_33, 0, 0x24)
        *(rcx_33 + 0x2c) &= 0xfffffffe
        *(rcx_33 + 0x24) = 0x3f800000
    
    int32_t var_b0_4 = r12
    uint64_t var_ac_4 = (_mm_unpacklo_ps(zmm8, zmm8[0].q)).q
    float var_d0_3 = zmm8[0]
    zmm0.q = zmm11.q
    *(rcx_33 + 8) = zmm0
    float var_a4_4 = var_d0_3
    rcx_33[3] = var_ac_4
    rcx_33[4].d = zmm8[0]
    *(rcx_33 + 0x24) = zmm7.d
    result = *(r13 + 0x480)
    *rcx_33 = result

return result
