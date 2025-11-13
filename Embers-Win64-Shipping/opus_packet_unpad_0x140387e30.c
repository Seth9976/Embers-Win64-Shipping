// 函数: opus_packet_unpad
// 地址: 0x140387e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t result

if (arg2 s>= 1)
    int32_t var_204_1 = 0
    void var_208
    result = sub_140387ee0(&var_208, arg1, arg2, 0)
    
    if (result s>= 0)
        result = sub_140388080(&var_208, 0, var_204_1, arg1, arg2, 0, 0)
else
    result = -1

__security_check_cookie(rax_1 ^ &var_248)
return result
