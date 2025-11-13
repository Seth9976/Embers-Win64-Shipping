// 函数: sub_142c0d5e0
// 地址: 0x142c0d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int32_t i = *(arg1 + 0x24) u% 6
uint128_t var_48
uint128_t zmm0
double zmm1[0x2]

if (i u>= 2)
    int32_t rsi_1 = 1
    
    do
        var_48 = *(arg1 + 0xb0)
        
        if (rsi_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdx_2
        
        if (rsi_1 u< *(arg1 + 0x28))
            rdx_2 = *(arg1 + 0x30) + (zx.q(rsi_1) << 3)
        else
            data_144017550.q = 0
            rdx_2 = &data_144017550
        
        if (rdi.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_2
        
        if (rdi.d u< *(arg1 + 0x28))
            rax_2 = *(arg1 + 0x30) + (rdi << 3)
        else
            data_144017550.q = 0
            rax_2 = &data_144017550
        
        zmm0 = zx.o(var_48.q)
        zmm1 = zx.o(var_48:8.q)
        zmm1[0] = zmm1[0] f+ *rdx_2
        zmm0.q = zmm0.q f+ *rax_2
        var_48:8.q = zmm1.q
        var_48.q = zmm0.q
        sub_142c0c760(arg1, arg2, &var_48)
        rsi_1 += 2
        rdi = zx.q(rdi.d + 2)
    while (rsi_1 + 1 u<= i)

int32_t i_1 = (rdi + 6).d

if (i_1 u<= *(arg1 + 0x24))
    uint64_t rdi_1 = zx.q(rdi.d + 3)
    
    do
        int32_t rcx_2 = (rdi_1 - 2).d
        uint128_t var_38 = *(arg1 + 0xb0)
        
        if (rcx_2 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r8_2
        
        if (rcx_2 u< *(arg1 + 0x28))
            r8_2 = *(arg1 + 0x30) + (zx.q(rcx_2) << 3)
        else
            data_144017550.q = 0
            r8_2 = &data_144017550
        
        int32_t rcx_4 = (rdi_1 - 3).d
        
        if (rcx_4 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rcx_5
        
        if (rcx_4 u< *(arg1 + 0x28))
            rcx_5 = *(arg1 + 0x30) + (zx.q(rcx_4) << 3)
        else
            data_144017550.q = 0
            rcx_5 = &data_144017550
        
        uint128_t zmm2
        zmm2.q = var_38.q f+ *rcx_5
        zmm0.q = var_38:8.q f+ *r8_2
        zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
        var_38 = zmm1
        double var_28[0x2] = zmm1
        
        if (rdi_1.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* r8_3
        
        if (rdi_1.d u< *(arg1 + 0x28))
            r8_3 = *(arg1 + 0x30) + (rdi_1 << 3)
        else
            data_144017550.q = 0
            r8_3 = &data_144017550
        
        int32_t rcx_8 = (rdi_1 - 1).d
        
        if (rcx_8 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rcx_9
        
        if (rcx_8 u< *(arg1 + 0x28))
            rcx_9 = *(arg1 + 0x30) + (zx.q(rcx_8) << 3)
        else
            data_144017550.q = 0
            rcx_9 = &data_144017550
        
        zmm2.q = zmm2.q f+ *rcx_9
        int32_t rcx_11 = (rdi_1 + 2).d
        zmm0.q = var_28[1] f+ *r8_3
        zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
        var_28 = zmm1
        var_48 = zmm1
        
        if (rcx_11 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rdx_8
        
        if (rcx_11 u< *(arg1 + 0x28))
            rdx_8 = *(arg1 + 0x30) + (zx.q(rcx_11) << 3)
        else
            data_144017550.q = 0
            rdx_8 = &data_144017550
        
        uint64_t rcx_13 = zx.q((rdi_1 + 1).d)
        
        if (rcx_13.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rax_5
        
        if (rcx_13.d u< *(arg1 + 0x28))
            rax_5 = *(arg1 + 0x30) + (rcx_13 << 3)
        else
            data_144017550.q = 0
            rax_5 = &data_144017550
        
        zmm0.q = var_48:8.q f+ *rdx_8
        zmm2.q = zmm2.q f+ *rax_5
        var_48:8.q = zmm0.q
        var_48.q = zmm2.q
        sub_142c0aa20(arg1, arg2, &var_38, &var_28, &var_48)
        rdi_1 = zx.q(rdi_1.d + 6)
        i_1 = (rdi_1 + 3).d
    while (i_1 u<= *(arg1 + 0x24))

return i_1
