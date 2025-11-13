// 函数: sub_1423e6520
// 地址: 0x1423e6520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char var_c8 = var_c8 & 0xfc
char var_c7 = 1
int32_t var_c4
__builtin_memset(&var_c4, 0, 0x18)
int64_t var_a8
sub_140d3a3a0(&var_a8, nullptr)
int64_t var_a0 = 0
char rax_2 = (var_c8 & 0xfe) | 2
int64_t var_98 = 0
var_c8 = rax_2
uint128_t* var_88 = nullptr
int64_t var_58 = 0
char var_48 = 0
int32_t var_c4_1 = 0
int64_t var_b8
sub_1407473e0(&var_b8, arg3)
var_a8 = arg3[2]
int64_t var_a0_1 = arg3[3]
uint128_t var_78

if (&var_98 != &arg3[4])
    int128_t zmm3 = var_88.o
    uint128_t zmm4_1 = var_78
    var_98.o = *(arg3 + 0x20)
    uint128_t zmm0_1 = *(arg3 + 0x40)
    var_88.o = *(arg3 + 0x30)
    int128_t zmm1_1 = *(arg3 + 0x50)
    *(arg3 + 0x20) = var_98.o
    *(arg3 + 0x30) = zmm3
    *(arg3 + 0x40) = zmm4_1
    var_78 = zmm0_1
    int128_t var_68_1 = zmm1_1
    int128_t var_68
    *(arg3 + 0x50) = var_68

void* rcx_2 = *(arg1 + 0x158)
uint64_t var_c0 = *(arg1 + 0x140)
char var_c7_1 = 1

if (rcx_2 != 0)
    void* rax_5 = sub_14202bfe0(rcx_2)
    
    if (rax_5 != 0 && sub_1424359b0(rax_5) != 0)
        char var_48_1 = *sub_1424359b0(rax_5)

sub_1423d2100(arg1, arg2, &var_c8)
int32_t rax_9 = *(arg1 + 0x10) - *(arg1 + 0x3c)
void* var_d8 = arg1 + 8
int32_t var_d0 = rax_9
sub_1423cd1b0(arg1 + 0x40, arg2, &var_d8)

if (var_98 != 0)
    uint128_t* rcx_9 = &var_78
    
    if (var_88 != 0)
        rcx_9 = var_88
    
    int64_t rdx_4 = *rcx_9
    (*(rdx_4 + 0x10))(rcx_9, rdx_4)

sub_140745b20(&var_b8)
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
