// 函数: sub_142c0d270
// 地址: 0x142c0d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = 0
uint128_t var_38
uint128_t zmm0
uint128_t zmm1

if (*(arg1 + 0x24) u>= 6)
    int32_t rdi_1 = 3
    
    do
        uint128_t var_28 = *(arg1 + 0xb0)
        
        if (rdi_1 - 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r8_1
        
        if (rdi_1 - 2 u< *(arg1 + 0x28))
            r8_1 = *(arg1 + 0x30) + (zx.q(rdi_1 - 2) << 3)
        else
            data_144017550.q = 0
            r8_1 = &data_144017550
        
        if (rsi.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rcx_2
        
        if (rsi.d u< *(arg1 + 0x28))
            rcx_2 = *(arg1 + 0x30) + (rsi << 3)
        else
            data_144017550.q = 0
            rcx_2 = &data_144017550
        
        uint128_t zmm2
        zmm2.q = var_28.q f+ *rcx_2
        zmm0.q = var_28:8.q f+ *r8_1
        zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
        var_28 = zmm1
        uint128_t var_18 = zmm1
        
        if (rdi_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r8_2
        
        if (rdi_1 u< *(arg1 + 0x28))
            r8_2 = *(arg1 + 0x30) + (zx.q(rdi_1) << 3)
        else
            data_144017550.q = 0
            r8_2 = &data_144017550
        
        if (rdi_1 - 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rcx_6
        
        if (rdi_1 - 1 u< *(arg1 + 0x28))
            rcx_6 = *(arg1 + 0x30) + (zx.q(rdi_1 - 1) << 3)
        else
            data_144017550.q = 0
            rcx_6 = &data_144017550
        
        zmm2.q = zmm2.q f+ *rcx_6
        zmm0.q = var_18:8.q f+ *r8_2
        zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
        var_18 = zmm1
        var_38 = zmm1
        
        if (rdi_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rdx_3
        
        if (rdi_1 + 2 u< *(arg1 + 0x28))
            rdx_3 = *(arg1 + 0x30) + (zx.q(rdi_1 + 2) << 3)
        else
            data_144017550.q = 0
            rdx_3 = &data_144017550
        
        uint64_t rcx_10 = zx.q(rdi_1 + 1)
        
        if (rcx_10.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_1
        
        if (rcx_10.d u< *(arg1 + 0x28))
            rax_1 = *(arg1 + 0x30) + (rcx_10 << 3)
        else
            data_144017550.q = 0
            rax_1 = &data_144017550
        
        zmm0.q = var_38:8.q f+ *rdx_3
        zmm2.q = zmm2.q f+ *rax_1
        var_38:8.q = zmm0.q
        var_38.q = zmm2.q
        sub_142c0aa20(arg1, arg2, &var_28, &var_18, &var_38)
        rdi_1 += 6
        rsi = zx.q(rsi.d + 6)
    while (rdi_1 + 3 u<= *(arg1 + 0x24))

int32_t i = (rsi + 2).d

if (i u<= *(arg1 + 0x24))
    uint64_t rdi_2 = zx.q((rsi + 1).d)
    
    do
        var_38 = *(arg1 + 0xb0)
        
        if (rdi_2.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rdx_6
        
        if (rdi_2.d u< *(arg1 + 0x28))
            rdx_6 = *(arg1 + 0x30) + (rdi_2 << 3)
        else
            data_144017550.q = 0
            rdx_6 = &data_144017550
        
        uint64_t rcx_13 = zx.q((rdi_2 - 1).d)
        
        if (rcx_13.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_4
        
        if (rcx_13.d u< *(arg1 + 0x28))
            rax_4 = *(arg1 + 0x30) + (rcx_13 << 3)
        else
            data_144017550.q = 0
            rax_4 = &data_144017550
        
        zmm1.q = var_38:8.q f+ *rdx_6
        zmm0.q = var_38.q f+ *rax_4
        var_38:8.q = zmm1.q
        var_38.q = zmm0.q
        sub_142c0c760(arg1, arg2, &var_38)
        rdi_2 = zx.q(rdi_2.d + 2)
        i = (rdi_2 + 1).d
    while (i u<= *(arg1 + 0x24))

return i
