// 函数: sub_142c0e4d0
// 地址: 0x142c0e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
bool cond:0 = (*(arg1 + 0x24) & 1) == 0
uint128_t var_38 = *(arg1 + 0xb0)
uint128_t zmm2

if (cond:0)
    zmm2 = zx.o(var_38.q)
else
    if (*(arg1 + 0x24) u<= 0)
        *(arg1 + 0x20) = 1
    
    if (*(arg1 + 0x28) u> 0)
        rdi = 1
        zmm2.q = var_38.q f+ **(arg1 + 0x30)
    else
        rdi = 1
        zmm2 = zx.o(var_38.q)
        data_144017550.q = 0
        zmm2.q = zmm2.q f+ data_144017550.q

int32_t result = rdi + 4

if (result u<= *(arg1 + 0x24))
    uint64_t rdi_1 = zx.q(rdi + 1)
    
    while (true)
        int32_t rax_2 = (rdi_1 - 1).d
        
        if (rax_2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_3
        
        if (rax_2 u< *(arg1 + 0x28))
            rax_3 = *(arg1 + 0x30) + (zx.q(rax_2) << 3)
        else
            data_144017550.q = 0
            rax_3 = &data_144017550
        
        uint128_t zmm0
        zmm0.q = var_38:8.q f+ *rax_3
        int32_t rax_5 = (rdi_1 + 1).d
        uint128_t zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
        var_38 = zmm1
        uint128_t var_28 = zmm1
        
        if (rax_5 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdx
        
        if (rax_5 u< *(arg1 + 0x28))
            rdx = *(arg1 + 0x30) + (zx.q(rax_5) << 3)
        else
            rdx = &data_144017550
            data_144017550.q = 0
        
        if (rdi_1.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_7
        
        if (rdi_1.d u< *(arg1 + 0x28))
            rax_7 = *(arg1 + 0x30) + (rdi_1 << 3)
        else
            data_144017550.q = 0
            rax_7 = &data_144017550
        
        zmm2.q = zmm2.q f+ *rax_7
        int32_t rax_9 = (rdi_1 + 2).d
        zmm1.q = var_28:8.q f+ *rdx
        zmm0 = _mm_unpacklo_pd(zmm2, zmm1.q)
        var_28 = zmm0
        uint128_t var_18 = zmm0
        
        if (rax_9 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_10
        
        if (rax_9 u< *(arg1 + 0x28))
            rax_10 = *(arg1 + 0x30) + (zx.q(rax_9) << 3)
        else
            data_144017550.q = 0
            rax_10 = &data_144017550
        
        zmm1.q = zmm1.q f+ *rax_10
        var_18:8.q = zmm1.q
        sub_142c0aa20(arg1, arg2, &var_38, &var_28, &var_18)
        rdi_1 = zx.q(rdi_1.d + 4)
        var_38 = *(arg1 + 0xb0)
        result = (rdi_1 + 3).d
        
        if (result u> *(arg1 + 0x24))
            break
        
        zmm2 = zx.o(var_38.q)

return result
