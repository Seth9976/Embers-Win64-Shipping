// 函数: sub_141fdc570
// 地址: 0x141fdc570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x3c23d70a
int64_t rsi
rsi.b = 0

while (true)
    int64_t rdx = sx.q(*(arg1 + 0x20))
    int64_t result
    result.b = 0
    int64_t r8_1 = 0
    
    if (rdx s> 0)
        do
            void* rcx
            
            if (result.b == 0)
                rcx = *(*(arg1 + 0x18) + (r8_1 << 3))
            
            if (result.b != 0 || *(rcx + 0x10) == arg2 || *(rcx + 0x18) == arg2)
                result.b = 1
            else
                result.b = 0
            
            r8_1 += 1
        while (r8_1 s< rdx)
    
    if (rdx s<= 0 || result.b == 0)
        return result
    
    int64_t performanceCount
    
    if (rsi.b == 0)
        QueryPerformanceCounter(&performanceCount)
    rsi.b = 1
    result, zmm6 = sub_140b73230(zmm6)
