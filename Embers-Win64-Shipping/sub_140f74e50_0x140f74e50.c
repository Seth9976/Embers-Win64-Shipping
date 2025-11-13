// 函数: sub_140f74e50
// 地址: 0x140f74e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (rcx == 0)
    return zx.q((rcx - 1).d)

float zmm1 = *(*(rcx + 0x48) + 0x8c)
float arg_c = zmm1 * arg2[1]
float arg_8 = zmm1 * *arg2
void arg_18
int32_t r8_1 = sub_140f047e0(*(rcx + 0x48), &arg_18, &arg_8, 0)
void* rcx_2 = *(arg1 + 8)
int64_t var_18 = 0
int64_t var_10 = 0
sub_140f048e0(*(rcx_2 + 0x48), &var_18, r8_1)
int32_t rax_2 = sub_140f196b0(&var_18, &arg_18)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(rax_2)
