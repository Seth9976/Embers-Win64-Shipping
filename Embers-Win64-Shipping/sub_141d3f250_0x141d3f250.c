// 函数: sub_141d3f250
// 地址: 0x141d3f250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result
int64_t* rdi = *(arg1 + 0x58)

if (rdi != 0)
    int64_t r8_1 = sx.q(rdi[1].d) * 3
    int64_t rcx = *(*rdi + 0x28)
    *(rcx + (r8_1 << 2)) = *(arg2 + 0x10)
    *(rcx + (r8_1 << 2) + 8) = *(arg2 + 0x18)
    *(*(*rdi + 0x68) + sx.q(rdi[1].d) * 0x10) = *(arg2 + 0x20)
    int64_t var_a0 = *(arg2 + 0x30)
    void* rax_6 = *(arg2 + 0x38)
    void* var_98_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    sub_1417b5700(rdi, &var_a0)
    int64_t rdx_3 = sx.q(rdi[1].d) * 3
    int64_t rcx_3 = *(*rdi + 0x1b8)
    *(rcx_3 + (rdx_3 << 2)) = *(arg2 + 0xa8)
    *(rcx_3 + (rdx_3 << 2) + 8) = *(arg2 + 0xb0)
    int64_t rdx_4 = sx.q(rdi[1].d) * 3
    int64_t rcx_4 = *(*rdi + 0x1d0)
    *(rcx_4 + (rdx_4 << 2)) = *(arg2 + 0xb4)
    *(rcx_4 + (rdx_4 << 2) + 8) = *(arg2 + 0xbc)
    int64_t rdx_5 = sx.q(rdi[1].d) * 3
    int64_t rcx_5 = *(*rdi + 0x200)
    *(rcx_5 + (rdx_5 << 2)) = *(arg2 + 0xc0)
    *(rcx_5 + (rdx_5 << 2) + 8) = *(arg2 + 0xc8)
    *(*(*rdi + 0x218) + sx.q(rdi[1].d) * 0x10) = *(arg2 + 0xd0)
    *(*(*rdi + 0x170) + (sx.q(rdi[1].d) << 1)) = *(arg2 + 0x40)
    *(*(*rdi + 0x50) + (sx.q(rdi[1].d) << 2)) = *(arg2 + 0x44)
    *(*(*rdi + 0x188) + (sx.q(rdi[1].d) << 3)) = *(arg2 + 0x48)
    void* rax_23 = *(arg2 + 0x30)
    
    if (rax_23 != 0 && *(rax_23 + 0xc) != 0)
        *(sx.q(rdi[1].d) + *(*rdi + 0x158)) = 1
        int64_t* rcx_11 = *(arg2 + 0x30)
        void var_90
        int64_t* rax_27 = (*(*rcx_11 + 0x28))(rcx_11, &var_90)
        int64_t r8_2 = sx.q(rdi[1].d) * 3
        int64_t rdx_12 = *(*rdi + 0x128)
        *(rdx_12 + (r8_2 << 3)) = *rax_27
        *(rdx_12 + (r8_2 << 3) + 8) = rax_27[1].d
        *(rdx_12 + (r8_2 << 3) + 0xc) = *(rax_27 + 0xc)
        *(rdx_12 + (r8_2 << 3) + 0x14) = *(rax_27 + 0x14)
        float zmm2_1[0x4] = *(arg2 + 0x14)
        float zmm3_1[0x4] = *(arg2 + 0x10)
        int64_t* rcx_15 = *(arg2 + 0x30)
        uint128_t var_58 = *(arg2 + 0x20)
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm3_1, (*(arg2 + 0x18)).q)
        uint128_t zmm0_1 = data_14399f670
        float var_48_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
        float var_38_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_1.q), 
            _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
        float var_b8
        void var_78
        sub_1417598c0((*(*rcx_15 + 0x28))(rcx_15, &var_78), &var_b8, &var_58)
        uint32_t zmm3_2[0x4] = *(arg2 + 0xac)
        uint32_t temp0_7[0x4] = _mm_and_ps(*(arg2 + 0xa8), 0x7fffffff)
        uint32_t zmm4_1[0x4] = *(arg2 + 0xb0)
        uint32_t temp0_8[0x4] = _mm_and_ps(zmm3_2, 0x7fffffff)
        int32_t rdx_15 = rdi[1].d
        float var_b4
        float zmm1_1 = var_b4 f- temp0_8[0]
        void* rcx_17 = *rdi
        uint32_t temp0_9[0x4] = _mm_and_ps(zmm4_1, 0x7fffffff)
        float var_b4_1 = zmm1_1
        float var_ac
        zmm1_1 = var_ac f+ temp0_7[0]
        var_b8 = var_b8 f- temp0_7[0]
        float var_ac_1 = zmm1_1
        float var_b0
        float var_b0_1 = var_b0 f- temp0_9[0]
        float var_a4
        float var_a4_1 = var_a4 f+ temp0_9[0]
        float var_a8
        float var_a8_1 = var_a8 f+ temp0_8[0]
        sub_141756120(rcx_17, rdx_15, &var_b8)
    
    int32_t rsi_1 = *(arg2 + 0x50)
    int64_t r11_1 = 0
    
    if (((rsi_1 u>> 0x1b).b & 1) != 0)
        int32_t r9_1 = 0
        int64_t rdx_16 = sx.q(rdi[1].d) * 3
        int64_t rcx_18 = *(*rdi + 0xf8)
        void* rax_35 = *(rcx_18 + (rdx_16 << 3) + 8)
        void* r8_5 = rcx_18 + (rdx_16 << 3)
        void* r10_1 = r8_5
        
        if (rax_35 != 0)
            r10_1 = rax_35
        
        void* rbp_1 = r10_1 + (sx.q(*(r8_5 + 0x10)) << 3)
        
        if (r10_1 != rbp_1)
            int32_t rdx_17 = 1
            
            do
                void* rax_37 = *(arg2 + 0x68)
                void* rcx_19 = arg2 + 0x58
                int32_t r8_6 = rdx_17
                
                if (rax_37 != 0)
                    rcx_19 = rax_37
                
                int32_t rax_38 = r9_1
                
                if (r9_1 s< 0)
                    rax_38 = r9_1 + 0x1f
                
                r9_1 += 1
                rdx_17 = rol.d(rdx_17, 1)
                void* rax_41 = *r10_1
                rcx_19.b = (*(rcx_19 + (sx.q(rax_38 s>> 5) << 2)) & r8_6) != 0
                r10_1 += 8
                *(rax_41 + 0x88) = rcx_19.b
            while (r10_1 != rbp_1)
            
            rsi_1 = *(arg2 + 0x50)
    
    if (((rsi_1 u>> 0x1c).b & 1) != 0)
        int64_t rdx_18 = sx.q(rdi[1].d) * 3
        int64_t rcx_20 = *(*rdi + 0xf8)
        void* rax_44 = *(rcx_20 + (rdx_18 << 3) + 8)
        void* r8_7 = rcx_20 + (rdx_18 << 3)
        void* rdx_19 = r8_7
        
        if (rax_44 != 0)
            rdx_19 = rax_44
        
        void* r9_2 = rdx_19 + (sx.q(*(r8_7 + 0x10)) << 3)
        
        if (rdx_19 != r9_2)
            int64_t r8_8 = 0
            
            do
                r8_8 += 4
                void* rcx_21 = *rdx_19
                rdx_19 += 8
                *(rcx_21 + 0x8c) = *(r8_8 + *(arg2 + 0x78) - 4)
            while (rdx_19 != r9_2)
    
    int64_t rdx_20 = sx.q(rdi[1].d) * 3
    int64_t rcx_22 = *(*rdi + 0xf8)
    uint128_t** rax_50 = *(rcx_22 + (rdx_20 << 3) + 8)
    uint128_t** r8_9 = rcx_22 + (rdx_20 << 3)
    uint128_t** rdx_21 = r8_9
    
    if (rax_50 != 0)
        rdx_21 = rax_50
    
    result = sx.q(r8_9[2].d)
    void* r8_10 = &rdx_21[result]
    
    while (rdx_21 != r8_10)
        r11_1 += 0x10
        (*rdx_21)[1] = *(r11_1 + *(arg2 + 0x88) - 0x10)
        result = *(arg2 + 0x98)
        uint128_t* rcx_24 = *rdx_21
        rdx_21 = &rdx_21[1]
        *rcx_24 = *(r11_1 + result - 0x10)

__security_check_cookie(result_1 ^ &var_d8)
return result
