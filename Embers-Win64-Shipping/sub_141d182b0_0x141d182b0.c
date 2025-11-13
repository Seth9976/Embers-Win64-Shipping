// 函数: sub_141d182b0
// 地址: 0x141d182b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_1405a4b40(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi * 0x30).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rbp_1 = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp_1.d

if (rbp_1.d != 0)
    sub_140638750(&arg1[2], rbp_1.d, 0)
    memcpy(arg1[2], r14, (rbp_1 << 2).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int64_t rbp_2 = sx.q(arg2[5].d)
int64_t r14_1 = arg2[4]
arg1[5].d = rbp_2.d

if (rbp_2.d != 0)
    sub_140638750(&arg1[4], rbp_2.d, 0)
    memcpy(arg1[4], r14_1, (rbp_2 << 2).d)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
uint32_t count = arg2[7].d
int64_t r14_2 = arg2[6]
arg1[7].d = count

if (count != 0)
    sub_1405da9e0(&arg1[6], count, 0)
    memcpy(arg1[6], r14_2, count)
else
    *(arg1 + 0x3c) = 0

arg1[8] = 0
int32_t rbp_3 = arg2[9].d
int64_t r14_3 = arg2[8]
arg1[9].d = rbp_3

if (rbp_3 != 0)
    sub_141d26450(&arg1[8], rbp_3, 0)
    memcpy(arg1[8], r14_3, rbp_3 * 0x6c)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
int64_t rbp_4 = sx.q(arg2[0xb].d)
int64_t r14_4 = arg2[0xa]
arg1[0xb].d = rbp_4.d

if (rbp_4.d != 0)
    sub_1405a4b40(&arg1[0xa], rbp_4.d, 0)
    memcpy(arg1[0xa], r14_4, (rbp_4 * 0x30).d)
else
    __builtin_memset(arg1 + 0x5c, 0, 0x14)

void* rdx_12 = &arg1[0xe]
*(rdx_12 + 0x1c) = 0x80
void* rax = *(rdx_12 + 0x10)

if (rax != 0)
    rdx_12 = rax

__builtin_memset(rdx_12, 0, 0x1c)
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
sub_141d18d80(&arg1[0xc], &arg2[0xc])
arg1[0x16].d = arg2[0x16].d
return arg1
