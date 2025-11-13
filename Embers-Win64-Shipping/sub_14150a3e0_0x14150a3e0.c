// 函数: sub_14150a3e0
// 地址: 0x14150a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_74 = 4
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int32_t var_78 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x40)
int32_t var_24 = 0
int64_t var_20 = 0
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
sub_142290930(&data_143eef858, arg1, &var_e8)
sub_1422b9c80(&data_143eef7d0, arg1, &var_e8)
sub_1422b9b10(&data_143eef7d0, arg1, &var_e8)
sub_1422b9a60(&data_143eef7d0, arg1, &var_e8, 0)
sub_1422908d0(arg1, &var_e8, 1)
*(arg1 + 0x130) = var_e8.o
int64_t var_d8
*(arg1 + 0x140) = var_d8.o
int64_t var_c8
*(arg1 + 0x150) = var_c8.o
void var_b8

if (&arg1[0x2c] != &var_b8)
    int32_t r8_4 = *(arg1 + 0x1a4)
    int64_t rsi_1 = sx.q(var_78)
    arg1[0x34].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_4 != 0)
        sub_14088f7d0(&arg1[0x2c], rsi_1.d, r8_4)
        memcpy(&arg1[0x2c], &var_b8, (rsi_1 << 4).d)
    else
        *(arg1 + 0x1a4) = 4

int128_t zmm0 = var_70.o
__builtin_memset(&arg1[0x39], 0, 0x20)
arg1[0x3d].d = var_30.d
*(arg1 + 0x1ec) = var_30:4.d
arg1[0x3e].d = var_28
*(arg1 + 0x1f4) = var_24
arg1[0x3f] = var_20
*(arg1 + 0x1a8) = zmm0
int64_t var_60
*(arg1 + 0x1b8) = var_60.o
int64_t result = sub_1420fe4c0(arg1)
__security_check_cookie(rax_1 ^ &var_108)
return result
