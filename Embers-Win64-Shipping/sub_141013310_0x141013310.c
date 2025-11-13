// 函数: sub_141013310
// 地址: 0x141013310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[0xf].d
int32_t rbp_1 = (arg2 + 0xff) & 0xffffff00
int32_t rdx = *(arg1 + 0x7c)

if (rcx + rbp_1 u> rdx)
    void* rax_1 = *arg1
    arg1[0xf].d = 0
    sub_141012e10(*(*(rax_1 + 0x20) + (zx.q(*(rax_1 + 0x18)) << 3) + 0x4a0), rdx, 0x100, &arg1[2], 
        arg4)
    rcx = arg1[0xf].d

int64_t r14 = arg1[0xa]
int64_t r15 = arg1[0xb]
void* rdx_1 = arg1[4]
uint64_t rsi = zx.q(rcx)
*(arg3 + 8) = 3
sub_14105ac70(arg3, rdx_1)
*(arg3 + 0x58) = zx.q(rbp_1)
*(arg3 + 0x50) = rsi

if (r14 != 0)
    *(arg3 + 0x40) = rsi + r14

*(arg3 + 0x48) = rsi + r15
arg1[0xf].d += rbp_1
return *(arg3 + 0x40)
