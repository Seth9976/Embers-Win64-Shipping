// 函数: sub_142b11fa0
// 地址: 0x142b11fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x1b].b & 1) != 0)
    sub_142a4ab40(arg2)
    return arg2

int16_t arg_8 = 0x2f
void* rax_2 = sub_142a48d70((*(*arg1 + 0x40))(), &arg_8, 0, 1)
int16_t rcx_1 = arg1[0x1b].w
int32_t r9_1

if (rcx_1 s< 0)
    r9_1 = *(arg1 + 0xdc)
else
    r9_1 = sx.d(rcx_1) s>> 5

sub_142a48d00(rax_2, &arg1[0x1a], 0, r9_1)
return arg2
