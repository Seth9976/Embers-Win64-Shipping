// 函数: sub_142713310
// 地址: 0x142713310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4f].b != 0)
    sub_142713960(arg1, arg2)
    return 

uint64_t rdi = arg1[0x20]
*(arg1 + 0x28c) = arg2
arg1[0x52].d = arg2

if (rdi == 0)
    return 

uint64_t rax = zx.q(*(rdi + 0x98))

if ((rax.b & 2) == 0 || *(rdi + 0x30) s<= 1 || (rax.b & 1) == 0)
    rax.b = 0
else
    rax.b = 1

if (rax.b == 0 || arg1[0x14] == 0)
    return 

int32_t* rcx = *(rdi + 0x28)
uint64_t var_78 = *((sx.q(*(rdi + 0x30)) << 5) + rcx - 0x20)
int32_t var_70_1 = rcx[sx.q(*(rdi + 0x30)) * 8 - 6]
int32_t r15_1 = *(rdi + 0x70)
int32_t rax_4

if (r15_1 == data_143f71588.d)
    rax_4.b = 1
else
    rcx = *(rdi + 0x78)
    
    if (rcx == 0)
        rax_4.b = 0
    else
        rax_4, rcx = sub_14268a5a0(rcx, &data_143f71588)
        
        if (rax_4.b != 0)
            rax_4.b = 1
        else
            rax_4.b = 0

uint64_t rsi_1 = 0

if (rax_4.b != 0)
    rsi_1 = rdi

if (r15_1 == data_143f71450.d)
    rcx.b = 1
else
    rcx = *(rdi + 0x78)
    
    if (rcx == 0)
        rcx.b = 0
    else
        char rax_5
        rax_5, rcx = sub_14268a5a0(rcx, &data_143f71450)
        
        if (rax_5 != 0)
            rcx.b = 1
        else
            rcx.b = 0

rax = 0

if (rcx.b != 0)
    rax = rdi

float var_88
int64_t var_68

if (rsi_1 != 0)
    int32_t rax_6 = *(rsi_1 + 0x108)
    int16_t arg_8
    char arg_a
    
    if (rax_6 != 0)
        if (arg2 s< 0 || arg2 s>= rax_6)
            rcx.b = 0
        else
            rcx.b = 1
        
        if (rcx.b == 0)
            int32_t rax_9 = rax_6 - 1
            
            if (arg2 s< 0)
                rax_9 = 0
            else if (arg2 s< rax_9)
                rax_9 = arg2
            
            *(arg1 + 0x28c) = rax_9
        
        void* rax_10 = arg1[0x15]
        
        if (rax_10 == 0)
            rax_10 = sub_141ee69e0(arg1)
        
        void* rax_11 = sub_1426fbe40(rax_10)
        
        if (rax_11 == 0)
        label_14271371c:
            arg_a = 3
            arg_8 = data_143b58116 | 0x20
            (*(*arg1 + 0x440))(arg1, &arg_8)
        else
            void* rax_12 = sub_140d3c6e0(rsi_1 + 0x9c)
            
            if (rax_12 == 0)
                goto label_14271371c
            
            void* rax_13 = sub_1426a09e0()
            void* rcx_5 = *(rax_12 + 0x10)
            int64_t rdx_1 = sx.q(*(rax_13 + 0x38))
            
            if (rdx_1.d s> *(rcx_5 + 0x38) || *(*(rcx_5 + 0x30) + (rdx_1 << 3)) != rax_13 + 0x30
                    || *(rax_11 + 0x28) != rax_12)
                goto label_14271371c
            
            int64_t rdx_2 = sx.q(*(arg1 + 0x28c))
            int32_t rcx_8 = *(rsi_1 + 0x108) - 1
            int32_t rdi_1 = rcx_8
            int32_t rax_15 = (rdx_2 + 0xf).d
            
            if (rax_15 s<= rcx_8)
                rdi_1 = rax_15
            
            *(arg1 + 0x275) &= 0xdf
            char rax_16 = 0
            
            if (rdi_1 == rcx_8)
                rax_16 = 0x20
            
            *(arg1 + 0x275) |= rax_16
            
            if (sub_1426862d0(rax_12, *(*(rsi_1 + 0x100) + (rdx_2 << 3)), &var_68, &var_88) != 0)
                int32_t rax_20 = *(arg1 + 0x28c) - 1
                
                if (rax_20 s<= 0)
                    rax_20 = 0
                
                *(arg1 + 0x28c) = rax_20
            
            if ((*(arg1 + 0x275) & 0x20) == 0)
                char r13_1 = sub_1426862d0(rax_12, *(*(rsi_1 + 0x100) + (sx.q(rdi_1) << 3)), 
                    &var_68, &var_88)
                char rax_22
                
                if (rdi_1 s<= 0)
                    rax_22 = 0
                else
                    rax_22 = sub_1426862d0(rax_12, *(*(rsi_1 + 0x100) + (sx.q(rdi_1 - 1) << 3)), 
                        &var_68, &var_88)
                
                if (r13_1 != 0)
                    bool cond:4_1 = rdi_1 - 1 s<= 0
                    rdi_1 -= 1
                    
                    if (cond:4_1)
                        rdi_1 = 0
                
                if (rax_22 != 0)
                    bool cond:5_1 = rdi_1 - 2 s<= 0
                    rdi_1 -= 2
                    
                    if (cond:5_1)
                        rdi_1 = 0
                
                sub_142686e60(rax_12, *(*(rsi_1 + 0x100) + (sx.q(rdi_1) << 3)), &var_78)
            else if (((*(rsi_1 + 0x98) u>> 2).b & 1) != 0)
                void* rcx_14 = arg1[0x20]
                sub_142684460(rax_12, *(*(rsi_1 + 0x100) + (sx.q(rdi_1) << 3)), 
                    (sx.q(*(rcx_14 + 0x30) - 1) << 5) + *(rcx_14 + 0x28), &var_78)
            
            void* rcx_16 = arg1[0x20]
            arg1[0x4d] = data_143dbb1f8.q
            arg1[0x4e].d = data_143dbb200
            arg1[0x3f] = data_143dbb1f8.q
            arg1[0x40].d = data_143dbb200
            sub_141ead1f0(&arg1[0x29], sub_140d3c6e0(rcx_16 + 0x38), &var_78)
            sub_1427129f0(rax_11, arg1, rsi_1, *(arg1 + 0x28c), rdi_1, &var_78)
    else
        arg_a = 3
        arg_8 = data_143b58116 | 0x20
        (*(*arg1 + 0x440))(arg1, &arg_8)
else if (rax != 0)
    void* rcx_21 = *(arg1[0x1d] + 0xb0)
    float* rax_36
    
    if (rcx_21 == 0)
        int32_t var_60_1 = data_143b58090
        rax_36 = &var_68
        var_68 = data_143b58088
    else
        float zmm1[0x4] = *(rcx_21 + 0x1d0)
        rax_36 = &var_88
        var_88 = zmm1[0]
        uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rcx_21 + 0x114)
        int32_t var_84_1 = zmm0.d
        float var_80_1 = temp0_2[0]
    
    *rax_36
    int32_t rax_38 = rax_36[2]
    *(arg1 + 0x275) |= 0x20
    *(arg1 + 0x276) |= 1
    *(arg1 + 0x274) |= 4
    float zmm6_1[0x4] = sub_141ead1f0(&arg1[0x29], sub_140d3c6e0(rdi + 0x38), &var_78)
    float zmm7_1[0x4] = var_78.d
    float zmm0_2[0x4] = zmm6_1
    float zmm8_1[0x4] = var_78:4.d
    zmm7_1[0] = zmm7_1[0] - zmm6_1[0]
    zmm6_1 = var_70_1
    zmm6_1[0] = zmm6_1[0] f- rax_38
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
    zmm8_1[0] = zmm8_1[0] - temp0_3[0]
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    int64_t zmm1_1
    zmm1_1.d = zmm6_1[0].q.d f* zmm6_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
    zmm8_1[0] = zmm8_1[0] f+ zmm1_1.d
    float var_80_2
    
    if (zmm8_1[0] != 1f)
        if (zmm8_1[0] >= 9.99999994e-09f)
            int64_t zmm3_1 = zmm8_1[0].q
            float temp0_4[0x4] = _mm_rsqrt_ss(zmm8_1[0], zmm3_1.d)
            float zmm2_1[0x4] = 0x3f000000
            zmm3_1.d = zmm3_1.d f* 0.5f
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm1_1.d = zmm3_1.d f* temp0_4[0]
            zmm2_1[0] = 0.5f f- zmm1_1.d
            temp0_4[0] = temp0_4[0] * zmm2_1[0]
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            zmm1_1.d = temp0_4[0].q.d f* temp0_4[0]
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            temp0_4[0] = temp0_4[0] * (0.5f f- zmm3_1.d)
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            zmm1_1 = temp0_4[0].q
            temp0_4[0] = temp0_4[0] * zmm7_1[0]
            temp0_4[0] = temp0_4[0] * zmm6_1[0]
            var_88 = temp0_4[0]
            zmm1_1.d = zmm1_1.d f* zmm8_1[0]
            var_80_2 = temp0_4[0]
        else
            zmm1_1 = data_143dbb1fc
            var_88 = data_143dbb1f8[0]
            var_80_2 = data_143dbb200[0]
        
        int32_t var_84_3 = zmm1_1.d
    else
        var_88 = zmm7_1[0]
        float var_84_2 = zmm8_1[0]
        var_80_2 = zmm6_1[0]
    
    zmm1_1 = var_88.q
    arg1[0x4d] = zmm1_1
    arg1[0x3f] = zmm1_1
    arg1[0x4e].d = var_80_2
    arg1[0x40].d = var_80_2
    void* rax_41 = arg1[0x15]
    
    if (rax_41 == 0)
        rax_41 = sub_141ee69e0(arg1)
    
    rax = sub_1426fbe40(rax_41)
    
    if (rax != 0)
        sub_142712900(rax, arg1, &arg1[0x4d])
