// 函数: sub_140a3f9b0
// 地址: 0x140a3f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int32_t rbx = arg2 + 1

if (arg3 != 0)
    rbx = arg2

void var_348
memset(&var_348, 0, 0x320)
int32_t rax_2 = sub_140b65640(&var_348, 0x64, arg3)
int64_t r9 = *arg1
int32_t rdx = rax_2

if (rbx s<= rax_2)
    rdx = rbx

int64_t result = (*(r9 + 0x10))(arg1, &var_348 + (sx.q(rdx) << 3), zx.q(rax_2 - rdx), r9)
__security_check_cookie(rax_1 ^ &var_368)
return result
