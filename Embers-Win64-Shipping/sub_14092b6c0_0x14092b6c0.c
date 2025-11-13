// 函数: sub_14092b6c0
// 地址: 0x14092b6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e20658
arg1[1] = 0
arg1[2] = 0
sub_140596d10(&arg1[3], arg3)
arg1[5].d = 1
void** const var_68 = &data_142e20618
uint64_t r13 = 0
arg1[6] = 0
arg1[7] = 0
int32_t rdi = 0
uint64_t var_60 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x28)
int32_t rsi_1
int64_t r15_1

if (&var_60 != arg4)
    rsi_1 = arg4[1].d
    r15_1 = *arg4
    var_58.d = rsi_1

uint64_t var_50
int64_t var_48
uint64_t r15_2

if (&var_60 == arg4 || rsi_1 == 0)
    r15_2 = var_60
else
    sub_1405a4c70(&var_60, rsi_1, 0)
    r15_2 = var_60
    memcpy(r15_2, r15_1, rsi_1 * 2)
    rdi = var_48:4.d
    r13 = var_50

if (&var_50 != arg3)
    int32_t rsi_2 = arg3[1].d
    int64_t r14_1 = *arg3
    var_48.d = rsi_2
    
    if (rsi_2 != 0 || rdi != 0)
        sub_1405a4c70(&var_50, rsi_2, rdi)
        r13 = var_50
        memcpy(r13, r14_1, rsi_2 * 2)
        rdi = var_48:4.d
        r15_2 = var_60

int64_t rsi_3 = sx.q(arg1[7].d)
int32_t rax = (rsi_3 + 1).d
arg1[7].d = rax

if (rax s> *(arg1 + 0x3c))
    sub_1407c3b60(&arg1[6])

void*** rcx_7 = &arg1[6][rsi_3 * 7]
*rcx_7 = &data_142e20618
int32_t rax_1 = var_58.d
rcx_7[1] = r15_2
rcx_7[2].d = rax_1
*(rcx_7 + 0x14) = var_58:4.d
rcx_7[3] = r13
rcx_7[4].d = var_48.d
*(rcx_7 + 0x24) = rdi
int64_t var_40
rcx_7[5] = var_40
int64_t var_38
rcx_7[6].d = var_38.d
*(rcx_7 + 0x34) = var_38:4.d
return arg1
