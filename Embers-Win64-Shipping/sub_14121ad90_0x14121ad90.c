// 函数: sub_14121ad90
// 地址: 0x14121ad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = arg3 & 0xfffffff0

do
    int64_t rcx = *(arg1 + ((zx.q(rbx_1) & 7) << 3) + 0x328)
    
    if (rcx != 0)
        sub_14121ad90(rcx, 1)
    
    if ((rbx_1.b & 7) u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
while (((rbx_1 u>> 3).b & 1) == 0)

int64_t rcx_1 = *(arg1 + 0x300)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
