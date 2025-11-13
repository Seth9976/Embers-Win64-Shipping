// 函数: sub_1417df2a0
// 地址: 0x1417df2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x230) = arg2
arg2.b = arg2 != 0
int64_t rax = sub_141dd7200(arg1, arg2.b)
void* rdx = *(arg1 + 0x230)

if (rdx == 0)
    *(arg1 + 0x238) = 0
    return rax

sub_141f704d0(*(arg1 + 0x220), *(rdx + 0xf8))
void* rax_1 = *(arg1 + 0x230)
*(arg1 + 0x238) = _mm_cvtpd_ps(zx.o(*(rax_1 + 0xd8))).d
return rax_1
