// 函数: sub_140623510
// 地址: 0x140623510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 8)
int32_t rbp = var_10:4.d
int32_t rsi = var_10.d + 8
var_10.d = rsi

if (rsi s> rbp)
    sub_140594770(&var_18)
    rbp = var_10:4.d
    rsi = var_10.d

int64_t rdi = var_18
sub_1405a7220(rdi, 8, "Unknown", 8, 0x3f)
int64_t* result = &var_18

if (arg2 != &var_18)
    int64_t rcx_3 = *arg2
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    *arg2 = rdi
    arg2[1].d = rsi
    *(arg2 + 0xc) = rbp
else if (rdi != 0)
    result = sub_140a74f90(rdi)

arg2[2].b = 0
return result
