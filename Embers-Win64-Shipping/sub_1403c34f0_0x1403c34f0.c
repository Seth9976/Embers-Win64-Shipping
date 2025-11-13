// 函数: sub_1403c34f0
// 地址: 0x1403c34f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *(arg1 + 0x254)
int32_t r9_1

if (r9 - 0x41 u> 0x39 || r9 - 0x5b u<= 5)
    uint64_t r9_2 = zx.q(r9)
    *arg2 = 0x5b
    uint64_t rax_3
    rax_3.b = (*"0123456789ABCDEFlibpng error: %s")[r9_2 u>> 4]
    arg2[1] = rax_3.b
    rax_3.b = *((zx.q(r9_2.d) & 0xf) + "0123456789ABCDEFlibpng error: %s")
    arg2[2] = rax_3.b
    arg2[3] = 0x5d
    r9_1 = 4
else
    *arg2 = r9
    r9_1 = 1

uint64_t r10
r10.b = *(arg1 + 0x255)
uint64_t rax_5

if ((r10 - 0x41).b u> 0x39 || (r10 - 0x5b).d.b u< 6)
    uint64_t r10_1 = zx.q(r10.b)
    uint64_t r11_1 = zx.q(r9_1)
    arg2[r11_1] = 0x5b
    rax_5.b = (*"0123456789ABCDEFlibpng error: %s")[r10_1 u>> 4]
    arg2[r11_1 + 1] = rax_5.b
    rax_5.b = *((zx.q(r10_1.d) & 0xf) + "0123456789ABCDEFlibpng error: %s")
    r9_1 += 3
    arg2[r11_1 | 2] = rax_5.b
    r10.b = 0x5d

uint64_t r11_3 = zx.q(r9_1)
arg2[r11_3] = r10.b
uint64_t r10_2 = r11_3 + 1
rax_5.b = *(arg1 + 0x256)

if ((rax_5 - 0x41).b u> 0x39 || (rax_5 - 0x5b).b u<= 5)
    uint64_t rsi_2 = zx.q(rax_5.b)
    arg2[r10_2] = 0x5b
    rax_5.b = (*"0123456789ABCDEFlibpng error: %s")[rsi_2 u>> 4]
    arg2[r11_3 + 2] = rax_5.b
    rax_5.b = *((zx.q(rsi_2.d) & 0xf) + "0123456789ABCDEFlibpng error: %s")
    arg2[r11_3 + 3] = rax_5.b
    rax_5.b = 0x5d
    r10_2 = zx.q(r9_1 + 4)

uint64_t r9_5 = zx.q(r10_2.d)
arg2[r9_5] = rax_5.b
uint64_t r11_4 = r9_5 + 1
arg1.b = *(arg1 + 0x257)

if ((arg1 - 0x41).b u> 0x39 || (arg1 - 0x5b).b u<= 5)
    uint64_t rax_10 = zx.q(arg1.b)
    arg2[r11_4] = 0x5b
    arg1.b = (*"0123456789ABCDEFlibpng error: %s")[rax_10 u>> 4]
    arg2[r9_5 + 2] = arg1.b
    uint64_t rax_11
    rax_11.b = *((zx.q(rax_10.d) & 0xf) + "0123456789ABCDEFlibpng error: %s")
    arg2[r9_5 + 3] = rax_11.b
    arg1.b = 0x5d
    r11_4 = zx.q(r10_2.d + 4)

uint64_t rax_12 = zx.q(r11_4.d)
arg2[rax_12] = arg1.b
int32_t result_1

if (arg3 == 0)
    result_1 = (rax_12 + 1).d
else
    arg2[rax_12 + 1] = 0x3a
    uint64_t rcx_2 = zx.q((r11_4 + 3).d)
    arg2[rax_12 + 2] = 0x20
    int128_t zmm0 = *arg3
    int128_t zmm1 = arg3[1]
    int128_t zmm2 = arg3[2]
    *(arg2 + rcx_2 + 0x30) = arg3[3]
    *(arg2 + rcx_2 + 0x20) = zmm2
    *(arg2 + rcx_2 + 0x10) = zmm1
    *(arg2 + rcx_2) = zmm0
    result_1 = r11_4.d + 0x42

uint64_t result = zx.q(result_1)
arg2[result] = 0
return result
