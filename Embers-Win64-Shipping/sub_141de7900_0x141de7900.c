// 函数: sub_141de7900
// 地址: 0x141de7900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141baa510(arg1)
int64_t* i = *rax
int64_t result = sx.q(rax[1].d)

for (void* rdi = &i[result]; i != rdi; i = &i[1])
    void* r11_1 = *i
    int64_t r9_1 = 0
    int64_t* r8_1 = *(r11_1 + 0x100)
    result = &r8_1[sx.q(*(r11_1 + 0x108))]
    uint64_t r10_2 = sx.q(*(r11_1 + 0x108)) << 3 u>> 3
    
    if (r8_1 u> result)
        r10_2 = 0
    
    if (r10_2 != 0)
        do
            result = *r8_1
            
            if (result != 0)
                int32_t rax_2 = *(result + 0xc)
                
                if (rax_2 s>= data_143e1d9b4)
                    result = 0
                else
                    uint32_t rdx_1 = zx.d(rax_2.w)
                    
                    if (rax_2 s< 0)
                        rax_2 += 0xffff
                        rdx_1 -= 0x10000
                    
                    result = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
                
                *(result + 8) |= 0x20000000
            
            r8_1 = &r8_1[1]
            r9_1 += 1
        while (r9_1 != r10_2)
    
    *(r11_1 + 0x108) = 0
    
    if (*(r11_1 + 0x10c) != 0)
        result = sub_1405c5570(r11_1 + 0x100, 0)

return result
