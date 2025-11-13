// 函数: sub_140ce3990
// 地址: 0x140ce3990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rsi = *arg1

if (rsi == 0x22)
    int32_t arg_8 = 0
    
    if (j_sub_140b09170(arg1, arg2, &arg_8) != 0)
        return &arg1[sx.q(arg_8)]
    
    return 0

uint32_t rax_4 = zx.d(rsi)
uint32_t r10_1 = rax_4 u>> 6
int64_t r11 = 1 << (rax_4.b & 0x3f)
int64_t rcx_1 = 0

if (r10_1 == 1)
    rcx_1 = 0x7fffffe07fffffe

if ((r11 & (rcx_1 | (sbb.q(0x7fffffe07fffffe, 0x7fffffe07fffffe, rsi u< 0x40) & 0x3ff000000000000)))
        == 0 && (arg3 == 0 || rsi != 0x2f) && rsi u<= 0xff)
    if (rsi == 0)
        return arg1
    
    int16_t* rcx_3 = arg2[1]
    
    if (&rcx_3[1] u>= arg2[2])
        sub_140b38e20(arg2, 1)
        rcx_3 = arg2[1]
    
    *rcx_3 = rsi
    arg2[1] += 2
    return arg1

int16_t* r8_1 = arg1
int64_t var_28
__builtin_memcpy(&var_28, 
    "\x00\x00\x00\x00\x00\xe8\xff\x07\xfe\xff\xff\x87\xfe\xff\xff\x07\x00\x00\x00\x00\x00\x28\xff\x03\x"
"fe\xff\xff\x87\xfe\xff\xff\x07", 
    0x20)
int64_t* rax_10 = &var_28
int64_t var_18

if (arg3 == 0)
    rax_10 = &var_18

uint128_t zmm0 = *rax_10
int64_t r9_1 = zmm0.q
int64_t r10_2 = _mm_bsrli_si128(zmm0, 8).q
int64_t rax_11
rax_11.b = r10_1 != 1

if ((r11 & ((sbb.q(&var_18, &var_18, rsi u< 0x40) & r9_1) | ((rax_11 - 1) & r10_2))) != 0)
    uint64_t rax_15
    int64_t rcx_8
    uint32_t i
    
    do
        i = zx.d(r8_1[1])
        r8_1 = &r8_1[1]
        rax_15 = zx.q(i) & 0xffffffc0
        rcx_8.b = rax_15.d != 0x40
    while (test_bit(((rcx_8 - 1) & r10_2) | (sbb.q(rax_15, rax_15, i u< 0x40) & r9_1), 
        zx.q(i.b) & 0x3f))

int64_t rcx_13 = arg2[1]
int64_t rdx_1 = sx.q(((r8_1 - arg1) s>> 1).d)
int64_t rsi_1 = rdx_1 * 2

if (rsi_1 + rcx_13 u>= arg2[2])
    sub_140b38e20(arg2, rdx_1)
    rcx_13 = arg2[1]

arg2[1] = rsi_1 + rcx_13
memcpy(rcx_13, arg1, rsi_1.d)
return &arg1[rdx_1]
