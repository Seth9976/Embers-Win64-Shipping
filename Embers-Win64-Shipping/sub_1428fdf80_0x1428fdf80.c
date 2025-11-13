// 函数: sub_1428fdf80
// 地址: 0x1428fdf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rsi = arg1
int32_t i = arg3
int32_t r14 = 0
int32_t result_1 = *arg8
uint32_t r9_3 = zx.d(*arg7) | zx.d(arg7[1]) << 8 | zx.d(arg7[2]) << 0x10 | zx.d(arg7[3]) << 0x18
uint32_t r8_1 = zx.d(arg7[4]) | zx.d(arg7[5]) << 8
uint32_t rcx_3 = zx.d(arg7[7]) << 8 | zx.d(arg7[6])
uint32_t var_78 = r9_3
uint32_t r8_2 = r8_1 | rcx_3 << 0x10
uint8_t var_47 = (r9_3 u>> 8).b
uint8_t var_46 = (r9_3 u>> 0x10).b
uint8_t var_45 = (r9_3 u>> 0x18).b
uint8_t var_43 = (r8_2 u>> 8).b
uint8_t var_42 = (r8_2 u>> 0x10).b
uint64_t result = zx.q(r8_2 u>> 0x18)
uint32_t var_74 = r8_2
char var_48 = r9_3.b
char var_44 = r8_2.b
char var_41 = result.b

if (i != 0)
    char* r15_1 = arg2 - rsi
    
    do
        i -= 1
        
        if (result_1 == 0)
            sub_1428fba50(&var_78, arg4, arg5, arg6)
            r9_3 = var_78
            r8_2 = var_74
            uint8_t var_47_1 = (r9_3 u>> 8).b
            uint8_t var_46_1 = (r9_3 u>> 0x10).b
            uint8_t var_45_1 = (r9_3 u>> 0x18).b
            uint8_t var_43_1 = (r8_2 u>> 8).b
            uint8_t var_42_1 = (r8_2 u>> 0x10).b
            uint8_t var_41_1 = (r8_2 u>> 0x18).b
            r14 += 1
            var_48 = r9_3.b
            char var_44_1 = r8_2.b
        
        result = sx.q(result_1)
        r15_1[rsi] = (&var_48)[result] ^ *rsi
        rsi += 1
        result_1 = (result_1 + 1) & 7
    while (i != 0)
    
    if (r14 != 0)
        *arg7 = r9_3.b
        arg7[1] = (r9_3 u>> 8).b
        arg7[2] = (r9_3 u>> 0x10).b
        arg7[3] = (r9_3 u>> 0x18).b
        arg7[4] = r8_2.b
        arg7[5] = (r8_2 u>> 8).b
        result = zx.q(r8_2 u>> 0x10)
        arg7[6] = result.b
        arg7[7] = (r8_2 u>> 0x18).b

*arg8 = result_1
__security_check_cookie(rax_1 ^ &var_98)
return result
