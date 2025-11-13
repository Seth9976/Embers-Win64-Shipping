// 函数: sub_141b7be50
// 地址: 0x141b7be50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
sub_140dddeb0(arg1)
sub_140d93e20(&arg1[0x72])
*arg1 = &data_14307aa08
arg1[0x72] = &data_14307ac50
arg1[0xe3] = &data_142d82a88
arg1[0xe4] = arg1
sub_140ddb700(&arg1[0xe5])
arg1[0xe6] = arg1
__builtin_memset(&arg1[0xe9], 0, 0x19)
arg1[0xed] = 0
arg1[0xee].d = 0
arg1[0xe3] = &data_142ec8af0
arg1[0xe5] = &data_142ec8b18
arg1[0xef] = &data_142d8ad18
arg1[0xf0].d = 0x42000000
*(arg1 + 0x784) = 0x42000000
*(arg1 + 0x78c) = 0
*(arg1 + 0x794) = 0
*(arg1 + 0x798) = data_14399f5c0
arg1[0xf5].b = 0
__builtin_memset(&arg1[0xf6], 0, 0x20)
int64_t* zmm1 = data_143dbb1f0
arg1[0xfb].d = zmm1.d
arg1[0xfa].d = zmm1.d
arg1[0xfc].b = 0
int64_t* var_1e0 = zmm1
int128_t zmm0 = var_1e0:4.d
*(arg1 + 0x7dc) = zmm0.d
*(arg1 + 0x7d4) = zmm0.d
*(arg1 + 0x7e4) = 3
arg1[0xfd] = 0
arg1[0xfe] = 0
arg1[0xff].b &= 0xfc
arg1[0x101] = 0
arg1[0x102] = 0
void*** rax_2 = sub_1418aed60()
var_1e0 = &rax_2[2]
sub_140918950(&var_1e0, &rax_2[2])
int64_t var_1f8 = 0xa90
void var_1e8
void* var_1d0 = &var_1e8
sub_140e23ed0(&rax_2[2], "SVirtualWindow")
void var_1c8
int64_t* rax_3
int128_t zmm1_1
rax_3, zmm1_1 = sub_1418aefd0(&var_1c8)
sub_1418aff10(&var_1e0, &arg1[0x103], rax_3, zmm1_1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_2)[1](rax_2, 1)

sub_140ddea30(&var_1c8)
sub_140d921f0(&arg1[0x105])
arg1[0x121].d = 0xffffffff
*(arg1 + 0x90c) = 0
void*** rax_6 = j_sub_140a82f30(0x30)
void*** rsi = rax_6

if (rax_6 == 0)
    rsi = nullptr
else
    *rsi = &data_142d5a090
    sub_1405ab8c0(&rsi[1])
    rsi[3] = 0
    *rsi = &data_143082d28
    rsi[1] = &data_143082d38
    rsi[4] = 0
    rsi[5] = 0

arg1[0x122] = rsi
arg1[0x123] = &data_142d8ad18
arg1[0x124].d = 0x42000000
*(arg1 + 0x924) = 0x42000000
*(arg1 + 0x92c) = 0
*(arg1 + 0x934) = 0
void*** var_1d8
var_1d8.d = 0
*(arg1 + 0x938) = data_14399f5c0
arg1[0x129].b = 0
__builtin_memset(&arg1[0x12a], 0, 0x20)
int64_t* zmm1_2 = data_143dbb1f0
arg1[0x12f].d = zmm1_2.d
arg1[0x12e].d = zmm1_2.d
arg1[0x130].b = 0
var_1e0 = zmm1_2
int128_t zmm0_1 = var_1e0:4.d
*(arg1 + 0x97c) = zmm0_1.d
*(arg1 + 0x974) = zmm0_1.d
*(arg1 + 0x984) = 3
arg1[0x131] = 0
arg1[0x132] = 0
arg1[0x133].b &= 0xfc
arg1[0x134] = 0
uint64_t* rsi_2 = data_143e20d08 + 0xd0
var_1e0 = sub_140f7ec50
int64_t* rax_7 = sub_140a84c80(0, 0x30, 0)

if (rax_7 != 0)
    int128_t zmm0_2 = var_1e0.o
    rax_7[1] = arg1
    *rax_7 = &data_142da2598
    *(rax_7 + 0x10) = zmm0_2
    rax_7[5] = sub_140a387b0()
    *rax_7 = &data_142da25f0

if (rax_7 != 0)
    sub_140599630(rsi_2, 1)
    (*(*rax_7 + 0x30))(rax_7, &var_1e0)
    int64_t rbp_1 = sx.q(rsi_2[1].d)
    int32_t rax_10 = (rbp_1 + 1).d
    rsi_2[1].d = rax_10
    
    if (rax_10 s> *(rsi_2 + 0xc))
        sub_1405a4f90(rsi_2)
    
    void** rax_13 = (rbp_1 << 4) + *rsi_2
    *rax_13 = rax_7
    rax_13[1].d = 3

*(arg1 + 0x29) |= 0x10
arg1[0xdf] = arg1
arg1[0xe0] = &arg1[0x105]
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

__security_check_cookie(rax_1 ^ &var_218)
return arg1
