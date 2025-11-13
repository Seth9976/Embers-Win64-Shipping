// 函数: sub_140758d90
// 地址: 0x140758d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = *arg1
int32_t* rbx = rbp
void* rsi_2 = &rbp[sx.q(arg1[1].d) * 4]

if (rbp != rsi_2)
    do
        if (*rbx != *arg2 || rbx[1] != arg2[1])
            if (sub_140d3e110(rbx) == 0 && sub_140d3e110(arg2) == 0)
                goto label_140758dea
        else
        label_140758dea:
            
            if (*(rbx + 8) == *(arg2 + 8))
                return zx.q(((rbx - rbp) s>> 4).d)
        
        rbx = &rbx[4]
    while (rbx != rsi_2)

return 0xffffffff
