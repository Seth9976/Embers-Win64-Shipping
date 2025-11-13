// 函数: sub_142ac87a0
// 地址: 0x142ac87a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68

if (*arg8 s<= 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t rcx_3 = (temp1_1 ^ temp0_1) - temp0_1
    int16_t var_38
    
    if (arg4 == 0 || (rcx_3 s>= 0x3e8 && (arg6 == 0 || rcx_3 s>= 0xea60)))
        int64_t rsi_1 = 0
        int16_t r14_1 = 0x3a
        
        if (arg3 != 0)
            r14_1 = 0
        
        if (rcx_3 s< data_143ccb0b0)
            int32_t rdx_3 = rcx_3 s/ 0x36ee80
            int32_t var_30 = rdx_3
            int32_t rcx_7 = rcx_3 + rdx_3 * 0xffc91180
            int32_t var_2c_1 = rcx_7 s/ 0xea60
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = muls.dp.d(0x10624dd3, rcx_7 s% 0xea60)
            uint32_t rax_12 = temp6_1 s>> 6 u>> 0x1f
            int32_t var_28_1 = rcx_7 s% 0xea60 s/ 0x3e8
            uint64_t rax_14 = zx.q(sbb.d(rax_12, rax_12, arg6 != 0) + 2)
            uint64_t rcx_9 = zx.q(rax_14.d)
            int64_t rdx_10
            rdx_10.b = arg5 == 0
            
            if (rcx_9 u> rdx_10)
                while ((&var_30)[rax_14] == 0)
                    rcx_9 = zx.q(rcx_9.d - 1)
                    rax_14 -= 1
                    
                    if (rax_14 s<= rdx_10)
                        break
            
            int64_t rbp_1 = sx.q(rcx_9.d)
            int16_t rdx_11 = 0x2b
            
            if (arg2 s< 0)
                int64_t rax_15 = 0
                
                if (rcx_9.d s>= 0)
                    do
                        if ((&var_30)[rax_15] != 0)
                            rdx_11 = 0x2d
                            break
                        
                        rax_15 += 1
                    while (rax_15 s<= rbp_1)
            
            var_38 = rdx_11
            sub_142a4afe0(arg7)
            int16_t rax_16 = *(arg7 + 8)
            int32_t r8_4
            
            if (rax_16 s< 0)
                r8_4 = *(arg7 + 0xc)
            else
                r8_4 = sx.d(rax_16) s>> 5
            
            sub_142a49390(arg7, 0, r8_4, &var_38, 0, 1)
            
            if (rbp_1 s>= 0)
                do
                    if (arg3 == 0 && rsi_1 != 0)
                        var_38 = r14_1
                        sub_142a48d70(arg7, &var_38, 0, 1)
                    
                    int32_t rdi_1 = (&var_30)[rsi_1]
                    uint64_t rdx_15 = zx.q(rdi_1 s/ 0xa)
                    uint16_t rax_19 = (rdx_15 * 5).w
                    rdx_15.w += 0x30
                    var_38 = rdx_15.w
                    sub_142a48d70(arg7, &var_38, 0, 1)
                    var_38 = rdi_1.w - rax_19 * 2 + 0x30
                    sub_142a48d70(arg7, &var_38, 0, 1)
                    rsi_1 += 1
                while (rsi_1 s<= rbp_1)
        else
            sub_142a4ab40(arg7)
            *arg8 = 1
    else
        var_38 = 0x5a
        sub_142a4afe0(arg7)
        int16_t rax_4 = *(arg7 + 8)
        int32_t r8_2
        
        if (rax_4 s< 0)
            r8_2 = *(arg7 + 0xc)
        else
            r8_2 = sx.d(rax_4) s>> 5
        
        sub_142a49390(arg7, 0, r8_2, &var_38, 0, 1)
else
    sub_142a4ab40(arg7)

__security_check_cookie(rax_1 ^ &var_68)
return arg7
