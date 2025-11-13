// 函数: sub_142b92c50
// 地址: 0x142b92c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[4]
int64_t rdi = *arg1

if (rdx != 0)
    (*(rdi + 0x10))(rdi, rdx)

int64_t rdx_1 = arg1[5]
arg1[4] = 0

if (rdx_1 != 0)
    (*(rdi + 0x10))(rdi, rdx_1)

int64_t rdx_2 = arg1[6]
arg1[5] = 0

if (rdx_2 != 0)
    (*(rdi + 0x10))(rdi, rdx_2)

int64_t rdx_3 = arg1[8]
arg1[6] = 0

if (rdx_3 != 0)
    (*(rdi + 0x10))(rdi, rdx_3)

int64_t rdx_4 = arg1[0xb]
arg1[8] = 0

if (rdx_4 != 0)
    (*(rdi + 0x10))(rdi, rdx_4)

arg1[0xb] = 0
arg1[9] = 0
arg1[1] = 0
arg1[2].d = 0
arg1[3].d = 0
arg1[0xa].d = 0
*(arg1 + 0x60) = *(arg1 + 0x18)
*(arg1 + 0x70) = *(arg1 + 0x28)
*(arg1 + 0x80) = *(arg1 + 0x38)
*(arg1 + 0x90) = *(arg1 + 0x48)
uint128_t result = zx.o(arg1[0xb])
arg1[0x14] = result.q
return result
