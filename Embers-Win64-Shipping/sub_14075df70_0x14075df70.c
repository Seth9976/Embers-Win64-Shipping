// 函数: sub_14075df70
// 地址: 0x14075df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0x2c8))

if (rax.d == 2)
    uint64_t arg_8 = **arg3
    sub_141a467f0(arg1 + 0x48, arg2, &arg_8)
    sub_141a467f0(arg1 + 0xe8, arg2, &arg_8:4)
    int32_t rax_2 = arg4[1].d + 8
    arg4[1].d = rax_2
    
    if (rax_2 s> *(arg4 + 0xc))
        sub_1405daba0(arg4)
    
    uint64_t* rax_3 = *arg4
    *rax_3 = arg_8
    return rax_3

uint64_t var_18
int32_t var_10

if (rax.d != 3)
    if (rax.d == 4)
        var_18.o = **arg3
        sub_141a467f0(arg1 + 0x48, arg2, &var_18)
        sub_141a467f0(arg1 + 0xe8, arg2, &var_18:4)
        sub_141a467f0(arg1 + 0x188, arg2, &var_10)
        int32_t var_c
        sub_141a467f0(arg1 + 0x228, arg2, &var_c)
        int32_t rax_9 = arg4[1].d + 0x10
        arg4[1].d = rax_9
        
        if (rax_9 s> *(arg4 + 0xc))
            sub_1405daba0(arg4)
        
        rax = *arg4
        *rax = var_18.o
    
    return rax

int64_t* rax_4 = *arg3
var_18 = *rax_4
var_10 = rax_4[1].d
sub_141a467f0(arg1 + 0x48, arg2, &var_18)
sub_141a467f0(arg1 + 0xe8, arg2, &var_18:4)
sub_141a467f0(arg1 + 0x188, arg2, &var_10)
int32_t rax_6 = arg4[1].d + 0xc
arg4[1].d = rax_6

if (rax_6 s> *(arg4 + 0xc))
    sub_1405daba0(arg4)

uint64_t* rcx_7 = *arg4
*rcx_7 = var_18
int32_t rax_7 = var_10
rcx_7[1].d = rax_7
return rax_7
