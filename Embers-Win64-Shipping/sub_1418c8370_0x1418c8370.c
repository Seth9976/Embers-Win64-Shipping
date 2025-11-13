// 函数: sub_1418c8370
// 地址: 0x1418c8370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18

if (data_143efaf6c == 0)
    if (arg2 == 0)
        return sub_1418ef260(*(arg1 + 0x68), *(arg1 + 0x70), 0, 0)
    
    void* rdx_3 = *(arg1 + 0x70)
    int64_t* rcx_4 = *(arg1 + 0x68)
    arg_18 = *(arg2 + 0x18)
    return sub_1418ef260(rcx_4, rdx_3, 1, &arg_18)

int64_t* rcx
void* rdx_1
int32_t r8
int64_t* r9

if (arg2 == 0)
    r9 = &arg_18
    rdx_1 = *(arg1 + 0x70)
    r8 = 1
    arg_18 = *(*(arg1 + 0x90) + 0x18)
    rcx = *(arg1 + 0x68)
else
    int64_t var_18
    r9 = &var_18
    var_18 = *(arg2 + 0x18)
    r8 = 2
    int64_t var_10_1 = *(*(arg1 + 0x90) + 0x18)
    rdx_1 = *(arg1 + 0x70)
    rcx = *(arg1 + 0x68)

sub_1418ef260(rcx, rdx_1, r8, r9)
int64_t rsi = sx.q(*(arg1 + 0xa0))
int32_t rax_3 = (rsi + 1).d
*(arg1 + 0xa0) = rax_3

if (rax_3 s> *(arg1 + 0xa4))
    sub_1405a4d70(arg1 + 0x98)

int64_t result = *(arg1 + 0x90)
*(*(arg1 + 0x98) + (rsi << 3)) = result
*(arg1 + 0x90) = 0
return result
