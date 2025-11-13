// 函数: ?MapPortablePDB@PortablePDB@@QEAAHPEBGPEAUIStream@@AEAJ@Z
// 地址: 0x140386b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rdi = arg2
char* rsi = arg1
int32_t result_1 = 0
int32_t rbx = 0
int32_t result

if (arg3 s> 0)
    while (true)
        if (rdi s> 0)
            int32_t r8
            r8.b = rbx != arg3 - 1
            char var_b8
            int32_t var_b4
            uint16_t var_a8[0x30]
            result = sub_140386c90(rsi, rdi, r8, &var_b8, 0, &var_a8, nullptr, &var_b4)
            
            if (result s< 0)
                goto label_140386bfd
            
            int32_t result_2 = opus_packet_get_nb_samples(rsi, var_b4, arg4)
            
            if (rbx == 0 || result_1 == result_2)
                int64_t rcx_2 = sx.q(var_b4)
                rbx += 1
                result_1 = result_2
                rsi = &rsi[rcx_2]
                rdi -= rcx_2.d
                
                if (rbx s>= arg3)
                    break
                
                continue
        
        result = -4
        goto label_140386bfd

result = result_1
label_140386bfd:
__security_check_cookie(rax_1 ^ &var_f8)
return result
