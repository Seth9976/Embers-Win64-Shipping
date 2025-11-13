// 函数: sub_142c52ab0
// 地址: 0x142c52ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0xc0)

if (rsi == 0)
    return 

int128_t var_28
int128_t zmm0 = *sub_142c59600(&var_28)
int128_t var_38 = zmm0
int64_t rdx_2 = arg2 s/ 0x3e8
int64_t r8_1 = zmm0.q + rdx_2
var_38.q = r8_1
int32_t rcx_2 = var_38:8.d + (arg2.d - rdx_2.d * 0x3e8) * 0x3e8
var_38:8.d = rcx_2

if (rcx_2 u>= 0xf4240)
    var_38.q = r8_1 + 1
    var_38:8.d = rcx_2 - 0xf4240

for (int64_t* i = *(arg1 + 0x4c18); i != 0; i = i[2])
    if (*(*i + 0x28) == arg3)
        sub_142c6a090(arg1 + 0x4c18, i, 0)
        break

sub_142c53b10(arg1, &var_38, arg3)
int128_t zmm6 = var_38

if (*(arg1 + 0x4bd0) == 0 && *(arg1 + 0x4bd8) == 0)
label_142c52bf9:
    *(arg1 + 0x4bd0) = zmm6
    *(arg1 + 0x4c10) = arg1
    int64_t* rdx_6 = *(rsi + 0xb0)
    var_28 = *(arg1 + 0x4bd0)
    *(rsi + 0xb0) = sub_142c6a480(&var_28, rdx_6, arg1 + 0x4be0)
    return 

int128_t zmm0_1 = *(arg1 + 0x4bd0)
var_28 = zmm6
var_38 = zmm0_1

if (sub_142c595d0(&var_28, &var_38) s> 0)
    return 

int32_t rax_8 = sub_142c6a580(*(rsi + 0xb0), arg1 + 0x4be0, rsi + 0xb0)

if (rax_8 != 0)
    zmm6 = sub_142c64850(arg1, "Internal error removing splay node = %d\n", zx.q(rax_8), arg4)

goto label_142c52bf9
