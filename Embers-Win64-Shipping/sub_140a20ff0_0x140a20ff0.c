// 函数: sub_140a20ff0
// 地址: 0x140a20ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = zx.d(arg2)
uint64_t rax = 0xff

if (r8_1 != 0xff)
    rax = zx.q(r8_1)

void* rax_1 = *(arg1 + rax * 0x18 + 8)
return TlsSetValue(*(rax_1 + 0x14), *(rax_1 + 0x30)) __tailcall
