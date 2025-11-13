// 函数: sub_140f2f2b0
// 地址: 0x140f2f2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3 = *(arg1 + 0x2a8)

if (rax_3 == 0)
    *arg2 = data_1439b3a48
    return arg2

bool cond:0 = *(arg1 + 0x2e0) != 1
int32_t temp0_1 =
    __maxss_xmmss_memss(__maxss_xmmss_memss(*(rax_3 + 0x234), *(rax_3 + 0x1ac)), *(rax_3 + 0x338))

if (cond:0)
    *arg2 = data_1439b3a48.d.d
    *(arg2 + 4) = temp0_1
    return arg2

*(arg2 + 4) = data_1439b3a48:4.d.d
*arg2 = temp0_1
return arg2
