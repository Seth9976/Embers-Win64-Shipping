// 函数: sub_140a543a0
// 地址: 0x140a543a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143db4980 = 0
uint32_t var_38
uint32_t var_34
uint32_t var_30
uint32_t var_2c
uint32_t arg_8
uint32_t arg_10
uint32_t arg_18
void arg_20
sub_140b734e0(&arg_8, &arg_18, &var_2c, &arg_10, &var_30, &var_34, &var_38, &arg_20)
uint32_t* var_50
var_50.d = arg_8 s% 0x64
uint32_t* var_58
var_58.d = arg_10
sub_1405a6010(&data_143db4980, 0x400, u"%02d/%02d/%02d", zx.q(arg_18))
void* rax_4 = &data_143db497e
bool cond:0_1

do
    cond:0_1 = *(rax_4 + 2) != 0
    rax_4 += 2
while (cond:0_1)
int64_t rdi = -1
*rax_4 = 0x20

do
    rdi += 1
while ((&data_143db4980)[rdi] != 0)

sub_140b734e0(&var_38, &var_34, &var_30, &var_2c, &arg_18, &arg_10, &arg_8, &arg_20)
uint32_t* var_50_1
var_50_1.d = arg_8
uint32_t* var_58_1
var_58_1.d = arg_10
sub_1405a6010(&(&data_143db4980)[sx.q(rdi.d)], 0x400 - rdi.d, u"%02d:%02d:%02d", zx.q(arg_18))
return &data_143db4980
