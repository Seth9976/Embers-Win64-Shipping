// 函数: sub_141f50f30
// 地址: 0x141f50f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_14327e828
arg1[5] = &data_14327f098
arg1[0x3e] = &data_14327f0c8
arg1[0x81] = 0
arg1[0x82] = 0
arg1[0x83].b = 0
__builtin_memset(arg1 + 0x41c, 0, 0x15)
__builtin_memset(arg1 + 0x434, 0, 0x15)
__builtin_memset(arg1 + 0x44c, 0, 0x15)
*(arg1 + 0x464) = 0
arg1[0x8d] = 0
__builtin_memset(&arg1[0x8e], 0, 0x11)
__builtin_memset(arg1 + 0x484, 0, 0x15)
__builtin_memset(arg1 + 0x49c, 0, 0x15)
__builtin_memset(arg1 + 0x4b4, 0, 0x15)
*(arg1 + 0x4cc) = 0
arg1[0x9a].b = 1
*(arg1 + 0x4d4) = 0xa
arg1[0x9b] = 0x3f800000
arg1[0x9c].w = 1
arg1[0x9d] = data_14399f678
arg1[0x9e].d = data_14399f680
arg1[0x82].d = 0

if (*(arg1 + 0x414) s<= 9)
    sub_141846c50(&arg1[0x81], 0xa)

arg1[0x85].d = 0

if (*(arg1 + 0x42c) s< 0xa)
    sub_1405a5310(&arg1[0x84], 0xa)

arg1[0x88].d = 0

if (*(arg1 + 0x444) s< 0xa)
    sub_141846c50(&arg1[0x87], 0xa)

int32_t var_30 = 0
int64_t rbp = sx.q(arg1[0x82].d)
int32_t rax_1 = (rbp + 1).d
arg1[0x82].d = rax_1

if (rax_1 s> *(arg1 + 0x414))
    sub_140ac0cd0(&arg1[0x81])

int32_t* rcx_5 = rbp * 0x2c + arg1[0x81]
*(rcx_5 + 4) = 0
rcx_5[3] = 0
*rcx_5 = 0
*(rcx_5 + 0x10) = data_143dbb1f8.q
rcx_5[6] = data_143dbb200
*(rcx_5 + 0x1c) = data_143dbb1f8.q
rcx_5[9] = data_143dbb200
rcx_5[0xa].b = 1
int64_t rbp_1 = sx.q(arg1[0x85].d)
int32_t rax_4 = (rbp_1 + 1).d
arg1[0x85].d = rax_4

if (rax_4 s> *(arg1 + 0x42c))
    sub_1405c5060(&arg1[0x84])

int32_t* rcx_10 = &arg1[0x84][rbp_1 * 0xa]
int32_t var_30_1 = 0x3f800000
*rcx_10 = 0
*(rcx_10 + 0x10) = data_14399f720
*(rcx_10 + 0x20) = data_14399f720
*(rcx_10 + 0x30) = data_14399f720
rcx_10[0x10].b = 1
int64_t rbp_2 = sx.q(arg1[0x88].d)
int32_t rax_5 = (rbp_2 + 1).d
arg1[0x88].d = rax_5

if (rax_5 s> *(arg1 + 0x444))
    sub_140ac0cd0(&arg1[0x87])

int32_t* rcx_13 = rbp_2 * 0x2c + arg1[0x87]
*(rcx_13 + 4) = 0x3f800000
rcx_13[3] = 0x3f800000
*rcx_13 = 0
*(rcx_13 + 0x10) = data_143dbb1f8.q
rcx_13[6] = data_143dbb200
*(rcx_13 + 0x1c) = data_143dbb1f8.q
rcx_13[9] = data_143dbb200
rcx_13[0xa].b = 1
int64_t rbp_3 = sx.q(arg1[0x82].d)
int32_t rax_8 = (rbp_3 + 1).d
arg1[0x82].d = rax_8

if (rax_8 s> *(arg1 + 0x414))
    sub_140ac0cd0(&arg1[0x81])

int32_t* rcx_16 = rbp_3 * 0x2c + arg1[0x81]
*(rcx_16 + 4) = 0x42c80000
rcx_16[3] = 0x3f800000
*rcx_16 = 0x3f800000
*(rcx_16 + 0x10) = data_143dbb1f8.q
rcx_16[6] = data_143dbb200
*(rcx_16 + 0x1c) = data_143dbb1f8.q
rcx_16[9] = data_143dbb200
rcx_16[0xa].b = 1
int64_t rbp_4 = sx.q(arg1[0x85].d)
int32_t rax_11 = (rbp_4 + 1).d
arg1[0x85].d = rax_11

if (rax_11 s> *(arg1 + 0x42c))
    sub_1405c5060(&arg1[0x84])

int32_t* rcx_21 = &arg1[0x84][rbp_4 * 0xa]
int32_t var_30_2 = 0x3f800000
*rcx_21 = 0x3f800000
*(rcx_21 + 0x10) = data_14399f720
*(rcx_21 + 0x20) = data_14399f720
*(rcx_21 + 0x30) = data_14399f720
rcx_21[0x10].b = 1
int64_t rbp_5 = sx.q(arg1[0x88].d)
int32_t rax_12 = (rbp_5 + 1).d
arg1[0x88].d = rax_12

if (rax_12 s> *(arg1 + 0x444))
    sub_140ac0cd0(&arg1[0x87])

int32_t* rdx_7 = rbp_5 * 0x2c + arg1[0x87]
*(rdx_7 + 4) = 0x3f800000
rdx_7[3] = 0x3f800000
*rdx_7 = 0x3f800000
*(rdx_7 + 0x10) = data_143dbb1f8.q
rdx_7[6] = data_143dbb200
*(rdx_7 + 0x1c) = data_143dbb1f8.q
rdx_7[9] = data_143dbb200
rdx_7[0xa].b = 1
sub_141f77550(arg1)
sub_141ae6560(&arg1[0x8e], &arg1[0x81])
sub_141f51ba0(&arg1[0x91], &arg1[0x84])
sub_141ae6560(&arg1[0x94], &arg1[0x87])
sub_141f51b20(&arg1[0x97], &arg1[0x8a])
return arg1
