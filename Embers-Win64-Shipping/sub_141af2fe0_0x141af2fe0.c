// 函数: sub_141af2fe0
// 地址: 0x141af2fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x48)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d4caa0
result[2] = 0
result[3] = 0
result[7] = 0
result[8].d = 0
*(result + 0x44) = 1
void* rax = sub_141a788e0()
int64_t r14 = sx.q(result[8].d)
void* rsi = &result[4]
int64_t rbx = *(rax + 0x18)
int32_t rax_1 = (r14 + 1).d
*(rsi + 0x20) = rax_1

if (rax_1 s> *(rsi + 0x24))
    sub_1405c5230(rsi, r14.d)

void* rax_2 = *(rsi + 0x18)
int64_t rcx_1 = r14 * 3
void* rdx_2 = rsi

if (rax_2 != 0)
    rdx_2 = rax_2

*(rdx_2 + (rcx_1 << 3)) = rbx
*(rdx_2 + (rcx_1 << 3) + 8) = 0
*(rdx_2 + (rcx_1 << 3) + 0x10) = 0
void* rax_3 = *(rsi + 0x18)

if (rax_3 != 0)
    rsi = rax_3

int64_t rbx_1 = sx.q(*(rsi + 0x10))
int32_t rax_4 = (rbx_1 + 1).d
*(rsi + 0x10) = rax_4

if (rax_4 s> *(rsi + 0x14))
    sub_1405a4d70(rsi + 8)

*(*(rsi + 8) + (rbx_1 << 3)) = arg1
return result
