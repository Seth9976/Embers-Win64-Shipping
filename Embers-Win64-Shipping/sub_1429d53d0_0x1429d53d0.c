// 函数: sub_1429d53d0
// 地址: 0x1429d53d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
sub_1429cd480(rcx + 0x1b0, sx.q(*(rcx + 8)))
sub_1429d55d0(arg1)
sub_1429d5450(arg1)
int64_t result = sub_1429d5680(arg1)

if (*(arg1 + 0x24) == 0)
    void* r8_1 = *(arg1 + 0x10)
    int32_t i = 0
    
    if (*(r8_1 + 8) s> 0)
        char* rcx_5 = nullptr
        
        do
            result = *(arg1 + 0x180)
            
            if ((rcx_5[result] & 1) != 0)
                result = *(r8_1 + 0x1b0)
                *(result + (rcx_5 << 1)) |= 0x800
            
            r8_1 = *(arg1 + 0x10)
            i += 1
            rcx_5 = &rcx_5[1]
        while (i s< *(r8_1 + 8))

return result
