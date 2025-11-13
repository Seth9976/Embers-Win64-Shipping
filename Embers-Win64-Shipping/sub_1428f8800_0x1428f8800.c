// 函数: sub_1428f8800
// 地址: 0x1428f8800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* result_1 = arg3
int32_t rbp = 0
int32_t* result

if (sub_142898c70(arg2) s> 0)
    while (true)
        int64_t* rax_3 = sub_142898ea0(arg2, rbp)
        int32_t* result_2 = sub_14292cd30(arg1, rax_3[1], result_1)
        
        if (result_2 != 0)
            result_1 = result_2
            void* rax_4 = sub_142898ea0(result_2, rbp)
            char var_98[0x50]
            sub_1428cddd0(&var_98, 0x50, *rax_3)
            int64_t rcx_5 = -1
            
            do
                rcx_5 += 1
            while ((*(rax_4 + 8))[rcx_5] != 0)
            
            int64_t rax_5 = -1
            
            do
                rax_5 += 1
            while (var_98[rax_5] != 0)
            
            int64_t rdi_1 = sx.q(rcx_5.d + rax_5.d + 4)
            int64_t rax_7 = sub_1428a6730(rdi_1)
            
            if (rax_7 != 0)
                int32_t var_a8
                var_a8.q = *(rax_4 + 8)
                sub_1428b7080(rax_7, rdi_1, "%s - %s", &var_98)
                sub_1428a6780(*(rax_4 + 8))
                *(rax_4 + 8) = rax_7
                rbp += 1
                
                if (rbp s>= sub_142898c70(arg2))
                    break
                
                continue
        
        sub_1428a5670(0x22, 0x8a, 0x41, "crypto\x509v3\v3_info.c", 0x5e)
        
        if (arg3 == 0 && result_1 != 0)
            sub_142898cb0(result_1, sub_1428e8d70)
        
        result = nullptr
        goto label_1428f898d

if (arg3 != 0 || result_1 != 0)
    result = result_1
else
    result = sub_142898ba0()

label_1428f898d:
__security_check_cookie(rax_1 ^ &var_c8)
return result
