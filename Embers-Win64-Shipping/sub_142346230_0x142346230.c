// 函数: sub_142346230
// 地址: 0x142346230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_141ff4780(&arg_8, arg2, arg7, 0xd6)
sub_1422ab420(&arg1[2], arg2, zx.q(arg8))

if ((arg2[5].b & 1) != 0)
    arg1[0x2b].b = arg8
    arg1[0x34].b = arg8

sub_1422ab580(&arg1[0x17], arg2, arg8, arg5)
int512_t zmm1_1 = sub_1422b7bd0(arg2, &arg1[0x27], sub_1422d0e90(&arg1[6], arg2, arg8, arg5))

if (arg3 != 0 && (*(arg3 + 0x13f) & 8) != 0)
    sub_1422ab240(&arg1[0x1f], arg2, arg9, zmm1_1)

if ((arg6 & 1) == 0)
    sub_1422ab420(&arg1[4], arg2, zx.q(arg9))

int64_t rax = sx.q(arg1[1].d)

if (rax.d s> 0)
    int64_t rcx_7 = 0
    int32_t* rax_2 = *arg1 + 0x20
    
    do
        if (*rax_2 s> 0)
            sub_1422b78a0(arg2, &arg1[0x38], zmm1_1)
            break
        
        rcx_7 += 1
        rax_2 = &rax_2[0x3a]
    while (rcx_7 s< rax)

int64_t* result = sub_141e39390(arg2, &arg1[0x60], zmm1_1)
sub_141e43d90(&arg1[0x60], &arg1[0x27])

if ((arg2[5].b & 1) != 0 && data_143a2d2a0 == 1)
    return sub_141e45680(&arg1[0x60], arg3, arg4)

return result
