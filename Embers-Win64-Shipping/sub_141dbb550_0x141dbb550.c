// 函数: sub_141dbb550
// 地址: 0x141dbb550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t* r10 = *(arg1 + 0xb8)
int32_t r8 = arg2

if (r10 == 0 || r10[8] == 0)
    __security_check_cookie(rax_1 ^ &var_b8)
    return 0

char rcx = (data_1439c7a34).b
int32_t var_68 = 0
int32_t rdx = r10[4]
int32_t var_48 = 1
int128_t var_58 = zx.o(0)
char var_30 = 0
int64_t var_28 = 0
int128_t var_44 = data_143dbb1e0
int32_t var_20 = rdx
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << rcx) - 1

if (r8 s<= 1)
    r8 = 1

int64_t result = (*(*rcx_1 + 0x1d8))(rcx_1, zx.q(*r10), zx.q(r10[1]), zx.q(r10[2]) & 0x3fffffff, 
    (r10[3]).b, r8, 0, &var_58, &var_68)
__security_check_cookie(rax_1 ^ &var_b8)
return result
