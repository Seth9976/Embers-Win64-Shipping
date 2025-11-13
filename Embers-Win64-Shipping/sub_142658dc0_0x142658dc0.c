// 函数: sub_142658dc0
// 地址: 0x142658dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x90)
void* r11 = &r9[sx.q(*(arg1 + 0x98))]

if (r9 == r11)
    return 0

do
    void* result = *r9
    
    if (result != 0)
        int32_t rax_1 = *(result + 0xc)
        void* const r8_2
        
        if (rax_1 s>= data_143e1d9b4)
            r8_2 = nullptr
        else
            uint32_t rcx = zx.d(rax_1.w)
            
            if (rax_1 s< 0)
                rax_1 += 0xffff
                rcx -= 0x10000
            
            r8_2 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rcx) * 0x18
        
        if (((*(r8_2 + 8) u>> 0x1d).b & 1) == 0 && *(result + 0x260) == arg2)
            return result
    
    r9 = &r9[1]
while (r9 != r11)

return 0
