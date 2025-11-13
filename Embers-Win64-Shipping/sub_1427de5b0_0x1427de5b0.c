// 函数: sub_1427de5b0
// 地址: 0x1427de5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int64_t entry_r8
int32_t* rax = (*(entry_r8 + 0x18))(&var_18, arg1[2])
void* rdx_1 = *arg1
bool cond:0 = *(rdx_1 + 0x10) == 0
int32_t zmm1 = rax[1]
int32_t zmm2 = rax[2]
var_18 = *rax
int32_t var_14 = zmm1
int32_t var_10 = zmm2
char const* const rsi

if (cond:0)
    rsi = "bad__repx__name"
else
    rsi = *(*(rdx_1 + 8) + zx.q(*(rdx_1 + 0x10) - 1) * 0x10)

int64_t* rdi = arg1[3]
int64_t* rbx_1 = arg1[1]
sub_1427e39a0(rdi, &var_18)
int64_t rax_2 = *rdi
char arg_8 = 0
(*rax_2)(rdi, &arg_8, 1)
(*(*rbx_1 + 0x10))(rbx_1, rsi, rdi[4])
rdi[3] = 0
return 0
