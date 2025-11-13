// 函数: sub_140e85230
// 地址: 0x140e85230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
uint64_t var_18 = 0
int32_t result_1 = 0
sub_140e486f0(arg1 + 0x130, &var_18)
uint64_t r14 = var_18
int64_t result = sx.q(result_1)
uint64_t rdi = r14
int64_t rdx_1 = r14 + (result << 2)
uint64_t rsi_3 = (rdx_1 - r14 + 3) u>> 2

if (r14 u> rdx_1)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        result = sub_140e85470(arg1, *rdi)
        rbx += 1
        rdi += 4
    while (rbx != rsi_3)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
