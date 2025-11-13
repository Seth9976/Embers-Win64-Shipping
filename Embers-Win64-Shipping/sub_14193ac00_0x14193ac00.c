// 函数: sub_14193ac00
// 地址: 0x14193ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 != 0)
    sub_140a80f40()

int32_t i_1 = *(arg2 + 0x34)
int64_t var_60 = 0
void var_48
void* var_68 = &var_48
int32_t i_2 = *(arg5 + 0x34)
char var_98 = 0
char var_a0 = 0
char var_a8 = 0
sub_14193e4a0(arg1, arg2, arg3, arg4, 0, 0, 0, *(arg2 + 0x3c), i_1, 1, 1, arg2[8].d)

if (data_143f01c92 != 0)
    sub_140a80f40()

int32_t i = i_1

if (i_2 u<= i_1)
    i = i_2

int32_t r14 = i_2 - i
int32_t rsi = i_1 - i

if (data_143efbce2 == 0)
    var_a8.d = rsi
    sub_1419330b0(arg2, arg5, i, r14, 0)
else if (i != 0)
    int32_t rbx_1 = rsi
    
    do
        char rcx_1 = rbx_1.b
        uint32_t rax_2 = arg2[0xc].d u>> rcx_1
        uint32_t rdx_1 = 1
        
        if (rax_2 u>= 1)
            rdx_1 = rax_2
        
        uint32_t rax_4 = *(arg2 + 0x64) u>> rcx_1
        uint32_t rcx_2 = 1
        
        if (rax_4 u>= 1)
            rcx_2 = rax_4
        
        if (data_143efbce7 != 0)
            if (rdx_1 u< 4)
                break
            
            if (rcx_2 u< 4)
                break
        
        var_60.d = rcx_2
        var_68.d = rdx_1
        char var_90
        var_90.d = *(arg2 + 0x84)
        var_98.d = arg2[0x10].d
        var_a0.d = 0
        var_a8.d = 0
        data_143f00340(zx.q(*(arg5 + 0x80)), zx.q(*(arg5 + 0x84)), zx.q(r14 - rsi + rbx_1), 0, 0, 
            0, 0, var_90, rbx_1, 0, 0, 0, var_68, var_60, 1)
        rbx_1 += 1
    while (rbx_1 - rsi u< i)

*arg6 -= 1
return arg6
