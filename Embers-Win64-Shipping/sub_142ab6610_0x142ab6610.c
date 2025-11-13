// 函数: sub_142ab6610
// 地址: 0x142ab6610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0
int32_t r9 = 8
int32_t rbx_1 = *(&data_143653dd0 + (sx.q(*(arg2 + 8)) << 2)) + *(arg2 + 0xc)
int32_t r11_1 = *(&data_143653dd0 + (sx.q(*(arg3 + 8)) << 2)) + *(arg3 + 0xc)
int32_t r8 = 0

do
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 + r8)
    int32_t rax_5 = (temp1_1 - temp0_1) s>> 1
    int32_t rdx_1 = *((sx.q(rax_5) << 4) + &data_143ccb030)
    
    if (rbx_1 s< rdx_1)
        r9 = rax_5
    else if (rbx_1 s> rdx_1)
        r8 = rax_5 + 1
    else
        int32_t rdx_2 = *((sx.q(rax_5) << 4) + 0x143ccb034)
        
        if (r11_1 s>= rdx_2)
            if (r11_1 s<= rdx_2)
                *arg1 = &icu_64::MeasureUnit::`vftable'{for `icu_64::UObject'}
                *arg4 = 1
                arg1[1].d = *((sx.q(rax_5) << 4) + 0x143ccb038)
                *(arg1 + 0xc) = *((sx.q(rax_5) << 4) + 0x143ccb03c)
                arg1[2].b = 0
                return arg1
            
            r8 = rax_5 + 1
        else
            r9 = rax_5
while (r8 s< r9)

*arg4 = 0
*arg1 = &icu_64::MeasureUnit::`vftable'{for `icu_64::UObject'}
arg1[2].b = 0
arg1[1] = 0xf
return arg1
