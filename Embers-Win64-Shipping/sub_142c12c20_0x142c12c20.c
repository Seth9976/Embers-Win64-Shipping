// 函数: sub_142c12c20
// 地址: 0x142c12c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr

if (*(arg1 + 0x24) u>= 6)
    int32_t rbp_1 = 3
    
    do
        uint128_t var_48 = *(arg1 + 0xb0)
        
        if (rbp_1 - 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_1
        
        if (rbp_1 - 2 u< *(arg1 + 0x28))
            rdi_1 = (zx.q(rbp_1 - 2) << 5) + *(arg1 + 0x30)
        else
            rdi_1 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_1)
        
        if (rbp_1 - 3 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_1
        
        if (rbp_1 - 3 u< *(arg1 + 0x28))
            rsi_1 = (zx.q(rbp_1 - 3) << 5) + *(arg1 + 0x30)
        else
            rsi_1 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rsi_1)
        uint128_t zmm6_1
        zmm6_1.q = var_48.q f+ *rsi_1
        uint128_t zmm0_1
        zmm0_1.q = var_48:8.q f+ *rdi_1
        uint128_t zmm1 = _mm_unpacklo_pd(zmm6_1, zmm0_1.q)
        var_48 = zmm1
        uint128_t var_38 = zmm1
        
        if (rbp_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_4
        
        if (rbp_1 u< *(arg1 + 0x28))
            rdi_4 = (zx.q(rbp_1) << 5) + *(arg1 + 0x30)
        else
            rdi_4 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_4)
        
        if (rbp_1 - 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_4
        
        if (rbp_1 - 1 u< *(arg1 + 0x28))
            rsi_4 = (zx.q(rbp_1 - 1) << 5) + *(arg1 + 0x30)
        else
            rsi_4 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        uint128_t zmm6_2
        zmm6_2.q = sub_142c0e810(arg1, rsi_4).q f+ *rsi_4
        uint128_t zmm0_2
        zmm0_2.q = var_38:8.q f+ *rdi_4
        zmm1 = _mm_unpacklo_pd(zmm6_2, zmm0_2.q)
        var_38 = zmm1
        uint128_t var_58 = zmm1
        
        if (rbp_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_7
        
        if (rbp_1 + 2 u< *(arg1 + 0x28))
            rdi_7 = (zx.q(rbp_1 + 2) << 5) + *(arg1 + 0x30)
        else
            rdi_7 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_7)
        
        if (rbp_1 + 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_7
        
        if (rbp_1 + 1 u< *(arg1 + 0x28))
            rsi_7 = (zx.q(rbp_1 + 1) << 5) + *(arg1 + 0x30)
        else
            rsi_7 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        double zmm6_3 = sub_142c0e810(arg1, rsi_7)
        var_58:8.q = var_58:8.q f+ *rdi_7
        var_58.q = zmm6_3 f+ *rsi_7
        sub_142c0ea90(arg1, arg2, &var_48, &var_38, &var_58)
        rbp_1 += 6
        i = rbp_1 + 3
    while (i u<= *(arg1 + 0x24))

return i
