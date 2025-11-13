// 函数: sub_141fa0c70
// 地址: 0x141fa0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_6c = 0x80
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x34)
int64_t* rdx = *arg1
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x44)
int32_t var_68 = 0xffffffff
int32_t var_64
__builtin_memset(&var_64, 0, 0x18)
int64_t var_48 = 0
int64_t var_40 = 0
sub_140596d10(arg2, rdx)
int64_t* rcx_1 = &arg2[0xe]
arg2[2] = var_e8
__builtin_memset(&arg2[3], 0, 0x14)
int64_t var_d0
*(arg2 + 0x2c) = var_d0
int64_t var_c8
*(arg2 + 0x34) = var_c8:4.d
int64_t var_c0
arg2[7] = var_c0
int32_t var_b8
arg2[8].d = var_b8
arg2[9] = var_b0
__builtin_memset(&arg2[0xa], 0, 0x20)
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_6 = rcx_1[2]
int128_t var_a8
var_a8:8.q = 0
var_a8.q = 0

if (rax_6 != 0)
    rcx_1 = rax_6

*rcx_1 = 0
rcx_1[1] = 0
arg2[0x12].d = 0xffffffff
*(arg2 + 0x94) = 0
arg2[0x14] = 0
arg2[0x15].d = 0
int64_t var_98
sub_141fa71a0(&arg2[0xc], &var_98)
int64_t var_58
int64_t rsi = var_58
int64_t var_60

if (rsi == 0)
    memmove(&arg2[0x13], &var_60, 4)
int64_t rcx_4 = arg2[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
    rsi = var_58

arg2[0x14] = rsi
int32_t var_50
arg2[0x15].d = var_50
arg2[0x16] = var_48
arg2[0x17].d = var_40.d
*(arg2 + 0xbc) = var_40:4.d
int64_t var_40_1 = 0
int64_t var_58_1 = 0
int64_t var_48_1 = 0
var_50 = 0
sub_1405e1cf0(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_7 = var_98

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rbx = var_a8:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_3 = *rbx
        (*rdx_3)(rbx, rdx_3)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
