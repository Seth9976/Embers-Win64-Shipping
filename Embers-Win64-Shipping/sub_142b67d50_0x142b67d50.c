// 函数: sub_142b67d50
// 地址: 0x142b67d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *(arg1 + 8)
int64_t r9 = sx.q(arg2)
int32_t result

if (r8 s< 0)
    result = *(arg1 + 0xc)
else
    result = sx.d(r8) s>> 5

if (r9.d u< result)
    void* r10_1 = arg1 + 0xa
    int16_t rdx = r8 & 2
    
    if (rdx == 0)
        r10_1 = *(arg1 + 0x18)
    
    if (*(r10_1 + (r9 << 1)) == 0x5c)
        if (r8 s< 0)
            result = *(arg1 + 0xc)
        else
            result = sx.d(r8) s>> 5
        
        if (r9.d + 1 u< result)
            void* rcx
            
            if (rdx == 0)
                rcx = *(arg1 + 0x18)
            else
                rcx = arg1 + 0xa
            
            if ((0xffdf & (*(rcx + (sx.q(r9.d + 1) << 1)) - 0x50)) == 0)
                result.b = 1
                return 0xff01

result.b = 0
return result
