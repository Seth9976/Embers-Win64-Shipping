// 函数: sub_141842260
// 地址: 0x141842260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void** const var_128
memset(&var_128, 0, 0x90)
sub_140b4c2a0(&var_128)
int64_t* var_90 = arg2
var_128 = &data_142d6b230
int64_t var_98 = 0
int64_t var_88 = 0x7fffffffffffffff
sub_140b55290(&var_128, 1)
var_128[0x1b](&var_128, 0)
int64_t var_1e8 = 0
void** const var_1d8
memset(&var_1d8, 0, 0x90)
sub_140b4c2a0(&var_1d8)
int64_t var_148 = 0
var_1d8 = &data_142d6ad48
int64_t* var_140 = arg2
int64_t var_138 = 0
sub_140b552b0(&var_1d8, 1)
var_1d8[0x1b](&var_1d8, 0)
int32_t var_78 = 3
int64_t var_50
__builtin_memset(&var_50, 0, 0x1c)
int32_t var_74 = 0x42
int64_t var_6c = 0
int64_t var_64 = 0
int32_t var_5c = 0x100000
int16_t var_58 = 0x100
sub_141824b20(&var_128, &var_78, arg4)
var_58:1.b |= 2
int64_t var_48
var_48.o = *arg3
int32_t var_38 = arg3[1].d

if (var_78 u< 2)
    uint32_t count_1 = arg2[1].d
    var_78 = 2
    int32_t rax_5 = count_1 + 0x3e - var_74
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    int64_t rdx_4 = *arg2
    int64_t count = sx.q(0x3e - var_74)
    memmove(count + rdx_4, rdx_4, count_1)
    memset(*arg2, 0, count)

sub_141824b20(&var_1d8, &var_78, arg4)
sub_140b4cb40(&var_1d8)
void** result = sub_140b4cb40(&var_128)
__security_check_cookie(rax_1 ^ &var_208)
return result
