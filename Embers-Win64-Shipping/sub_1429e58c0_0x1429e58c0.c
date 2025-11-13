// 函数: sub_1429e58c0
// 地址: 0x1429e58c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x4578)
sub_1429e54c0(arg1, sub_1429e0bd0(arg2, 0x10) + 1, sub_1429e0bd0(arg2, 0x10) + 1)
arg1[0x5c] = arg1[0x5a]
arg1[0x5d] = arg1[0x5b]

if (sub_1429e0b80(arg2, arg3) != 0)
    arg1[0x5c] = sub_1429e0bd0(arg2, 0x10) + 1
    arg1[0x5d] = sub_1429e0bd0(arg2, 0x10) + 1

EnterCriticalSection(lpCriticalSection)
int64_t rdx_1 = sx.q(arg1[0xcc]) * 0xd0
int32_t rax_14 = sub_142a1cfa0(*(arg1 + 0x4578) + 0x70 + rdx_1, arg1[0x5a], arg1[0x5b], arg1[0x60], 
    arg1[0x61], 0x20, arg1[0x1151], lpCriticalSection + 0x58 + rdx_1, 
    lpCriticalSection->__offset(0x30).q, lpCriticalSection->__offset(0x28).q)

if (rax_14 != 0)
    sub_1429da010(arg1, 2, "Failed to allocate frame buffer", 
        LeaveCriticalSection(lpCriticalSection))

LeaveCriticalSection(lpCriticalSection)
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xdc) = arg1[0x60]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xe0) = arg1[0x61]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xe4) = arg1[0x114b]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xe8) = arg1[0x58]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xec) = arg1[0x59]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xf0) = arg1[0x5c]
int32_t result = arg1[0x5d]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xf4) = result
return result
