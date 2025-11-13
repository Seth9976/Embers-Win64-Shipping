// 函数: sub_14271e430
// 地址: 0x14271e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

if (*(arg1 + 0xa0) != *(arg1 + 0xcc))
    int64_t rax_1 = sx.q(*(arg2 + 0x2c))
    void* r9_1 = arg1 + 0xd0
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    i = *(r9_1 + (((sx.q(*(arg1 + 0xe0)) - 1) & rax_1) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *(arg1 + 0x98)
        
        do
            int32_t* r8_2 = sx.q(i) * 0x1c
            
            if (*(r8_2 + r9_2) == rax_1.d)
                goto label_14271e48f
            
            i = *(r8_2 + r9_2 + 0x14)
        while (i != 0xffffffff)

i = -1
label_14271e48f:
return sub_142720800(arg1 + 0x98, i) __tailcall
