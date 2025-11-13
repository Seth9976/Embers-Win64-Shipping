// 函数: sub_142a91520
// 地址: 0x142a91520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_58
sub_142af5540(&var_58, arg1)
uint32_t r9 = 0
uint32_t rdx_1 = 0x11
uint32_t r10 = 0x22
uint32_t r11_1

do
    void* rax_2 = &var_58
    r11_1 = rdx_1
    int32_t rax_3
    
    while (true)
        char rcx_3 = *rax_2
        char temp0_1 = *(rax_2 + (&data_143cc84e0)[zx.q(rdx_1) * 2] - &var_58)
        
        if (rcx_3 != temp0_1)
            rax_3 = sbb.d(rax_2.d, rax_2.d, rcx_3 u< temp0_1) | 1
            break
        
        rax_2 += 1
        
        if (rcx_3 == 0)
            rax_3 = 0
            break
    
    if (rax_3 s>= 0)
        if (rax_3 s<= 0)
            int64_t result = *((sx.q(*(zx.q(rdx_1) * 0x10 + 0x143cc84e8)) << 3) + &data_1436429a0)
            __security_check_cookie(rax_1 ^ &var_78)
            return result
        
        r9 = rdx_1
    else
        r10 = rdx_1
    
    rdx_1 = (r10 + r9) u>> 1
while (r11_1 != rdx_1)
__security_check_cookie(rax_1 ^ &var_78)
return 0
