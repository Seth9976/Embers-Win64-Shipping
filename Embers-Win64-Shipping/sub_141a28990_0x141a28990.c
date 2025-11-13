// 函数: sub_141a28990
// 地址: 0x141a28990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
char var_38
int64_t var_34
char var_2c
int32_t arg_c

if (rax.b != 2)
    arg_c = 0
    var_2c = 1
    
    if (rax.b != 1)
        var_2c = 0
    
    var_38.q = var_2c.q
    var_34:4.d = (rax u>> 0x20).d.q:4.d
else
    var_38 = rax.b
    var_34 = 0

int64_t rax_4 = arg2[1]
char* rcx

if (rax_4.b != 2)
    arg_c = 0
    var_2c = 1
    
    if (rax_4.b != 1)
        var_2c = 0
    
    int64_t var_20
    rcx = &var_20
    var_20 = var_2c.q
    int32_t var_18_1 = (rax_4 u>> 0x20).d.q:4.d
else
    int64_t var_28_2 = 0
    rcx = &var_2c
    var_2c = rax_4.b

*arg1 = var_38.q
arg1[1].d = var_34:4.d
int32_t rax_9 = *(rcx + 8)
*(arg1 + 0xc) = *rcx
*(arg1 + 0x14) = rax_9
return arg1
