// 函数: sub_140acda90
// 地址: 0x140acda90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_140ad89e0()
int64_t* rax_8 = arg3 + 0x18

if (((data_143dbb224 ^ *(arg3 + 0xc)) | (data_143dbb220 ^ *(arg3 + 8))
        | (data_143dbb21c ^ *(arg3 + 4)) | (data_143dbb218 ^ *arg3)) != 0)
    rax_8 = nullptr

uint128_t zmm6 = zx.o(*rax_8)
*(arg2 + 0x18) = 0
sub_140ad89e0()
uint64_t var_50 = zmm6.q
int128_t var_68 = data_143dbb218.o
void** const var_58 = &data_142e6d638
sub_140b0a670(arg2 + 0x20, &var_68)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_68)
__security_check_cookie(rax_1 ^ &var_88)
return arg2
