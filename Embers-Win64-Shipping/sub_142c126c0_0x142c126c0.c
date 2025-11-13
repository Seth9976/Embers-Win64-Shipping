// 函数: sub_142c126c0
// 地址: 0x142c126c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t i = *(arg1 + 0x24) u% 6
uint128_t var_68
double zmm1[0x2]
double zmm6

if (i u>= 2)
    int32_t r14_1 = 1
    
    do
        var_68 = *(arg1 + 0xb0)
        
        if (r14_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_1
        
        if (r14_1 u< *(arg1 + 0x28))
            rdi_1 = (zx.q(r14_1) << 5) + *(arg1 + 0x30)
        else
            rdi_1 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_1)
        
        if (rbp u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_1
        
        if (rbp u< *(arg1 + 0x28))
            rsi_1 = (zx.q(rbp) << 5) + *(arg1 + 0x30)
        else
            rsi_1 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        zmm6 = sub_142c0e810(arg1, rsi_1)
        zmm1 = zx.o(var_68:8.q)
        double zmm0_1 = var_68.q f+ *rsi_1
        zmm1[0] = zmm1[0] f+ *rdi_1
        var_68.q = zmm0_1
        var_68:8.q = zmm1.q
        sub_142c116b0(arg1, arg2, &var_68)
        r14_1 += 2
        rbp += 2
    while (r14_1 + 1 u<= i)

int32_t i_1 = rbp + 6

if (i_1 u<= *(arg1 + 0x24))
    double var_38_1 = zmm6
    int32_t rbp_1 = rbp + 3
    
    do
        uint128_t var_58 = *(arg1 + 0xb0)
        
        if (rbp_1 - 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_4
        
        if (rbp_1 - 2 u< *(arg1 + 0x28))
            rdi_4 = (zx.q(rbp_1 - 2) << 5) + *(arg1 + 0x30)
        else
            rdi_4 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_4)
        
        if (rbp_1 - 3 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rsi_4
        
        if (rbp_1 - 3 u< *(arg1 + 0x28))
            rsi_4 = (zx.q(rbp_1 - 3) << 5) + *(arg1 + 0x30)
        else
            rsi_4 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rsi_4)
        uint128_t zmm6_1
        zmm6_1.q = var_58.q f+ *rsi_4
        uint128_t zmm0_2
        zmm0_2.q = var_58:8.q f+ *rdi_4
        zmm1 = _mm_unpacklo_pd(zmm6_1, zmm0_2.q)
        var_58 = zmm1
        double var_48[0x2] = zmm1
        
        if (rbp_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rdi_7
        
        if (rbp_1 u< *(arg1 + 0x28))
            rdi_7 = (zx.q(rbp_1) << 5) + *(arg1 + 0x30)
        else
            rdi_7 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_7)
        
        if (rbp_1 - 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_7
        
        if (rbp_1 - 1 u< *(arg1 + 0x28))
            rsi_7 = (zx.q(rbp_1 - 1) << 5) + *(arg1 + 0x30)
        else
            rsi_7 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        double zmm6_2[0x2] = sub_142c0e810(arg1, rsi_7)
        uint128_t zmm0_3 = zx.o(var_48[1])
        zmm6_2[0] = zmm6_2[0] f+ *rsi_7
        zmm0_3.q = zmm0_3.q f+ *rdi_7
        zmm1 = _mm_unpacklo_pd(zmm6_2, zmm0_3.q)
        var_48 = zmm1
        var_68 = zmm1
        
        if (rbp_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_10
        
        if (rbp_1 + 2 u< *(arg1 + 0x28))
            rdi_10 = (zx.q(rbp_1 + 2) << 5) + *(arg1 + 0x30)
        else
            rdi_10 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_10)
        
        if (rbp_1 + 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_10
        
        if (rbp_1 + 1 u< *(arg1 + 0x28))
            rsi_10 = (zx.q(rbp_1 + 1) << 5) + *(arg1 + 0x30)
        else
            rsi_10 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        double zmm6_3 = sub_142c0e810(arg1, rsi_10)
        var_68:8.q = var_68:8.q f+ *rdi_10
        var_68.q = zmm6_3 f+ *rsi_10
        sub_142c0ea90(arg1, arg2, &var_58, &var_48, &var_68)
        rbp_1 += 6
        i_1 = rbp_1 + 3
    while (i_1 u<= *(arg1 + 0x24))

return i_1
