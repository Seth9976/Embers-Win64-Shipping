// 函数: sub_141860ea0
// 地址: 0x141860ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg3
int128_t zmm1 = arg3[1]
*arg1 = &data_142fe6c30
*(arg1 + 8) = zmm0
uint64_t var_38 = 0
zmm0 = zx.o(arg3[2].q)
*(arg1 + 0x18) = zmm1
arg1[5] = zmm0.q
int32_t rdi = arg2[1].d
int64_t rsi = *arg2
int32_t var_30 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_38, rdi, 0)
    memcpy(var_38, rsi, rdi * 2)
else
    int32_t var_2c_1 = 0

uint64_t* var_28 = &var_38
uint64_t** var_20 = &var_28
var_28.o = var_28.o
void var_18
sub_1418205a0(&arg1[6], sub_1406c9ca0(&var_18, &var_28))
uint64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

__builtin_memcpy(&arg1[0x10], 
    "\x64\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00", 0x14)
__builtin_memcpy(&arg1[0x13], "333333…", 0x11)
*(arg1 + 0xac) = 0x10
arg1[0x16].d = 8
void*** rax_1 = j_sub_140a82f30(8)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = &data_142fe39b0

arg1[0x17] = rax_1
void*** rax_2 = j_sub_140a82f30(8)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = &data_142fe6b90

arg1[0x18] = rax_2
arg1[0x19] = sub_1418a0e20()
void*** rax_4 = j_sub_140a82f30(8)

if (rax_4 == 0)
    rax_4 = nullptr
else
    *rax_4 = &data_142fe6bc0

arg1[0x1a] = rax_4
arg1[0x1b] = 0
arg1[0x1c] = 0
*(arg1 + 0x74) = 0
arg1[8].d = 0x1e
return arg1
