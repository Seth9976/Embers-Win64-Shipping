// 函数: sub_14118c120
// 地址: 0x14118c120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* r8_1

if (arg3 u<= 0x80)
    if (arg3 == 0x80)
        r8_1 = &data_143e6f550
        goto label_14118c218
    
    uint64_t r8 = zx.q(arg3 - 2)
    
    if (r8.d u<= 0x3e)
        switch (r8)
            case 0
                r8_1 = &data_143e6f290
                goto label_14118c218
            case 2
                r8_1 = &data_143e6f810
                goto label_14118c218
            case 6
                r8_1 = &data_143e6fd90
                goto label_14118c218
            case 0xe
                r8_1 = &data_143e6f3f0
                goto label_14118c218
            case 0x1e
                r8_1 = &data_143e6f970
                goto label_14118c218
            case 0x3e
                r8_1 = &data_143e6fef0
                goto label_14118c218
else if (arg3 == 0x100)
    r8_1 = &data_143e6fad0
label_14118c218:
    int64_t var_18
    sub_1419a2ec0(arg2, &var_18, r8_1, 0)
    *arg1 = var_18
    int64_t var_10
    arg1[1] = var_10
else
    if (arg3 == 0x200)
        r8_1 = &data_143e70050
        goto label_14118c218
    
    if (arg3 == 0x400)
        r8_1 = &data_143e6f6b0
        goto label_14118c218
    
    if (arg3 == 0x800)
        r8_1 = &data_143e6fc30
        goto label_14118c218
    
    if (arg3 == 0x1000)
        r8_1 = &data_143e701b0
        goto label_14118c218
return arg1
