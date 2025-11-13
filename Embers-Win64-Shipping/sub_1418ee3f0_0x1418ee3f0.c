// 函数: sub_1418ee3f0
// 地址: 0x1418ee3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rbx = *arg2
int32_t rdi = arg2[1].d
*(arg1 + 0x18) = arg3
void** const var_f8
memset(&var_f8, 0, 0x90)
sub_140b4c2a0(&var_f8)
int64_t var_60 = rbx
var_f8 = &data_142ef5568
int32_t var_58 = rdi
int64_t r15 = 0
int64_t var_50 = 0x7fffffffffffffff
int64_t var_68 = 0
sub_140b55290(&var_f8, 1)
var_f8[0x1b](&var_f8, 1)
sub_140fdadf0(&var_f8, arg1 + 0x158, sub_1418d54a0(&var_f8, arg1 + 0x20, arg4))
int32_t rdx_3 = *(arg1 + 0x28)

if (rdx_3 s> *(arg1 + 0x154))
    sub_1405c5510(arg1 + 0x148, rdx_3)

int32_t* i = *(arg1 + 0x20)

for (void* r12 = &i[sx.q(*(arg1 + 0x28)) * 0xa]; i != r12; i = &i[0xa])
    void* rax_4 = sub_1419ce110(*i)
    int64_t rsi_1 = sx.q(*(arg1 + 0x150))
    
    if (rax_4 == 0)
        int32_t rax_6 = (rsi_1 + 1).d
        *(arg1 + 0x150) = rax_6
        
        if (rax_6 s> *(arg1 + 0x154))
            sub_1405daba0(arg1 + 0x148)
        
        *(rsi_1 + *(arg1 + 0x148)) = 0xff
    else
        int32_t rcx_9 = (rsi_1 + 1).d
        *(arg1 + 0x150) = rcx_9
        
        if (rcx_9 s> *(arg1 + 0x154))
            sub_1405daba0(arg1 + 0x148)
        
        *(rsi_1 + *(arg1 + 0x148)) = *(rax_4 + 0x34)

int16_t var_118 = (*(arg1 + 0xbc)).w
char var_48[0x10]
sub_140a54040(&var_48, 0x18, "main_%0.8x_%0.8x", sx.q(*(arg1 + 0x160)) << 2)
int32_t rdi_1 = 0
int32_t rsi_2 = 0
int64_t var_108 = 0
int64_t var_100 = 0

if (var_48[0] != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (var_48[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_108, rbx_2.d + 1)
        rsi_2 = var_100:4.d
        rdi_1 = var_100.d
        r15 = var_108
    
    rdi_1 += rbx_2.d + 1
    var_100.d = rdi_1
    
    if (rdi_1 s> rsi_2)
        sub_140594770(&var_108)
        rsi_2 = var_100:4.d
        rdi_1 = var_100.d
        r15 = var_108
    
    sub_1405a7220(r15, rbx_2.d + 1, &var_48, rbx_2.d + 1, 0x3f)

if (arg1 + 8 != &var_108)
    int64_t rcx_17 = *(arg1 + 8)
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    *(arg1 + 8) = r15
    *(arg1 + 0x10) = rdi_1
    *(arg1 + 0x14) = rsi_2
else if (r15 != 0)
    sub_140a74f90(r15)

void** result = sub_140b4cb40(&var_f8)
__security_check_cookie(rax_1 ^ &var_138)
return result
