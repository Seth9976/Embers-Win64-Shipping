// 函数: sub_1426b2820
// 地址: 0x1426b2820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x59)
void* rdx = *(arg1 + 0x48)

if (r8 == 0xff)
    return rdx

if (rdx == 0 || zx.d(r8) s>= *(rdx + 0x60))
    return 0

int64_t* rax_5 = *(rdx + 0x58) + zx.q(r8) * 0x30
int64_t rcx_2 = *rax_5

if (rcx_2 == 0)
    return rax_5[1]

return rcx_2
