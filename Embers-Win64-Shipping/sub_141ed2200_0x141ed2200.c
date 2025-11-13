// 函数: sub_141ed2200
// 地址: 0x141ed2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = nullptr
*arg1 = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
sub_140d3a3a0(&arg1[2], nullptr)
*arg1 = arg3
void* rbx_1 = nullptr

if ((arg2[0x11].b & 1) != 0 && sub_1405be820(arg2) != 0)
    if ((arg2[0x11].b & 2) != 0)
        sub_141efe1c0(arg2, *arg1)
    
    void* rax_2 = sub_1405be820(arg2)
    void* var_28_1 = rax_2
    char var_20_1 = 1
    char var_1f
    char var_1f_1 = (var_1f & 0xfd) | 1
    rbx_1 = rax_2
    sub_141ee0b60(arg2)
    arg2[0x15] = 0

sub_140d3a3a0(&arg1[2], rbx_1)

if (sub_140d3e110(&arg1[2]) != 0)
    rbp = arg2

sub_140d3a3a0(&arg1[1], rbp)
return arg1
