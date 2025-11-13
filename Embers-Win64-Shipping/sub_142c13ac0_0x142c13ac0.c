// 函数: sub_142c13ac0
// 地址: 0x142c13ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
bool cond:0 = (*(arg1 + 0x24) & 1) == 0
double var_68[0x2] = *(arg1 + 0xb0)

if (cond:0)
    var_68[0]
else
    if (*(arg1 + 0x24) u<= 0)
        *(arg1 + 0x20) = 1
    
    int64_t* rdi_1
    
    if (*(arg1 + 0x28) u> 0)
        rdi_1 = *(arg1 + 0x30)
    else
        rdi_1 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rdi_1)
    var_68[0]
    rbp = 1
    *rdi_1

int32_t result = rbp + 4

if (result u<= *(arg1 + 0x24))
    int32_t rbp_1 = rbp + 1
    uint128_t zmm7
    uint128_t var_38_1 = zmm7
    
    while (true)
        if (rbp_1 - 1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_2
        
        if (rbp_1 - 1 u< *(arg1 + 0x28))
            rdi_2 = (zx.q(rbp_1 - 1) << 5) + *(arg1 + 0x30)
        else
            rdi_2 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        double zmm6_2[0x2] = sub_142c0e810(arg1, rdi_2)
        uint128_t zmm0_1
        zmm0_1.q = var_68[1] f+ *rdi_2
        double temp0_1[0x2] = _mm_unpacklo_pd(zmm6_2, zmm0_1.q)
        var_68 = temp0_1
        double var_58[0x2] = temp0_1
        
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
        
        double zmm6_3[0x2] = sub_142c0e810(arg1, rsi_1)
        zmm7 = zx.o(var_58[1])
        zmm6_3[0] = zmm6_3[0] f+ *rsi_1
        zmm7.q = zmm7.q f+ *rdi_5
        double temp0_2[0x2] = _mm_unpacklo_pd(zmm6_3, zmm7.q)
        var_58 = temp0_2
        uint128_t var_48 = temp0_2
        
        if (rbp_1 + 2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rdi_8
        
        if (rbp_1 + 2 u< *(arg1 + 0x28))
            rdi_8 = (zx.q(rbp_1 + 2) << 5) + *(arg1 + 0x30)
        else
            rdi_8 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_8)
        zmm7.q = zmm7.q f+ *rdi_8
        var_48:8.q = zmm7.q
        sub_142c0ea90(arg1, arg2, &var_68, &var_58, &var_48)
        rbp_1 += 4
        var_68 = *(arg1 + 0xb0)
        result = rbp_1 + 3
        
        if (result u> *(arg1 + 0x24))
            break
        
        int512_t zmm6_4
        zmm6_4.o = zx.o(var_68[0])

return result
