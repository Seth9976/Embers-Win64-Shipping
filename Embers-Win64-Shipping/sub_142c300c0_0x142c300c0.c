// 函数: sub_142c300c0
// 地址: 0x142c300c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* var_148 = arg1
void* r8_1 = zx.q(*(arg1 + 9)) + (zx.q(*(arg1 + 8)) << 8) + arg1
char result_1 = 0
void* var_150 = arg2
void* var_140 = r8_1
void* var_138 = zx.q(*(arg1 + 0xb)) + (zx.q(*(arg1 + 0xa)) << 8) + arg1
int32_t var_128 = 0
void* var_130 = zx.q(*(arg1 + 0xd)) + (zx.q(*(arg1 + 0xc)) << 8) + arg1
void* rcx_4 = *(arg2 + 0x10)
int64_t var_170 = *(arg2 + 0x18)
void* var_178 = arg1
int32_t rax_12 = *(rcx_4 + 0x30)

if (rax_12 == 0xffffffff)
    rax_12 = sub_142bf77e0(rcx_4)

int32_t var_168 = rax_12
sub_142c2d760(&var_178, &result_1)
uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_198)
return result
