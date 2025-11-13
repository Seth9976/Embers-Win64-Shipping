// 函数: sub_140ab3ee0
// 地址: 0x140ab3ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t var_18 = __security_cookie ^ &var_268
int16_t var_220 = 0x100
void var_218
void* var_238 = &var_218
void* var_230 = &var_218
int64_t* var_228 = &var_18
int64_t var_248
sub_140a1dfc0(arg1, &var_248)
int32_t var_240
int64_t rbx = sx.q(var_240)
void* rcx = var_230
int64_t rsi = var_248
int64_t rdi = rbx * 2

if (rdi + rcx u>= var_228)
    sub_140b38e20(&var_238, rbx)
    rcx = var_230

void* rax_3 = rcx + (rbx << 1)
memcpy(rcx, rsi, rdi.d)
void* rcx_2 = rax_3

if (rcx_2 + 0xa u>= var_228)
    sub_140b38e20(&var_238, 5)
    rcx_2 = rax_3

*rcx_2 = 0x6f00740075002e
*(rcx_2 + 8) = 0x63
int64_t* rax_6 = __crt_deferred_errno_cache::get(&data_143db7b00)

if (*(rcx_2 + 0xa) != 0)
    *(rcx_2 + 0xa) = 0

int64_t r8_1 = *rax_6
char rax_7 = (*(r8_1 + 0x70))(rax_6, var_238, r8_1)
sub_140b301c0(&var_238)
__security_check_cookie(var_18 ^ &var_268)
return zx.q(rax_7)
