// 函数: sub_140b28970
// 地址: 0x140b28970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = arg3
*arg2 = 0
arg2[1] = 0

if (arg3 == 0)
    return arg2

int16_t i = *arg3

if (i == 0)
    return arg2

do
    if (i == 0x25)
        i = r14[1]
        r14 = &r14[1]
        
        if (i != 0)
            if (zx.d(i) - 0x41 u> 0x38)
                goto label_140b28ee4
            
            switch (i)
                case 0x41
                    int64_t temp0_2 = divs.dp.q(sx.o(*arg1), 0x861c46800)
                    void* const rdx_9 = &data_142e74fec
                    int64_t r8_5 = -1
                    
                    if (temp0_2.d - (temp0_2 s/ 0x18 * 0x18).d s< 0xc)
                        rdx_9 = &data_142e74fe4
                    
                    do
                        r8_5 += 1
                    while (*(rdx_9 + (r8_5 << 1)) != 0)
                    
                    sub_140a20ba0(arg2, rdx_9, r8_5.d)
                case 0x42, 0x43, 0x45, 0x46, 0x47, 0x49, 0x4a, 0x4b, 0x4c, 0x4e, 0x4f, 0x50, 0x51, 
                        0x52, 0x54, 0x55, 0x56, 0x57, 0x58, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 
                        0x60, 0x62, 0x63, 0x65, 0x66, 0x67, 0x69, 0x6a, 0x6b, 0x6c, 0x6e, 0x6f, 
                        0x70, 0x71, 0x72, 0x74, 0x75, 0x76, 0x77, 0x78
                    goto label_140b28ee4
                case 0x44
                    int64_t var_b8
                    sub_140a2e390(&var_b8, u"%03i", zx.q(sub_140b19390(arg1)))
                    int32_t var_b0
                    int32_t r8_11
                    
                    if (var_b0 == 0)
                        r8_11 = 0
                    else
                        r8_11 = var_b0 - 1
                    
                    sub_140a20ba0(arg2, var_b8, r8_11)
                    int64_t rcx_19 = var_b8
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                case 0x48
                    int64_t temp0_3 = divs.dp.q(sx.o(*arg1), 0x861c46800)
                    int64_t var_68
                    sub_140a2e390(&var_68, u"%02i", zx.q(temp0_3.d - (temp0_3 s/ 0x18 * 0x18).d))
                    int32_t var_60
                    int32_t r8_27
                    
                    if (var_60 == 0)
                        r8_27 = 0
                    else
                        r8_27 = var_60 - 1
                    
                    sub_140a20ba0(arg2, var_68, r8_27)
                    int64_t rcx_40 = var_68
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
                case 0x4d
                    int64_t rax_30
                    int64_t rdx_24
                    rdx_24:rax_30 = muls.dp.q(0x1ca213d840baf7d5, *arg1)
                    int64_t rcx_42 = rdx_24 s>> 0x1a
                    int64_t rcx_43 = rcx_42 + (rcx_42 u>> 0x3f)
                    int64_t rax_33
                    int64_t rdx_25
                    rdx_25:rax_33 = muls.dp.q(-0x7777777777777777, rcx_43)
                    int64_t rdx_27 = (rdx_25 + rcx_43) s>> 5
                    int64_t var_58
                    sub_140a2e390(&var_58, %02i", 
                        zx.q(rcx_43.d - (rdx_27.d + (rdx_27 u>> 0x3f).d) * 0x3c))
                    int32_t var_50
                    int32_t r8_30
                    
                    if (var_50 == 0)
                        r8_30 = 0
                    else
                        r8_30 = var_50 - 1
                    
                    sub_140a20ba0(arg2, var_58, r8_30)
                    int64_t rcx_47 = var_58
                    
                    if (rcx_47 != 0)
                        sub_140a74f90(rcx_47)
                case 0x53
                    int64_t var_48
                    sub_140a2e390(&var_48, u"%02i", *arg1 s/ 0x989680 s% 0x3c)
                    int32_t var_40
                    int32_t r8_36
                    
                    if (var_40 == 0)
                        r8_36 = 0
                    else
                        r8_36 = var_40 - 1
                    
                    sub_140a20ba0(arg2, var_48, r8_36)
                    int64_t rcx_51 = var_48
                    
                    if (rcx_51 != 0)
                        sub_140a74f90(rcx_51)
                case 0x59
                    int64_t var_88
                    sub_140a2e390(&var_88, u"%04i", zx.q(sub_140b1b790(arg1)))
                    int32_t var_80
                    int32_t r8_21
                    
                    if (var_80 == 0)
                        r8_21 = 0
                    else
                        r8_21 = var_80 - 1
                    
                    sub_140a20ba0(arg2, var_88, r8_21)
                    int64_t rcx_31 = var_88
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                case 0x61
                    int64_t temp0_1 = divs.dp.q(sx.o(*arg1), 0x861c46800)
                    void* const rdx_4 = &data_142e74fdc
                    int64_t r8_2 = -1
                    
                    if (temp0_1.d - (temp0_1 s/ 0x18 * 0x18).d s< 0xc)
                        rdx_4 = &data_142e74fd4
                    
                    do
                        r8_2 += 1
                    while (*(rdx_4 + (r8_2 << 1)) != 0)
                    
                    sub_140a20ba0(arg2, rdx_4, r8_2.d)
                case 0x64
                    int64_t var_c8
                    sub_140a2e390(&var_c8, u"%02i", zx.q(sub_140b19270(arg1)))
                    int32_t var_c0
                    int32_t r8_8
                    
                    if (var_c0 == 0)
                        r8_8 = 0
                    else
                        r8_8 = var_c0 - 1
                    
                    sub_140a20ba0(arg2, var_c8, r8_8)
                    int64_t rcx_15 = var_c8
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                case 0x68
                    int64_t var_78
                    sub_140a2e390(&var_78, u"%02i", zx.q(sub_140b19fc0(arg1)))
                    int32_t var_70
                    int32_t r8_24
                    
                    if (var_70 == 0)
                        r8_24 = 0
                    else
                        r8_24 = var_70 - 1
                    
                    sub_140a20ba0(arg2, var_78, r8_24)
                    int64_t rcx_35 = var_78
                    
                    if (rcx_35 != 0)
                        sub_140a74f90(rcx_35)
                case 0x6d
                    int64_t var_a8
                    sub_140a2e390(&var_a8, u"%02i", zx.q(sub_140b1a320(arg1)))
                    int32_t var_a0
                    int32_t r8_14
                    
                    if (var_a0 == 0)
                        r8_14 = 0
                    else
                        r8_14 = var_a0 - 1
                    
                    sub_140a20ba0(arg2, var_a8, r8_14)
                    int64_t rcx_23 = var_a8
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                case 0x73
                    int64_t rax_44
                    int64_t rdx_36
                    rdx_36:rax_44 = muls.dp.q(0x346dc5d63886594b, *arg1)
                    int64_t rcx_53 = rdx_36 s>> 0xb
                    int64_t var_38
                    sub_140a2e390(&var_38, u"%03i", zx.q(((rcx_53 + (rcx_53 u>> 0x3f)) s% 0x3e8).d))
                    int32_t var_30
                    int32_t r8_39
                    
                    if (var_30 == 0)
                        r8_39 = 0
                    else
                        r8_39 = var_30 - 1
                    
                    sub_140a20ba0(arg2, var_38, r8_39)
                    int64_t rcx_58 = var_38
                    
                    if (rcx_58 != 0)
                        sub_140a74f90(rcx_58)
                case 0x79
                    int64_t var_98
                    sub_140a2e390(&var_98, u"%02i", zx.q(sub_140b1b790(arg1) s% 0x64))
                    int32_t var_90
                    int32_t r8_18
                    
                    if (var_90 == 0)
                        r8_18 = 0
                    else
                        r8_18 = var_90 - 1
                    
                    sub_140a20ba0(arg2, var_98, r8_18)
                    int64_t rcx_27 = var_98
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
    else if (i != 0)
    label_140b28ee4:
        int32_t rdx_41 = arg2[1].d
        int32_t rax_51
        rax_51.b = rdx_41 s<= 0
        int32_t rsi_1 = rdx_41 - 1
        
        if (rdx_41 s<= 0)
            rsi_1 = 0
        
        int32_t rax_53 = rax_51 + 1 + rdx_41
        arg2[1].d = rax_53
        
        if (rax_53 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_60 = sx.q(rsi_1)
        *(*arg2 + (rcx_60 << 1)) = i
        *(*arg2 + (rcx_60 << 1) + 2) = 0
    
    i = r14[1]
    r14 = &r14[1]
while (i != 0)

return arg2
