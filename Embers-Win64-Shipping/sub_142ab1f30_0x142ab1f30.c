// 函数: sub_142ab1f30
// 地址: 0x142ab1f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
*arg1 = &icu_64::UnifiedCache::`vftable'{for `icu_64::UnifiedCacheBase'}
sub_142ab2920()
sub_142a860a0(&data_144016090)
char i

do
    i = sub_142ab20e0(arg1, 0)
while (i != 0)
sub_142a860d0(&data_144016090)
sub_142ab2920()
sub_142a860a0(&data_144016090)
int32_t rax_1 = sub_1405f8990(arg1[1])
int32_t rbp = 0

if (rax_1 s> 0)
    do
        int32_t* rax_2 = sub_142a86e70(arg1[1], &arg1[2])
        
        if (rax_2 == 0)
            arg1[2].d = 0xffffffff
            rax_2 = sub_142a86e70(arg1[1], &arg1[2])
            
            if (rax_2 == 0)
                break
        
        int64_t* rsi_1 = *(rax_2 + 8)
        sub_142a87020(arg1[1], rax_2)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            *(arg1 + 0x14) -= 1
            
            if (sub_1408e52d0(rsi_1) != 0)
                rsi_1[2] = 0
            else
                (**rsi_1)(rsi_1, 1)
        
        rbp += 1
    while (rbp s< rax_1)

sub_142a860d0(&data_144016090)
sub_142a869e0(arg1[1])
arg1[1] = 0
int64_t* rcx_8 = arg1[6]

if (rcx_8 != 0)
    (**rcx_8)(rcx_8, 1)

arg1[6] = 0
return sub_142aa6cd0(arg1) __tailcall
