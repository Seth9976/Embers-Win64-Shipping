// 函数: sub_14118c2a0
// 地址: 0x14118c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* r8_1

if (arg3 u<= 0x80)
    if (arg3 == 0x80)
        r8_1 = &data_143e71650
        goto label_14118c398
    
    uint64_t r8 = zx.q(arg3 - 2)
    
    if (r8.d u<= 0x3e)
        switch (r8)
            case 0
                r8_1 = &data_143e71390
                goto label_14118c398
            case 2
                r8_1 = &data_143e71910
                goto label_14118c398
            case 6
                r8_1 = &data_143e71e90
                goto label_14118c398
            case 0xe
                r8_1 = &data_143e714f0
                goto label_14118c398
            case 0x1e
                r8_1 = &data_143e71a70
                goto label_14118c398
            case 0x3e
                r8_1 = &data_143e71ff0
                goto label_14118c398
else if (arg3 == 0x100)
    r8_1 = &data_143e71bd0
label_14118c398:
    int64_t var_18
    sub_1419a2ec0(arg2, &var_18, r8_1, 0)
    *arg1 = var_18
    int64_t var_10
    arg1[1] = var_10
else
    if (arg3 == 0x200)
        r8_1 = &data_143e72150
        goto label_14118c398
    
    if (arg3 == 0x400)
        r8_1 = &data_143e717b0
        goto label_14118c398
    
    if (arg3 == 0x800)
        r8_1 = &data_143e71d30
        goto label_14118c398
    
    if (arg3 == 0x1000)
        r8_1 = &data_143e722b0
        goto label_14118c398
return arg1
