// 函数: sub_14292e9f0
// 地址: 0x14292e9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t* result

if (arg1 != 0)
    result = *arg1

if (arg1 == 0 || result == 0)
    int64_t* result_1 = sub_1428d5e30()
    result = result_1
    
    if (result_1 == 0)
        sub_1428a5670((result_1 + 0xb).d, 0x89, (result_1 + 0x41).d, "crypto\x509\x509_att.c", 0xc4)
        return 0

if (arg2 != 0)
    sub_1428cd400(*result)
    int64_t* rax_2 = sub_1428f64c0(arg2)
    *result = rax_2
    int32_t rcx_3
    rcx_3.b = rax_2 != 0
    
    if (rcx_3 != 0)
        int32_t* rbp_1 = nullptr
        int32_t* rsi_1 = nullptr
        int32_t r12_1 = 0
        int32_t r13_2 = arg3 & 0x1000
        int32_t r15_1
        
        if (r13_2 == 0)
            r15_1 = arg5
            
            if (r15_1 == 0xffffffff)
                goto label_14292eb3a
            
            int32_t* rax_5 = sub_1428f2e90(arg3)
            rsi_1 = rax_5
            
            if (rax_5 != 0)
                if (sub_1428f2d50(rax_5, arg4, r15_1) == 0)
                    goto label_14292eb90
                
                r12_1 = arg3
                goto label_14292eb3a
            
        label_14292eb90:
            sub_1428a5670(0xb, 0x8a, 0x41, "crypto\x509\x509_att.c", 0x122)
            sub_1428c3620(rbp_1)
            sub_1428f2c80(rsi_1)
        else
            r15_1 = arg5
            int32_t* rax_4 = sub_14292bdc0(nullptr, arg4, r15_1, arg3, sub_1428a96d0(rax_2))
            rsi_1 = rax_4
            
            if (rax_4 != 0)
                r12_1 = rax_4[1]
            label_14292eb3a:
                
                if (arg3 != 0)
                    int32_t* rax_7 = sub_1428c3640()
                    rbp_1 = rax_7
                    
                    if (rax_7 == 0)
                        goto label_14292eb90
                    
                    if (r15_1 != 0xffffffff || r13_2 != 0)
                        sub_1428cd2e0(rbp_1, r12_1, rsi_1)
                        rsi_1 = nullptr
                    else if (sub_1428cd350(rax_7, arg3, arg4) == 0)
                        goto label_14292eb90
                    
                    if (sub_142898d50(result[1], rbp_1) == 0)
                        goto label_14292eb90
                else
                    sub_1428f2c80(rsi_1)
                
                if (arg1 != 0 && *arg1 == 0)
                    *arg1 = result
                
                return result
            
            sub_1428a5670(0xb, 0x8a, 0xd, "crypto\x509\x509_att.c", 0x101)

if (arg1 == 0 || result != *arg1)
    sub_1428d5e00(result)

return nullptr
