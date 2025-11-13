// 函数: sub_142c138b0
// 地址: 0x142c138b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int128_t* rbp = &data_144017550
uint128_t var_28

if (*(arg1 + 0x24) u>= 2)
    int32_t r14_1 = 1
    
    do
        var_28 = *(arg1 + 0xb0)
        
        if (rsi u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_1
        
        if (rsi u< *(arg1 + 0x28))
            rdi_1 = (zx.q(rsi) << 5) + *(arg1 + 0x30)
        else
            rdi_1 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_1)
        var_28:8.q = var_28:8.q f+ *rdi_1
        sub_142c116b0(arg1, arg2, &var_28)
        
        if (r14_1 u>= *(arg1 + 0x24))
            *(arg1 + 0x20) = 1
        
        int128_t* rdi_4
        
        if (r14_1 u< *(arg1 + 0x28))
            rdi_4 = (zx.q(r14_1) << 5) + *(arg1 + 0x30)
        else
            rdi_4 = &data_144017550
            __builtin_memset(&data_144017550, 0, 0x20)
        
        sub_142c0e810(arg1, rdi_4)
        var_28.q = var_28.q f+ *rdi_4
        sub_142c116b0(arg1, arg2, &var_28)
        r14_1 += 2
        rsi += 2
    while (r14_1 + 1 u<= *(arg1 + 0x24))

if (rsi u>= *(arg1 + 0x24))
    return 

var_28 = *(arg1 + 0xb0)

if (rsi u< *(arg1 + 0x28))
    rbp = (zx.q(rsi) << 5) + *(arg1 + 0x30)
else
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rbp)
var_28:8.q = var_28:8.q f+ *rbp
sub_142c116b0(arg1, arg2, &var_28)
