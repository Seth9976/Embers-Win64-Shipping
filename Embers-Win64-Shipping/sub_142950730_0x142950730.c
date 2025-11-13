// 函数: sub_142950730
// 地址: 0x142950730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg1[1]
int64_t r10 = arg1[2]
int64_t rsi = arg1[3]
int64_t rbx_1 = *arg1 << 0x38

if (arg3 != sx.q(*(arg1 + 0x2c)))
    return 0

uint64_t rcx_1 = zx.q(arg1[5].d - 1)

if (rcx_1.d u<= 6)
    switch (rcx_1)
        case 1
            rbx_1 |= zx.q(*(arg1 + 0x39)) << 8
        case 2
            rbx_1 = rbx_1 | zx.q(*(arg1 + 0x3a)) << 0x10 | zx.q(*(arg1 + 0x39)) << 8
        case 3
            goto label_1429507b8
        case 4
            goto label_1429507ad
        case 5
            goto label_1429507a2
        case 6
            rbx_1 |= zx.q(*(arg1 + 0x3e)) << 0x30
        label_1429507a2:
            rbx_1 |= zx.q(*(arg1 + 0x3d)) << 0x28
        label_1429507ad:
            rbx_1 |= zx.q(*(arg1 + 0x3c)) << 0x20
        label_1429507b8:
            rbx_1 = rbx_1 | zx.q(*(arg1 + 0x3b)) << 0x18 | zx.q(*(arg1 + 0x3a)) << 0x10
                | zx.q(*(arg1 + 0x39)) << 8
    
    rbx_1 |= zx.q(arg1[7].b)

int32_t i_6 = arg1[6].d
int64_t rax_2 = arg1[4] ^ rbx_1

if (i_6 s> 0)
    uint64_t i_5 = zx.q(i_6)
    uint64_t i
    
    do
        int64_t r11_1 = r11 + r10
        int64_t rsi_1 = rsi + rax_2
        int64_t r10_2 = rol.q(r10, 0xd) ^ r11_1
        int64_t rax_4 = rol.q(rax_2, 0x10) ^ rsi_1
        int64_t rsi_2 = rsi_1 + r10_2
        r11 = rol.q(r11_1, 0x20) + rax_4
        r10 = rol.q(r10_2, 0x11) ^ rsi_2
        rax_2 = rol.q(rax_4, 0x15) ^ r11
        rsi = rol.q(rsi_2, 0x20)
        i = i_5
        i_5 -= 1
    while (i != 1)

int64_t r11_5 = r11 ^ rbx_1
int64_t r8 = 0xee

if (*(arg1 + 0x2c) != 0x10)
    r8 = 0xff

uint64_t i_3 = zx.q(*(arg1 + 0x34))
int64_t r8_1 = r8 ^ rsi

if (i_3.d s> 0)
    uint64_t i_1
    
    do
        int64_t r11_3 = r11_5 + r10
        int64_t r8_2 = r8_1 + rax_2
        int64_t r10_5 = rol.q(r10, 0xd) ^ r11_3
        int64_t rax_7 = rol.q(rax_2, 0x10) ^ r8_2
        int64_t r8_3 = r8_2 + r10_5
        r11_5 = rol.q(r11_3, 0x20) + rax_7
        r10 = rol.q(r10_5, 0x11) ^ r8_3
        rax_2 = rol.q(rax_7, 0x15) ^ r11_5
        r8_1 = rol.q(r8_3, 0x20)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t rdx_5 = rax_2 ^ r8_1 ^ r10 ^ r11_5
*arg2 = rdx_5.b
arg2[1] = (rdx_5.d u>> 8).b
arg2[2] = (rdx_5.d u>> 0x10).b
uint32_t rdx_6 = (rdx_5 u>> 0x20).d
arg2[3] = (rdx_5.d u>> 0x18).b
arg2[5] = (rdx_6 u>> 8).b
arg2[4] = rdx_6.b
arg2[6] = (rdx_6 u>> 0x10).b
arg2[7] = (rdx_6 u>> 0x18).b

if (*(arg1 + 0x2c) != 8)
    uint64_t i_4 = zx.q(*(arg1 + 0x34))
    int64_t r10_7 = r10 ^ 0xdd
    
    if (i_4.d s> 0)
        uint64_t i_2
        
        do
            int64_t r11_6 = r11_5 + r10_7
            int64_t r8_4 = r8_1 + rax_2
            int64_t r10_9 = rol.q(r10_7, 0xd) ^ r11_6
            int64_t rax_10 = rol.q(rax_2, 0x10) ^ r8_4
            int64_t r8_5 = r8_4 + r10_9
            r11_5 = rol.q(r11_6, 0x20) + rax_10
            r10_7 = rol.q(r10_9, 0x11) ^ r8_5
            rax_2 = rol.q(rax_10, 0x15) ^ r11_5
            r8_1 = rol.q(r8_5, 0x20)
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    int64_t rax_14 = rax_2 ^ r8_1 ^ r10_7 ^ r11_5
    arg2[8] = rax_14.b
    arg2[9] = (rax_14.d u>> 8).b
    arg2[0xa] = (rax_14.d u>> 0x10).b
    uint32_t rax_15 = (rax_14 u>> 0x20).d
    arg2[0xb] = (rax_14.d u>> 0x18).b
    arg2[0xd] = (rax_15 u>> 8).b
    arg2[0xc] = rax_15.b
    arg2[0xf] = (rax_15 u>> 0x18).b
    arg2[0xe] = (rax_15 u>> 0x10).b

return 1
