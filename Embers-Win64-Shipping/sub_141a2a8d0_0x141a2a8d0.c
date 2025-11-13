// 函数: sub_141a2a8d0
// 地址: 0x141a2a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0x30)
void* i = arg1

if (i_1 != 0)
    i = i_1

for (void* r10 = i + sx.q(*(arg1 + 0x38)) * 0xc; i != r10; i += 0xc)
    int64_t rcx_1 = sx.q((*i).d)
    
    if (rcx_1.d s>= 0 && rcx_1.d s< *(arg2 + 0xa8))
        void** r9_2 = rcx_1 * 0x88 + *(arg2 + 0xa0)
        char rcx_3 = r9_2[0x10].b
        
        if ((rcx_3 & 1) != 0)
            if ((rcx_3 & 2) == 0)
                r9_2 = *r9_2
            
            if ((r9_2[1].b & 4) != 0)
                return i

return nullptr
