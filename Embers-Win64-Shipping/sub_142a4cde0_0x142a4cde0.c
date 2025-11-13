// 函数: sub_142a4cde0
// 地址: 0x142a4cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const r9 = &data_143610e10
int32_t r10 = 0
int16_t r9_1

while (true)
    void* r8_1 = *r9
    r10 += 1
    
    if (r8_1 != 0)
        while (true)
            void* rax_1 = arg1
            uint32_t i
            uint32_t rdx_1
            
            do
                rdx_1 = zx.d(*rax_1)
                i = zx.d(*(rax_1 + r8_1 - arg1))
                
                if (rdx_1 != i)
                    break
                
                rax_1 += 1
            while (i != 0)
            
            if (rdx_1 - i == 0)
                r9_1 = ((r9 - &data_143610e10) s>> 3).w
                break
            
            r8_1 = r9[1]
            r9 = &r9[1]
            
            if (r8_1 == 0)
                goto label_142a4ce34
        
        break
    
label_142a4ce34:
    r9 = &r9[1]
    
    if (r10 s>= 2)
        r9_1 = -1
        break

int64_t rax_2 = sx.q(r9_1)

if (rax_2.d s< 0)
    return arg1

return (&data_143612aa0)[rax_2]
