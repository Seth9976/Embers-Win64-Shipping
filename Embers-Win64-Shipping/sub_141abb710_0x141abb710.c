// 函数: sub_141abb710
// 地址: 0x141abb710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xd0)

if (r8 == 0)
    return 0

int32_t r11 = 1
void* result_4 = *(arg1 + 0xc8)
void* result = result_4

if (r8 s> 1)
    if (r8 s> 4)
        float* r9_1 = result_4 + 0x90
        uint64_t rax_4 = zx.q(((r8 - 5) u>> 2) + 1)
        void* result_5 = result_4 + 0xc0
        uint64_t i_2 = zx.q(rax_4.d)
        r11 = ((rax_4 << 2) + 1).d
        uint64_t i
        
        do
            void* result_1 = result_5 - 0x80
            bool cond:0_1 = r9_1[-0x10] f<= *(result + 0x10)
            void* result_2 = result_5 - 0x40
            float zmm0 = *r9_1
            r9_1 = &r9_1[0x40]
            
            if (cond:0_1)
                result_1 = result
            
            result = result_5 + 0x40
            
            if (zmm0 f<= *(result_1 + 0x10))
                result_2 = result_1
            
            if (*(result_2 + 0x10) < r9_1[-0x30])
                result_2 = result_5
            
            if (r9_1[-0x20] f<= *(result_2 + 0x10))
                result = result_2
            
            result_5 += 0x100
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r11 s< r8)
        void* result_3 = (sx.q(r11) << 6) + result_4
        uint64_t i_3 = zx.q(r8 - r11)
        float* rax_5 = result_3 + 0x10
        uint64_t i_1
        
        do
            bool cond:2_1 = *(result + 0x10) < *rax_5
            rax_5 = &rax_5[0x10]
            
            if (cond:2_1)
                result = result_3
            
            result_3 += 0x40
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

return result
