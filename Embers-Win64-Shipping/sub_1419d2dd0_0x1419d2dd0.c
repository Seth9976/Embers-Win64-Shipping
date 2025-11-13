// 函数: sub_1419d2dd0
// 地址: 0x1419d2dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140889380(arg2 + 0x2a8, u"DEPTH_RESOLVE_NUM_SAMPLES", 8)
int32_t rax = *arg1
int64_t r8

if (rax u> 0x16 || not(test_bit(0x42c000, rax)))
    r8 = 0
else
    r8 = 1

return sub_140889380(arg2 + 0x2a8, u"SIMULATED_PLATFORM", r8) __tailcall
