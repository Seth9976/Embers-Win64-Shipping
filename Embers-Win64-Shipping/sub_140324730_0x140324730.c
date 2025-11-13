// 函数: sub_140324730
// 地址: 0x140324730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int64_t rax
int64_t r9_1

if (arg2 == 1)
    r9_1 = 0
label_14032478d:
    rax = r9_1 * 0x30
    *(arg1 + rax) = data_142d3f660
    __builtin_memset(arg1 + rax + 0x10, 0, 0x20)
    return 

int32_t r8_2 = arg2 & 1
rax = &arg1[4]
r9_1 = 0
int128_t zmm0 = data_142d3f660

do
    *(rax - 0x40) = zmm0
    __builtin_memset(rax - 0x30, 0, 0x20)
    *(rax - 0x10) = zmm0
    r9_1 += 2
    __builtin_memset(rax, 0, 0x20)
    rax += 0x60
while (arg2 - r8_2 != r9_1.d)

if (r8_2 != 0)
    goto label_14032478d
