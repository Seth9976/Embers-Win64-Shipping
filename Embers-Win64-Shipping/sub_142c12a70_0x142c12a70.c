// 函数: sub_142c12a70
// 地址: 0x142c12a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) u< 2)
    return 

int32_t rbp_1 = 1

do
    uint128_t var_28 = *(arg1 + 0xb0)
    
    if (rbp_1 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rdi_1
    
    if (rbp_1 u< *(arg1 + 0x28))
        rdi_1 = (zx.q(rbp_1) << 5) + *(arg1 + 0x30)
    else
        rdi_1 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rdi_1)
    
    if (rbp_1 - 1 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rsi_1
    
    if (rbp_1 - 1 u< *(arg1 + 0x28))
        rsi_1 = (zx.q(rbp_1 - 1) << 5) + *(arg1 + 0x30)
    else
        rsi_1 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rsi_1)
    uint128_t zmm1
    zmm1.q = var_28:8.q f+ *rdi_1
    var_28.q = var_28.q f+ *rsi_1
    var_28:8.q = zmm1.q
    sub_142c116b0(arg1, arg2, &var_28)
    rbp_1 += 2
while (rbp_1 + 1 u<= *(arg1 + 0x24))
