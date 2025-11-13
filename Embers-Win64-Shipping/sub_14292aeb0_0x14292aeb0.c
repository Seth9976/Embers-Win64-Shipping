// 函数: sub_14292aeb0
// 地址: 0x14292aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xe0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t result

if (arg5 == 0)
    result = 0
else
    int64_t* rax_2 = sub_1428cd3c0(&data_14354aa20, arg4)
    
    if (rax_2 != 0)
        int32_t* rcx_1 = rax_2[1]
        int32_t rdi_1
        
        if (rcx_1 != 0)
            rdi_1 = sub_1428e4860(rcx_1)
        else
            rdi_1 = (rcx_1 + 1).d
        
        int32_t* rcx_2 = *rax_2
        int64_t r12_1 = *(rcx_2 + 8)
        int32_t r13_1 = *rcx_2
        void var_98
        int32_t rax_5 =
            sub_142969a90(arg2, arg3, r12_1, r13_1, 1, rdi_1, sub_140611e60(arg5), &var_98, arg6)
        
        if (rax_5 != 0)
            void var_b0
            int32_t rax_7 = sub_142969a90(arg2, arg3, r12_1, r13_1, 2.b, rdi_1, 
                sub_140611e40(arg5), &var_b0, arg6)
            
            if (rax_7 != 0)
                sub_1429695b0(rax_2)
                int32_t var_e8_4
                var_e8_4.q = &var_b0
                int32_t result_1 = sub_142892480(arg1, arg5, nullptr, &var_98, var_e8_4, arg7)
                sub_1428b8960(&var_98, 0x40)
                sub_1428b8960(&var_b0, 0x10)
                result = zx.q(result_1)
            else
                sub_1428a5670(rax_7 + 0x23, rax_7 + 0x78, rax_7 + 0x6a, "crypto\pkcs12\p12_crpt.c", 
                    0x3d)
                sub_1429695b0(rax_2)
                result = 0
        else
            sub_1428a5670(rax_5 + 0x23, rax_5 + 0x78, rax_5 + 0x6b, "crypto\pkcs12\p12_crpt.c", 
                0x37)
            sub_1429695b0(rax_2)
            result = 0
    else
        sub_1428a5670((rax_2 + 0x23).d, (&rax_2[0xf]).d, (rax_2 + 0x65).d, 
            "crypto\pkcs12\p12_crpt.c", 0x2b)
        result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
