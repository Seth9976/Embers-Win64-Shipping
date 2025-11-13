// 函数: sub_14295b650
// 地址: 0x14295b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t i = arg3
int64_t rsi = arg1
int32_t r15 = 0
int32_t result_1 = *arg6
uint32_t r10_4 = zx.d(*arg5) << 0x18 | zx.d(arg5[1]) << 0x10 | zx.d(arg5[2]) << 8 | zx.d(arg5[3])
uint32_t r8_2 = zx.d(arg5[4]) << 0x18 | zx.d(arg5[5]) << 0x10
uint32_t rcx_2 = zx.d(arg5[6]) << 8 | zx.d(arg5[7])
uint32_t var_68 = r10_4
uint32_t r8_3 = r8_2 | rcx_2
char var_45 = r10_4.b
uint32_t var_64 = r8_3
uint8_t var_48 = (r10_4 u>> 0x18).b
uint8_t var_47 = (r10_4 u>> 0x10).b
uint8_t var_46 = (r10_4 u>> 8).b
uint8_t var_44 = (r8_3 u>> 0x18).b
uint8_t var_43 = (r8_3 u>> 0x10).b
uint64_t result = zx.q(r8_3 u>> 8)
char var_42 = result.b
char var_41 = r8_3.b

if (i != 0)
    char* r12_1 = arg2 - rsi
    char rdx_1 = r8_3.b
    char r9 = r10_4.b
    
    do
        i -= 1
        
        if (result_1 == 0)
            sub_14295af50(&var_68, arg4)
            r10_4 = var_68
            r8_3 = var_64
            r9 = r10_4.b
            rdx_1 = r8_3.b
            var_48 = (r10_4 u>> 0x18).b
            uint8_t var_47_1 = (r10_4 u>> 0x10).b
            uint8_t var_46_1 = (r10_4 u>> 8).b
            uint8_t var_44_1 = (r8_3 u>> 0x18).b
            uint8_t var_43_1 = (r8_3 u>> 0x10).b
            uint8_t var_42_1 = (r8_3 u>> 8).b
            r15 += 1
            char var_45_1 = r10_4.b
            char var_41_1 = rdx_1
        
        result = sx.q(result_1)
        r12_1[rsi] = (&var_48)[result] ^ *rsi
        rsi += 1
        result_1 = (result_1 + 1) & 7
    while (i != 0)
    
    if (r15 != 0)
        *arg5 = (r10_4 u>> 0x18).b
        arg5[1] = (r10_4 u>> 0x10).b
        arg5[2] = (r10_4 u>> 8).b
        arg5[3] = r9
        arg5[4] = (r8_3 u>> 0x18).b
        result = zx.q(r8_3 u>> 0x10)
        arg5[5] = result.b
        arg5[6] = (r8_3 u>> 8).b
        arg5[7] = rdx_1

*arg6 = result_1
__security_check_cookie(rax_1 ^ &var_88)
return result
