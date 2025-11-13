// 函数: sub_141f814e0
// 地址: 0x141f814e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x78)
int32_t r9 = 0

if (result s> 0)
    int64_t r10_1 = 0
    
    do
        int64_t rdx_1 = *(arg1 + 0x70)
        char* r8_1 = r10_1 * 0x1c
        float zmm2 = *(r8_1 + rdx_1 + 0xc)
        int32_t zmm0 = *(r8_1 + rdx_1 + 0x14)
        
        if (r10_1 != 0)
            char rax = r8_1[rdx_1]
            
            if (r9 s< result - 1)
                int64_t r11_1 = r10_1 * 0x1c
                
                if (rax != 2 || r8_1[rdx_1 + 1] != 0)
                    char rcx_2 = *(r11_1 + rdx_1 - 0x1c)
                    
                    if (rcx_2 == 1 || rax == 1)
                        if (rcx_2 != 2)
                            zmm2 = (zx.o(0)).d
                        
                        zmm0 = (zx.o(0)).d
                else
                    zmm0 = *(r8_1 + rdx_1 + 8)
                    int64_t rcx_1 = (r10_1 + 1) * 0x1c
                    zmm2 = (*(rcx_1 + rdx_1 + 8) f- zmm0 f+ zmm0 f- *(r11_1 + rdx_1 - 0x14))
                        f* (1f - arg2)
                        / _mm_max_ss(*(rcx_1 + rdx_1 + 4) f- *(r11_1 + rdx_1 - 0x18), 0x38d1b717)
                    zmm0 = zmm2
            else if (rax == 2 && r8_1[rdx_1 + 1] == 0)
                zmm2 = (zx.o(0)).d
        else if (r9 s< result - 1 && r8_1[rdx_1 + 1] == r10_1.b)
            zmm0 = (zx.o(0)).d
        
        *(r8_1 + rdx_1 + 0xc) = zmm2
        r9 += 1
        *(r8_1 + rdx_1 + 0x14) = zmm0
        r10_1 += 1
        result = *(arg1 + 0x78)
    while (r9 s< result)

return result
