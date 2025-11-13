// 函数: sub_142ac2c90
// 地址: 0x142ac2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 0

int32_t rax_1 = *(arg1 + 0x10)
int32_t rcx_1 = rax_1 & 0xfffffff
void* const result
int32_t rcx_2

if ((rax_1 & 0xf0000000) != 0x10000000)
    rcx_2 = 0
    result = nullptr
else if (rcx_1 != 0)
    uint64_t rdx = zx.q(rcx_1)
    int64_t rcx_3 = *(*(arg1 + 8) + 8)
    rcx_2 = *(rcx_3 + (rdx << 2))
    result = rcx_3 + (rdx << 2) + 4
else
    rcx_2 = 0
    result = &data_143655c04

if (arg2 != 0)
    *arg2 = rcx_2

if (result == 0)
    *arg3 = 0x11

return result
