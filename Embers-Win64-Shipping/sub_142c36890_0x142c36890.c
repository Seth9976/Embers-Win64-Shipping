// 函数: sub_142c36890
// 地址: 0x142c36890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
int64_t var_28 = r15
int64_t var_60 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* var_58 = arg1
int64_t rbx = 0
arg1[0xa] = 0
arg1[0xb] = 0
int64_t (* var_78)(int64_t* arg1) = sub_142c36a30
int64_t i_1 = 2
`eh vector constructor iterator'(&arg1[0xc], 0x10, 2)
memset(arg1, 0, 0x80)
__builtin_memset(&arg1[0xa], 0, 0x30)
*arg1 = arg2
*(arg1 + 8) = *arg3
*(arg1 + 0x18) = arg3[1]
int32_t var_68 = 3
int32_t var_64 = 3
void var_50
int32_t var_40[0x4]
sub_142c46eb0(*(arg1 + 0xc), arg1[2], &var_68, &var_50, r15.b, &var_64, &var_40)
void* r15_1 = &arg1[6]
char const* const rsi_1 = "BUSGSOPG"
int64_t i

do
    int32_t rdi_1 = *rsi_1
    int32_t rax_4
    rax_4.b = sub_142c2b200(*arg1, rdi_1, var_68, &var_50, arg1 + 0x34 + rbx, &arg1[5] + rbx) != 0
    *r15_1 = rax_4.b
    sub_142c2af20(*arg1, rdi_1, *(rsi_1 + arg1 - "BUSGSOPG" + 0x34), var_64, &var_40, 
        arg1 + 0x3c + rbx)
    rbx += 4
    rsi_1 = &rsi_1[4]
    r15_1 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
