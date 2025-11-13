// 函数: sub_1428f89b0
// 地址: 0x1428f89b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0x8b, (result + 0x41).d, "crypto\x509v3\v3_info.c", 0x72)
    return 0

int32_t rdi = 0

if (rax s> 0)
    do
        void* rax_2 = sub_142898ea0(arg3, rdi)
        int64_t* rax_3 = sub_1428db530(&data_1435180e0)
        int32_t var_58_1
        int32_t r8_5
        
        if (rax_3 == 0)
            var_58_1 = 0x79
        label_1428f8bbb:
            r8_5 = 0x41
        label_1428f8bd0:
            sub_1428a5670(0x22, 0x8b, r8_5, "crypto\x509v3\v3_info.c", var_58_1)
            sub_142898cb0(result, sub_1428f8bf0)
            return nullptr
        
        sub_142898d50(result, rax_3)
        char* rax_4 = strchr(*(rax_2 + 8), 0x3b)
        
        if (rax_4 == 0)
            var_58_1 = 0x80
            r8_5 = 0x8f
            goto label_1428f8bd0
        
        int32_t rbp_2 = rax_4.d - *(rax_2 + 8)
        void* var_40_1 = &rax_4[1]
        int64_t var_38_1 = *(rax_2 + 0x10)
        void var_48
        
        if (sub_14292d360(rax_3[1], arg1, arg2, &var_48, 0) == 0)
            sub_142898cb0(result, sub_1428f8bf0)
            return nullptr
        
        char* rax_8 = sub_1428a6c10(*(rax_2 + 8), sx.q(rbp_2), "crypto\x509v3\v3_info.c", 0x88)
        
        if (rax_8 == 0)
            var_58_1 = 0x8a
            goto label_1428f8bbb
        
        void* rax_9 = sub_1428a9db0(rax_8, 0)
        *rax_3 = rax_9
        
        if (rax_9 == 0)
            sub_1428a5670(0x22, 0x8b, 0x77, "crypto\x509v3\v3_info.c", 0x90)
            sub_1428a4880(2)
            sub_1428a6780(rax_8)
            sub_142898cb0(result, sub_1428f8bf0)
            return nullptr
        
        sub_1428a6780(rax_8)
        rdi += 1
    while (rdi s< rax)

return result
