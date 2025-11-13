// 函数: opus_multistream_packet_pad
// 地址: 0x140387ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rbx = arg2
char* rsi = arg1
int32_t result

if (arg2 s< 1)
    result = -1
else if (arg2 == arg3)
    result = 0
else if (arg2 s> arg3)
    result = -1
else
    int32_t i = 0
    
    if (arg4 - 1 s> 0)
        do
            if (rbx s<= 0)
                result = -4
                goto label_140387bc1
            
            char var_a8
            int32_t var_a4
            uint16_t var_98[0x30]
            result = sub_140386c90(rsi, rbx, 1, &var_a8, 0, &var_98, nullptr, &var_a4)
            
            if (result s< 0)
                goto label_140387bc1
            
            int64_t rcx_1 = sx.q(var_a4)
            i += 1
            rsi = &rsi[rcx_1]
            rbx -= rcx_1.d
        while (i s< arg4 - 1)
    
    result = opus_packet_pad(rsi, rbx, rbx + arg3 - arg2)

label_140387bc1:
__security_check_cookie(rax_1 ^ &var_e8)
return result
