// 函数: sub_14135d350
// 地址: 0x14135d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(data_143de5480)
int64_t rdi = data_143ebafe8
int64_t rcx
int64_t rbx

if (result.b == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx.b = cond:0_1

int32_t rsi = *(rdi + (rcx << 2))
int64_t rdi_1 = data_143ebb0f8

if (result.b != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (rsi != 0 && not(0f f>= *(rdi_1 + (rbx << 2))))
    result.b = 1
    return result

result.b = 0
return result
