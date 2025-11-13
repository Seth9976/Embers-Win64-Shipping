// 函数: sub_142c85570
// 地址: 0x142c85570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int64_t rdx
int512_t zmm2
result, rdx, zmm2 = sub_142c85420(arg1, arg2, arg3)

if (*arg2 != 0 || result != 0)
    return result

int32_t rax
int512_t zmm2_1
rax, zmm2_1 = sub_142c6f450(arg1, rdx, zmm2)

if (rax != 0)
    return 0x2a

uint64_t var_18[0x2]
uint64_t* rax_2 = sub_142c59600(&var_18)
void* rcx_2 = *arg1
int128_t var_28 = *rax_2
return sub_142c6fd10(rcx_2, &var_28, zmm2_1)
