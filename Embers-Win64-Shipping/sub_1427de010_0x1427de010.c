// 函数: sub_1427de010
// 地址: 0x1427de010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int32_t var_18
(*(*(arg3 + 0x10) + 0x28))(arg1[2], &var_28, &var_18)
void* rax_1 = &var_28
void* rdx_1 = *arg1

if (*(arg3 + 8) == 0)
    rax_1 = &var_18

bool cond:1 = *(rdx_1 + 0x10) == 0
int32_t zmm1 = *(rax_1 + 4)
int32_t zmm2 = *(rax_1 + 8)
var_18 = *rax_1
int32_t var_14 = zmm1
int32_t var_10 = zmm2
char const* const rsi

if (cond:1)
    rsi = "bad__repx__name"
else
    rsi = *(*(rdx_1 + 8) + zx.q(*(rdx_1 + 0x10) - 1) * 0x10)

int64_t* rdi = arg1[3]
int64_t* rbx_1 = arg1[1]
sub_1427e39a0(rdi, &var_18)
int64_t rax_3 = *rdi
char arg_8 = 0
(*rax_3)(rdi, &arg_8, 1)
(*(*rbx_1 + 0x10))(rbx_1, rsi, rdi[4])
rdi[3] = 0
return 0
