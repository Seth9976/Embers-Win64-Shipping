// 函数: sub_142c0e300
// 地址: 0x142c0e300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int128_t* rbp = &data_144017550
uint128_t var_18
uint128_t zmm0

if (*(arg1 + 0x24) u>= 2)
    int32_t rsi_1 = 1
    
    do
        var_18 = *(arg1 + 0xb0)
        
        if (rdi.d u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int64_t* rax_1
        
        if (rdi.d u< *(arg1 + 0x28))
            rax_1 = *(arg1 + 0x30) + (rdi << 3)
        else
            data_144017550.q = 0
            rax_1 = &data_144017550
        
        zmm0.q = var_18:8.q f+ *rax_1
        var_18:8.q = zmm0.q
        sub_142c0c760(arg1, arg2, &var_18)
        
        if (rsi_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rax_3
        
        if (rsi_1 u< *(arg1 + 0x28))
            rax_3 = *(arg1 + 0x30) + (zx.q(rsi_1) << 3)
        else
            data_144017550.q = 0
            rax_3 = &data_144017550
        
        var_18.q = var_18.q f+ *rax_3
        sub_142c0c760(arg1, arg2, &var_18)
        rsi_1 += 2
        rdi = zx.q(rdi.d + 2)
    while (rsi_1 + 1 u<= *(arg1 + 0x24))

if (rdi.d u>= *(arg1 + 0x24))
    return 

var_18 = *(arg1 + 0xb0)

if (rdi.d u< *(arg1 + 0x28))
    rbp = *(arg1 + 0x30) + (rdi << 3)
else
    data_144017550.q = 0

zmm0.q = var_18:8.q f+ *rbp
var_18:8.q = zmm0.q
sub_142c0c760(arg1, arg2, &var_18)
