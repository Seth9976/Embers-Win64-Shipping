// 函数: sub_142069c80
// 地址: 0x142069c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg1, u"RADIX_BITS", 4)
sub_1410b3fe0(arg1, u"THREAD_COUNT", 0x80)
sub_1410b3fe0(arg1, u"KEYS_PER_LOOP", 8)
sub_1410b3fe0(arg1, u"MAX_GROUP_COUNT", 0x40)
int64_t rdi = sx.q(*(arg1 + 0xb8))
int32_t rax = (rdi + 1).d
*(arg1 + 0xb8) = rax

if (rax s> *(arg1 + 0xbc))
    sub_1405a4cf0(arg1 + 0xb0)

int64_t result = *(arg1 + 0xb0)
*(result + (rdi << 2)) = 4
return result
