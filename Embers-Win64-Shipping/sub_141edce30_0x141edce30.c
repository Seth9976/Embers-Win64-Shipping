// 函数: sub_141edce30
// 地址: 0x141edce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg3 + 0x288)
char var_30
int64_t var_28
int64_t var_18

if (sub_140d3c6e0(arg1 + 0x140) == 0)
    bool cond:0_1 = (*(rbx + 0x387) & 0x20) != 0
    int32_t var_10_1 = *(arg2 + 0xfc)
    var_18 = *(arg2 + 0xf4)
    int32_t rax_5 = arg4[1].d
    var_28 = *arg4
    int32_t var_20_1 = rax_5
    
    if (cond:0_1 || (*(rbx + 0x1f2) & 1) != 0)
        rax_5.b = 1
    else
        rax_5 = 0
    
    var_30 = rax_5.b
    sub_141f4a260(rbx[0x16], &var_28, &var_18, 0, 0, var_30)
else
    bool cond:1_1 = (*(rbx + 0x387) & 0x20) != 0
    int32_t rax_1 = *(arg1 + 0x164)
    var_28 = *(arg1 + 0x15c)
    int32_t var_20 = rax_1
    int32_t rax_2 = *(arg1 + 0x158)
    var_18 = *(arg1 + 0x150)
    int32_t var_10 = rax_2
    
    if (cond:1_1 || (*(rbx + 0x1f2) & 1) != 0)
        rax_2.b = 1
    else
        rax_2 = 0
    
    var_30 = rax_2.b
    sub_141f48a10(rbx[0x16], &var_18, &var_28, 0, 0, var_30)
*(rbx + 0xc4) = *(arg2 + 0x54)
*(rbx + 0xcc) = *(arg2 + 0x5c)
int64_t r9
r9.b = 1
(*(*rbx + 0x6f0))(rbx, sub_140d3c6e0(arg2 + 0x128), *(arg2 + 0x130), r9, 0, var_30)
*(rbx + 0x2f0) = *(arg2 + 0x60)
*(rbx + 0x300) = *(arg2 + 0x70)
*(rbx + 0x310) = *(arg2 + 0x80)
*(rbx + 0x320) = *(arg2 + 0x90)
*(rbx + 0x330) = *(arg2 + 0xa0)
*(rbx + 0x340) = *(arg2 + 0xb0)
*(rbx + 0x350) = *(arg2 + 0xc0)
*(rbx + 0x360) = *(arg2 + 0xd0)
*(rbx + 0x370) = *(arg2 + 0xe0)
rbx[0x70].d = *(arg2 + 0xf0)
uint128_t zmm0_1
zmm0_1.d = (*(arg2 + 0x20)).d f+ *(arg1 + 0x20)
*(arg1 + 0x20) = zmm0_1.d
*(arg3 + 0x338) = *(arg2 + 0x2c)
int32_t result = *(arg2 + 0x28)
*(arg3 + 0x334) = result
return result
