// 函数: sub_1428fd1f0
// 地址: 0x1428fd1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rsi = arg1
int32_t i = arg3
int32_t result_1 = *arg6
int32_t r15 = 0
uint32_t rcx_1 = zx.d(arg5[7]) << 8
uint32_t r10_3 = zx.d(*arg5) | zx.d(arg5[1]) << 8 | zx.d(arg5[2]) << 0x10 | zx.d(arg5[3]) << 0x18
uint32_t rdx_1 = zx.d(arg5[4]) | zx.d(arg5[5]) << 8
uint32_t var_68 = r10_3
uint32_t rcx_2 = rcx_1 | zx.d(arg5[6])
char var_48 = r10_3.b
uint32_t rdx_2 = rdx_1 | rcx_2 << 0x10
uint8_t var_47 = (r10_3 u>> 8).b
uint8_t var_46 = (r10_3 u>> 0x10).b
uint8_t var_45 = (r10_3 u>> 0x18).b
uint8_t var_43 = (rdx_2 u>> 8).b
uint8_t var_42 = (rdx_2 u>> 0x10).b
uint64_t result = zx.q(rdx_2 u>> 0x18)
uint32_t var_64 = rdx_2
char var_44 = rdx_2.b
char var_41 = result.b

if (i != 0)
    char* r12_1 = arg2 - rsi
    char r8_1 = rdx_2.b
    char r9 = r10_3.b
    
    do
        i -= 1
        
        if (result_1 == 0)
            sub_1428f9590(&var_68, arg4, result_1 + 1)
            r10_3 = var_68
            rdx_2 = var_64
            r9 = var_68.b
            r8_1 = var_64.b
            uint8_t var_47_1 = (r10_3 u>> 8).b
            uint8_t var_46_1 = (r10_3 u>> 0x10).b
            uint8_t var_45_1 = (r10_3 u>> 0x18).b
            uint8_t var_43_1 = (rdx_2 u>> 8).b
            uint8_t var_42_1 = (rdx_2 u>> 0x10).b
            uint8_t var_41_1 = (rdx_2 u>> 0x18).b
            r15 += 1
            var_48 = r9
            char var_44_1 = r8_1
        
        result = sx.q(result_1)
        r12_1[rsi] = (&var_48)[result] ^ *rsi
        rsi += 1
        result_1 = (result_1 + 1) & 7
    while (i != 0)
    
    if (r15 != 0)
        *arg5 = r9
        arg5[1] = (r10_3 u>> 8).b
        arg5[2] = (r10_3 u>> 0x10).b
        arg5[3] = (r10_3 u>> 0x18).b
        arg5[4] = r8_1
        arg5[5] = (rdx_2 u>> 8).b
        result = zx.q(rdx_2 u>> 0x10)
        arg5[6] = result.b
        arg5[7] = (rdx_2 u>> 0x18).b

*arg6 = result_1
__security_check_cookie(rax_1 ^ &var_88)
return result
