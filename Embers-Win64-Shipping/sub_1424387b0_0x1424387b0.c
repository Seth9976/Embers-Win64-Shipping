// 函数: sub_1424387b0
// 地址: 0x1424387b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_143f5e840
int64_t rcx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    rcx.b = GetCurrentThreadId() != data_143de5470

*arg1 = *(rsi + (rcx << 2))
int64_t rsi_1 = data_143f5e858
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

arg1[1] = *(rsi_1 + (rcx_1 << 2))
int64_t rsi_2 = data_143f5e788
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

uint32_t result
result.b = *(rsi_2 + (rcx_2 << 2)) != 0
arg1[2].b = result.b
int64_t rsi_3 = data_143f5e828

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

result.b = *(rsi_3 + (rbx << 2)) != 0
*(arg1 + 9) = result.b
return result
