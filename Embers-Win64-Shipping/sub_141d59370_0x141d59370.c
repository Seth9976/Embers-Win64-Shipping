// 函数: sub_141d59370
// 地址: 0x141d59370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int32_t i

if (*(arg1 + 0x10) != *(arg1 + 0x3c))
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x40
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    i = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 8)
        
        do
            int64_t rdx_3 = sx.q(i) * 5
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                goto label_141d593e4
            
            i = *(r8_2 + (rdx_3 << 3) + 0x20)
        while (i != 0xffffffff)

i = -1
label_141d593e4:
i.b = i != 0xffffffff
return i
