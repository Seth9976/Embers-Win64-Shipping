// 函数: sub_14088f720
// 地址: 0x14088f720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"SORT_MAX_PRECISION", r8)
sub_140889380(arg2 + 0x2a8, u"THREAD_COUNT", 0x40)
sub_140889380(arg2 + 0x2a8, u"SORT_VIEW_DEPTH", 1)
sub_140889380(arg2 + 0x2a8, u"SORT_VIEW_DISTANCE", 2)
sub_140889380(arg2 + 0x2a8, u"SORT_CUSTOM_ASCENDING", 3)
return sub_140889380(arg2 + 0x2a8, u"SORT_CUSTOM_DESCENDING", 4) __tailcall
