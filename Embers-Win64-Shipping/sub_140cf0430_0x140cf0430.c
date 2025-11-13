// 函数: sub_140cf0430
// 地址: 0x140cf0430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *arg2
sub_140cd3f40(arg1, &var_18, arg3, arg4, arg5, arg6 | 0x8000000000000)
char arg_48
char rdx_1 = arg_48
*arg1 = &data_142ea8530
arg1[0xf].d = 0x1010000

if (rdx_1 == 0)
    arg1[8] = (arg1[8] & 0xffffffffbffffdff) | 0x1000000000
else
    arg1[8] |= 0x1040000200

uint32_t rcx_1 = 1
*(arg1 + 0x3c) = arg8

if (arg7 != 0)
    rcx_1 = arg7

arg1[0xf].b = arg8.b
arg_48.d = rcx_1
*(arg1 + 0x79) = 0

if (rdx_1 != 0)
    *(arg1 + 0x7a) = 0xff01
    return arg1

if (arg8 != 0)
    uint32_t rax_7
    rax_7.b = 0
    
    do
        char rdx_2 = (&arg_48)[zx.q(rax_7.b)]
        *(arg1 + 0x7a) = rdx_2
        
        if (rdx_2 != 0)
            break
        
        rax_7.b += 1
        rax_7 = zx.d(rax_7.b)
        *(arg1 + 0x79) = rax_7.b
    while (rax_7 u< arg8)

*(arg1 + 0x7b) = *(arg1 + 0x7a)
return arg1
