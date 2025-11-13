// 函数: sub_1428f1170
// 地址: 0x1428f1170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* var_78
sub_1428f1040(&var_78, nullptr, nullptr, nullptr, arg1)
int64_t* result_1 = sub_1428968f0()
int64_t* result
void* var_88

if (result_1 != 0)
    int32_t rax_3 = sub_142896cb0(result_1, sub_1428a96d0(var_78))
    
    if (rax_3 != 0)
        int64_t r8_4 = *(result_1[2] + 0x40)
        int32_t r8_5
        
        if (r8_4 == 0)
            var_88.d = 0x30
            r8_5 = 0x90
        label_1428f129c:
            sub_1428a5670(6, 0x6f, r8_5, "crypto\evp\evp_pkey.c", var_88.d)
            sub_1428965a0(result_1)
            result = nullptr
        else
            if (r8_4(result_1, arg1) == 0)
                var_88.d = 0x2c
                r8_5 = 0x91
                goto label_1428f129c
            
            result = result_1
    else
        var_88.d = 0x24
        sub_1428a5670(rax_3 + 6, rax_3 + 0x6f, rax_3 + 0x76, "crypto\evp\evp_pkey.c", var_88.d)
        void var_68
        sub_1428cddd0(&var_68, 0x50, var_78)
        sub_1428a4880(2)
        sub_1428965a0(result_1)
        result = nullptr
else
    var_88.d = 0x1f
    sub_1428a5670((result_1 + 6).d, (result_1 + 0x6f).d, (result_1 + 0x41).d, 
        "crypto\evp\evp_pkey.c", var_88.d)
    result = nullptr
__security_check_cookie(rax_1 ^ &var_a8)
return result
