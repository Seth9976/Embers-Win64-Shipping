// 函数: sub_141e71370
// 地址: 0x141e71370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
*arg1 = &data_143250c40
arg1[2] = 0
arg1[3] = 0
void* i = *arg2

for (void* rbp_2 = (sx.q(arg2[1].d) << 4) + i; i != rbp_2; i += 0x10)
    int64_t rdi_1 = sx.q(arg1[3].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg1[3].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x1c))
        sub_140dbc660(&arg1[2])
    
    sub_141e70260(&arg1[2][rdi_1 * 0x12], *i, *(i + 4), *(i + 8))

sub_141e6fb50(arg1[2], arg1[3].d, arg3)
return arg1
