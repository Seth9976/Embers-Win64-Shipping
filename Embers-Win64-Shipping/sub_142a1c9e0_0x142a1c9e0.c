// 函数: sub_142a1c9e0
// 地址: 0x142a1c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1070)
void var_1098
int64_t rax_1 = __security_cookie ^ &var_1098
uint64_t result_1 = arg3
int64_t j_2 = sx.q(arg9)
int64_t r9_1 = arg7 & 0xffffffffffffff00
int64_t r11_1 = arg5 & 0xffffffffffffff00
char var_1038[0x1000]
uint64_t result = sub_142a1c2c0(arg1, arg2, &var_1038, 0x40, r11_1, ((arg5 - r11_1) s>> 4).d, arg6, 
    r9_1, ((arg7 - r9_1) s>> 4).d, arg8, j_2.d, arg10)
char (* r11_2)[0x1000] = &var_1038

if (arg10 s> 0)
    uint64_t i_1 = zx.q(arg10)
    uint64_t i
    
    do
        if (j_2 s> 0)
            result = result_1
            int64_t j_1 = j_2
            int64_t j
            
            do
                uint32_t r8_1 = zx.d(*result)
                uint32_t rdx = zx.d(*(r11_2 - result_1 + result))
                result += 1
                *(result - 1) = ((r8_1 + 1 + rdx) u>> 1).b
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r11_2 = &(*r11_2)[0x40]
        result_1 += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_1098)
return result
