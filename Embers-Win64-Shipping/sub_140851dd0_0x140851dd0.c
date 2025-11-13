// 函数: sub_140851dd0
// 地址: 0x140851dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int64_t r8
int64_t var_10 = r8
int32_t arg_8
sub_140850560(arg1 + 0x668, &arg_8, &var_18)
int64_t rax = sx.q(arg_8)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x668)

int64_t* rax_1 = rcx_3 + 0x10

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return 0

return *rax_1
