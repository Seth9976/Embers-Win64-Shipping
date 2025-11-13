// 函数: sub_141c45a20
// 地址: 0x141c45a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

uint64_t r9_1 = 0
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_forward(arg3)

if (arg3 u>= 4)
    int32_t rbp_1 = 2
    void* r14_1 = arg1 + 8
    
    do
        int32_t rcx_1 = rol.d(r9_1.d, 0x10)
        int32_t r8_4 = ((rcx_1 u>> 8 ^ rcx_1 << 8) & 0xff00ff) ^ rcx_1 << 8
        uint64_t rdx_4 = ((zx.q(r8_4 u>> 4) ^ zx.q(r8_4 << 4)) & 0xf0f0f0f) ^ zx.q(r8_4 << 4)
        int32_t rcx_7 = ((rdx_4.d u>> 2 ^ (rdx_4 << 2).d) & 0x33333333) ^ (rdx_4 << 2).d
        int32_t rcx_11 = rol.d(rbp_1 - 1, 0x10)
        *(arg2 + ((((zx.q(rcx_7 u>> 1) ^ zx.q(rcx_7 * 2)) & 0x55555555) ^ zx.q(rcx_7 * 2))
            u>> (0x20 - temp0_1) << 2)) = *(r14_1 - 8)
        int32_t r8_10 = ((rcx_11 u>> 8 ^ rcx_11 << 8) & 0xff00ff) ^ rcx_11 << 8
        uint64_t rdx_15 = ((zx.q(r8_10 u>> 4) ^ zx.q(r8_10 << 4)) & 0xf0f0f0f) ^ zx.q(r8_10 << 4)
        int32_t rcx_17 = ((rdx_15.d u>> 2 ^ (rdx_15 << 2).d) & 0x33333333) ^ (rdx_15 << 2).d
        int32_t rcx_21 = rol.d(rbp_1, 0x10)
        *(arg2 + ((((zx.q(rcx_17 u>> 1) ^ zx.q(rcx_17 * 2)) & 0x55555555) ^ zx.q(rcx_17 * 2))
            u>> (0x20 - temp0_1) << 2)) = *(r14_1 - 4)
        int32_t r8_16 = ((rcx_21 u>> 8 ^ rcx_21 << 8) & 0xff00ff) ^ rcx_21 << 8
        r14_1 += 0x10
        r9_1 = zx.q(r9_1.d + 4)
        uint64_t rdx_26 = ((zx.q(r8_16 u>> 4) ^ zx.q(r8_16 << 4)) & 0xf0f0f0f) ^ zx.q(r8_16 << 4)
        int32_t rcx_27 = ((rdx_26.d u>> 2 ^ (rdx_26 << 2).d) & 0x33333333) ^ (rdx_26 << 2).d
        int32_t rcx_31 = rol.d(rbp_1 + 1, 0x10)
        rbp_1 += 4
        *(arg2 + ((((zx.q(rcx_27 u>> 1) ^ zx.q(rcx_27 * 2)) & 0x55555555) ^ zx.q(rcx_27 * 2))
            u>> (0x20 - temp0_1) << 2)) = *(r14_1 - 0x10)
        int32_t r8_22 = ((rcx_31 u>> 8 ^ rcx_31 << 8) & 0xff00ff) ^ rcx_31 << 8
        uint64_t rdx_37 = ((zx.q(r8_22 u>> 4) ^ zx.q(r8_22 << 4)) & 0xf0f0f0f) ^ zx.q(r8_22 << 4)
        int32_t rcx_37 = ((rdx_37.d u>> 2 ^ (rdx_37 << 2).d) & 0x33333333) ^ (rdx_37 << 2).d
        *(arg2 + ((((zx.q(rcx_37 u>> 1) ^ zx.q(rcx_37 * 2)) & 0x55555555) ^ zx.q(rcx_37 * 2))
            u>> (0x20 - temp0_1) << 2)) = *(r14_1 - 0xc)
    while (r9_1.d u< arg3 - 3)

if (r9_1.d u>= arg3)
    return 

void* r10_2 = arg1 + (r9_1 << 2)

do
    r10_2 += 4
    int32_t rcx_41 = rol.d(r9_1.d, 0x10)
    r9_1 = zx.q(r9_1.d + 1)
    int32_t r8_28 = ((rcx_41 u>> 8 ^ rcx_41 << 8) & 0xff00ff) ^ rcx_41 << 8
    uint64_t rdx_48 = ((zx.q(r8_28 u>> 4) ^ zx.q(r8_28 << 4)) & 0xf0f0f0f) ^ zx.q(r8_28 << 4)
    int32_t rcx_47 = ((rdx_48.d u>> 2 ^ (rdx_48 << 2).d) & 0x33333333) ^ (rdx_48 << 2).d
    *(arg2 + ((((zx.q(rcx_47 u>> 1) ^ zx.q(rcx_47 * 2)) & 0x55555555) ^ zx.q(rcx_47 * 2))
        u>> (0x20 - temp0_1) << 2)) = *(r10_2 - 4)
while (r9_1.d u< arg3)
