// 函数: sub_1420fa340
// 地址: 0x1420fa340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_143f48718
uint32_t rcx = zx.d(*(arg1 + 0x2a0))
int32_t rcx_1

if (rcx s<= rdx)
    rcx_1 = *(arg1 + 0x28c) - rcx + rdx

int32_t result

if (rcx s> rdx || rcx_1 - 1 s< 0 || rcx_1 - 1 s>= rdx)
    result = (zx.o(0)).d
else
    result = *(data_143f48710 + (sx.q(rcx_1) << 2) - 4)

if (result f!= 0f)
    return result

return *(arg1 + 0x288)
