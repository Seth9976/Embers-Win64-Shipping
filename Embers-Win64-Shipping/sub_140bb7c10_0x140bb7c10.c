// 函数: sub_140bb7c10
// 地址: 0x140bb7c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x34c) = 0xffffffff
*(arg1 + 0x348) = 0
bool cond:0 = *(arg1 + 0x35c) == 0
*(arg1 + 0x358) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x350, 0)

sub_1405b8890(arg1 + 0x360, 0)
*(arg1 + 0x290) &= 0xffefffff
char arg_8
char* var_10 = &arg_8
arg_8 = 0
void*** (* var_18)() = j_sub_140b99600
void* rax = sub_140a756e0(&var_18, &data_1439a98a0)
sub_140bb5cf0(rax + 0x10, arg1)
sub_1408d8560(rax + 0x60)
return sub_140bb7810(arg1) __tailcall
