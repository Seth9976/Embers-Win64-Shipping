// 函数: opus_multistream_packet_unpad
// 地址: 0x140387be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t rbx = arg2
char* rbp = arg1
int32_t result

if (arg2 s>= 1)
    void* r14_1 = arg1
    int32_t result_1 = 0
    int32_t rsi_1 = 0
    
    if (arg3 s> 0)
        do
            int32_t rdi_1
            rdi_1.b = rsi_1 != arg3 - 1
            
            if (rbx s<= 0)
                result = -4
                goto label_140387d37
            
            int32_t var_294_1 = 0
            char var_2a8
            int32_t var_2a4
            uint16_t var_a8[0x30]
            result = sub_140386c90(rbp, rbx, rdi_1, &var_2a8, 0, &var_a8, nullptr, &var_2a4)
            
            if (result s< 0)
                goto label_140387d37
            
            void var_298
            result = sub_140387ee0(&var_298, rbp, var_2a4, rdi_1)
            
            if (result s< 0)
                goto label_140387d37
            
            int32_t* var_2b8_1
            var_2b8_1.d = 0
            uint16_t* var_2c0_1
            var_2c0_1.d = rdi_1
            int64_t var_2c8_1
            var_2c8_1.d = rbx
            result =
                sub_140388080(&var_298, 0, var_294_1, r14_1, var_2c8_1.d, var_2c0_1.d, var_2b8_1.d)
            
            if (result s< 0)
                goto label_140387d37
            
            int64_t rcx_3 = sx.q(var_2a4)
            result_1 += result
            rbp = &rbp[rcx_3]
            rbx -= rcx_3.d
            rsi_1 += 1
            r14_1 += sx.q(result)
        while (rsi_1 s< arg3)
    
    result = result_1
else
    result = -1

label_140387d37:
__security_check_cookie(rax_1 ^ &var_2e8)
return result
