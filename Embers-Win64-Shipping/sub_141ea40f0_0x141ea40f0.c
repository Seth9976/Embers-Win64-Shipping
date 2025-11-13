// 函数: sub_141ea40f0
// 地址: 0x141ea40f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140cdd9c0(arg1, arg2)
void* const i

if (*(arg1 + 0x50) == 0)
    i = nullptr
else
    result = sub_140d41340()
    
    if (result == 0)
        i = nullptr
    else
        i = *(arg1 + 0x50)
        int64_t rdx = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s> *(i + 0x38))
            i = nullptr
        else
            uint64_t result_1 = result
            result = *(i + 0x30)
            
            if (*(result + (result_1 << 3)) != rdx)
                i = nullptr

for (; i != 0; i = *(i + 0x40))
    result = zx.q(*(i + 0xcc) u>> 7)
    
    if ((result.b & 1) != 0)
        break
    
    if (*(i + 0xe0) != 0)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (rsi_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *(i + 0xe0)
        *(*arg2 + (rsi_1 << 3)) = result

return result
