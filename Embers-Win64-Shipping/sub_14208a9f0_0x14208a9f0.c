// 函数: sub_14208a9f0
// 地址: 0x14208a9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg2 + 0x220)
int32_t i = 0

if (*(result + 0x38) s> 0)
    int64_t* r11_1 = nullptr
    
    do
        int32_t j = 0
        void* r9_1 = *(r11_1 + *(result + 0x30))
        *(r9_1 + 0x4c) |= 2
        
        if (*(r9_1 + 0x38) s> 0)
            int64_t rax_1 = 0
            
            do
                rax_1 += 8
                j += 1
                void* rdx = *(rax_1 + *(r9_1 + 0x30) - 8)
                *(rdx + 0x68) |= 0x40
            while (j s< *(r9_1 + 0x38))
        
        result = *(arg2 + 0x220)
        i += 1
        r11_1 = &r11_1[1]
    while (i s< *(result + 0x38))

return result
