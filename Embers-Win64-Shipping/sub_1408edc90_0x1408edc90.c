// 函数: sub_1408edc90
// 地址: 0x1408edc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x98)
uint128_t zmm6 = arg2
uint32_t r15_1 = (rax u>> 0x20).d
int32_t zmm0 = *(arg1 + 0xf4)
int64_t rax_1 = *(arg1 + 0x90)
int32_t rbp = *(arg1 + 0x118)

if (rax.b == 1)
    r15_1 = (rax u>> 0x20).d + 1

arg2 = *(arg1 + 0x100)
int64_t r12 = *(arg1 + 0x110)
uint32_t r14_2 = (rax_1 u>> 0x20).d + 1
int64_t var_78 = *(arg1 + 0xe0)

if (rax_1.b == 1)
    r14_2 = (rax_1 u>> 0x20).d

uint64_t rsi = 0
int32_t var_70 = *(arg1 + 0xe8)
int32_t var_6c = *(arg1 + 0xec)
int32_t var_68 = *(arg1 + 0xf0)
int32_t var_64 = zmm0
int32_t var_60
int32_t var_60_1 = var_60 ^ ((*(arg1 + 0xf8) ^ var_60) & 1)
int32_t var_5c = *(arg1 + 0xfc)
int32_t var_58 = arg2.d
int64_t var_50 = *(arg1 + 0x108)
uint64_t var_48 = 0
int32_t var_40 = rbp

if (rbp != 0)
    sub_1405a4c70(&var_48, rbp, 0)
    rsi = var_48
    memcpy(rsi, r12, rbp * 2)
else
    int32_t var_3c_1 = 0

uint32_t var_38 = r14_2
uint32_t var_34 = r15_1
int64_t result
int128_t zmm0_1
zmm0_1, result = sub_1408ed8e0(&var_78, zmm6, arg3, arg4, var_78.d)

if (rsi != 0)
    int512_t zmm0_2
    result, zmm0_2 = sub_140a74f90(rsi)
    zmm0_2.o = zmm0_1

return result
