// 函数: sub_141f83430
// 地址: 0x141f83430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)

if (rdx == 0)
    rdx = 0
    
    if ((*(arg1 + 0x30) & 2) == 0)
        sub_14213f9e0(*(arg1 + 0x28))
        rdx = *(arg1 + 0x34)

int64_t* i_4 = *(arg1 + 0x60)
int64_t* i_2 = i_4

if (i_4 != 0)
    void* r9_1 = *(arg1 + 0x28)
    
    if (((*(r9_1 + 0xa4) u>> 1).b & 1) == 0)
        *(*(r9_1 + 0x1340) + (sx.q(rdx) << 2)) = i_4[0x1d].d
        i_2 = *(arg1 + 0x60)

if (i_2 != 0)
    int64_t* i
    
    do
        i = i_2[0x18]
        (**i_2)(arg2, 1)
        i_2 = i
    while (i != 0)

int64_t* i_3 = *(arg1 + 0x58)
*(arg1 + 0x60) = 0

if (i_3 != 0)
    int64_t* i_1
    
    do
        i_1 = i_3[0x18]
        (**i_3)(arg2, 1)
        i_3 = i_1
    while (i_1 != 0)

int64_t* rcx_2 = *(arg1 + 0x68)
*(arg1 + 0x58) = 0

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)
    *(arg1 + 0x68) = 0

int64_t* rcx_4 = *(arg1 + 0x28) + 0x70
void* arg_8 = arg1
sub_1409d7d20(rcx_4, &arg_8)
int64_t* rcx_6 = *(arg1 + 0x28) + 0x1510
arg_8 = arg1
sub_1409d7d20(rcx_6, &arg_8)
void* result
result.b = 1
*(*(*(arg1 + 0x28) + 0x1310) + (sx.q(*(arg1 + 0x34)) << 3)) = 0
*(arg1 + 0x28) = 0
return result
