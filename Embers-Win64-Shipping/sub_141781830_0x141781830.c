// 函数: sub_141781830
// 地址: 0x141781830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8

if (data_143ef7c18 != 0 && not(5f f<= *(arg1 + 0x70)))
    *(arg1 + 0x70) = 0x40a00000

void* rbx = *(arg1 + 0x10)
int64_t result = sx.q(*(arg1 + 0x18))
void* rsi_1 = result * 0xe0 + rbx

if (rbx != rsi_1)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    do
        zmm6 = *(arg1 + 0x70)
        void var_58
        sub_141682450(&var_58, *(rbx + 0x60))
        void var_88
        sub_141682450(&var_88, *(rbx + 0x68))
        *(rbx + 0x9c) = zmm6[0]
        float zmm11[0x4]
        result, zmm11 = sub_1416fd0f0(rbx, &var_58, &var_88, zmm6, zmm11)
        
        if (not(*(arg1 + 0x70) f<= *(rbx + 0x9c)))
            result = zx.q(*(arg1 + 0x80))
            *(rbx + 0xc0) = result.d
        
        rbx += 0xe0
    while (rbx != rsi_1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
