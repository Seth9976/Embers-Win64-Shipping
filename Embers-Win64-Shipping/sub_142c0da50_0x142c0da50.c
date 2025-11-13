// 函数: sub_142c0da50
// 地址: 0x142c0da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) u< 6)
    return 

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
    
    if (rdi_1 - 3 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rcx_3
    
    if (rdi_1 - 3 u< *(arg1 + 0x28))
        rcx_3 = *(arg1 + 0x30) + (zx.q(rdi_1 - 3) << 3)
    else
        data_144017550.q = 0
        rcx_3 = &data_144017550
    
    uint128_t zmm2
    zmm2.q = var_28.q f+ *rcx_3
    uint128_t zmm0
    zmm0.q = var_28:8.q f+ *r8_1
    uint128_t zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
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
    
    int128_t* rcx_7
    
    if (rdi_1 - 1 u< *(arg1 + 0x28))
        rcx_7 = *(arg1 + 0x30) + (zx.q(rdi_1 - 1) << 3)
    else
        data_144017550.q = 0
        rcx_7 = &data_144017550
    
    zmm2.q = zmm2.q f+ *rcx_7
    zmm0.q = var_18:8.q f+ *r8_2
    zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
    var_18 = zmm1
    uint128_t var_38 = zmm1
    
    if (rdi_1 + 2 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int64_t* rdx_4
    
    if (rdi_1 + 2 u< *(arg1 + 0x28))
        rdx_4 = *(arg1 + 0x30) + (zx.q(rdi_1 + 2) << 3)
    else
        data_144017550.q = 0
        rdx_4 = &data_144017550
    
    uint64_t rcx_11 = zx.q(rdi_1 + 1)
    
    if (rcx_11.d u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rax_1
    
    if (rcx_11.d u< *(arg1 + 0x28))
        rax_1 = *(arg1 + 0x30) + (rcx_11 << 3)
    else
        data_144017550.q = 0
        rax_1 = &data_144017550
    
    zmm0.q = var_38:8.q f+ *rdx_4
    zmm2.q = zmm2.q f+ *rax_1
    var_38:8.q = zmm0.q
    var_38.q = zmm2.q
    sub_142c0aa20(arg1, arg2, &var_28, &var_18, &var_38)
    rdi_1 += 6
while (rdi_1 + 3 u<= *(arg1 + 0x24))
