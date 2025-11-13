// 函数: sub_142c7abe0
// 地址: 0x142c7abe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1
int32_t rcx

if ((*(arg1[0x87] + 0x80) & 1) == 0 || *(arg1 + 0x70c) != 0)
label_142c7ac34:
    rcx = sub_142c8f150(&arg1[0xd3], 0, arg3)
    int32_t rax_2
    rax_2.b = arg1[0xe1].d == 0
    *arg2 = rax_2.b
    rax_1 = rcx
else
    rax_1, arg3 = sub_142c5b310(arg1, 0, arg1 + 0x70c, arg3)
    rcx = rax_1
    
    if (rax_1 == 0 && *(arg1 + 0x70c) != rax_1.b)
        goto label_142c7ac34

if (rcx == 0 && *arg2 != rcx.b)
    return rcx

return rax_1
