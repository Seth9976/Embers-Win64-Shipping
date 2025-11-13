// 函数: sub_142b739e0
// 地址: 0x142b739e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[6].d
int64_t i

if (arg2 s< rdi)
    i.b = 1
else
    uint64_t rdi_1 = zx.q(rdi s>> 4)
    int32_t rsi_2 = (arg2 + 0x200) & 0xfffffe00
    int32_t rbp_2 = rsi_2 s>> 4
    
    if (rbp_2 s<= arg1[1].d)
        goto label_142b73a56
    
    i = sub_142a7dd00(0x44000)
    
    if (i != 0)
        memcpy(i, *arg1, (rdi_1 << 2).d)
        sub_142a7dcd0(*arg1)
        *arg1 = i
        arg1[1].d = 0x11000
    label_142b73a56:
        i = sx.q(rdi_1.d)
        
        do
            *(arg1 + i + 0x40) = 0
            *(*arg1 + (i << 2)) = arg1[5].d
            i += 1
        while (i s< sx.q(rbp_2))
        
        arg1[6].d = rsi_2
        i.b = 1

return i
