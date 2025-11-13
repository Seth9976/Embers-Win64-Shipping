// 函数: sub_142b14450
// 地址: 0x142b14450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x108) == 0)
    void* rax_3 = arg1 + 0x290
    int64_t i_5 = 0x10
    int64_t i
    
    do
        *(rax_3 - 4) &= 0xdfffdfff
        *rax_3 &= 0xdfffdfff
        rax_3 += 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    return rax_3

void* rax = arg1 + 0x110
int64_t i_6 = 0x20
int64_t i_1

do
    *(rax - 4) |= 3
    *rax |= 3
    rax += 8
    i_1 = i_6
    i_6 -= 1
while (i_1 != 1)
void* rax_1 = arg1 + 0x210
int64_t i_4 = 0x10
int64_t i_7 = 0x10
int64_t i_2

do
    *(rax_1 - 4) |= 1
    *rax_1 |= 1
    rax_1 += 8
    i_2 = i_7
    i_7 -= 1
while (i_2 != 1)
int32_t* rax_2 = arg1 + 0x290
int64_t i_3

do
    rax_2[-1] &= 0xdfffffff
    *rax_2 &= 0xdfffffff
    rax_2[-1] |= 0x2000
    *rax_2 |= 0x2000
    rax_2 = &rax_2[2]
    i_3 = i_4
    i_4 -= 1
while (i_3 != 1)
return rax_2
