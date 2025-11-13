// 函数: sub_1428dcb10
// 地址: 0x1428dcb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_1428dcc80(1, data_143b85a90, data_143fecc4c, arg1)

if (result != 0)
    if (arg1 != 0)
    label_1428dcbcd:
        result[0x10].d = 1
        sub_1428dc4b0(result, "OpenSSL NIST SP 800-90A DRBG", 0x1c)
        return result
    
    if (result[0x12].d == arg1.d)
        if (*result != 0)
            goto label_1428dcbcd
        
        int64_t* rax_1 = result[1]
        
        if (rax_1 == 0 || *rax_1 != 0)
            CRITICAL_SECTION* rax_2 = sub_1428a5be0()
            *result = rax_2
            
            if (rax_2 != 0)
                goto label_1428dcbcd
            
            sub_1428a5670(0x24, 0x77, 0x7e, "crypto\rand\drbg_lib.c", 0x330)
            sub_1428dc150(result)
        else
            sub_1428a5670(0x24, 0x77, 0x82, "crypto\rand\drbg_lib.c", 0x329)
            sub_1428dc150(result)
    else
        sub_1428a5670(0x24, 0x77, 0x81, "crypto\rand\drbg_lib.c", 0x322)
        sub_1428dc150(result)

return 0
