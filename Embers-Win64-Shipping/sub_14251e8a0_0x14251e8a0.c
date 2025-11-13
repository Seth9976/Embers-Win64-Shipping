// 函数: sub_14251e8a0
// 地址: 0x14251e8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_2 = *(arg2 + 0x20)
int128_t var_48 = var_58.o
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_38
int32_t* rax_3 = sub_1420c5750(&var_38, &var_48)
*arg3 = *rax_3
arg3[1].d = rax_3[2]
int64_t* result = sub_141ddfdd0(&arg3[2], &rax_3[4])
int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
