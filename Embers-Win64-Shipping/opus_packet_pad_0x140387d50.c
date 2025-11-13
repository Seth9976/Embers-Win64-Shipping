// 函数: opus_packet_pad
// 地址: 0x140387d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t rdi = sx.q(arg2)
int64_t rsi = sx.q(arg3)
int32_t result

if (rdi.d s< 1)
    result = -1
else if (rdi.d == rsi.d)
    result = 0
else if (rdi.d s> rsi.d)
    result = -1
else
    char* rbx_3 = rsi - rdi + arg1
    int32_t var_224_1 = 0
    memmove(rbx_3, arg1, rdi.d)
    void var_228
    sub_140387ee0(&var_228, rbx_3, rdi.d, 0)
    result = sub_140388080(&var_228, 0, var_224_1, arg1, rsi.d, 0, 1)
    
    if (result s> 0)
        result = 0

__security_check_cookie(rax_1 ^ &var_268)
return result
