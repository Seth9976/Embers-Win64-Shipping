// 函数: sub_142c10740
// 地址: 0x142c10740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
bool cond:0 = (*(arg1 + 0x24) & 1) == 0
uint128_t var_58 = *(arg1 + 0xb0)
double zmm6

if (not(cond:0))
    if (*(arg1 + 0x24) u<= 0)
        *(arg1 + 0x20) = 1
    
    int64_t* rdi_1
    
    if (*(arg1 + 0x28) u> 0)
        rdi_1 = *(arg1 + 0x30)
    else
        rdi_1 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    
    zmm6 = sub_142c0e810(arg1, rdi_1)
    rbp = 1
    uint128_t zmm0
    zmm0.q = var_58:8.q f+ *rdi_1
    var_58:8.q = zmm0.q

int32_t i = rbp + 4

if (i u<= *(arg1 + 0x24))
    int32_t rbp_1 = rbp + 1
    double var_28_1 = zmm6
    
    do
        if (rbp_1 - 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_2
        
        if (rbp_1 - 1 u< *(arg1 + 0x28))
            rdi_2 = (zx.q(rbp_1 - 1) << 5) + *(arg1 + 0x30)
        else
            rdi_2 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_2)
        var_58.q = var_58.q f+ *rdi_2
        uint128_t var_48 = var_58
        
        if (rbp_1 + 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_5
        
        if (rbp_1 + 1 u< *(arg1 + 0x28))
            rdi_5 = (zx.q(rbp_1 + 1) << 5) + *(arg1 + 0x30)
        else
            rdi_5 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_5)
        
        if (rbp_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rsi_1
        
        if (rbp_1 u< *(arg1 + 0x28))
            rsi_1 = (zx.q(rbp_1) << 5) + *(arg1 + 0x30)
        else
            rsi_1 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        double zmm6_2[0x2] = sub_142c0e810(arg1, rsi_1)
        uint128_t zmm0_2 = zx.o(var_48:8.q)
        zmm6_2[0] = zmm6_2[0] f+ *rsi_1
        zmm0_2.q = zmm0_2.q f+ *rdi_5
        double temp0_1[0x2] = _mm_unpacklo_pd(zmm6_2, zmm0_2.q)
        var_48 = temp0_1
        uint128_t var_38 = temp0_1
        
        if (rbp_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_8
        
        if (rbp_1 + 2 u< *(arg1 + 0x28))
            rdi_8 = (zx.q(rbp_1 + 2) << 5) + *(arg1 + 0x30)
        else
            rdi_8 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        var_38.q = sub_142c0e810(arg1, rdi_8) f+ *rdi_8
        sub_142c0ea90(arg1, arg2, &var_58, &var_48, &var_38)
        rbp_1 += 4
        var_58 = *(arg1 + 0xb0)
        i = rbp_1 + 3
    while (i u<= *(arg1 + 0x24))

return i
