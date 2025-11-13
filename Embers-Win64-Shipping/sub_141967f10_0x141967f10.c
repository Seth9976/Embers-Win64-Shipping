// 函数: sub_141967f10
// 地址: 0x141967f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t r11 = 0
int64_t* r10 = *arg2
int64_t result = arg3
uint64_t rbx_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r10 u> &r10[arg2[1]])
    rbx_1 = 0

if (rbx_1 != 0)
    do
        void* rax_4 = *r10
        r10 = &r10[1]
        r11 += 1
        var_38 = (*(rax_4 + 0x18)).q
        result ^= (result << 6) + var_38 + (result u>> 2) - -0x9e3779b9
    while (r11 != rbx_1)

__security_check_cookie(rax_1 ^ &var_38)
return result
