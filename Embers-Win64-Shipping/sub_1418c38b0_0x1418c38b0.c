// 函数: sub_1418c38b0
// 地址: 0x1418c38b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x240)

if (*(rbx + 0x78) != 0)
    sub_1418c86c0(rbx, 0, 0)

void* rdx = *(rbx + 0x70)
int64_t rbx_1 = *(rdx + 0x40)
sub_1418e4e30(*(arg1 + 0x458), rdx)
data_143efb9e0(rbx_1, zx.q(arg2), zx.q(arg3), zx.q(arg4))
void* result = data_143efb0d0

if (*(result + 4) != 0)
    sub_1418c8030(*(arg1 + 0x240), nullptr)
    result = sub_1418c2ee0(*(arg1 + 0x240))

if (*(arg1 + 0x151) != 0)
    result = sub_1418be4c0(arg1)

if (*(arg1 + 0x138) == 0 && *(arg1 + 0x470) != 0)
    result = *(arg1 + 0x488)
    
    if (result != 0)
        *(result + 0x1c) += 1
        result = *(arg1 + 0x488)
        *(result + 0x20) = arg2
        *(result + 0x24) = arg3
        *(result + 0x28) = arg4

return result
