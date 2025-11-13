// 函数: sub_142c2ffa0
// 地址: 0x142c2ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* var_150 = arg2
void* var_148 = arg1
uint64_t rdx_1 = zx.q(*(arg1 + 0x14)) << 8
uint64_t r8_2 = (zx.q(*(arg1 + 0x10)) << 8) + zx.q(*(arg1 + 0x11))
char result_1 = 0
uint64_t rcx = zx.q(*(arg1 + 0x13))
int32_t var_128 = 0
void* rax_6 = ((zx.q(*(arg1 + 0x12)) + (r8_2 << 8)) << 8) + arg1
void* var_178 = arg1
void* var_140 = rcx + rax_6
void* var_138 = zx.q(*(arg1 + 0x17))
    + ((zx.q(*(arg1 + 0x16)) + ((rdx_1 + zx.q(*(arg1 + 0x15))) << 8)) << 8) + arg1
void* var_130 = zx.q(*(arg1 + 0x1b))
    + ((zx.q(*(arg1 + 0x1a)) + (((zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19))) << 8)) << 8)
    + arg1
void* rcx_6 = *(arg2 + 0x10)
int64_t var_170 = *(arg2 + 0x18)
int32_t rax_18 = *(rcx_6 + 0x30)

if (rax_18 == 0xffffffff)
    rax_18 = sub_142bf77e0(rcx_6)

int32_t var_168 = rax_18
sub_142c2d2c0(&var_178, &result_1)
uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_198)
return result
