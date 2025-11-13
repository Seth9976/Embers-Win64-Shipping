// 函数: sub_1419032a0
// 地址: 0x1419032a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2

if (data_143f0f161 == 0 || *(arg1 + 8) != 0)
    return 

if (arg2 == 0)
    void* rbx_1 = *(*(arg1 + 0x10) + 0x240)
    
    if (*(rbx_1 + 0x78) != arg2)
        sub_1418c86c0(rbx_1, arg2.d, 0)
    
    rsi = *(rbx_1 + 0x70)

void* rcx_1 = *(arg1 + 0x18)
*(rcx_1 + 0x38) = modu.dp.d(0:(*(rcx_1 + 0x38) + 1), *(rcx_1 + 0x40))
void* r8_1 = *(arg1 + 0x18)
int32_t rbx_3 = *(r8_1 + 0x38) * 2
data_143efba80(*(rsi + 0x40), 1, *(r8_1 + 0x10), zx.q(rbx_3))
void* r9_2 = *(arg1 + 0x18)
*(r9_2 + 0x10)
int64_t var_18_1 = *(*(r9_2 + 0x58) + 0x18)
sub_1418badf0(rsi, zx.q(rbx_3), 1)
int64_t rdx_3 = sx.q(rbx_3) * 2
*(*(*(arg1 + 0x18) + 0x48) + (rdx_3 << 3)) = rsi
*(*(*(arg1 + 0x18) + 0x48) + (rdx_3 << 3) + 8) = *(rsi + 0x98)
*(arg1 + 8) = 1
