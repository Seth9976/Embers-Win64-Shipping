// 函数: sub_141d3ef00
// 地址: 0x141d3ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result
int64_t* rdi = *(arg1 + 0x58)

if (rdi != 0)
    int64_t rdx = sx.q(rdi[1].d) * 3
    int64_t rcx = *(*rdi + 0x28)
    *(rcx + (rdx << 2)) = *(arg2 + 0x10)
    *(rcx + (rdx << 2) + 8) = *(arg2 + 0x18)
    *(*(*rdi + 0x68) + sx.q(rdi[1].d) * 0x10) = *(arg2 + 0x20)
    int64_t var_b8 = *(arg2 + 0x30)
    void* rax_6 = *(arg2 + 0x38)
    void* var_b0_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    sub_1417b5700(rdi, &var_b8)
    void* rax_7 = *(arg2 + 0x30)
    
    if (rax_7 != 0 && *(rax_7 + 0xc) != 0)
        *(sx.q(rdi[1].d) + *(*rdi + 0x158)) = 1
        int64_t* rcx_4 = *(arg2 + 0x30)
        void var_a8
        int64_t* rax_11 = (*(*rcx_4 + 0x28))(rcx_4, &var_a8)
        int64_t r8_1 = sx.q(rdi[1].d) * 3
        int64_t rdx_5 = *(*rdi + 0x128)
        *(rdx_5 + (r8_1 << 3)) = *rax_11
        *(rdx_5 + (r8_1 << 3) + 8) = rax_11[1].d
        *(rdx_5 + (r8_1 << 3) + 0xc) = *(rax_11 + 0xc)
        *(rdx_5 + (r8_1 << 3) + 0x14) = *(rax_11 + 0x14)
        float zmm2_1[0x4] = *(arg2 + 0x14)
        float zmm3_1[0x4] = *(arg2 + 0x10)
        int64_t* rcx_8 = *(arg2 + 0x30)
        uint128_t var_58 = *(arg2 + 0x20)
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm3_1, (*(arg2 + 0x18)).q)
        uint128_t zmm0_1 = data_14399f670
        float var_48_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
        float var_38_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_1.q), 
            _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
        void var_90
        void var_78
        int64_t* rax_15 = sub_1417598c0((*(*rcx_8 + 0x28))(rcx_8, &var_90), &var_78, &var_58)
        sub_141756120(*rdi, rdi[1].d, rax_15)
    
    int64_t r10_1 = 0
    *(*(*rdi + 0x170) + (sx.q(rdi[1].d) << 1)) = *(arg2 + 0x40)
    *(*(*rdi + 0x50) + (sx.q(rdi[1].d) << 2)) = *(arg2 + 0x44)
    *(*(*rdi + 0x188) + (sx.q(rdi[1].d) << 3)) = *(arg2 + 0x48)
    
    if (((*(arg2 + 0x50) u>> 0x1b).b & 1) != 0)
        int32_t r9_1 = 0
        int64_t rdx_12 = sx.q(rdi[1].d) * 3
        int64_t rcx_14 = *(*rdi + 0xf8)
        void** rax_26 = *(rcx_14 + (rdx_12 << 3) + 8)
        void** r8_4 = rcx_14 + (rdx_12 << 3)
        void** r11_1 = r8_4
        
        if (rax_26 != 0)
            r11_1 = rax_26
        
        void* rsi_1 = &r11_1[sx.q(r8_4[2].d)]
        
        if (r11_1 != rsi_1)
            int32_t rdx_13 = 1
            
            do
                void* rax_28 = *(arg2 + 0x68)
                void* rcx_15 = arg2 + 0x58
                int32_t r8_5 = rdx_13
                
                if (rax_28 != 0)
                    rcx_15 = rax_28
                
                int32_t rax_29 = r9_1
                
                if (r9_1 s< 0)
                    rax_29 = r9_1 + 0x1f
                
                r9_1 += 1
                rdx_13 = rol.d(rdx_13, 1)
                void* rax_32 = *r11_1
                rcx_15.b = (*(rcx_15 + (sx.q(rax_29 s>> 5) << 2)) & r8_5) != 0
                r11_1 = &r11_1[1]
                *(rax_32 + 0x88) = rcx_15.b
            while (r11_1 != rsi_1)
    
    void* rsi_2 = *rdi
    int64_t r11_2 = sx.q(rdi[1].d)
    int64_t rax_33 = *(rsi_2 + 0xf8)
    int64_t rcx_16 = r11_2 * 3
    void* rdx_14 = rax_33 + (rcx_16 << 3)
    void* rax_34 = *(rax_33 + (rcx_16 << 3) + 8)
    void* r8_6 = rdx_14
    
    if (rax_34 != 0)
        r8_6 = rax_34
    
    void* r9_2 = r8_6 + (sx.q(*(rdx_14 + 0x10)) << 3)
    
    if (r8_6 != r9_2)
        int64_t rdx_15 = 0
        
        do
            rdx_15 += 4
            void* rcx_17 = *r8_6
            r8_6 += 8
            *(rcx_17 + 0x8c) = *(rdx_15 + *(arg2 + 0x78) - 4)
        while (r8_6 != r9_2)
        
        r11_2 = zx.q(rdi[1].d)
        rsi_2 = *rdi
    
    int64_t rcx_18 = sx.q(r11_2.d) * 3
    int64_t rax_39 = *(rsi_2 + 0xf8)
    uint128_t** rdx_16 = rax_39 + (rcx_18 << 3)
    uint128_t** rax_40 = *(rax_39 + (rcx_18 << 3) + 8)
    uint128_t** r8_7 = rdx_16
    
    if (rax_40 != 0)
        r8_7 = rax_40
    
    result = sx.q(rdx_16[2].d)
    void* rdx_17 = &r8_7[result]
    
    while (r8_7 != rdx_17)
        r10_1 += 0x10
        (*r8_7)[1] = *(r10_1 + *(arg2 + 0x88) - 0x10)
        result = *(arg2 + 0x98)
        uint128_t* rcx_20 = *r8_7
        r8_7 = &r8_7[1]
        *rcx_20 = *(result + r10_1 - 0x10)

__security_check_cookie(result_1 ^ &var_d8)
return result
