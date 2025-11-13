// 函数: sub_141e46d90
// 地址: 0x141e46d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
*(arg1 + 0x2c4)

if (*(arg1 + 0x298) != *(arg1 + 0x2c4))
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x2c8
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x2d8)) - 1) & sx.q(rax_3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x290)
        
        do
            int64_t rdx_3 = sx.q(i) * 3
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                if (i == 0xffffffff)
                    break
                
                i.b = 0
                return i
            
            i = *(r8_2 + (rdx_3 << 3) + 0x10)
        while (i != 0xffffffff)

sub_141e49f80(arg1, arg2, &data_143f398d8)
int64_t rax_5
rax_5.b = 1
return rax_5
