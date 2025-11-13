// 函数: sub_1408e8650
// 地址: 0x1408e8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t rax_2 = zx.q(arg2[1].d)
int64_t var_68 = 0
int64_t rax_4
void* rdi_1

if (rax_2.d s<= *(arg1 + 0x18))
    int64_t* rcx_4 = data_143f0f180
    rdi_1 = arg1 + 0x10
    rax_4 = (*(*rcx_4 + 0x110))(rcx_4, &data_143f02b98, *(arg1 + 0x10), 0, (rax_2 << 2).d, 1)
    var_68 = rax_4
else
    int32_t var_48_1 = 1
    *(arg1 + 0x18) = rax_2.d
    int64_t* rcx_1 = data_143f0f180
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    int128_t var_58 = zx.o(0)
    int128_t var_44_1 = data_143dbb1e0
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    void var_60
    (*(*rcx_1 + 0x490))(rcx_1, &var_60, &data_143f02b98, 4, (rax_2 << 2).d, 0x202, &var_58, &var_68)
    rdi_1 = arg1 + 0x10
    sub_1405d1600(rdi_1, &var_60)
    sub_14081c9d0(&var_60)
    rax_4 = var_68

memcpy(rax_4, *arg2, arg2[1].d << 2)
int64_t* rcx_6 = data_143f0f180
int64_t result = (*(*rcx_6 + 0x118))(rcx_6, &data_143f02b98, *rdi_1)
__security_check_cookie(rax_1 ^ &var_a8)
return result
