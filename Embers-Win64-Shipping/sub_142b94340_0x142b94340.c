// 函数: sub_142b94340
// 地址: 0x142b94340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx = arg1

if (arg1 == 0)
    return zx.q((&arg1[0xa]).d)

if (arg2 == 0)
    return zx.q((arg2 + 6).d)

int32_t rcx = 0
char rdi = (*(arg2 + 0x20)).b
int32_t r14 = *(arg2 + 0x24)
int32_t i_1 = 0

if (0 s< *rdx)
    void* r8 = nullptr
    void* var_48_1 = nullptr
    int32_t i
    
    do
        int64_t rax_4 = sx.q(*(r8 + *(rdx + 0x18)))
        int32_t var_80_1 = rax_4.d
        int64_t var_98
        int64_t var_90
        int64_t var_88_1
        int32_t rax_10
        char* rcx_3
        int32_t rdx_3
        int64_t* rbx_1
        void* rsi_2
        int32_t r8_3
        int32_t r9_3
        int32_t r10_3
        int64_t* r15_1
        
        if (rax_4.d s>= 0)
            uint64_t rsi_1 = zx.q(rcx)
            int64_t rax_5 = *(rdx + 8)
            rbx_1 = rax_5 + (rsi_1 << 3)
            r15_1 = rax_5 + (rax_4 << 3)
            int64_t rax_6 = *rbx_1
            var_98 = rax_6
            r9_3 = (var_98:4.d << rdi) - r14
            var_98:4.d = r9_3
            r8_3 = (rax_6.d << rdi) - r14
            var_98.d = r8_3
            int64_t rax_7 = *r15_1
            r10_3 = (rax_7:4.d << rdi) - r14
            rdx_3 = (rax_7.d << rdi) - r14
            var_90 = var_98
            var_88_1.d = rdx_3
            var_88_1:4.d = r10_3
            rcx_3 = *(arg1 + 0x10)
            rsi_2 = &rcx_3[rsi_1]
            rax_10 = sx.d(*rsi_2) & 3
        
        if (rax_4.d s< 0 || rax_10 == 2)
            return 0x14
        
        if (rax_10 == 0)
            if ((rcx_3[rax_4] & 3) != 1)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rdx_3 + r8_3)
                var_98.d = (temp1_1 - temp0_1) s>> 1
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_3 + r9_3)
                var_98:4.d = (temp3_1 - temp2_1) s>> 1
            else
                r15_1 -= 8
                var_98 = var_88_1
            
            rbx_1 -= 8
            rsi_2 -= 1
        
        int32_t result = (*arg2)(&var_98, arg3)
        
        if (result != 0)
            return result
        
        if (rbx_1 u>= r15_1)
        label_142b9463d:
            result = (*(arg2 + 8))(&var_98, arg3)
        else
            while (true)
                int32_t rcx_5 = sx.d(*(rsi_2 + 1))
                rsi_2 += 1
                rbx_1 = &rbx_1[1]
                int32_t rcx_6 = rcx_5 & 3
                
                if (rcx_6 == 0)
                    int32_t r9_7 = (*rbx_1 << rdi) - r14
                    var_90.d = r9_7
                    int32_t r10_6 = (*(rbx_1 + 4) << rdi) - r14
                    var_90:4.d = r10_6
                    
                    while (true)
                        if (rbx_1 u>= r15_1)
                            result = (*(arg2 + 0x10))(&var_90, &var_98, arg3)
                            goto label_142b94641
                        
                        int32_t rax_47 = rbx_1[1].d
                        rbx_1 = &rbx_1[1]
                        int32_t rdx_9 = sx.d(*(rsi_2 + 1))
                        rsi_2 += 1
                        int32_t rdx_10 = rdx_9 & 3
                        int32_t rax_49 = (rax_47 << rdi) - r14
                        int32_t r8_7 = (*(rbx_1 + 4) << rdi) - r14
                        int32_t var_78 = rax_49
                        int32_t var_74_1 = r8_7
                        
                        if (rdx_10 == 1)
                            result = (*(arg2 + 0x10))(&var_90, &var_78, arg3)
                            break
                        
                        if (rdx_10 != 0)
                            return 0x14
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(rax_49 + r9_7)
                        int32_t var_50 = (temp5_1 - temp4_1) s>> 1
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r8_7 + r10_6)
                        int32_t var_4c_1 = (temp7_1 - temp6_1) s>> 1
                        result = (*(arg2 + 0x10))(&var_90, &var_50, arg3)
                        
                        if (result != 0)
                            return result
                        
                        int64_t rax_58 = var_78.q
                        var_90 = rax_58
                        r9_7 = rax_58.d
                        r10_6 = var_90:4.d
                else if (rcx_6 == 1)
                    int32_t var_58 = (*rbx_1 << rdi) - r14
                    int32_t var_54_1 = (*(rbx_1 + 4) << rdi) - r14
                    result = (*(arg2 + 8))(&var_58, arg3)
                else
                    if (&rbx_1[1] u> r15_1)
                        return 0x14
                    
                    if ((*(rsi_2 + 1) & 3) != 2)
                        return 0x14
                    
                    int32_t rax_23 = *rbx_1
                    int32_t var_70
                    int32_t* rdx_7 = &var_70
                    rbx_1 = &rbx_1[2]
                    rsi_2 += 2
                    int32_t var_68 = (rax_23 << rdi) - r14
                    int32_t var_64_1 = (*(rbx_1 - 0xc) << rdi) - r14
                    var_70 = (rbx_1[-1].d << rdi) - r14
                    int32_t var_6c_1 = (*(rbx_1 - 4) << rdi) - r14
                    
                    if (rbx_1 u> r15_1)
                        result = (*(arg2 + 0x18))(&var_68, rdx_7, &var_98, arg3)
                        break
                    
                    int32_t var_60 = (*rbx_1 << rdi) - r14
                    int32_t var_5c_1 = (*(rbx_1 + 4) << rdi) - r14
                    result = (*(arg2 + 0x18))(&var_68, rdx_7, &var_60, arg3)
                
                if (result != 0)
                    return result
                
                if (rbx_1 u>= r15_1)
                    goto label_142b9463d
        
    label_142b94641:
        
        if (result != 0)
            return result
        
        i = i_1 + 1
        rdx = arg1
        r8 = var_48_1 + 2
        rcx = var_80_1 + 1
        i_1 = i
        var_48_1 = r8
    while (i s< sx.d(*rdx))

return 0
