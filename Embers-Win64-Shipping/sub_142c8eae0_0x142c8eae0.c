// 函数: sub_142c8eae0
// 地址: 0x142c8eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
char r8 = arg1[1]
char rdx = *arg1
char var_18 = rdx
char rdx_1 = arg1[2]
char rcx = arg1[3]
uint8_t var_17 = r8 u>> 1 | rdx << 7
char r8_1 = arg1[5]
uint8_t var_16 = rdx_1 u>> 2 | r8 << 6
char rdx_2 = arg1[4]
uint8_t var_15 = rcx u>> 3 | rdx_1 << 5
uint8_t rcx_1 = arg1[6]
uint8_t var_14 = rdx_2 u>> 4 | rcx << 4
uint8_t var_13 = r8_1 u>> 5 | rdx_2 << 3
uint8_t var_11 = rcx_1 * 2
uint8_t var_12 = rcx_1 u>> 6 | r8_1 << 2
sub_1428fcf60(&var_18)
int64_t result = sub_1428fc850(&var_18, arg2)
__security_check_cookie(rax_1 ^ &var_38)
return result
