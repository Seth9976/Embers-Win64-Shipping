// 函数: sub_1429372a0
// 地址: 0x1429372a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* var_38 = nullptr
void* const arg_20 = nullptr
int64_t var_30 = 0
int32_t* rax = sub_1428e91e0(arg3)
int32_t rbp = 0
void** result
int32_t var_58_1
int32_t r8_2

if (sub_142898c70(rax) s<= 0)
label_1429374b3:
    var_58_1 = 0x123
    r8_2 = 0x9a
label_1429374d0:
    sub_1428a5670(0x22, 0x9b, r8_2, "crypto\x509v3\v3_pci.c", var_58_1)
label_1429374da:
    sub_1428cd400(var_38)
    sub_1428c3460(arg_20)
    int64_t rcx_15 = var_30
    arg_20 = nullptr
    sub_1428c3460(rcx_15)
    sub_1428f8570(0)
    result = nullptr
else
    int32_t rax_7
    
    do
        int64_t* rax_2 = sub_142898ea0(rax, rbp)
        char* rdx_1 = rax_2[1]
        int32_t var_58
        int32_t r8_3
        
        if (rdx_1 == 0)
        label_142937456:
            var_58 = 0x102
            r8_3 = 0x99
        label_142937473:
            sub_1428a5670(0x22, 0x9b, r8_3, "crypto\x509v3\v3_pci.c", var_58)
        label_142937483:
            *rax_2
            int64_t var_48_1 = rax_2[2]
            char const* const var_50_1 = ",value:"
            var_58.q = rax_2[1]
            sub_1428a4880(6)
            goto label_1429374da
        
        if (*rdx_1 == 0x40)
            int32_t i_1 = 1
            int32_t* rax_4 = sub_1428f8e70(arg2, &rdx_1[1])
            
            if (rax_4 == 0)
                var_58 = 0x10c
                r8_3 = 0x87
                goto label_142937473
            
            int32_t rbx_2 = 0
            int32_t i
            
            do
                if (rbx_2 s>= sub_142898c70(rax_4))
                    break
                
                i = sub_142937540(sub_142898ea0(rax_4, rbx_2), &var_38, &arg_20, &var_30)
                rbx_2 += 1
                i_1 = i
            while (i != 0)
            sub_1428f8ed0(arg2, rax_4)
            
            if (i_1 == 0)
                goto label_1429374da
            
            goto label_1429373af
        
        if (rax_2[2] == 0)
            goto label_142937456
        
        if (sub_142937540(rax_2, &var_38, &arg_20, &var_30) == 0)
            goto label_142937483
        
    label_1429373af:
        rbp += 1
        rax_7 = sub_142898c70(rax)
    while (rbp s< rax_7)
    int64_t* rcx_10 = var_38
    
    if (rcx_10 == 0)
        goto label_1429374b3
    
    if (((sub_1428a96d0(rcx_10) - 0x299) & 0xfffffffd) == 0 && var_30 != 0)
        var_58_1 = 0x129
        r8_2 = 0x9f
        goto label_1429374d0
    
    void** result_1 = sub_1428f85a0()
    result = result_1
    
    if (result_1 == 0)
        var_58_1 = 0x12f
        r8_2 = (result_1 + 0x41).d
        goto label_1429374d0
    
    *result_1[1] = var_38
    *(result[1] + 8) = var_30
    *result = arg_20
    arg_20 = nullptr
sub_142898cb0(rax, sub_1428e8d70)
return result
