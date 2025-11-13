// 函数: sub_14141b700
// 地址: 0x14141b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2120)
void var_2138
int64_t var_28 = __security_cookie ^ &var_2138
int32_t rdx = data_143ed3460
void* result

if (rdx == 0)
    result = sub_140a82f30(0x5240, 0x10)
else
    int64_t r10_1 = data_143ed3458
    result = *(r10_1 + (sx.q(rdx - 1) << 3))
    
    if (0 != 0)
        memmove(r10_1 + (sx.q(rdx - 1) << 3), r10_1 + (sx.q(rdx) << 3), 0 << 3)
        rdx = data_143ed3460
    
    data_143ed3460 = rdx - 1

memcpy(result, arg1, 0x5240)
int32_t i_1 = 0
void* rsi = result + 0x18
int64_t var_20f8 = 0
*(result + 0x10) = var_20f8
int64_t i_4 = 4
int64_t var_20d0 = 0
int64_t i

do
    rsi += 8
    *(rsi - 8) = *sub_14126c470()
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t var_2118 = 0
*(result + 0x15b0) = var_2118
var_2118 = 0
int64_t var_2110 = 0
*(result + 0x26f0) = var_2118.o

if (result + 0x26f0 != arg1 + 0x26f0)
    int32_t r14 = *(arg1 + 0x26f8)
    int64_t r15_1 = *(arg1 + 0x26f0)
    int32_t r8_3 = *(result + 0x26fc)
    *(result + 0x26f8) = r14
    
    if (r14 != 0 || r8_3 != 0)
        sub_141427940(result + 0x26f0, r14, r8_3)
        memcpy(*(result + 0x26f0), r15_1, r14 * 0x230)
    else
        *(result + 0x26fc) = 0

*(result + 0x2700) = zx.o(0)
int128_t var_20f0
__builtin_memset(&var_20f0, 0, 0x1c)
int64_t var_20e0
*(result + 0x2710) = var_20e0.o
int64_t var_2108
uint128_t zmm0_1 = var_2108.o
*(result + 0x2720) = zx.o(0)
*(result + 0x2730) = zmm0_1
__builtin_memset(&var_2118, 0, 0x1c)
void var_20c8
sub_141410aa0(&var_20c8)
memcpy(result + 0x2740, &var_20c8, 0x20a0)

do
    sub_14108b090(zx.q(i_1) * 0x1d0 + 0x27f8 + result)
    i_1 += 1
while (i_1 s< 0x12)

*(result + 0x5158) = 1
int64_t rbx = sx.q(data_143ed3450)
int32_t rax_12 = (rbx + 1).d
bool cond:0 = rax_12 s<= data_143ed3454
data_143ed3450 = rax_12

if (not(cond:0))
    sub_1405a4d70(&data_143ed3448)

int64_t* rsi_2 = &var_28
*(data_143ed3448 + (rbx << 3)) = result
int64_t i_3 = 0x12
int64_t i_2

do
    rsi_2 -= 0x1d0
    sub_14125cfd0(rsi_2)
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
sub_1405d16e0(&var_2118, nullptr)
sub_1405d16e0(&var_2110, nullptr)
sub_1405d16e0(&var_2108, nullptr)
sub_1405ec8a0(&var_2108)
sub_1405d1550(&var_2110)
sub_1405d1550(&var_2118)
sub_1405d16e0(&var_20f0, nullptr)
sub_1405d16e0(&var_20f0:8, nullptr)
sub_1405d16e0(&var_20e0, nullptr)
sub_1405ec8a0(&var_20e0)
sub_1405d1550(&var_20f0:8)
sub_14081c9d0(&var_20f0)
j_sub_140a74f90(0)
sub_1405d1550(&var_20d0)
sub_1405d1550(&var_20f8)
__security_check_cookie(var_28 ^ &var_2138)
return result
