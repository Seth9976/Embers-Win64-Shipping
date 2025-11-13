// 函数: sub_1428fff90
// 地址: 0x1428fff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_4 = 0x80

if (arg2 s<= 0x80)
    i_4 = arg2

char* i_1 = sx.q(i_4)
int32_t r11 = 0x400

if (arg4 s> 0)
    r11 = arg4

if (r11 s> 0x400)
    r11 = 0x400

if (i_1 s> 0)
    char* rdx = arg1
    char* i_5 = i_1
    char* i
    
    do
        *rdx = *(arg3 - arg1 + rdx)
        rdx = &rdx[1]
        i = i_5
        i_5 -= 1
    while (i != 1)

char rdx_1 = *(i_1 + arg1 - 1)

if (i_1 s< 0x80)
    char* r8 = arg1
    
    do
        char rcx_1 = *r8
        r8 = &r8[1]
        rdx_1 = *(zx.q(rcx_1 + rdx_1) + &data_1435193c0)
        *(i_1 + arg1) = rdx_1
        i_1 = &i_1[1]
    while (i_1 s< 0x80)

int32_t r9_1 = (r11 + 7) s>> 3
int64_t i_6 = sx.q(0x80 - r9_1)
void* rdx_3 = &arg1[i_6]
uint64_t rax_2 = zx.q(*((zx.q(0xff s>> ((neg.d(r11)).b & 7)) & zx.q(*rdx_3)) + &data_1435193c0))
*rdx_3 = rax_2.b

if (0x80 - r9_1 != 0)
    int64_t i_2
    
    do
        uint64_t rcx_6 = zx.q(*(sx.q(r9_1) + rdx_3 - 1))
        rdx_3 -= 1
        rax_2 = zx.q(*((rcx_6 ^ rax_2) + &data_1435193c0))
        *rdx_3 = rax_2.b
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

void* rdx_4 = &arg1[0xfc]
int64_t i_7 = 2
void* r10_1 = &arg1[0x7e]
uint32_t result
int64_t i_3

do
    *rdx_4 = zx.d(*(r10_1 + 1)) << 8 | zx.d(*r10_1)
    *(rdx_4 - 4) = zx.d(*(r10_1 - 1)) << 8 | zx.d(*(r10_1 - 2))
    *(rdx_4 - 8) = zx.d(*(r10_1 - 3)) << 8 | zx.d(*(r10_1 - 4))
    *(rdx_4 - 0xc) = zx.d(*(r10_1 - 5)) << 8 | zx.d(*(r10_1 - 6))
    *(rdx_4 - 0x10) = zx.d(*(r10_1 - 7)) << 8 | zx.d(*(r10_1 - 8))
    *(rdx_4 - 0x14) = zx.d(*(r10_1 - 9)) << 8 | zx.d(*(r10_1 - 0xa))
    *(rdx_4 - 0x18) = zx.d(*(r10_1 - 0xb)) << 8 | zx.d(*(r10_1 - 0xc))
    *(rdx_4 - 0x1c) = zx.d(*(r10_1 - 0xd)) << 8 | zx.d(*(r10_1 - 0xe))
    *(rdx_4 - 0x20) = zx.d(*(r10_1 - 0xf)) << 8 | zx.d(*(r10_1 - 0x10))
    *(rdx_4 - 0x24) = zx.d(*(r10_1 - 0x11)) << 8 | zx.d(*(r10_1 - 0x12))
    *(rdx_4 - 0x28) = zx.d(*(r10_1 - 0x13)) << 8 | zx.d(*(r10_1 - 0x14))
    *(rdx_4 - 0x2c) = zx.d(*(r10_1 - 0x15)) << 8 | zx.d(*(r10_1 - 0x16))
    *(rdx_4 - 0x30) = zx.d(*(r10_1 - 0x17)) << 8 | zx.d(*(r10_1 - 0x18))
    *(rdx_4 - 0x34) = zx.d(*(r10_1 - 0x19)) << 8 | zx.d(*(r10_1 - 0x1a))
    *(rdx_4 - 0x38) = zx.d(*(r10_1 - 0x1b)) << 8 | zx.d(*(r10_1 - 0x1c))
    *(rdx_4 - 0x3c) = zx.d(*(r10_1 - 0x1d)) << 8 | zx.d(*(r10_1 - 0x1e))
    uint32_t rax_19 = zx.d(*(r10_1 - 0x20))
    rdx_4 -= 0x80
    uint32_t rcx_57 = zx.d(*(r10_1 - 0x1f)) << 8
    r10_1 -= 0x40
    *(rdx_4 + 0x40) = rcx_57 | rax_19
    *(rdx_4 + 0x3c) = zx.d(*(r10_1 + 0x1f)) << 8 | zx.d(*(r10_1 + 0x1e))
    *(rdx_4 + 0x38) = zx.d(*(r10_1 + 0x1d)) << 8 | zx.d(*(r10_1 + 0x1c))
    *(rdx_4 + 0x34) = zx.d(*(r10_1 + 0x1b)) << 8 | zx.d(*(r10_1 + 0x1a))
    *(rdx_4 + 0x30) = zx.d(*(r10_1 + 0x19)) << 8 | zx.d(*(r10_1 + 0x18))
    *(rdx_4 + 0x2c) = zx.d(*(r10_1 + 0x17)) << 8 | zx.d(*(r10_1 + 0x16))
    *(rdx_4 + 0x28) = zx.d(*(r10_1 + 0x15)) << 8 | zx.d(*(r10_1 + 0x14))
    *(rdx_4 + 0x24) = zx.d(*(r10_1 + 0x13)) << 8 | zx.d(*(r10_1 + 0x12))
    *(rdx_4 + 0x20) = zx.d(*(r10_1 + 0x11)) << 8 | zx.d(*(r10_1 + 0x10))
    *(rdx_4 + 0x1c) = zx.d(*(r10_1 + 0xf)) << 8 | zx.d(*(r10_1 + 0xe))
    *(rdx_4 + 0x18) = zx.d(*(r10_1 + 0xd)) << 8 | zx.d(*(r10_1 + 0xc))
    *(rdx_4 + 0x14) = zx.d(*(r10_1 + 0xb)) << 8 | zx.d(*(r10_1 + 0xa))
    *(rdx_4 + 0x10) = zx.d(*(r10_1 + 9)) << 8 | zx.d(*(r10_1 + 8))
    *(rdx_4 + 0xc) = zx.d(*(r10_1 + 7)) << 8 | zx.d(*(r10_1 + 6))
    *(rdx_4 + 8) = zx.d(*(r10_1 + 5)) << 8 | zx.d(*(r10_1 + 4))
    result = zx.d(*(r10_1 + 2))
    *(rdx_4 + 4) = zx.d(*(r10_1 + 3)) << 8 | result
    i_3 = i_7
    i_7 -= 1
while (i_3 != 1)
return result
