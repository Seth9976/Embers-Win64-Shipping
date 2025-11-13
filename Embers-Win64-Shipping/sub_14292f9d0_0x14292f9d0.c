// 函数: sub_14292f9d0
// 地址: 0x14292f9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void** result = sub_1428db530(&data_143537e80)
int32_t var_38_1
int32_t r8_2

if (result == 0)
label_14292fc64:
    var_38_1 = 0xf3
    r8_2 = 0x41
else
    int32_t rbp_1 = 0
    
    if (sub_142898c70(arg2) s> 0)
        int32_t rax_15
        
        do
            int64_t* rax_1 = sub_142898ea0(arg2, rbp_1)
            char* _Str1 = rax_1[1]
            int32_t var_38_2
            int32_t r8_3
            
            if (strcmp(_Str1, "policyIdentifier") != 0)
                int32_t rax_10
                
                if (sub_1428ea5d0(_Str1, "CPS") == 0)
                    if (result[1] == 0)
                        result[1] = sub_142898ba0()
                    
                    void** rax_6 = sub_1428db530(&data_143537f90)
                    
                    if (rax_6 == 0)
                        goto label_14292fc64
                    
                    if (sub_142898d50(result[1], rax_6) == 0)
                        goto label_14292fc64
                    
                    void* rax_8 = sub_1428a9570(0xa4)
                    *rax_6 = rax_8
                    
                    if (rax_8 == 0)
                        var_38_1 = 0xc5
                        r8_2 = 0x44
                        goto label_14292fc81
                    
                    int32_t* rax_9 = sub_1428c3520()
                    rax_6[1] = rax_9
                    
                    if (rax_9 == 0)
                        goto label_14292fc64
                    
                    char* rdx_2 = rax_1[2]
                    int64_t r8 = -1
                    
                    do
                        r8 += 1
                    while (rdx_2[r8] != 0)
                    
                    rax_10 = sub_1428f2d50(rax_9, rdx_2, r8.d)
                    goto label_14292fb88
                
                if (sub_1428ea5d0(rax_1[1], "userNotice") != 0)
                    var_38_2 = 0xe5
                    r8_3 = 0x8a
                    goto label_14292fbdc
                
                char* rdx_3 = rax_1[2]
                
                if (*rdx_3 != 0x40)
                    var_38_2 = 0xd1
                    r8_3 = 0x89
                    goto label_14292fbdc
                
                int32_t* rax_12 = sub_1428f8e70(arg1, &rdx_3[1])
                
                if (rax_12 == 0)
                    var_38_2 = 0xd7
                    r8_3 = 0x87
                    goto label_14292fbdc
                
                void** rax_13 = sub_14292f500(arg1, rax_12, arg3)
                sub_1428f8ed0(arg1, rax_12)
                
                if (rax_13 == 0)
                    goto label_14292fc90
                
                int32_t* rcx_11 = result[1]
                
                if (rcx_11 == 0)
                    int32_t* rax_14 = sub_142898ba0()
                    result[1] = rax_14
                    rcx_11 = rax_14
                
                rax_10 = sub_142898d50(rcx_11, rax_13)
            label_14292fb88:
                
                if (rax_10 == 0)
                    goto label_14292fc64
            else
                void* rax_3 = sub_1428a9db0(rax_1[2], 0)
                
                if (rax_3 == 0)
                    var_38_2 = 0xb7
                    r8_3 = 0x6e
                label_14292fbdc:
                    sub_1428a5670(0x22, 0x83, r8_3, "crypto\x509v3\v3_cpols.c", var_38_2)
                    *rax_1
                    int64_t var_28_1 = rax_1[2]
                    char const* const var_30_1 = ",value:"
                    var_38_2.q = rax_1[1]
                    sub_1428a4880(6)
                    goto label_14292fc90
                
                *result = rax_3
            rbp_1 += 1
            rax_15 = sub_142898c70(arg2)
        while (rbp_1 s< rax_15)
    
    if (*result != 0)
        return result
    
    var_38_1 = 0xec
    r8_2 = 0x8b

label_14292fc81:
sub_1428a5670(0x22, 0x83, r8_2, "crypto\x509v3\v3_cpols.c", var_38_1)
label_14292fc90:
sub_1428c3d60(result, &data_143537e80)
return nullptr
