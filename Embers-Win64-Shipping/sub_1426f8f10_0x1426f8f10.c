// 函数: sub_1426f8f10
// 地址: 0x1426f8f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 0x28)
int32_t r9 = *(arg1 + 0x40)
uint128_t zmm6
uint128_t var_38 = zmm6
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm12 = *(arg1 + 4)
int32_t rdx = r9 - 1
uint128_t zmm13 = 0x3f800000
int128_t zmm14 = *(arg1 + 0x24)
uint128_t zmm1
zmm1.d = (*arg3).d f- zmm14.d
uint128_t zmm3
zmm3.d = 1f f/ zmm12.d
zmm1.d = zmm1.d f* zmm3.d
int32_t rax = int.d(zmm1.d)
zmm1.d = (*(arg3 + 4)).d f- zmm4
zmm1.d = zmm1.d f* zmm3.d
int32_t rcx = int.d(zmm1.d)
int32_t rbx

if (rcx s>= 0)
    rbx = rdx
    
    if (rcx s< rdx)
        rbx = rcx
else
    rbx = 0

int32_t rcx_2 = *(arg1 + 0x3c) - 1
int32_t rsi

if (rax s>= 0)
    rsi = rcx_2
    
    if (rax s< rcx_2)
        rsi = rax
else
    rsi = 0

int64_t r10 = sx.q(*(arg2 + 0x30))
int64_t* r14 = &data_143b58088
int32_t var_f8 = rsi
int32_t var_f4 = rbx
int32_t var_f0 = 0
int64_t* r8_2

if (r10.d s<= 0)
    r8_2 = &data_143b58088
else
    r8_2 = (sx.q(*(arg2 + 0x30) - 1) << 5) + *(arg2 + 0x28)

uint128_t zmm2 = zx.o(*r8_2)
zmm1.d = zmm2.d f- zmm14.d
int32_t result_2 = r8_2[1].d
uint64_t var_c8 = zmm2.q
zmm1.d = zmm1.d f* zmm3.d
int32_t rax_4 = int.d(zmm1.d)
zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- zmm4
zmm1.d = zmm1.d f* zmm3.d
int32_t r8_3 = int.d(zmm1.d)

if (r8_3 s< 0)
    rdx = 0
else if (r8_3 s< rdx)
    rdx = r8_3

if (rax_4 s< 0)
    rcx_2 = 0
else if (rax_4 s< rcx_2)
    rcx_2 = rax_4

int32_t r13 = arg4 + 1
int32_t var_e8 = rcx_2
int32_t var_e4 = rdx
int32_t var_e0 = 0
uint64_t var_d8
int32_t r8_4
uint128_t zmm0
uint128_t zmm7
uint128_t zmm8
uint128_t zmm10
uint128_t zmm11

if (r13 s>= r10.d)
label_1426f90d4:
    r8_4 = *(arg1 + 0x3c)
else
    int64_t r11_1 = *(arg2 + 0x28)
    int64_t rdx_1 = sx.q(r13)
    int128_t* rax_7 = (rdx_1 << 5) + r11_1
    
    while (true)
        zmm0 = *rax_7
        
        if (not(zmm0.d f<= (*(arg1 + 8)).d) && not(zmm0.d f>= *(arg1 + 0x14)))
            zmm0 = *(rax_7 + 4)
            
            if (not(zmm0.d f<= *(arg1 + 0xc)) && not(zmm0.d f>= *(arg1 + 0x18)))
                zmm0 = *(rax_7 + 8)
                
                if (not(zmm0.d f<= *(arg1 + 0x10)) && not(zmm0.d f>= *(arg1 + 0x1c)))
                    r13 += 1
                    rdx_1 += 1
                    rax_7 = &rax_7[2]
                    
                    if (rdx_1 s>= r10)
                        goto label_1426f90d4
                    
                    continue
        
        int32_t arg_20
        zmm7, zmm8, zmm10, zmm11, zmm13 = sub_140ad9790(arg1 + 8, (sx.q(r13) << 5) + r11_1, 
            (sx.q(r13 - 1) << 5) + r11_1, &data_143dbb1f8, &var_d8, &var_c8, &arg_20)
        zmm12 = *(arg1 + 4)
        zmm14 = *(arg1 + 0x24)
        r9 = *(arg1 + 0x40)
        zmm1.d = var_d8.d.d f- zmm14.d
        zmm2.d = zmm13.d f/ zmm12.d
        int32_t rcx_4 = r9 - 1
        zmm1.d = zmm1.d f* zmm2.d
        int32_t rdx_5 = int.d(zmm1.d)
        zmm1.d = var_d8:4.d.d f- *(arg1 + 0x28)
        zmm1.d = zmm1.d f* zmm2.d
        int32_t rax_9 = int.d(zmm1.d)
        
        if (rax_9 s< 0)
            rcx_4 = 0
        else if (rax_9 s< rcx_4)
            rcx_4 = rax_9
        
        r8_4 = *(arg1 + 0x3c)
        int32_t rax_10 = r8_4 - 1
        
        if (rdx_5 s>= 0)
            int32_t var_e4_2 = rcx_4
            int32_t var_e0_2 = 0
            
            if (rdx_5 s< rax_10)
                rax_10 = rdx_5
            
            var_e8 = rax_10
        else
            int32_t var_e4_1 = rcx_4
            var_e8 = 0
            int32_t var_e0_1 = 0
        
        break

zmm6 = zx.o(var_f8.q)
var_d8 = zmm6.q
int32_t var_d0 = 0
int32_t r9_2

if (rsi s< 0 || rsi s>= r8_4 || rbx s< 0 || rbx s>= r9)
    r9_2 = -1
else
    r9_2 = r9 * rsi + rbx

rsi.b = 0

if (r9_2 == 0xffffffff || *(sx.q(r9_2) + *(arg1 + 0x48)) != 0)
    uint128_t var_48_1 = zmm7
    uint128_t var_58_1 = zmm8
    uint128_t var_78_1 = zmm10
    uint128_t var_88_1 = zmm11
    
    if (*(arg2 + 0x30) s> 0)
        r14 = (sx.q(*(arg2 + 0x30) - 1) << 5) + *(arg2 + 0x28)
    
    zmm1 = zx.o(*r14)
    zmm11 = *arg3
    zmm10 = *(arg3 + 4)
    int32_t rax_14 = r14[1].d
    zmm7.d = zmm11.d f- zmm1.d
    zmm8.d = zmm10.d f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
    var_c8 = zmm1.q
    zmm1.d = (*(arg3 + 8)).d f- rax_14
    zmm0.d = zmm7.d f* zmm7.d
    zmm2.d = zmm8.d f* zmm8.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    
    if (not(zmm2.d f== zmm13.d))
        if (zmm2.d f>= 9.99999994e-09f)
            uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- zmm1.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm1.d = zmm5.d f* zmm5.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
            zmm5.d = zmm5.d f+ zmm0.d
            zmm7.d = zmm7.d f* zmm5.d
            zmm8.d = zmm8.d f* zmm5.d
        else
            zmm7 = data_143dbb1f8
            zmm8 = data_143dbb1fc
    
    int32_t r10_1 = *(arg1 + 0x40)
    zmm3 = *(arg1 + 0x28)
    zmm7.d = zmm7.d f* 10f
    int32_t r12_1 = *(arg1 + 0x3c)
    zmm8.d = zmm8.d f* 10f
    int32_t r9_3 = 1
    var_c8 = zmm6.q
    int32_t rbx_1 = var_c8:4.d
    rsi = var_c8.d
    zmm13.d = zmm13.d f/ zmm12.d
    
    while (true)
        zmm2.d = float.s(r9_3)
        zmm1.d = zmm7.d f* zmm2.d
        zmm1.d = zmm1.d f+ zmm11.d
        zmm1.d = zmm1.d f- zmm14.d
        zmm1.d = zmm1.d f* zmm13.d
        int32_t rax_15 = int.d(zmm1.d)
        zmm1.d = zmm8.d f* zmm2.d
        zmm1.d = zmm1.d f+ zmm10.d
        zmm1.d = zmm1.d f- zmm3.d
        zmm1.d = zmm1.d f* zmm13.d
        int32_t rcx_6 = int.d(zmm1.d)
        int32_t r8_8
        
        if (rcx_6 s>= 0)
            r8_8 = r10_1 - 1
            
            if (rcx_6 s< r10_1 - 1)
                r8_8 = rcx_6
        else
            r8_8 = 0
        
        int32_t rdx_6
        
        if (rax_15 s>= 0)
            rdx_6 = r8_4 - 1
            
            if (rax_15 s< r8_4 - 1)
                rdx_6 = rax_15
        else
            rdx_6 = 0
        
        if (rdx_6 != rsi || r8_8 != rbx_1)
            rsi = rdx_6
            rbx_1 = r8_8
            
            if (rdx_6 s>= 0 && rdx_6 s< r12_1 && r8_8 s>= 0 && r8_8 s< r10_1)
                int32_t rax_18 = r10_1 * rdx_6 + r8_8
                
                if (rax_18 != 0xffffffff && *(sx.q(rax_18) + *(arg1 + 0x48)) == 0)
                    var_f8 = rdx_6
                    rsi.b = 1
                    int32_t var_f4_1 = r8_8
                    int32_t var_f0_1 = 0
                    break
        
        r9_3 += 1
        
        if (r9_3 s>= 0xf)
            rsi.b = 0
            break

*arg6 = r13 - 1
arg5[1].d = 0

if (*(arg5 + 0xc) s<= 0xffffffff)
    sub_140638cc0(arg5, 0)

var_c8 = 0
result_2.q = 0
int32_t result = sub_1426f86c0(arg1, &var_f8, &var_e8, &var_c8)
uint64_t r12_2 = var_c8

if (result.b != 0)
    uint128_t zmm0_1
    
    if (rsi.b != 0)
        int32_t rcx_11 = var_d8:4.d
        int32_t rdx_8 = var_d8.d
        int64_t rsi_1 = sx.q(arg5[1].d)
        int32_t rax_22 = *(arg1 + 0x40) * rdx_8
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_11))
        int64_t rax_24 = *(arg1 + 0x58)
        zmm0_1.d = zmm0_1.d f+ 0.5f
        zmm2 = _mm_cvtepi32_ps(zx.o(rdx_8))
        zmm0_1.d = zmm0_1.d f* *(arg1 + 4)
        zmm2.d = zmm2.d f+ 0.5f
        zmm0_1.d = zmm0_1.d f+ *(arg1 + 0x28)
        zmm2.d = zmm2.d f* *(arg1 + 4)
        int32_t var_e4_3 = zmm0_1.d
        int32_t rax_25 = (rsi_1 + 1).d
        zmm2.d = zmm2.d f+ *(arg1 + 0x24)
        int32_t var_e0_3 = (*(rax_24 + (sx.q(rax_22 + rcx_11) << 2))).d
        arg5[1].d = rax_25
        var_e8 = zmm2.d
        
        if (rax_25 s> *(arg5 + 0xc))
            sub_140638a00(arg5)
        
        int64_t rcx_14 = *arg5
        int64_t rdx_10 = rsi_1 * 3
        *(rcx_14 + (rdx_10 << 2)) = var_e8.q
        *(rcx_14 + (rdx_10 << 2) + 8) = var_e0_3
    
    result = result_2
    
    if (result s> 0)
        uint64_t rsi_2 = r12_2
        uint64_t r15_2 = zx.q(result)
        uint64_t i
        
        do
            int32_t rcx_15 = *rsi_2
            int32_t rdx_11 = *(rsi_2 + 4)
            int64_t r14_4 = sx.q(arg5[1].d)
            int32_t rax_28 = *(arg1 + 0x40) * rcx_15
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_15))
            int64_t rax_30 = *(arg1 + 0x58)
            zmm2.d = zmm2.d f+ 0.5f
            zmm0_1 = _mm_cvtepi32_ps(zx.o(rdx_11))
            zmm2.d = zmm2.d f* *(arg1 + 4)
            zmm0_1.d = zmm0_1.d f+ 0.5f
            zmm2.d = zmm2.d f+ *(arg1 + 0x24)
            zmm0_1.d = zmm0_1.d f* *(arg1 + 4)
            var_e8 = zmm2.d
            zmm0_1.d = zmm0_1.d f+ *(arg1 + 0x28)
            int32_t var_e4_4 = zmm0_1.d
            int32_t rax_31 = (r14_4 + 1).d
            int32_t result_1 = (*(rax_30 + (sx.q(rax_28 + rdx_11) << 2))).d
            arg5[1].d = rax_31
            
            if (rax_31 s> *(arg5 + 0xc))
                sub_140638a00(arg5)
            
            int64_t rdx_13 = *arg5
            int64_t r8_10 = r14_4 * 3
            rsi_2 += 0xc
            result = result_1
            *(rdx_13 + (r8_10 << 2)) = var_e8.q
            *(rdx_13 + (r8_10 << 2) + 8) = result
            i = r15_2
            r15_2 -= 1
        while (i != 1)

if (r12_2 == 0)
    return result

return sub_140a74f90(r12_2)
