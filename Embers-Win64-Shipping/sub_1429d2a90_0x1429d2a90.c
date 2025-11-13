// 函数: sub_1429d2a90
// 地址: 0x1429d2a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_4 = *arg1
int64_t result_1 = sx.q(*(rdx_4 + 0x4c))
int64_t result = result_1
int64_t r8 = sx.q(*(rdx_4 + 0x34) + result_1.d)

while (result s< r8)
    void* rcx = arg1[4]
    *(*(rcx + 0x60) + (result << 2)) = *(rcx + 0x10)
    *(*(arg1[4] + 0x48) + (result << 1)) = 1
    result += 1
    void* rcx_3 = arg1[4]
    *(rcx_3 + 0x10) += 1

return result
