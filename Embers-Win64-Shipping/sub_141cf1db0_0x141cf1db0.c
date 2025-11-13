// 函数: sub_141cf1db0
// 地址: 0x141cf1db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg2
char* rdi = arg1
int32_t var_18
sub_141cfc1a0(arg1, &var_18)
int64_t* var_10
sub_141cf0c60(&arg_8, var_10)
var_10[9].d = 0xffffffff
void* rcx_1

if (var_10[1].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *var_10
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + var_10

sub_141d00bc0(rdi, &arg_8, sub_1405de2b0(rcx_1), var_10, var_18, nullptr)
void* rdx_3 = *rdi

if ((rdx_3.b & 1) != 0)
    rdx_3 = &rdi[rdx_3 s>> 1]

return sx.q(arg_8.d) * 0x50 + 0x10 + rdx_3
