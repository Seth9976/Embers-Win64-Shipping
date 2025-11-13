// 函数: sub_1427de980
// 地址: 0x1427de980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18
int64_t entry_r8
int128_t* rax = (*(entry_r8 + 0x18))(&var_18, arg1[2])
void* rdx_1 = *arg1
bool cond:0 = *(rdx_1 + 0x10) == 0
var_18 = *rax
char const* const rbp

if (cond:0)
    rbp = "bad__repx__name"
else
    rbp = *(*(rdx_1 + 8) + zx.q(*(rdx_1 + 0x10) - 1) * 0x10)

int64_t* rsi = arg1[3]
int64_t* rdi_1 = arg1[1]
int64_t* rax_2 = sub_1427e3ab0(rsi)
int64_t r9 = *rax_2
(*r9)(rax_2, &data_1434cf410, 1, r9)
int64_t* rax_3 = sub_1427e3ab0(rax_2)
int64_t r9_1 = *rax_3
(*r9_1)(rax_3, &data_1434cf410, 1, r9_1)
int64_t* rax_4 = sub_1427e3ab0(rax_3)
int64_t r9_2 = *rax_4
(*r9_2)(rax_4, &data_1434cf410, 1, r9_2)
sub_1427e3ab0(rax_4)
int64_t rax_5 = *rsi
char arg_8 = 0
(*rax_5)(rsi, &arg_8, 1)
(*(*rdi_1 + 0x10))(rdi_1, rbp, rsi[4])
rsi[3] = 0
return 0
