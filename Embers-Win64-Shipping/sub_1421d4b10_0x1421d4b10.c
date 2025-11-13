// 函数: sub_1421d4b10
// 地址: 0x1421d4b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t rdi = 0
int32_t var_48 = 1
char var_30 = 0
int64_t var_60
int64_t* var_70 = &var_60
__builtin_memset(&var_60, 0, 0x18)
int128_t var_44 = data_143dbb1e0
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
int128_t var_58
(*(*rcx_1 + 0x490))(rcx_1, &var_68, &data_143f02b98, 2, 0x30000, 1, &var_58, var_70)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_14081c9d0(&var_68)
int64_t rbx = var_60

do
    int16_t r11_1 = rdi.w << 2
    uint64_t r10_1 = zx.q((rdi * 3).d * 2)
    *(rbx + (r10_1 << 1)) = r11_1
    rdi = zx.q(rdi.d + 1)
    *(rbx + (zx.q((r10_1 + 1).d) << 1)) = r11_1 + 2
    *(rbx + (zx.q((r10_1 + 2).d) << 1)) = r11_1 + 3
    *(rbx + (zx.q((r10_1 + 3).d) << 1)) = r11_1
    *(rbx + (zx.q((r10_1 + 4).d) << 1)) = r11_1 + 1
    *(rbx + (zx.q((r10_1 + 5).d) << 1)) = r11_1 + 2
while (rdi.d u< 0x4000)

int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x118))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_a8)
return result
