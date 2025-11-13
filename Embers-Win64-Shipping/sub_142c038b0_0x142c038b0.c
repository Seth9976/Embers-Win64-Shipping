// 函数: sub_142c038b0
// 地址: 0x142c038b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t r14_2 = *(arg2 + 0x44) - *arg3 - 1
uint64_t rbp = zx.q(arg1)
int32_t result

if (arg1 u> 0x100)
    uint64_t rax_7 = zx.q((rbp - 0x101).d)
    
    if (rax_7.d u> 0x24)
    label_142c03a84:
        *(arg2 + 0x44) = *(arg2 + 0x18)
        result = sub_142c03560(rbp.d, arg2, arg3)
        
        if (*(arg2 + 0x24) == 0)
            goto label_142c03a92
    else
        switch (rax_7)
            case 0, 1, 2, 3, 4, 5, 7, 0x13, 0x16, 0x1e, 0x1f, 0x20, 0x22
            label_142c03a1f:
                *(arg2 + 0x24)
                result = 0
                *(arg2 + 0x24) = result
            label_142c03a92:
                
                if (*(arg2 + 0x38) == 0 && *(arg2 + 0x1c) == 0 && *(arg2 + 0x20) == 0
                        && *(arg2 + 0x2c) s>= 0)
                    int32_t* rax_22 = sub_142c04170(&arg3[2])
                    *(rax_22 + 0x10) = 0
                    rax_22[6] = 0
                    rax_22[8] = r14_2
                    *rax_22 = rbp.d
                    int32_t rdx_1 = *arg3
                    int32_t r8_1 = *(arg2 + 0x18) - rdx_1
                    
                    if (rdx_1 u<= *(arg2 + 0x10))
                        r15 = *(arg2 + 0x10) - rdx_1
                    
                    if (r15 u< r8_1)
                        r8_1 = r15
                    
                    *(rax_22 + 0x10) = zx.q(rdx_1) + *(arg2 + 8)
                    rax_22[6] = r8_1
                    result = *(arg2 + 0x18)
                    *arg3 = result
            case 6, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x17, 0x18, 0x19, 0x1a, 
                    0x1b, 0x1c, 0x23
                goto label_142c03a84
            case 0x14, 0x15
                goto label_142c039c8
            case 0x1d
                arg3[0x14] = sub_142c03360(arg2 + 0x20)
                arg3[0x12] = sub_142c03360(arg2 + 0x20)
                arg3[0x11] = sub_142c03360(arg2 + 0x20)
                goto label_142c03987
            case 0x21
                arg3[0x15] = sub_142c03360(arg2 + 0x20)
            label_142c03987:
                int32_t result_3 = *(arg2 + 0x24)
                result = result_3
                
                if (result_3 u< result_3)
                    *(arg2 + 0x20) = 1
                else
                    result -= result_3
                    *(arg2 + 0x24) = result
                
                goto label_142c03a92
            case 0x24
                arg3[0x18] = sub_142c03360(arg2 + 0x20)
                goto label_142c03987
else
    if (rbp.d == 0x100)
    label_142c039c8:
        int32_t rax_9 = *(arg2 + 0x24)
        double* rax_12
        
        if (rax_9 == 0)
            *(arg2 + 0x20) = 1
            data_144017550.q = 0
            rax_12 = &data_144017550
        else
            *(arg2 + 0x24) = rax_9 - 1
            
            if (rax_9 - 1 u>= *(arg2 + 0x28))
                data_144017550.q = 0
                rax_12 = &data_144017550
            else
                rax_12 = *(arg2 + 0x30) + (zx.q(rax_9 - 1) << 3)
        
        int32_t rcx_7 = int.d(fconvert.t(*rax_12))
        
        if (rcx_7 s< 0)
            *(arg2 + 0x20) = 1
        
        int32_t rbx_1 = 0
        
        if (rcx_7 s>= 0)
            rbx_1 = rcx_7
        
        arg3[zx.q(sub_142c03020(rbp.d)) + 8] = rbx_1
        goto label_142c03a1f
    
    if (rbp.d u> 0x12)
        goto label_142c03a84
    
    switch (rbp)
        case 0, 1, 2, 3, 4
            goto label_142c039c8
        case 5, 0xd, 0xe
            goto label_142c03a1f
        case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0x11
            goto label_142c03a84
        case 0xf
            arg3[0x17] = sub_142c03360(arg2 + 0x20)
            int32_t result_2 = *(arg2 + 0x24)
            result = result_2
            
            if (result_2 u< result_2)
                *(arg2 + 0x20) = 1
            else
                result -= result_2
                *(arg2 + 0x24) = result
            
            if (arg3[0x17] != 0)
                goto label_142c03a92
        case 0x10
            arg3[0x16] = sub_142c03360(arg2 + 0x20)
            int32_t result_1 = *(arg2 + 0x24)
            result = result_1
            
            if (result_1 u< result_1)
                *(arg2 + 0x20) = 1
            else
                result -= result_1
                *(arg2 + 0x24) = result
            
            if (arg3[0x16] != 0)
                goto label_142c03a92
        case 0x12
            arg3[0x19] = sub_142c03360(arg2 + 0x20)
            arg3[0x1a] = sub_142c03360(arg2 + 0x20)
            goto label_142c03987

return result
