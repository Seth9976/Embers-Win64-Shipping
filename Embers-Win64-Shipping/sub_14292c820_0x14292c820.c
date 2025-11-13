// 函数: sub_14292c820
// 地址: 0x14292c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t r15 = sx.q(arg4)

if (arg5 == 0)
    sub_1428a5670(0x22, 0xa4, 0x7c, "crypto\x509v3\v3_alt.c", 0x1a2)
    return 0

int32_t* result

if (arg1 == 0)
    int32_t* result_1 = sub_1428e7b90()
    result = result_1
    
    if (result_1 == 0)
        sub_1428a5670((result_1 + 0x22).d, 0xa4, (result_1 + 0x41).d, "crypto\x509v3\v3_alt.c", 
            0x1ab)
        return 0
else
    result = arg1

if (r15.d u> 8)
label_14292cb47:
    sub_1428a5670(0x22, 0xa4, 0xa7, "crypto\x509v3\v3_alt.c", 0x1dd)
else
    switch (r15)
        case 0
            char* rax_9 = strchr(arg5, 0x3b)
            
            if (rax_9 != 0)
                void* rax_10 = sub_1428e7bb0()
                *(result + 8) = rax_10
                
                if (rax_10 != 0)
                    sub_1428c3620(*(rax_10 + 8))
                    int32_t* rax_11 = sub_142932a20(&rax_9[1], arg3)
                    *(*(result + 8) + 8) = rax_11
                    
                    if (rax_11 != 0)
                        char* rax_12 = sub_1428a6c10(arg5, sx.q(rax_9.d - arg5.d), 
                            "crypto\x509v3\v3_alt.c", 0x22d)
                        
                        if (rax_12 != 0)
                            **(result + 8) = sub_1428a9db0(rax_12, 0)
                            sub_1428a6780(rax_12)
                            
                            if (**(result + 8) != 0)
                                *result = r15.d
                                return result
            
            sub_1428a5670(0x22, 0xa4, 0x93, "crypto\x509v3\v3_alt.c", 0x1d8)
        case 1, 2, 6
            int32_t* rax_15 = sub_1428c3520()
            *(result + 8) = rax_15
            int32_t rax_16
            
            if (rax_15 != 0)
                int64_t r8_8 = -1
                
                do
                    r8_8 += 1
                while (arg5[r8_8] != 0)
                
                rax_16 = sub_1428f2d50(rax_15, arg5, r8_8.d)
            
            if (rax_15 != 0 && rax_16 != 0)
                *result = r15.d
                return result
            
            sub_1428a5670(0x22, 0xa4, 0x41, "crypto\x509v3\v3_alt.c", 0x1e5)
        case 3, 5
            goto label_14292cb47
        case 4
            int32_t r14_1 = 0
            int32_t* rbp_1 = nullptr
            int64_t* rax_6 = sub_1428abf60()
            
            if (rax_6 == 0)
                sub_1428abf30(rax_6)
            else
                int32_t* rax_7 = sub_1428f8e70(arg3, arg5)
                rbp_1 = rax_7
                
                if (rax_7 != 0)
                    int32_t rax_8 = sub_1428e89f0(rax_6, rax_7, 0x1001)
                    r14_1 = rax_8
                    
                    if (rax_8 == 0)
                        sub_1428abf30(rax_6)
                    else
                        *(result + 8) = rax_6
                else
                    sub_1428a5670((rax_7 + 0x22).d, 0x90, 0x96, "crypto\x509v3\v3_alt.c", 0x241)
                    sub_1428a4880((rbp_1 + 2).d)
                    sub_1428abf30(rax_6)
            
            sub_1428f8ed0(arg3, rbp_1)
            
            if (r14_1 != 0)
                *result = r15.d
                return result
            
            sub_1428a5670(0x22, 0xa4, 0x95, "crypto\x509v3\v3_alt.c", 0x1d1)
        case 7
            int32_t* rax_5
            
            if (arg6 == 0)
                rax_5 = sub_1428e95b0(arg5)
            else
                rax_5 = sub_1428e9630(arg5)
            
            *(result + 8) = rax_5
            
            if (rax_5 != 0)
                *result = r15.d
                return result
            
            sub_1428a5670((rax_5 + 0x22).d, 0xa4, (rax_5 + 0x76).d, "crypto\x509v3\v3_alt.c", 0x1c9)
            sub_1428a4880(2)
        case 8
            void* rax_3 = sub_1428a9db0(arg5, 0)
            
            if (rax_3 != 0)
                *(result + 8) = rax_3
                *result = r15.d
                return result
            
            sub_1428a5670((rax_3 + 0x22).d, 0xa4, (rax_3 + 0x77).d, "crypto\x509v3\v3_alt.c", 0x1bb)
            sub_1428a4880(2)

if (arg1 == 0)
    sub_1428e7b70(result)

return nullptr
