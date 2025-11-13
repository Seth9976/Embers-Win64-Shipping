// 函数: sub_14285c4f0
// 地址: 0x14285c4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (*(arg1 + 0x80c) != 0xf1)
    int64_t r8_1 = *(arg1 + 0x810)
    int64_t rdx_1 = 0
    
    if (r8_1 != 0)
        void* rcx = arg1 + 0xd50
        
        while (*(rcx - 4) == 0x17)
            result += *rcx
            rdx_1 += 1
            rcx += 0x48
            
            if (rdx_1 u>= r8_1)
                return result

return 0
