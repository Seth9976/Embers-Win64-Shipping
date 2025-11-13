// 函数: sub_142c6c700
// 地址: 0x142c6c700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint64_t result

if (*(arg1 + 0x428) != 0)
    int32_t var_98
    int32_t result_1
    int64_t r8_1
    result_1, r8_1 = sub_142c705a0(*(arg1 + 0x430), &var_98)
    
    if (result_1 == 0)
        int32_t rcx_2 = *(arg1 + 0x428)
        char const* const r9_1
        
        if (rcx_2 == 1)
            r9_1 = "If-Modified-Since"
        label_142c6c7a7:
            int32_t var_80
            int32_t r8_2 = var_80 - 1
            
            if (var_80 == 0)
                r8_2 = 6
            
            int32_t var_a8_1 = var_98
            int32_t var_94
            int32_t var_b0_1 = var_94
            int32_t var_90
            int32_t var_b8_1 = var_90
            int32_t var_84
            int32_t var_c0_1 = var_84 + 0x76c
            int32_t var_88
            int64_t var_c8_1 = (&data_1436b5320)[sx.q(var_88)]
            int32_t var_8c
            int32_t var_d0_1 = var_8c
            int64_t var_d8_1 = (&data_1436b52b0)[sx.q(r8_2)]
            char var_68[0x50]
            sub_142c564b0(&var_68, 0x50, "%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n", r9_1, arg3)
            int64_t r8_4 = -1
            
            do
                r8_4 += 1
            while (var_68[r8_4] != 0)
            
            result = sub_142c6c0d0(arg2, &var_68, r8_4)
        else
            if (rcx_2 == 2)
                r9_1 = "If-Unmodified-Since"
                goto label_142c6c7a7
            
            if (rcx_2 == 3)
                r9_1 = "Last-Modified"
                goto label_142c6c7a7
            
            result = 0x2b
    else
        sub_142c64760(arg1, "Invalid TIMEVALUE", r8_1, arg3)
        result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_f8)
return result
