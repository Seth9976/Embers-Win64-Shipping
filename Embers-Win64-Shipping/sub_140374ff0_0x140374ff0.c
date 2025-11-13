// 函数: sub_140374ff0
// 地址: 0x140374ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x1714)
int16_t r8 = (2 << rdx.b).w | *(arg1 + 0x1710)
*(arg1 + 0x1710) = r8
int32_t rdx_4

if (rdx s< 0xe)
    rdx_4 = rdx + 3
else
    int64_t r10_1 = *(arg1 + 0x10)
    uint64_t rdx_1 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rdx_1 + 1).d
    *(r10_1 + rdx_1) = r8.b
    r8.b = *(arg1 + 0x1711)
    int64_t r10_2 = *(arg1 + 0x10)
    uint64_t rcx_2 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rcx_2 + 1).d
    *(r10_2 + rcx_2) = r8.b
    int32_t rdx_3 = *(arg1 + 0x1714)
    rcx_2.b = 0x10
    rcx_2.b = 0x10 - rdx_3.b
    uint16_t r9_1 = (2 u>> rcx_2.b).w
    *(arg1 + 0x1710) = r9_1
    rdx_4 = rdx_3 - 0xd
    r8 = r9_1

*(arg1 + 0x1714) = rdx_4
int32_t rdx_8

if (rdx_4 s< 0xa)
    rdx_8 = rdx_4 + 7
else
    int64_t r9_2 = *(arg1 + 0x10)
    uint64_t rdx_5 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rdx_5 + 1).d
    *(r9_2 + rdx_5) = r8.b
    r8.b = *(arg1 + 0x1711)
    int64_t r9_3 = *(arg1 + 0x10)
    uint64_t rcx_4 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rcx_4 + 1).d
    *(r9_3 + rcx_4) = r8.b
    *(arg1 + 0x1710) = 0
    rdx_8 = *(arg1 + 0x1714) - 9
    r8 = 0

*(arg1 + 0x1714) = rdx_8

if (rdx_8 == 0x10)
    char* r9_4 = *(arg1 + 0x10)
    uint64_t rdx_9 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rdx_9 + 1).d
    r9_4[rdx_9] = r8.b
    r8.b = *(arg1 + 0x1711)
    char* r9_5 = *(arg1 + 0x10)
    uint64_t rcx_6 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rcx_6 + 1).d
    r9_5[rcx_6] = r8.b
    *(arg1 + 0x1710) = 0
    *(arg1 + 0x1714) = 0
else if (rdx_8 s>= 8)
    char* r9_6 = *(arg1 + 0x10)
    uint64_t rdx_11 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rdx_11 + 1).d
    r9_6[rdx_11] = r8.b
    *(arg1 + 0x1710) = zx.w(*(arg1 + 0x1711))
    *(arg1 + 0x1714) -= 8

return arg1
