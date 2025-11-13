// 函数: sub_141064770
// 地址: 0x141064770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rax_2 = *(arg1 + 0x1e8)
int128_t zmm1 = arg3[1]
int64_t* rcx = arg2[2]
void* r14 = *arg2
int128_t var_a8 = *arg3
int128_t var_98 = zmm1
int64_t var_48 = rax_2
int128_t var_88 = arg3[2]
int128_t var_78 = arg3[3]
int128_t zmm0 = arg3[4]
zmm1 = arg3[5]
arg2[2] = 0
int128_t var_68 = zmm0
int128_t var_58 = zmm1

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

int64_t* result = sub_14105ef00(&arg2[2], r14, &var_a8)
arg2[5].b = 1

if (*(arg1 + 0x169) == 0)
    AcquireSRWLockExclusive(arg1 + 0xc0)
    sub_14105e000(arg1, arg3, arg2)
    result = ReleaseSRWLockExclusive(arg1 + 0xc0)

__security_check_cookie(rax_1 ^ &var_c8)
return result
