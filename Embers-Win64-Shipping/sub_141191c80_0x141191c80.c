// 函数: sub_141191c80
// 地址: 0x141191c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE", 1)
sub_1410b3fe0(arg2, u"SCAN_LINE_LENGTH", 0x200)
int64_t rdi = sx.q(*(arg2 + 0xb8))
int32_t rax = (rdi + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rdi << 2)) = 5
return result
