// 函数: sub_142487490
// 地址: 0x142487490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_618
int64_t rax_1 = __security_cookie ^ &var_618
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_5f8 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_5f8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5f8)

int128_t var_5e8 = zx.o(0)
int32_t var_5b8
int32_t var_5b8_1 = (var_5b8 & 0xfffffffe) | 2
int128_t var_5d8
__builtin_memcpy(&var_5d8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb4\x42\x00\x00\xb4\x42\x00\x00\x00\x44\x00\x00\x00\x00\x"
"00\x00\x00\x4a\xab\xaa\xaa\x3f", 
    0x20)
char var_5b4 = 0
int32_t var_5b0 = 0
void var_5a8
sub_1422d7fd0(&var_5a8)
int64_t var_68 = 0
char var_28 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_5e8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5e8)

int128_t* rax_7 = *(arg2 + 0x38)
int128_t* r8_4 = &var_5e8
int512_t zmm1
zmm1.o = var_5f8

if (rax_7 != 0)
    r8_4 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
int64_t result = (*(*arg1 + 0x528))(arg1, zmm1, r8_4)
char var_28_1 = 0
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_618)
return result
