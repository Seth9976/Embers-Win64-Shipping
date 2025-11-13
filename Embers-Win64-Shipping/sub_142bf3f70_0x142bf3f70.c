// 函数: sub_142bf3f70
// 地址: 0x142bf3f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 == 0)
    return 

int32_t rax = *arg1
*arg1 -= 1

if (rax != 1)
    return 

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 8)
*arg1 = 0xffff2153
int32_t var_28
int32_t var_28_1 = var_28

if (lpCriticalSection != 0)
    sub_142bf2560(&lpCriticalSection[1], lpCriticalSection)
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)

int64_t rax_1 = *(arg1 + 0x98)

if (rax_1 != 0)
    rax_1(*(arg1 + 0x10))

int64_t rax_2 = *(arg1 + 0xa0)

if (rax_2 != 0)
    rax_2(*(arg1 + 0x18))

int64_t rax_3 = *(arg1 + 0xa8)

if (rax_3 != 0)
    rax_3(*(arg1 + 0x20))

int64_t rax_4 = *(arg1 + 0xb0)

if (rax_4 != 0)
    rax_4(*(arg1 + 0x28))

int64_t rax_5 = *(arg1 + 0xb8)

if (rax_5 != 0)
    rax_5(*(arg1 + 0x30))

int64_t rax_6 = *(arg1 + 0xc0)

if (rax_6 != 0)
    rax_6(*(arg1 + 0x38))

int64_t rax_7 = *(arg1 + 0xc8)

if (rax_7 != 0)
    rax_7(*(arg1 + 0x40))

int64_t rax_8 = *(arg1 + 0xd0)

if (rax_8 != 0)
    rax_8(*(arg1 + 0x48))

int64_t rax_9 = *(arg1 + 0xd8)

if (rax_9 != 0)
    rax_9(*(arg1 + 0x50))

int64_t rax_10 = *(arg1 + 0xe0)

if (rax_10 != 0)
    rax_10(*(arg1 + 0x58))

int64_t rax_11 = *(arg1 + 0xe8)

if (rax_11 != 0)
    rax_11(*(arg1 + 0x60))

int64_t rax_12 = *(arg1 + 0xf0)

if (rax_12 != 0)
    rax_12(*(arg1 + 0x68))

int64_t rax_13 = *(arg1 + 0xf8)

if (rax_13 != 0)
    rax_13(*(arg1 + 0x70))

int64_t rax_14 = *(arg1 + 0x100)

if (rax_14 != 0)
    rax_14(*(arg1 + 0x78))

int64_t rax_15 = *(arg1 + 0x108)

if (rax_15 != 0)
    rax_15(*(arg1 + 0x80))

int64_t rax_16 = *(arg1 + 0x110)

if (rax_16 != 0)
    rax_16(*(arg1 + 0x88))

int64_t rax_17 = *(arg1 + 0x118)

if (rax_17 != 0)
    rax_17(*(arg1 + 0x90))

j_sub_140a74f90(arg1)
