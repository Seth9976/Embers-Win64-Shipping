// 函数: sub_1418c3a90
// 地址: 0x1418c3a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f0f214 += 1
void* rbx = *(arg1 + 0x240)

if (*(rbx + 0x78) != 0)
    sub_1418c86c0(rbx, 0, 0)

int64_t* rdx = *(rbx + 0x70)
int64_t rbx_1 = rdx[8]
sub_1418e4ee0(*(arg1 + 0x450), rdx)
data_143efb9b0(rbx_1, *(arg2 + 0x70), zx.q(*(arg2 + 0x78)), zx.q(*(arg2 + 0xa8)))
void* result = data_143efb9d8(rbx_1, *(arg3 + 0x70), zx.q(*(arg3 + 0x78)) + sx.q(arg4) * 0x14, 
    zx.q(arg5), 0x14)

if (*(arg1 + 0x138) == 0 && *(arg1 + 0x470) != 0)
    result = *(arg1 + 0x488)
    
    if (result != 0)
        *(result + 0x10) += 1
        result = *(arg1 + 0x488)
        *(result + 0x14) += 1

return result
