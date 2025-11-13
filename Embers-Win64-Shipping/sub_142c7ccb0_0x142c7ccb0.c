// 函数: sub_142c7ccb0
// 地址: 0x142c7ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
void* r8 = *(rcx + 0x250)

if (arg2 - 0xc8 u>= 0x64)
    sub_142c64760(rcx, "RCPT failed: %d", zx.q(arg2), arg3)
    return 0x37

int64_t rcx_1 = *(*(r8 + 0x10) + 8)
*(r8 + 0x10) = rcx_1

if (rcx_1 != 0)
    return sub_142c7c750(arg1) __tailcall

int32_t result = gzprintf(&arg1[0xd3], &data_1434ccff0, "DATA", arg3)

if (result == 0)
    arg1[0xe1].d = 0xa

return result
