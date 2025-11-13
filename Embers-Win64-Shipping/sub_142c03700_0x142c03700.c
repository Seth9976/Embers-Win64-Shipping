// 函数: sub_142c03700
// 地址: 0x142c03700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = (zx.o(0)).q
int32_t result
int32_t result_1

if (arg1 u<= 0x10b)
    if (arg1 u>= 0x109)
    label_142c0379e:
        int32_t rax_4 = *(arg2 + 0x24)
        int64_t* rax_7
        
        if (rax_4 == 0)
            *(arg2 + 0x20) = 1
            data_144017550.q = 0
            rax_7 = &data_144017550
        else
            *(arg2 + 0x24) = rax_4 - 1
            
            if (rax_4 - 1 u>= *(arg2 + 0x28))
                data_144017550.q = 0
                rax_7 = &data_144017550
            else
                rax_7 = *(arg2 + 0x30) + (zx.q(rax_4 - 1) << 3)
        
        var_18 = *rax_7
        goto label_142c037de
    
    uint64_t rax_1 = zx.q(arg1 - 6)
    
    if (rax_1.d u> 0xf)
        goto label_142c0378d
    
    switch (rax_1)
        case 0, 1, 2, 3
            goto label_142c037de
        case 4, 5, 0xe, 0xf
            goto label_142c0379e
        case 6, 7, 8, 9, 0xa, 0xb, 0xc
            goto label_142c0378d
        case 0xd
            arg3[6] = sub_142c03360(arg2 + 0x20)
            result_1 = *(arg2 + 0x24)
            result = result_1
            
            if (result_1 u>= result_1)
                goto label_142c037e3
            
            *(arg2 + 0x20) = 1
            goto label_142c037e8
else if (arg1 u<= 0x10d)
label_142c037de:
    result_1 = *(arg2 + 0x24)
    result = result_1
label_142c037e3:
    result -= result_1
    *(arg2 + 0x24) = result
label_142c037e8:
    
    if (*(arg2 + 0x38) == 0 && *(arg2 + 0x1c) == 0 && *(arg2 + 0x20) == 0 && *(arg2 + 0x2c) s>= 0)
        int32_t* rax_8 = sub_142c04170(&arg3[2])
        int32_t r9_1 = 0
        *(rax_8 + 0x10) = 0
        rax_8[6] = 0
        *(rax_8 + 0x20) = var_18
        *rax_8 = arg1
        int32_t rdx_1 = *arg3
        int32_t r8_1 = *(arg2 + 0x18) - rdx_1
        
        if (rdx_1 u<= *(arg2 + 0x10))
            r9_1 = *(arg2 + 0x10) - rdx_1
        
        if (r9_1 u< r8_1)
            r8_1 = r9_1
        
        *(rax_8 + 0x10) = zx.q(rdx_1) + *(arg2 + 8)
        rax_8[6] = r8_1
        result = *(arg2 + 0x18)
        *arg3 = result
else
    if (arg1 == 0x10e || arg1 - 0x111 u<= 2)
        goto label_142c0379e
    
label_142c0378d:
    result = sub_142c04010(arg1, arg2)
    
    if (*(arg2 + 0x24) == 0)
        goto label_142c037e8
return result
