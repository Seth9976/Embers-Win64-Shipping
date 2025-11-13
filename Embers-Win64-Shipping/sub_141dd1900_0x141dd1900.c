// 函数: sub_141dd1900
// 地址: 0x141dd1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x5b) & 8) == 0)
    sub_141dd9fc0(arg1)
    uint8_t rax_1 = arg1[0x12].b u>> 1 & 1
    *(arg1 + 0x5b) |= 8
    data_143f38d82 = rax_1

uint8_t rcx = arg1[0xb].b
uint8_t r8 = rcx u>> 5 & 1
char rax_2 = ((data_143f38d81 << 5 ^ rcx) & 0x20) ^ rcx
data_143f38d81 = r8
arg1[0xb].b = rax_2
int64_t rdx = arg1[0x1c]
arg1[0x1c] = data_143f38d88
data_143f38d88 = rdx

if ((arg1[0xb].b u>> 5 & 1) != r8)
    (*(*arg1 + 0x2f8))(arg1, zx.q(r8))
    rdx = data_143f38d88

if (arg1[0x1c] != rdx)
    (*(*arg1 + 0x440))(arg1, rdx)

uint32_t result = zx.d(arg1[0x1e].b)

if (result == data_143f38d90)
    return result

jump(*(*arg1 + 0x410))
