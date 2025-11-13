// 函数: sub_141bea700
// 地址: 0x141bea700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
sub_140f16780(arg1[0xec], &arg1[0x27])
int32_t rcx_1
rcx_1.b = sub_140b5b8a0(*(arg1 + 0x12c), 0) == 0
int64_t var_38
char rax_6
char* rdx_3
int32_t rsi
int32_t rdi

if ((arg1[0x26].d != 0 | rcx_1.b) == 0)
label_141bea7b0:
    rax_6 = arg1[0x24].b
    char var_40
    rdx_3 = &var_40
    var_40 = rax_6
    char var_3f_1 = 1
    rdi = 0
    var_38 = 0
    int32_t var_30_1 = 0
    rsi = 2
else
    void* rax_1 = sub_140d3c6e0(arg1 + 0x124)
    
    if (rax_1 == 0)
        goto label_141bea7b0
    
    if (sub_140d1fd20(rax_1, *(arg1 + 0x12c)) == 0)
        goto label_141bea7b0
    
    int64_t arg_8 = *(arg1 + 0x12c)
    void var_28
    char* rax_5 = sub_141b70580(&var_28, sub_140d3c6e0(arg1 + 0x124), &arg_8)
    rdx_3 = rax_5
    rdi = 1
    rsi = 0
    rax_6 = *rax_5

char var_58 = rax_6
char rax_7 = rdx_3[1]
int64_t var_50 = 0
int32_t var_48 = 0
char var_57 = rax_7
sub_1407473e0(&var_50, &rdx_3[8])
uint64_t result = sub_140f15ad0(arg1[0xec], &var_58)

if (rsi != 0)
    result = sub_140745b20(&var_38)

if (rdi == 0)
    return result

void var_20
return sub_140745b20(&var_20)
