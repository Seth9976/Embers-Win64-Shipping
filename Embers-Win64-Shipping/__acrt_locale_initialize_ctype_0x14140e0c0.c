// 函数: __acrt_locale_initialize_ctype
// 地址: 0x14140e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_68 = 1
int64_t var_80
int64_t* var_90 = &var_80
char var_50 = 0
int128_t var_78
int128_t* var_98 = &var_78
var_78 = zx.o(0)
uint64_t rdi = 0
int128_t var_64 = data_143dbb1e0
int64_t* rcx_1 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
int64_t var_48 = 0
int32_t var_40 = 0
void var_88
(*(*rcx_1 + 0x490))(rcx_1, &var_88, &data_143f02b98, 2, 0x480, 1, var_98, var_90)
sub_1405d1600(arg1 + 0x10, &var_88)
sub_14081c9d0(&var_88)
int64_t rbx = var_80

do
    int16_t r10_1 = rdi.w << 3
    uint64_t r11_1 = zx.q((rdi * 9).d << 2)
    *(rbx + (r11_1 << 1)) = r10_1
    *(rbx + (zx.q((r11_1 + 1).d) << 1)) = r10_1 + 2
    *(rbx + (zx.q((r11_1 + 2).d) << 1)) = 3 + r10_1
    *(rbx + (zx.q((r11_1 + 3).d) << 1)) = r10_1
    *(rbx + (zx.q((r11_1 + 4).d) << 1)) = 3 + r10_1
    *(rbx + (zx.q((r11_1 + 5).d) << 1)) = r10_1 + 1
    *(rbx + (zx.q((r11_1 + 6).d) << 1)) = r10_1 + 4
    *(rbx + (zx.q((r11_1 + 7).d) << 1)) = r10_1 + 5
    *(rbx + (zx.q((r11_1 + 8).d) << 1)) = r10_1 + 7
    *(rbx + (zx.q((r11_1 + 9).d) << 1)) = r10_1 + 4
    *(rbx + (zx.q((r11_1 + 0xa).d) << 1)) = r10_1 + 7
    *(rbx + (zx.q((r11_1 + 0xb).d) << 1)) = r10_1 + 6
    *(rbx + (zx.q((r11_1 + 0xc).d) << 1)) = r10_1
    *(rbx + (zx.q((r11_1 + 0xd).d) << 1)) = r10_1 + 1
    *(rbx + (zx.q((r11_1 + 0xe).d) << 1)) = r10_1 + 5
    *(rbx + (zx.q((r11_1 + 0xf).d) << 1)) = r10_1
    *(rbx + (zx.q((r11_1 + 0x10).d) << 1)) = r10_1 + 5
    *(rbx + (zx.q((r11_1 + 0x11).d) << 1)) = 4 + r10_1
    *(rbx + (zx.q((r11_1 + 0x12).d) << 1)) = 2 + r10_1
    *(rbx + (zx.q((r11_1 + 0x13).d) << 1)) = 6 + r10_1
    *(rbx + (zx.q((r11_1 + 0x14).d) << 1)) = 7 + r10_1
    *(rbx + (zx.q((r11_1 + 0x15).d) << 1)) = 2 + r10_1
    rdi = zx.q(rdi.d + 1)
    *(rbx + (zx.q((r11_1 + 0x16).d) << 1)) = 7 + r10_1
    *(rbx + (zx.q((r11_1 + 0x17).d) << 1)) = 3 + r10_1
    *(rbx + (zx.q((r11_1 + 0x18).d) << 1)) = r10_1
    *(rbx + (zx.q((r11_1 + 0x19).d) << 1)) = 4 + r10_1
    *(rbx + (zx.q((r11_1 + 0x1a).d) << 1)) = 6 + r10_1
    *(rbx + (zx.q((r11_1 + 0x1b).d) << 1)) = r10_1
    *(rbx + (zx.q((r11_1 + 0x1c).d) << 1)) = 6 + r10_1
    *(rbx + (zx.q((r11_1 + 0x1d).d) << 1)) = 2 + r10_1
    *(rbx + (zx.q((r11_1 + 0x1e).d) << 1)) = 1 + r10_1
    *(rbx + (zx.q((r11_1 + 0x1f).d) << 1)) = 3 + r10_1
    *(rbx + (zx.q((r11_1 + 0x20).d) << 1)) = 7 + r10_1
    *(rbx + (zx.q((r11_1 + 0x21).d) << 1)) = 1 + r10_1
    *(rbx + (zx.q((r11_1 + 0x22).d) << 1)) = 7 + r10_1
    *(rbx + (zx.q((r11_1 + 0x23).d) << 1)) = 5 + r10_1
while (rdi.d u< 0x10)

int64_t* rcx_5 = data_143f0f180
int64_t result = (*(*rcx_5 + 0x118))(rcx_5, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_c8)
return result
