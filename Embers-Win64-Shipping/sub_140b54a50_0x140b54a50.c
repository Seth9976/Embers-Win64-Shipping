// 函数: sub_140b54a50
// 地址: 0x140b54a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
char result

if ((arg1[5].b & 1) == 0)
    int32_t rdx_3 = *arg2
    int32_t rcx_2 = 0
    uint32_t i = rdx_3 u>> 7
    char rax_4 = rdx_3.b * 2
    char var_24[0xc]
    
    if (i != 0)
        char (* r8_2)[0xc] = &var_24
        
        do
            rcx_2 += 1
            *r8_2 = rax_4 | 1
            r8_2 = &(*r8_2)[1]
            rax_4 = i.b
            i u>>= 7
            rax_4 *= 2
        while (i != 0)
    
    int64_t r9_1 = *arg1
    var_24[sx.q(rcx_2)] = rax_4
    result = (*(r9_1 + 0x150))(arg1, &var_24, sx.q(rcx_2 + 1), r9_1)
else
    *arg2 = 0
    int64_t rsi
    rsi.b = 0
    uint8_t r8_1
    
    do
        uint8_t var_28
        (*(*arg1 + 0x150))(arg1, &var_28, 1)
        uint8_t rax_3 = var_28
        r8_1 = rax_3
        rax_3 u>>= 1
        var_28 = rax_3
        result = rsi.b
        rsi.b += 1
        *arg2 += zx.d(rax_3) << (result * 7)
    while ((r8_1 & 1) != 0)

__security_check_cookie(rax_1 ^ &var_48)
return result
