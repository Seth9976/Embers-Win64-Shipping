// 函数: sub_1428d2c70
// 地址: 0x1428d2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg1[0xf])
uint64_t rax_2 = (zx.q(rax) & 0xf) * 2
int64_t r8_1 = zx.q(rax) & 0xfffffffffffffff0
void* rsi = 0xe
int64_t r9 = *(arg2 + (rax_2 << 3))
int64_t rax_3 = *(arg2 + (rax_2 << 3) + 8)
int64_t rbx_2 = *(&data_143511cf0 + ((zx.q(rax_3.d) & 0xf) << 3)) ^ r9 u>> 4 ^ *(r8_1 + arg2)
int64_t result = (rax_3 u>> 4 | r9 << 0x3c) ^ *(r8_1 + arg2 + 8)
void* temp0_1

do
    uint32_t rcx_2 = zx.d(*(rsi + arg1))
    int64_t r9_3 = zx.q(rcx_2) & 0xfffffffffffffff0
    int64_t r8_2 = arg2 + (zx.q(rcx_2) & 0xf) * 0x10
    int64_t rbx_5 = (rbx_2 << 0x3c | result u>> 4) ^ *(r8_2 + 8)
    int64_t r10_3 = *(&data_143511cf0 + ((zx.q(result.d) & 0xf) << 3)) ^ rbx_2 u>> 4 ^ *r8_2
    rbx_2 = *(&data_143511cf0 + ((zx.q(rbx_5.d) & 0xf) << 3)) ^ r10_3 u>> 4 ^ *(r9_3 + arg2)
    result = (r10_3 << 0x3c | rbx_5 u>> 4) ^ *(r9_3 + arg2 + 8)
    temp0_1 = rsi
    rsi -= 1
while (temp0_1 - 1 s>= 0)
uint32_t rdx_7 = (rbx_2 u>> 0x20).d
arg1[3] = rdx_7.b
*arg1 = (rdx_7 u>> 0x18).b
arg1[1] = (rdx_7 u>> 0x10).b
arg1[2] = (rdx_7 u>> 8).b
arg1[4] = (rbx_2.d u>> 0x18).b
arg1[5] = (rbx_2.d u>> 0x10).b
arg1[6] = (rbx_2.d u>> 8).b
uint32_t rdx_9 = (result u>> 0x20).d
arg1[7] = rbx_2.b
arg1[8] = (rdx_9 u>> 0x18).b
arg1[9] = (rdx_9 u>> 0x10).b
arg1[0xa] = (rdx_9 u>> 8).b
arg1[0xc] = (result.d u>> 0x18).b
arg1[0xd] = (result.d u>> 0x10).b
arg1[0xe] = (result.d u>> 8).b
arg1[0xb] = rdx_9.b
arg1[0xf] = result.b
return result
