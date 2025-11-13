// 函数: sub_14088f620
// 地址: 0x14088f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_1 = zx.q(*(arg1 + 4)) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

sub_140889380(arg2 + 0x2a8, u"SUPPORTS_TEXTURE_RW", r8_1)
sub_140889380(arg2 + 0x2a8, u"THREAD_COUNT", 0x40)
sub_140889380(arg2 + 0x2a8, u"NIAGARA_DRAW_INDIRECT_ARGS_SIZE", 5)
return sub_140889380(arg2 + 0x2a8, u"NIAGARA_DRAW_INDIRECT_TASK_INFO_SIZE", 3) __tailcall
