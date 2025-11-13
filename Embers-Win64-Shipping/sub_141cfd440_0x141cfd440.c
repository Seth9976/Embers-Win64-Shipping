// 函数: sub_141cfd440
// 地址: 0x141cfd440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
sub_141cfdac0(arg1)

if (*(arg1 + 0x110) != *(arg1 + 0x13c))
    int64_t r10_1 = *(arg2 + 0x10)
    void* r9_1 = arg1 + 0x140
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i =
        *(r9_1 + ((sx.q((r10_1 u>> 0x20).d * 0x17 + r10_1.d) & (sx.q(*(arg1 + 0x150)) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x108)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_4 = i_1 * 3
            
            if (*(r8_2 + (rcx_4 << 3)) == r10_1)
                if (i != 0xffffffff)
                    void* rcx_5 = r8_2 + i_1 * 0x18
                    
                    if (rcx_5 != 0)
                        int32_t rdx_2 = *(rcx_5 + 8)
                        
                        if (rdx_2 != 0)
                            sub_141d0df60(arg1, rdx_2)
                
                break
            
            i = *(r8_2 + (rcx_4 << 3) + 0x10)
        while (i != 0xffffffff)

int32_t rdx_3 = data_143a21040
uint32_t result = 0

if (rdx_3 s> 0)
    void* rcx_7 = arg1 + 0x168
    
    do
        if (*rcx_7 == 0)
            if (result s>= 0)
                result = sub_141d05f20(arg1, 1)
                
                if (result.b != 0)
                    result = sub_141cfabc0(arg1)
            
            break
        
        result += 1
        rcx_7 += 0x20
    while (result s< rdx_3)

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
