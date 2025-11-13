// 函数: sub_14093ff60
// 地址: 0x14093ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0xa0)

if (rdx != 0)
label_14093ff8d:
    
    for (int64_t* i = *(rdx + 0x28); i != &i[sx.q(*(rdx + 0x30)) * 2]; i = &i[2])
        if (*i == arg2)
            return i[1]
else
    sub_1409415f0(arg1)
    rdx = *(arg1 + 0xa0)
    
    if (rdx != 0)
        goto label_14093ff8d

return 0
