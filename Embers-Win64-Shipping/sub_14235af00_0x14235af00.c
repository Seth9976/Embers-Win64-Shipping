// 函数: sub_14235af00
// 地址: 0x14235af00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t rsi = data_143f59628
int64_t rcx
int32_t rbx

if (rax == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax = data_143de5480
    rcx.b = cond:0_1

int32_t rsi_1 = *(rsi + (rcx << 2))
int64_t r14 = data_143f59640
int64_t rcx_1

if (rax == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_2 = 0

if (rsi_1 == 0)
    rcx_2 = arg1[1]

if (*(r14 + (rcx_1 << 2)) == 0)
    rbx = arg1[2]

return zx.q(*arg1 - rbx - rcx_2)
