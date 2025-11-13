// 函数: sub_141a6aa80
// 地址: 0x141a6aa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_40
sub_141a28990(&var_40, arg3)
char var_58
sub_141a284c0(&var_58, &var_40, arg1)
int128_t* i = arg1[1].q

for (void* rdi_1 = i + sx.q(*(arg1 + 0x18)) * 0x14; i != rdi_1; i += 0x14)
    int64_t* rax_1
    float zmm3_1
    rax_1, zmm3_1 = sub_141a284c0(&var_40, &var_58, i)
    var_58.o = *rax_1
    int64_t var_48_1 = rax_1[2]
    
    if (i[1].d s> *(i + 0xc))
        uint128_t var_28[0x2]
        uint128_t* rax_3 = sub_141a6aba0(i + 0xc, &var_28, &var_58, zmm3_1)
        var_58.o = *rax_3
        int64_t var_48_2 = rax_3[1].q

char rax_4 = var_58
char arg_8
uint32_t arg_c

if (rax_4 != 2)
    arg_8 = 1
    
    if (rax_4 != 1)
        arg_8 = 0
    
    arg_c = (var_58.q u>> 0x20).d
else
    arg_8 = rax_4
    arg_c = 0

int64_t rcx_5 = arg_8.q
char var_4c

if (var_4c != 2)
    arg_8 = 1
    
    if (var_4c != 1)
        arg_8 = 0
    
    arg_c = (var_4c.q u>> 0x20).d
else
    arg_8 = var_4c
    arg_c = 0

arg2[1] = arg_8.q
*arg2 = rcx_5
return arg2
