// 函数: sub_14076de20
// 地址: 0x14076de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t i

if (*(arg1 + 0x28) != *(arg1 + 0x54))
    void* r8_1 = *(arg1 + 0x60)
    void* r10_1 = arg1 + 0x58
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    i = *(r10_1 + (((sx.q(*(arg1 + 0x68)) - 1) & r11) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x20)
        
        do
            int64_t rdx = sx.q(i) * 3
            
            if (*(r8_2 + (rdx << 2)) == r11.d)
                goto label_14076de70
            
            i = *(r8_2 + (rdx << 2) + 4)
        while (i != 0xffffffff)

i = -1
label_14076de70:
i.b = i != 0xffffffff
return i
