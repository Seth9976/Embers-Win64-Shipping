// 函数: sub_140a818c0
// 地址: 0x140a818c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140af2c50(data_143ddb400, u"Internationalization", arg2, arg1, &data_143de5780)
void* rcx_1 = data_143ddb400
int64_t var_18 = 0
int32_t var_10 = 0
sub_140af2c50(rcx_1, u"Internationalization", arg2, &var_18, &data_143de5830)
int64_t rbx_1 = sx.q(var_10)

if (rbx_1.d != 0)
    int32_t rax_1 = arg1[1].d
    int32_t rdx = rax_1 + rbx_1.d
    
    if (rdx s> *(arg1 + 0xc))
        sub_14061cd70(arg1, rdx)
        rax_1 = arg1[1].d
    
    memmove((sx.q(rax_1) << 4) + *arg1, var_18, (rbx_1 << 4).d)
    arg1[1].d += rbx_1.d
    var_10 = 0

sub_140597000(&var_18)
return arg1
