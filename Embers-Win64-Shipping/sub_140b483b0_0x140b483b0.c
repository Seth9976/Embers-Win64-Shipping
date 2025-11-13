// 函数: sub_140b483b0
// 地址: 0x140b483b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int16_t rdi = 0x2b
arg2[1].d = 2

if (*arg1 s< 0)
    rdi = 0x2d

int16_t* rsi = arg3
sub_140594770(arg2)
**arg2 = rdi
*(*arg2 + 2) = 0
int16_t i = *rsi

while (i != 0)
    if (i == 0x25)
        i = rsi[1]
        rsi = &rsi[1]
        
        if (i != 0)
            if (zx.d(i) - 0x44 u> 0x31)
                goto label_140b488d9
            
            switch (i)
                case 0x44
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q((divs.dp.q(sx.o(*arg1), 0xc92a69c000)).d)
                    int64_t var_a8
                    sub_140a2e390(&var_a8, u"%08i", zx.q((temp6_1 ^ temp5_1) - temp5_1))
                    int32_t var_a0
                    int32_t r8_5
                    
                    if (var_a0 == 0)
                        r8_5 = 0
                    else
                        r8_5 = var_a0 - 1
                    
                    sub_140a20ba0(arg2, var_a8, r8_5)
                    int64_t rcx_8 = var_a8
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                case 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 
                        0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 
                        0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x65, 0x67, 0x69, 0x6a, 0x6b, 0x6c, 
                        0x6f, 0x70, 0x71, 0x72
                    goto label_140b488d9
                case 0x64
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q((divs.dp.q(sx.o(*arg1), 0xc92a69c000)).d)
                    int64_t var_b8
                    sub_140a2e390(&var_b8, u"%i", zx.q((temp4_1 ^ temp3_1) - temp3_1))
                    int32_t var_b0
                    int32_t r8_2
                    
                    if (var_b0 == 0)
                        r8_2 = 0
                    else
                        r8_2 = var_b0 - 1
                    
                    sub_140a20ba0(arg2, var_b8, r8_2)
                    int64_t rcx_5 = var_b8
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                case 0x66
                    int32_t temp13_1
                    int32_t temp14_1
                    temp13_1:temp14_1 = sx.q((*arg1 s% 0x989680 s/ 0x2710).d)
                    int64_t var_68
                    sub_140a2e390(&var_68, u"%03i", zx.q((temp14_1 ^ temp13_1) - temp13_1))
                    int32_t var_60
                    int32_t r8_27
                    
                    if (var_60 == 0)
                        r8_27 = 0
                    else
                        r8_27 = var_60 - 1
                    
                    sub_140a20ba0(arg2, var_68, r8_27)
                    int64_t rcx_33 = var_68
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                case 0x68
                    int64_t temp0_3 = divs.dp.q(sx.o(*arg1), 0x861c46800)
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(temp0_3.d - (temp0_3 s/ 0x18 * 0x18).d)
                    int64_t var_98
                    sub_140a2e390(&var_98, u"%02i", zx.q((temp8_1 ^ temp7_1) - temp7_1))
                    int32_t var_90
                    int32_t r8_10
                    
                    if (var_90 == 0)
                        r8_10 = 0
                    else
                        r8_10 = var_90 - 1
                    
                    sub_140a20ba0(arg2, var_98, r8_10)
                    int64_t rcx_15 = var_98
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                case 0x6d
                    int64_t rax_26
                    int64_t rdx_13
                    rdx_13:rax_26 = muls.dp.q(0x1ca213d840baf7d5, *arg1)
                    int64_t r8_12 = rdx_13 s>> 0x1a
                    int64_t r8_13 = r8_12 + (r8_12 u>> 0x3f)
                    int64_t rax_29
                    int64_t rdx_14
                    rdx_14:rax_29 = muls.dp.q(-0x7777777777777777, r8_13)
                    int64_t rdx_16 = (rdx_14 + r8_13) s>> 5
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q(r8_13.d - (rdx_16.d + (rdx_16 u>> 0x3f).d) * 0x3c)
                    int64_t var_88
                    sub_140a2e390(&var_88, u"%02i", zx.q((temp10_1 ^ temp9_1) - temp9_1))
                    int32_t var_80
                    int32_t r8_17
                    
                    if (var_80 == 0)
                        r8_17 = 0
                    else
                        r8_17 = var_80 - 1
                    
                    sub_140a20ba0(arg2, var_88, r8_17)
                    int64_t rcx_21 = var_88
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                case 0x6e
                    int32_t temp19_1
                    int32_t temp20_1
                    temp19_1:temp20_1 = sx.q((*arg1 s% 0x989680).d * 0x64)
                    int64_t var_38
                    sub_140a2e390(&var_38, u"%09i", zx.q((temp20_1 ^ temp19_1) - temp19_1))
                    int32_t var_30
                    int32_t r8_38
                    
                    if (var_30 == 0)
                        r8_38 = 0
                    else
                        r8_38 = var_30 - 1
                    
                    sub_140a20ba0(arg2, var_38, r8_38)
                    int64_t rcx_49 = var_38
                    
                    if (rcx_49 != 0)
                        sub_140a74f90(rcx_49)
                case 0x73
                    int32_t temp11_1
                    int32_t temp12_1
                    temp11_1:temp12_1 = sx.q((*arg1 s/ 0x989680 s% 0x3c).d)
                    int64_t var_78
                    sub_140a2e390(&var_78, u"%02i", zx.q((temp12_1 ^ temp11_1) - temp11_1))
                    int32_t var_70
                    int32_t r8_24
                    
                    if (var_70 == 0)
                        r8_24 = 0
                    else
                        r8_24 = var_70 - 1
                    
                    sub_140a20ba0(arg2, var_78, r8_24)
                    int64_t rcx_28 = var_78
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                case 0x74
                    int32_t temp17_1
                    int32_t temp18_1
                    temp17_1:temp18_1 = sx.q((*arg1 s% 0x989680).d)
                    int64_t var_48
                    sub_140a2e390(&var_48, u"%07i", zx.q((temp18_1 ^ temp17_1) - temp17_1))
                    int32_t var_40
                    int32_t r8_35
                    
                    if (var_40 == 0)
                        r8_35 = 0
                    else
                        r8_35 = var_40 - 1
                    
                    sub_140a20ba0(arg2, var_48, r8_35)
                    int64_t rcx_44 = var_48
                    
                    if (rcx_44 != 0)
                        sub_140a74f90(rcx_44)
                case 0x75
                    int32_t temp15_1
                    int32_t temp16_1
                    temp15_1:temp16_1 = sx.q((*arg1 s% 0x989680 s/ 0xa).d)
                    int64_t var_58
                    sub_140a2e390(&var_58, u"%06i", zx.q((temp16_1 ^ temp15_1) - temp15_1))
                    int32_t var_50
                    int32_t r8_30
                    
                    if (var_50 == 0)
                        r8_30 = 0
                    else
                        r8_30 = var_50 - 1
                    
                    sub_140a20ba0(arg2, var_58, r8_30)
                    int64_t rcx_38 = var_58
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
    else if (i != 0)
    label_140b488d9:
        int32_t rdx_55 = arg2[1].d
        int32_t rax_77
        rax_77.b = rdx_55 s<= 0
        int32_t r14_1 = rdx_55 - 1
        
        if (rdx_55 s<= 0)
            r14_1 = 0
        
        int32_t rax_79 = rax_77 + 1 + rdx_55
        arg2[1].d = rax_79
        
        if (rax_79 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_51 = sx.q(r14_1)
        *(*arg2 + (rcx_51 << 1)) = i
        *(*arg2 + (rcx_51 << 1) + 2) = 0
    
    i = rsi[1]
    rsi = &rsi[1]

return arg2
