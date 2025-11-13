// 函数: sub_142c7aa10
// 地址: 0x142c7aa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t* rbx = *(*arg1 + 0x250)

if (rbx == 0)
    return 0

if (arg2 != 0)
    sub_142c65340(arg1, 1)
    rsi = arg2

data_143ccb8a0(*(rbx + 8))
int64_t rcx_1 = *(rbx + 0x10)
*(rbx + 8) = 0
data_143ccb8a0(rcx_1)
*(rbx + 0x10) = 0
*rbx = 0
return zx.q(rsi)
