// 函数: sub_1428c1d70
// 地址: 0x1428c1d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int64_t r11_1 = data_143fecb88
    int64_t r9_1 = 0
    int64_t* r10_1 = data_143fecb80
    
    if (r11_1 != 0)
        do
            char* rax_1 = *r10_1
            void* r8_2 = arg1 - rax_1
            uint32_t i
            uint32_t rdx
            
            do
                rdx = zx.d(*rax_1)
                i = zx.d(*(rax_1 + r8_2))
                
                if (rdx != i)
                    break
                
                rax_1 = &rax_1[1]
            while (i != 0)
            
            if (rdx - i == 0)
                *arg2 = r9_1
                return 1
            
            r9_1 += 1
            r10_1 = &r10_1[3]
        while (r9_1 u< r11_1)

return 0
