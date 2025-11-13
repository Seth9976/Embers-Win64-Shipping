// 函数: sub_1420545f0
// 地址: 0x1420545f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
void* rcx = *(arg1 + 0x440)
char rax_1

if (rcx != 0)
    rax_1 = sub_142368cd0(rcx, 1, 0)

int32_t rdi_1

if (rcx == 0 || rax_1 == 0)
    rdi_1 = 0
else
    rdi_1 = sub_142366570(*(arg1 + 0x440), 0)

int64_t rsi = data_143f43248

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (rdi_1 == 0)
    return 0x10

int32_t temp0 = divs.dp.d(sx.q(*(rsi + (rbx << 2))), rdi_1)

if (temp0 s< 1)
    return 1

if (temp0 s< 0x400)
    return zx.q(temp0)

return 0x400
