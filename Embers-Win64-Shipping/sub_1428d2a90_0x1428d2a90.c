// 函数: sub_1428d2a90
// 地址: 0x1428d2a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0xf])
void* r14 = arg3 + 0xe
void* rsi_1 = arg1 - arg3
int64_t i_1 = arg4
int64_t i

do
    void* rdi_1 = r14
    int64_t j_1 = 0xf
    uint64_t rdx_1 = zx.q(*(r14 + 1)) ^ zx.q(result.b)
    uint64_t rdx_3 = (zx.q(rdx_1.d) & 0xf) * 2
    int64_t r8_1 = rdx_1 & 0xfffffffffffffff0
    int64_t r9 = *(arg2 + (rdx_3 << 3))
    int64_t rax = *(arg2 + (rdx_3 << 3) + 8)
    int64_t r11_3 = *(&data_143511cf0 + ((zx.q(rax.d) & 0xf) << 3)) ^ r9 u>> 4 ^ *(r8_1 + arg2)
    result = (rax u>> 4 | r9 << 0x3c) ^ *(r8_1 + arg2 + 8)
    int64_t j
    
    do
        uint64_t rcx_3 = zx.q(*rdi_1)
        uint64_t rdx_6 = zx.q(*(rsi_1 + rdi_1))
        rdi_1 -= 1
        uint64_t rdx_7 = rdx_6 ^ rcx_3
        int64_t r9_3 = rdx_7 & 0xfffffffffffffff0
        uint64_t r8_2 = (zx.q(rdx_7.d) & 0xf) * 0x10
        int64_t r11_6 = (r11_3 << 0x3c | result u>> 4) ^ *(r8_2 + arg2 + 8)
        int64_t r10_3 =
            *(&data_143511cf0 + ((zx.q(result.d) & 0xf) << 3)) ^ r11_3 u>> 4 ^ *(r8_2 + arg2)
        r11_3 = *(&data_143511cf0 + ((zx.q(r11_6.d) & 0xf) << 3)) ^ r10_3 u>> 4 ^ *(r9_3 + arg2)
        result = (r10_3 << 0x3c | r11_6 u>> 4) ^ *(r9_3 + arg2 + 8)
        j = j_1
        j_1 -= 1
    while (j != 1)
    arg1[7] = r11_3.b
    uint32_t rdx_15 = (r11_3 u>> 0x20).d
    r14 += 0x10
    arg1[3] = rdx_15.b
    rsi_1 -= 0x10
    *arg1 = (rdx_15 u>> 0x18).b
    arg1[1] = (rdx_15 u>> 0x10).b
    arg1[2] = (rdx_15 u>> 8).b
    arg1[4] = (r11_3.d u>> 0x18).b
    arg1[5] = (r11_3.d u>> 0x10).b
    arg1[6] = (r11_3.d u>> 8).b
    uint32_t rdx_17 = (result u>> 0x20).d
    arg1[0xb] = rdx_17.b
    arg1[8] = (rdx_17 u>> 0x18).b
    arg1[9] = (rdx_17 u>> 0x10).b
    arg1[0xa] = (rdx_17 u>> 8).b
    arg1[0xc] = (result.d u>> 0x18).b
    arg1[0xd] = (result.d u>> 0x10).b
    arg1[0xe] = (result.d u>> 8).b
    arg1[0xf] = result.b
    i = i_1
    i_1 -= 0x10
while (i != 0x10)
return result
