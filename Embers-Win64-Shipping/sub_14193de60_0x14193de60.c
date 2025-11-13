// 函数: sub_14193de60
// 地址: 0x14193de60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0xffffffff
data_143effdd8(arg1, 0x8741, &arg_18)
int32_t r10 = arg_18

if (r10 s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rdx = arg2[1].d

if (r10 + 4 s> rdx)
    arg2[1].d = r10 + 4
    
    if (r10 + 4 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
        r10 = arg_18
else if (r10 + 4 s< rdx && r10 + 4 != rdx)
    arg2[1].d = r10 + 4
    sub_1405dac10(arg2)
    r10 = arg_18

int64_t var_18 = *arg2 + 4
data_143f004d0(zx.q(arg1), zx.q(r10), &arg_18)
int64_t rax_3
rax_3.b = 1
return rax_3
