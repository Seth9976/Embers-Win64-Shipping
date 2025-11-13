// 函数: sub_142a23610
// 地址: 0x142a23610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdx = &data_1436014e0
int64_t i_6 = 3
int128_t* rax = *(arg1 + 0x1168) + 0xae
int64_t i_7 = 3
int128_t zmm0
int64_t i

do
    rax = &rax[8]
    zmm0 = *rdx
    rdx += 0x80
    rax[-8] = zmm0
    rax[-7] = *(rdx - 0x70)
    rax[-6] = *(rdx - 0x60)
    rax[-5] = *(rdx - 0x50)
    rax[-4] = *(rdx - 0x40)
    rax[-3] = *(rdx - 0x30)
    rax[-2] = *(rdx - 0x20)
    rax[-1] = *(rdx - 0x10)
    i = i_7
    i_7 -= 1
while (i != 1)
*rax = *rdx
rax[1] = *(rdx + 0x10)
int64_t i_4 = 3
rax[2] = *(rdx + 0x20)
void* const rcx = &data_143601690
int128_t* rax_2 = *(arg1 + 0x1168) + 0x25e
int64_t i_1

do
    rax_2 = &rax_2[8]
    zmm0 = *rcx
    rcx += 0x80
    rax_2[-8] = zmm0
    rax_2[-7] = *(rcx - 0x70)
    rax_2[-6] = *(rcx - 0x60)
    rax_2[-5] = *(rcx - 0x50)
    rax_2[-4] = *(rcx - 0x40)
    rax_2[-3] = *(rcx - 0x30)
    rax_2[-2] = *(rcx - 0x20)
    rax_2[-1] = *(rcx - 0x10)
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int64_t i_5 = 3
*rax_2 = *rcx
rax_2[1] = *(rcx + 0x10)
void* const rcx_1 = &data_143601840
rax_2[2] = *(rcx + 0x20)
int128_t* rax_4 = *(arg1 + 0x1168) + 0x40e
int64_t i_2

do
    rax_4 = &rax_4[8]
    zmm0 = *rcx_1
    rcx_1 += 0x80
    rax_4[-8] = zmm0
    rax_4[-7] = *(rcx_1 - 0x70)
    rax_4[-6] = *(rcx_1 - 0x60)
    rax_4[-5] = *(rcx_1 - 0x50)
    rax_4[-4] = *(rcx_1 - 0x40)
    rax_4[-3] = *(rcx_1 - 0x30)
    rax_4[-2] = *(rcx_1 - 0x20)
    rax_4[-1] = *(rcx_1 - 0x10)
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
*rax_4 = *rcx_1
rax_4[1] = *(rcx_1 + 0x10)
void* const rcx_2 = &data_1436019f0
rax_4[2] = *(rcx_1 + 0x20)
int128_t* result = *(arg1 + 0x1168) + 0x5be
int64_t i_3

do
    result = &result[8]
    zmm0 = *rcx_2
    rcx_2 += 0x80
    result[-8] = zmm0
    result[-7] = *(rcx_2 - 0x70)
    result[-6] = *(rcx_2 - 0x60)
    result[-5] = *(rcx_2 - 0x50)
    result[-4] = *(rcx_2 - 0x40)
    result[-3] = *(rcx_2 - 0x30)
    result[-2] = *(rcx_2 - 0x20)
    result[-1] = *(rcx_2 - 0x10)
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
*result = *rcx_2
result[1] = *(rcx_2 + 0x10)
result[2] = *(rcx_2 + 0x20)
return result
