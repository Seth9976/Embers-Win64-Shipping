// 函数: sub_14188cf10
// 地址: 0x14188cf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*(arg1 + 0x88)
*(arg1 + 0x88) = 0
int64_t* i = *(arg1 + 0x78)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x80)) * 2]; i != rsi_2; i = &i[2])
    if (*i != 0)
        while (true)
            int64_t rax_3 = *i
            
            if (rax_3 != 0)
                int64_t* rcx = *(rax_3 + 0x70)
                
                if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
                    break

sub_14084ee30(arg1 + 0x78, 0)
*(arg1 + 0x110) = *(arg1 + 0x28)
int128_t zmm0_1
uint128_t zmm1

while (true)
    void* rdx = **(arg1 + 0xe8)
    
    if (rdx == 0)
        break
    
    zmm0_1 = *(rdx + 8)
    int64_t rcx_2 = *(arg1 + 0xe8)
    zmm1 = zx.o(*(rdx + 0x18))
    *(arg1 + 0xe8) = rdx
    int128_t var_a8 = zmm0_1
    int64_t var_d8_1 = 0
    uint64_t var_98 = zmm1.q
    int64_t var_d0_1 = 0
    *(rdx + 8) = var_d8_1.o
    *(rdx + 0x18) = 0
    j_sub_140a74f90(rcx_2)
    sub_1418182f0(arg1 + 0x118, &var_a8, &var_98)

while (true)
    void* rdx_3 = **(arg1 + 0xf8)
    
    if (rdx_3 == 0)
        break
    
    zmm0_1 = *(rdx_3 + 8)
    int64_t rcx_4 = *(arg1 + 0xf8)
    zmm1 = zx.o(*(rdx_3 + 0x18))
    *(arg1 + 0xf8) = rdx_3
    int128_t var_90 = zmm0_1
    int64_t var_c0_1 = 0
    uint64_t var_80 = zmm1.q
    int64_t var_b8_1 = 0
    *(rdx_3 + 8) = var_c0_1.o
    *(rdx_3 + 0x18) = 0
    j_sub_140a74f90(rcx_4)
    sub_1418182f0(arg1 + 0x168, &var_90, &var_80)

while (true)
    void* rdx_6 = **(arg1 + 0x108)
    
    if (rdx_6 == 0)
        break
    
    zmm0_1 = *(rdx_6 + 8)
    int32_t rax_10 = *(rdx_6 + 0x28)
    zmm1 = *(rdx_6 + 0x18)
    int64_t rcx_6 = *(arg1 + 0x108)
    *(arg1 + 0x108) = rdx_6
    int128_t var_54 = zmm0_1
    int32_t var_34_1 = rax_10
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x28)
    uint128_t var_44 = zmm1
    *(rdx_6 + 8) = var_78.o
    uint128_t var_68
    *(rdx_6 + 0x18) = var_68
    *(rdx_6 + 0x28) = 0
    j_sub_140a74f90(rcx_6)
    sub_141818190(arg1 + 0x1b8, &var_54, &var_44)

*arg2 = *(arg1 + 0x110)
void* rdx_9 = &arg2[6]
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
*(rdx_9 + 0x10) = 0
*(rdx_9 + 0x18) = 0
*(rdx_9 + 0x1c) = 0x80
void* rax_12 = *(rdx_9 + 0x10)

if (rax_12 != 0)
    rdx_9 = rax_12

*rdx_9 = 0
*(rdx_9 + 8) = 0
arg2[0xe] = 0xffffffff
arg2[0xf] = 0
*(arg2 + 0x48) = 0
arg2[0x14] = 0
sub_1418233a0(&arg2[2], arg1 + 0x118)
*(arg2 + 0x58) = 0
*(arg2 + 0x60) = 0
void* rdx_11 = &arg2[0x1a]
*(rdx_11 + 0x1c) = 0x80
void* rax_13 = *(rdx_11 + 0x10)

if (rax_13 != 0)
    rdx_11 = rax_13

__builtin_memset(rdx_11, 0, 0x1c)
arg2[0x22] = 0xffffffff
arg2[0x23] = 0
*(arg2 + 0x98) = 0
arg2[0x28] = 0
sub_1418233a0(&arg2[0x16], arg1 + 0x168)
*(arg2 + 0xa8) = 0
void* r8_4 = &arg2[0x2e]
*(arg2 + 0xb0) = 0
*(r8_4 + 0x10) = 0
*(r8_4 + 0x18) = 0
*(r8_4 + 0x1c) = 0x80
void* rdx_13 = *(r8_4 + 0x10)

if (rdx_13 != 0)
    r8_4 = rdx_13

*r8_4 = 0
*(r8_4 + 8) = 0
arg2[0x36] = 0xffffffff
arg2[0x37] = 0
*(arg2 + 0xe8) = 0
arg2[0x3c] = 0
sub_141868e00(&arg2[0x2a], arg1 + 0x1b8)
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
