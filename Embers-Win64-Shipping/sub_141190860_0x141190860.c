// 函数: sub_141190860
// 地址: 0x141190860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* r8_1

if (arg3 u<= 0x80)
    if (arg3 == 0x80)
        r8_1 = &data_143e705d0
        goto label_141190958
    
    uint64_t r8 = zx.q(arg3 - 2)
    
    if (r8.d u<= 0x3e)
        switch (r8)
            case 0
                r8_1 = &data_143e70310
                goto label_141190958
            case 2
                r8_1 = &data_143e70890
                goto label_141190958
            case 6
                r8_1 = &data_143e70e10
                goto label_141190958
            case 0xe
                r8_1 = &data_143e70470
                goto label_141190958
            case 0x1e
                r8_1 = &data_143e709f0
                goto label_141190958
            case 0x3e
                r8_1 = &data_143e70f70
                goto label_141190958
else if (arg3 == 0x100)
    r8_1 = &data_143e70b50
label_141190958:
    int64_t var_18
    sub_1419a2ec0(arg2, &var_18, r8_1, 0)
    *arg1 = var_18
    int64_t var_10
    arg1[1] = var_10
else
    if (arg3 == 0x200)
        r8_1 = &data_143e710d0
        goto label_141190958
    
    if (arg3 == 0x400)
        r8_1 = &data_143e70730
        goto label_141190958
    
    if (arg3 == 0x800)
        r8_1 = &data_143e70cb0
        goto label_141190958
    
    if (arg3 == 0x1000)
        r8_1 = &data_143e71230
        goto label_141190958
return arg1
