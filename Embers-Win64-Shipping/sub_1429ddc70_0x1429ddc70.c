// 函数: sub_1429ddc70
// 地址: 0x1429ddc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x780
int64_t i_1 = 4
int64_t i

do
    sub_142a1cda0(rbx)
    rbx += 0x90
    i = i_1
    i_1 -= 1
while (i != 1)
sub_142a1cda0(arg1 + 0x9e0)
sub_142a1cda0(arg1 + 0xa70)

if (*(arg1 + 0xb90) != i_1.d)
    sub_142a1cda0(arg1 + 0xb00)

sub_1429dde60(*(arg1 + 0xb98))
void* rcx_5 = *(arg1 + 0x2248)
*(arg1 + 0xb98) = 0
sub_1429dde60(rcx_5)
void* rcx_6 = *(arg1 + 0x1958)
*(arg1 + 0x2248) = 0
sub_1429dde60(rcx_6)
int64_t result = sub_1429dde60(*(arg1 + 0xbe8))
*(arg1 + 0x1958) = 0
*(arg1 + 0xbe8) = 0
return result
