// 函数: sub_1418c2220
// 地址: 0x1418c2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rdi = *arg2
uint64_t r14 = zx.q(*(arg2 + 0xc))
int32_t r15 = arg2[1].d
*arg2 = 0
int64_t* rcx = *(arg1 + 0x240)
void* var_68 = rdi
void*** rax_2 = sub_1418c0d30(rcx)

if (*(rax_2 + 0x2c) - 1 u> 1)
    sub_1418bc690(rax_2)

int64_t rcx_3 = rax_2[8]
void* r8 = *(arg3 + (sx.q(arg4) << 3) + 0x20)
int64_t var_58 = 0
int64_t var_60 = 0
uint64_t var_50 = r14
uint64_t var_58_1 = zx.q(*(r8 + 0x14) + r15)
data_143efb9f0(rcx_3, *(rdi + 0x18), *(r8 + 0x28), 1, &var_60)
int64_t result = sub_1418c5270(*(arg3 + 8) + 0x3f0, rax_2, &var_68)
__security_check_cookie(rax_1 ^ &var_98)
return result
