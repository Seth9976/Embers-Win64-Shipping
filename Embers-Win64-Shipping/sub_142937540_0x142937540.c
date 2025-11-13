// 函数: sub_142937540
// 地址: 0x142937540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x860)
void var_898
int64_t rax_1 = __security_cookie ^ &var_898
char* _Str1_2 = arg1[1]
int32_t r15 = 0
int64_t result
int32_t var_878_1
int32_t r8

if (strcmp(_Str1_2, "language") != 0)
    for (int64_t i = 0; i != 8; )
        char rax_6 = _Str1_2[i]
        i += 1
        
        if (rax_6 != *(i + 0x143517f77))
            for (int64_t j = 0; j != 7; )
                char rax_8 = _Str1_2[j]
                j += 1
                
                if (rax_8 != *(j + 0x143517e2f))
                    goto label_142937abf_1
            
            int64_t rbp_1 = 0
            
            if (*arg4 == 0)
                int64_t rax_9 = sub_1428c35d0()
                *arg4 = rax_9
                
                if (rax_9 == 0)
                    var_878_1 = 0x7b
                    r8 = (rax_9 + 0x41).d
                    goto label_1429375b9
                
                r15 = 1
            
            int32_t rax_10 = strncmp(arg1[2], "hex:", 4)
            char* _Str1 = arg1[2]
            int32_t var_878
            uint32_t count
            
            if (rax_10 != 0)
                int32_t rax_19 = strncmp(_Str1, "file:", 5)
                char* _Str1_1 = arg1[2]
                
                if (rax_19 != 0)
                    if (strncmp(_Str1_1, "text:", 5) != 0)
                        sub_1428a5670(0x22, 0x96, 0x98, "crypto\x509v3\v3_pci.c", 0xe0)
                    else
                        int64_t rdx_20 = -1
                        
                        do
                            rdx_20 += 1
                        while (*(arg1[2] + rdx_20 + 5) != 0)
                        
                        int32_t* rcx_28 = *arg4
                        count = rdx_20.d
                        int64_t rax_35 = sub_1428a67c0(*(rcx_28 + 8), sx.q(rdx_20.d + *rcx_28 + 1), 
                            "crypto\x509v3\v3_pci.c", 0xcb)
                        int64_t rcx_30 = *arg4
                        rbp_1 = rax_35
                        
                        if (rax_35 != 0)
                            *(rcx_30 + 8) = rax_35
                            int32_t* rax_36 = *arg4
                            memcpy(sx.q(*rax_36) + *(rax_36 + 8), arg1[2] + 5, count)
                            int32_t* rcx_33 = *arg4
                            *rcx_33 += count
                            int32_t* rax_38 = *arg4
                            *(sx.q(*rax_38) + *(rax_38 + 8)) = 0
                            goto label_142937a02
                        
                        sub_1428a6780(*(rcx_30 + 8))
                        var_878 = 0xda
                        *(*arg4 + 8) = 0
                        **arg4 = 0
                        sub_1428a5670(0x22, 0x96, 0x41, "crypto\x509v3\v3_pci.c", var_878)
                else
                    int64_t* rax_20 = sub_1428b6d90(&_Str1_1[5], &data_142d948d8)
                    
                    if (rax_20 != 0)
                        uint32_t count_1
                        
                        while (true)
                            void var_848
                            count_1 = sub_14289a950(rax_20, &var_848, 0x800)
                            
                            if (count_1 s> 0)
                                int32_t* rcx_20 = *arg4
                                int64_t rax_22 = sub_1428a67c0(*(rcx_20 + 8), 
                                    sx.q(*rcx_20 + 1 + count_1), "crypto\x509v3\v3_pci.c", 0xaf)
                                int64_t rcx_22 = *arg4
                                rbp_1 = rax_22
                                
                                if (rax_22 == 0)
                                    sub_1428a6780(*(rcx_22 + 8))
                                    int32_t var_878_2 = 0xb6
                                    *(*arg4 + 8) = 0
                                    **arg4 = 0
                                    sub_1428a5670(0x22, 0x96, 0x41, "crypto\x509v3\v3_pci.c", 
                                        var_878_2)
                                    *arg1
                                    int64_t var_868_2 = arg1[2]
                                    char const* const var_870_2 = ",value:"
                                    var_878_2.q = arg1[1]
                                    sub_1428a4880(6)
                                    sub_142899f50(rax_20)
                                    goto label_142937aa7
                                
                                *(rcx_22 + 8) = rax_22
                                int32_t* rax_23 = *arg4
                                memcpy(sx.q(*rax_23) + *(rax_23 + 8), &var_848, count_1)
                                int32_t* rax_24 = *arg4
                                *rax_24 += count_1
                                int32_t* rax_25 = *arg4
                                *(sx.q(*rax_25) + *(rax_25 + 8)) = 0
                            else
                                if (count_1 != 0)
                                    break
                                
                                if (sub_14289a9f0(rax_20, 8) == 0)
                                    break
                        
                        sub_142899f50(rax_20)
                        
                        if (count_1 s>= 0)
                            goto label_142937a02
                        
                        sub_1428a5670(0x22, 0x96, 0x20, "crypto\x509v3\v3_pci.c", 0xc4)
                    else
                        sub_1428a5670(0x22, 0x96, (&rax_20[4]).d, "crypto\x509v3\v3_pci.c", 0xa5)
            else
                char* rax_11 = sub_1428a6e90(&_Str1[4], &count)
                
                if (rax_11 != 0)
                    int32_t* rcx_5 = *arg4
                    int64_t rax_14 = sub_1428a67c0(*(rcx_5 + 8), sx.q(*rcx_5 + count + 1), 
                        "crypto\x509v3\v3_pci.c", 0x8b)
                    rbp_1 = rax_14
                    
                    if (rax_14 == 0)
                        sub_1428a6780(rax_11)
                        sub_1428a6780(*(*arg4 + 8))
                        var_878 = 0x9b
                        *(*arg4 + 8) = 0
                        **arg4 = 0
                        sub_1428a5670(0x22, 0x96, 0x41, "crypto\x509v3\v3_pci.c", var_878)
                    else
                        *(*arg4 + 8) = rax_14
                        int32_t* rdx_6 = *arg4
                        memcpy(sx.q(*rdx_6) + *(rdx_6 + 8), rax_11, count)
                        int32_t* rdx_8 = *arg4
                        *rdx_8 += count
                        int32_t* rax_15 = *arg4
                        *(sx.q(*rax_15) + *(rax_15 + 8)) = 0
                        sub_1428a6780(rax_11)
                    label_142937a02:
                        
                        if (rbp_1 != 0)
                            goto label_142937abf_1
                        
                        sub_1428a5670(0x22, 0x96, (rbp_1 + 0x41).d, "crypto\x509v3\v3_pci.c", 0xe5)
            *arg1
            int64_t var_868_3 = arg1[2]
            char const* const var_870_3 = ",value:"
            var_878.q = arg1[1]
            sub_1428a4880(6)
        label_142937aa7:
            
            if (r15 == 0)
                goto label_1429375f7
            
            sub_1428c3460(*arg4)
            result = 0
            *arg4 = 0
            goto label_142937acf
    
    if (*arg3 != 0)
        var_878_1 = 0x6b
        r8 = 0x9d
        goto label_1429375b9
    
    if (sub_1428e9050(arg1, arg3) == 0)
        var_878_1 = 0x71
        r8 = 0x9c
        goto label_1429375b9
    
label_142937abf:
    result = 1
else if (*arg2 == 0)
    void* rax_5 = sub_1428a9db0(arg1[2], 0)
    *arg2 = rax_5
    
    if (rax_5 == 0)
        var_878_1 = 0x64
        r8 = (rax_5 + 0x6e).d
        goto label_1429375b9
    
label_142937abf_1:
    result = 1
else
    var_878_1 = 0x5e
    r8 = 0x9b
label_1429375b9:
    sub_1428a5670(0x22, 0x96, r8, "crypto\x509v3\v3_pci.c", var_878_1)
    *arg1
    int64_t var_868_1 = arg1[2]
    char const* const var_870_1 = ",value:"
    var_878_1.q = arg1[1]
    sub_1428a4880(6)
label_1429375f7:
    result = 0
label_142937acf:
__security_check_cookie(rax_1 ^ &var_898)
return result
