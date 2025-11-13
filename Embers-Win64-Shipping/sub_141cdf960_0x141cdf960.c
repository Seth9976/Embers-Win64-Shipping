// 函数: sub_141cdf960
// 地址: 0x141cdf960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r9_1 = &arg1[7]
    void* rdx = *(r9_1 + 8)
    
    if (rdx != 0)
        r9_1 = rdx
    
    i = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_4 = *arg1
        
        do
            int64_t rdx_1 = sx.q(i) * 3
            
            if (*(r8_4 + (rdx_1 << 3)) == arg2)
                goto label_141cdf9d4
            
            i = *(r8_4 + (rdx_1 << 3) + 0x10)
        while (i != 0xffffffff)

i = -1
label_141cdf9d4:
i.b = i != 0xffffffff
return i
