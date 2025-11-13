// 函数: sub_140cba1c0
// 地址: 0x140cba1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = arg2
int64_t arg_20 = 0
int64_t arg_10 = 0
int64_t var_60 = 0
int64_t var_58 = 0
int64_t var_50
sub_140be09b0(&var_50, 2, &var_68)
int64_t rax = var_50
int64_t var_48
int64_t var_40

if (rax != var_68 || var_48 != var_60 || var_40 != var_58)
    *arg1 = rax
else
    int128_t* rax_1
    
    if (arg3 != 0)
        void var_38
        rax_1 = sub_140be09b0(&var_38, 0x10002, &var_68)
        var_50.o = *rax_1
        rax = var_50
    
    if (arg3 != 0 && (rax != var_68 || var_48 != var_60 || rax_1[1].q != var_58))
        *arg1 = rax
    else
        *arg1 = 0

return arg1
