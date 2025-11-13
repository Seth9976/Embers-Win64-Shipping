// 函数: sub_1418205a0
// 地址: 0x1418205a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rbx = 0
int128_t zmm6 = data_142fe5f20
int128_t zmm7 = data_142fe5f30
int32_t rbp = 0
*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[2].d = 6
*(arg1 + 0x14) = 0x10
arg1[3].d = 0x100
__builtin_memset(&arg1[4], 0, 0x20)
arg1[8].d = 0x40a00000
*(arg1 + 0x44) = 1
arg1[9].d = 0x41a00000
int32_t var_58 = 0x41a00000
int32_t var_54 = 0x41f00000

if (*(arg1 + 0x2c) != 0xa)
    sub_1405dadb0(&arg1[4], 0xa)
    rbp = arg1[5].d

arg1[5].d = rbp + 0xa

if (rbp + 0xa s> *(arg1 + 0x2c))
    sub_1406105e0(&arg1[4])

int64_t rax_6 = arg1[4]
int64_t rcx_2 = sx.q(rbp)
*(rax_6 + (rcx_2 << 2)) = zmm6
zmm6 = data_142fe5f10
*(rax_6 + (rcx_2 << 2) + 0x10) = zmm7
*(rax_6 + (rcx_2 << 2) + 0x20) = var_58.q
int32_t var_68 = 0x3f800000
arg1[7].d = 0

if (*(arg1 + 0x3c) != 5)
    sub_1405dadb0(&arg1[6], 5)
    rbx = arg1[7].d

arg1[7].d = rbx + 5

if (rbx + 5 s> *(arg1 + 0x3c))
    sub_1406105e0(&arg1[6])

int64_t rcx_5 = arg1[6]
int64_t rdx_2 = sx.q(rbx)
*(rcx_5 + (rdx_2 << 2)) = zmm6
*(rcx_5 + (rdx_2 << 2) + 0x10) = var_68
int32_t i_1 = arg2[1].d
int64_t* rbx_1 = *arg2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = *arg2

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_98)
return arg1
