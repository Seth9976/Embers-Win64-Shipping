// 函数: sub_142c03cc0
// 地址: 0x142c03cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (zx.o(0)).q
int64_t result_1 = (zx.o(0)).q

if (arg1 u> 0x17)
    uint64_t rax_10 = zx.q(arg1 - 0x109)
    
    if (rax_10.d u> 9)
    label_142c03dc3:
        result = sub_142c04010(arg1, arg2)
        
        if (*(arg2 + 0x24) == 0)
            goto label_142c03dce
    else
        switch (rax_10)
            case 0, 1, 2, 8, 9
            label_142c03d75:
                int32_t rax_13 = *(arg2 + 0x24)
                int64_t* rax_16
                
                if (rax_13 == 0)
                    *(arg2 + 0x20) = 1
                    data_144017550.q = 0
                    rax_16 = &data_144017550
                else
                    *(arg2 + 0x24) = rax_13 - 1
                    
                    if (rax_13 - 1 u>= *(arg2 + 0x28))
                        data_144017550.q = 0
                        rax_16 = &data_144017550
                    else
                        rax_16 = *(arg2 + 0x30) + (zx.q(rax_13 - 1) << 3)
                
                result = *rax_16
                result_1 = result
                goto label_142c03db5
            case 3, 4
            label_142c03db5:
                *(arg2 + 0x24)
                *(arg2 + 0x24) = 0
            label_142c03dce:
                
                if (*(arg2 + 0x38) == 0 && *(arg2 + 0x1c) == 0 && *(arg2 + 0x20) == 0
                        && *(arg2 + 0x2c) s>= 0)
                    int32_t* rax_19 = sub_142c04170(&arg3[2])
                    result = result_1
                    int32_t r9_1 = 0
                    *(rax_19 + 0x10) = 0
                    rax_19[6] = 0
                    *(rax_19 + 0x20) = result
                    *rax_19 = arg1
                    int32_t rdx = *arg3
                    int32_t r8_1 = *(arg2 + 0x18) - rdx
                    
                    if (rdx u<= *(arg2 + 0x10))
                        r9_1 = *(arg2 + 0x10) - rdx
                    
                    if (r9_1 u< r8_1)
                        r8_1 = r9_1
                    
                    *(rax_19 + 0x10) = zx.q(rdx) + *(arg2 + 8)
                    rax_19[6] = r8_1
                    *arg3 = *(arg2 + 0x18)
            case 5, 6, 7
                goto label_142c03dc3
else
    if (arg1 == 0x17)
        goto label_142c03dce
    
    uint64_t rax_1 = zx.q(arg1 - 6)
    
    if (rax_1.d u> 0x10)
        goto label_142c03dc3
    
    switch (rax_1)
        case 0, 1, 2, 3
            goto label_142c03db5
        case 4, 5
            goto label_142c03d75
        case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xe, 0xf
            goto label_142c03dc3
        case 0xd
            arg3[6] = sub_142c03360(arg2 + 0x20)
            int32_t rcx_1 = *(arg2 + 0x24)
            
            if (rcx_1 u< rcx_1)
                *(arg2 + 0x20) = 1
            else
                *(arg2 + 0x24) = 0
            
            goto label_142c03dce
        case 0x10
            sub_142c04090(arg2)
            arg3[0xa] = *(arg2 + 0x40)
            *(arg2 + 0x24)
            *(arg2 + 0x24) = 0
            goto label_142c03dce

return result
