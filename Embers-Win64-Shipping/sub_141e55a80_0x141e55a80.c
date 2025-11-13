// 函数: sub_141e55a80
// 地址: 0x141e55a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *arg1
uint128_t zmm9 = 0x3f800000
uint128_t zmm12 = arg3

if (zmm1.d f>= 1f)
    zmm1 = __minss_xmmss_memss(zmm1.d, 0x43700000)
else
    zmm1 = 0x3f800000

zmm1.d = zmm1.d f* zmm12.d
int32_t r14 = 1
uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_38 = zmm7
uint128_t zmm8 = zx.o(0)
zmm1.d = zmm1.d f+ zmm1.d
uint128_t zmm10 = zx.o(0)
zmm1.d = zmm1.d f- 0.5f
int32_t rax_1 = int.d(zmm1.d) s>> 1

if (rax_1 s>= 1)
    r14 = rax_1

int32_t rsi = 0
uint128_t zmm11
zmm11.d = zmm12.d f/ _mm_cvtepi32_ps(zx.o(r14)).d
uint128_t zmm0

if (r14 s> 0)
    int64_t var_94_1 = 0
    
    do
        zmm6.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* zmm11.d
        zmm0, zmm6, zmm8, zmm9 = sub_141df7f80(arg2, zmm6)
        int64_t rbp_1 = sx.q(arg1[1].d)
        zmm7 = _mm_max_ss(zmm0.d, zmm8.d)
        int32_t rax_2 = (rbp_1 + 1).d
        arg1[1].d = rax_2
        int32_t var_8c_1 = zmm7.d
        
        if (rax_2 s> *(arg1 + 0x14))
            sub_1405a4f90(arg1 + 8)
        
        int64_t rax_3 = *(arg1 + 8)
        rsi += 1
        zmm10 = _mm_max_ss(zmm7.d, zmm10.d)
        *(rax_3 + rbp_1 * 0x10) = zmm6.d.o
    while (rsi s< r14)

uint64_t result

if (zmm10.d f< 9.99999975e-05f)
label_141e560ad:
    result = zx.q(*(arg1 + 0x14))
    arg1[1].d = 0
    int32_t temp0_11 = result.d
    
    if (temp0_11 s< 0 && temp0_11 != 0)
        return sub_1405a5410(arg1 + 8, 0)
else
    void* rax_4 = *(arg1 + 8)
    int64_t i_2 = sx.q(arg1[1].d)
    void* rcx_6 = (i_2 << 4) + rax_4
    
    if (rax_4 != rcx_6)
        zmm1.d = zmm9.d f/ zmm10.d
        
        do
            zmm0.d = zmm1.d f* *(rax_4 + 0xc)
            *(rax_4 + 0xc) = zmm0.d
            rax_4 += 0x10
        while (rax_4 != rcx_6)
        
        i_2 = zx.q(arg1[1].d)
    
    int32_t r14_1 = 0
    int32_t i_4 = arg1[1].d - 2
    
    if (i_4 s> 0)
        int64_t rsi_1 = 0
        uint64_t i_3 = zx.q(i_4)
        uint64_t i
        
        do
            int64_t r9_1 = *(arg1 + 8)
            i_2 = zx.q(arg1[1].d)
            zmm0.d = (*(rsi_1 + r9_1 + 0xc)).d f- *(rsi_1 + r9_1 + 0x1c)
            
            if (_mm_and_ps(zmm0, 0x7fffffff).d f> *(arg1 + 4))
                r14_1 += 1
                rsi_1 += 0x10
            else
                int32_t rax_7 = i_2.d - (r14_1 + 1)
                
                if (rax_7 != 1)
                    memmove((sx.q(r14_1 + 1) << 4) + r9_1, (sx.q(r14_1 + 2) << 4) + r9_1, 
                        (rax_7 - 1) << 4)
                    i_2 = zx.q(arg1[1].d)
                
                i_2 = zx.q(i_2.d - 1)
                arg1[1].d = i_2.d
            
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (*(arg1 + 0x14) != i_2.d)
        sub_1405a5410(arg1 + 8, i_2.d)
    
    if (arg1[1].d s<= 2)
        goto label_141e560ad
    
    uint128_t zmm5 = zmm8
    int64_t r9_2 = 0
    *(arg1 + 0x18) = 0
    arg1[2].d = 0
    int64_t r8_4 = sx.q(arg1[1].d) - 1
    uint128_t zmm3
    uint128_t zmm4
    
    if (r8_4 s>= 4)
        int32_t* r10_1 = 0x30
        i_2 = ((r8_4 - 4) u>> 2) + 1
        r9_2 = i_2 << 2
        int64_t i_1
        
        do
            int64_t rcx_12 = *(arg1 + 8)
            *(r10_1 + rcx_12 - 0x2c) = zmm8.d
            *(r10_1 + rcx_12 - 0x28) = zmm5.d
            zmm3 = *(r10_1 + rcx_12 - 0x24)
            zmm1.d = zmm3.d f* 100f
            zmm4.d = (*(*(arg1 + 8) + r10_1 - 0x20)).d f- *(r10_1 + rcx_12 - 0x30)
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm4.d f* zmm3.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x18)
            *(arg1 + 0x18) = zmm0.d
            zmm0.d = zmm4.d f/ zmm1.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = zmm3.d f* 0.99000001f
            zmm1.d = zmm9.d f- zmm0.d
            arg3.d = zmm8.d f- *(r10_1 + rcx_12 - 0x2c)
            zmm4.d = zmm4.d f/ zmm1.d
            arg3.d = arg3.d f* zmm3.d
            zmm5.d = zmm5.d f+ zmm4.d
            arg3.d = arg3.d f+ *(arg1 + 0x1c)
            *(arg1 + 0x1c) = arg3.d
            zmm0.d = zmm5.d f- *(r10_1 + rcx_12 - 0x28)
            zmm0.d = zmm0.d f* zmm3.d
            zmm0.d = zmm0.d f+ arg1[2].d
            arg1[2].d = zmm0.d
            int64_t rcx_13 = *(arg1 + 8)
            *(rcx_13 + r10_1 - 0x1c) = zmm8.d
            *(rcx_13 + r10_1 - 0x18) = zmm5.d
            zmm3 = *(rcx_13 + r10_1 - 0x14)
            zmm1.d = zmm3.d f* 100f
            zmm4.d = (*(*(arg1 + 8) + r10_1 - 0x10)).d f- *(rcx_13 + r10_1 - 0x20)
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm4.d f* zmm3.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x18)
            *(arg1 + 0x18) = zmm0.d
            zmm0.d = zmm4.d f/ zmm1.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = zmm3.d f* 0.99000001f
            zmm1.d = zmm9.d f- zmm0.d
            arg3.d = zmm8.d f- *(rcx_13 + r10_1 - 0x1c)
            zmm4.d = zmm4.d f/ zmm1.d
            arg3.d = arg3.d f* zmm3.d
            zmm5.d = zmm5.d f+ zmm4.d
            arg3.d = arg3.d f+ *(arg1 + 0x1c)
            *(arg1 + 0x1c) = arg3.d
            zmm0.d = zmm5.d f- *(rcx_13 + r10_1 - 0x18)
            zmm0.d = zmm0.d f* zmm3.d
            zmm0.d = zmm0.d f+ arg1[2].d
            arg1[2].d = zmm0.d
            int64_t rcx_14 = *(arg1 + 8)
            *(r10_1 + rcx_14 - 0xc) = zmm8.d
            *(r10_1 + rcx_14 - 8) = zmm5.d
            zmm3 = *(r10_1 + rcx_14 - 4)
            zmm1.d = zmm3.d f* 100f
            zmm4.d = (*(*(arg1 + 8) + r10_1)).d f- *(r10_1 + rcx_14 - 0x10)
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm4.d f* zmm3.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x18)
            *(arg1 + 0x18) = zmm0.d
            zmm0.d = zmm4.d f/ zmm1.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = zmm3.d f* 0.99000001f
            zmm1.d = zmm9.d f- zmm0.d
            arg3.d = zmm8.d f- *(r10_1 + rcx_14 - 0xc)
            zmm4.d = zmm4.d f/ zmm1.d
            arg3.d = arg3.d f* zmm3.d
            zmm5.d = zmm5.d f+ zmm4.d
            arg3.d = arg3.d f+ *(arg1 + 0x1c)
            *(arg1 + 0x1c) = arg3.d
            zmm0.d = zmm5.d f- *(r10_1 + rcx_14 - 8)
            zmm0.d = zmm0.d f* zmm3.d
            zmm0.d = zmm0.d f+ arg1[2].d
            arg1[2].d = zmm0.d
            int64_t rcx_15 = *(arg1 + 8)
            *(r10_1 + rcx_15 + 4) = zmm8.d
            *(r10_1 + rcx_15 + 8) = zmm5.d
            zmm3 = *(r10_1 + rcx_15 + 0xc)
            zmm1.d = zmm3.d f* 100f
            zmm4.d = (*(*(arg1 + 8) + r10_1 + 0x10)).d f- *(r10_1 + rcx_15)
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm4.d f* zmm3.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x18)
            *(arg1 + 0x18) = zmm0.d
            zmm0.d = zmm4.d f/ zmm1.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = zmm3.d f* 0.99000001f
            zmm1.d = zmm9.d f- zmm0.d
            arg3.d = zmm8.d f- *(r10_1 + rcx_15 + 4)
            zmm4.d = zmm4.d f/ zmm1.d
            arg3.d = arg3.d f* zmm3.d
            zmm5.d = zmm5.d f+ zmm4.d
            arg3.d = arg3.d f+ *(arg1 + 0x1c)
            *(arg1 + 0x1c) = arg3.d
            zmm0.d = zmm5.d f- *(r10_1 + rcx_15 + 8)
            r10_1 = &r10_1[0x10]
            zmm0.d = zmm0.d f* zmm3.d
            zmm0.d = zmm0.d f+ arg1[2].d
            arg1[2].d = zmm0.d
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r9_2 s< r8_4)
        i_2 = r9_2 << 4
        
        do
            int64_t rcx_16 = *(arg1 + 8)
            r9_2 += 1
            zmm3 = *(i_2 + rcx_16 + 0xc)
            *(i_2 + rcx_16 + 4) = zmm8.d
            *(i_2 + rcx_16 + 8) = zmm5.d
            zmm1.d = zmm3.d f* 100f
            zmm4.d = (*(i_2 + *(arg1 + 8) + 0x10)).d f- *(i_2 + rcx_16)
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm4.d f* zmm3.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x18)
            *(arg1 + 0x18) = zmm0.d
            zmm0.d = zmm4.d f/ zmm1.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = zmm3.d f* 0.99000001f
            zmm1.d = zmm9.d f- zmm0.d
            arg3.d = zmm8.d f- *(i_2 + rcx_16 + 4)
            zmm4.d = zmm4.d f/ zmm1.d
            arg3.d = arg3.d f* zmm3.d
            zmm5.d = zmm5.d f+ zmm4.d
            arg3.d = arg3.d f+ *(arg1 + 0x1c)
            *(arg1 + 0x1c) = arg3.d
            zmm0.d = zmm5.d f- *(i_2 + rcx_16 + 8)
            i_2 += 0x10
            zmm0.d = zmm0.d f* zmm3.d
            zmm0.d = zmm0.d f+ arg1[2].d
            arg1[2].d = zmm0.d
        while (r9_2 s< r8_4)
    
    i_2.b = 1
    int32_t* r8_6 = (r8_4 << 4) + *(arg1 + 8)
    *r8_6 = zmm12.d
    r8_6[1] = zmm8.d
    r8_6[2] = zmm5.d
    result = *(arg1 + 8)
    int64_t rcx_18 = sx.q(arg1[1].d) * 2
    zmm4 = *(result + (rcx_18 << 3) - 0xc)
    zmm1 = *(result + (rcx_18 << 3) - 0x10)
    zmm3 = *(result + (rcx_18 << 3) - 8)
    
    if (_mm_and_ps(zmm4, 0x7fffffff).d f<= 9.99999994e-09f)
        i_2.b = 0
    else if (not(_mm_and_ps(zmm3, 0x7fffffff).d f> 9.99999994e-09f))
        i_2.b = 0
    
    zmm0.d = zmm1.d f- zmm4.d
    
    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999994e-09f)
        goto label_141e560ad
    
    zmm1.d = zmm1.d f- zmm3.d
    
    if (_mm_and_ps(zmm1, 0x7fffffff).d f<= 9.99999994e-09f || i_2.b == 0)
        goto label_141e560ad

return result
