// 函数: sub_1409d2530
// 地址: 0x1409d2530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[8]
uint64_t rbx = zx.q(arg2)
int64_t rsi = sx.q(*(rdi + 0x18d0))
int32_t rax = (rsi + 1).d
*(rdi + 0x18d0) = rax

if (rax s> *(rdi + 0x18d4))
    sub_1409da5f0(rdi, rsi.d)

void* rax_1 = *(rdi + 0x18c0)

if (rax_1 != 0)
    rdi = rax_1

int64_t r8_1 = rsi << 6
void* r8_2 = r8_1 + rdi

if (r8_1 == neg.q(rdi))
    r8_2 = nullptr
else
    *(r8_2 + 0x1c) = 0x3f800000
    *(r8_2 + 0x10) = 0
    *(r8_2 + 0x18) = 0
    *(r8_2 + 0x24) = 0
    *(r8_2 + 0x2c) = 0x3f800000
    *r8_2 = 0

*r8_2 = *(*arg1 + ((zx.q(rbx.d) & 7) << 3) + 0x148)
*(r8_2 + 0x10) = *(&data_142e669e0 + ((zx.q(rbx.d) & 1) << 2)) f* *(arg1 + 0x34) f+ arg1[2].d
*(r8_2 + 0x14) =
    *(&data_142e669e0 + ((zx.q((rbx u>> 1).d) & 1) << 2)) f* *(arg1 + 0x34) f+ *(arg1 + 0x14)
float zmm0 = *(&data_142e669e0 + ((zx.q((rbx u>> 2).d) & 1) << 2)) f* *(arg1 + 0x34) f+ arg1[3].d
*(r8_2 + 0x1c) = 0
*(r8_2 + 0x18) = zmm0
*(r8_2 + 0x20) = arg1[6].d
*(r8_2 + 0x24) = arg1[6].d
int32_t result = arg1[6].d
*(r8_2 + 0x28) = result
*(r8_2 + 0x2c) = 0
float zmm1 = arg1[6].d f* 0.53125f
*(r8_2 + 0x30) = zmm1
*(r8_2 + 0x34) = arg1[6].d f- zmm1
return result
