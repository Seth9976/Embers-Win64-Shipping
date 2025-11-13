// 函数: sub_1423b6be0
// 地址: 0x1423b6be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9
r9.b = 0
label_1423b6bf0:
int64_t rcx = sx.q(*(arg1 + 0x130))
uint64_t result = zx.q((rcx - 8).d)

if (result.d s>= 0 && result.d s< rcx.d)
    result = rcx - 8
    int64_t* rdx_1 = *(arg1 + 0x128) + (result << 3)
    
    while (*rdx_1 == 0)
        result += 1
        rdx_1 = &rdx_1[1]
        
        if (result s>= rcx)
            int64_t rdx_2 = sx.q(*(arg1 + 0x18))
            int32_t rcx_2 = *(arg1 + 0x18)
            int32_t r10_1 = (rdx_2 - 2).d
            int32_t rax_2 = rcx_2 - r10_1
            
            if (rax_2 != 2)
                memmove(sx.q(r10_1) * 0xf0 + *(arg1 + 0x10), rdx_2 * 0xf0 + *(arg1 + 0x10), 
                    (rax_2 - 2) * 0xf0)
                rcx_2 = *(arg1 + 0x18)
            
            *(arg1 + 0x18) = rcx_2 - 2
            int64_t rdx_5 = sx.q(*(arg1 + 0x130))
            int32_t rcx_5 = *(arg1 + 0x130)
            r9 = (rdx_5 - 8).d
            int32_t rax_8 = rcx_5 - r9
            
            if (rax_8 != 8)
                int64_t rcx_6 = *(arg1 + 0x128)
                memmove(rcx_6 + (sx.q(r9) << 3), rcx_6 + (rdx_5 << 3), (rax_8 - 8) << 3)
                rcx_5 = *(arg1 + 0x130)
            
            r9.b = 1
            *(arg1 + 0x130) = rcx_5 - 8
            goto label_1423b6bf0

if (r9.b != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x140) s> 0)
        int32_t* rsi_1 = nullptr
        
        do
            int64_t r9_1 = *(arg1 + 0x138)
            result = zx.q(*(arg1 + 0x130))
            
            if (*(rsi_1 + r9_1) s>= result.d)
                int32_t rcx_8 = *(arg1 + 0x140)
                int32_t rax_14 = rcx_8 - i - 1
                
                if (rax_14 s>= 1)
                    rax_14 = 1
                
                if (rax_14 != 0)
                    memcpy(r9_1 + (sx.q(i) << 2), r9_1 + (sx.q(rcx_8 - rax_14) << 2), rax_14 << 2)
                    rcx_8 = *(arg1 + 0x140)
                
                *(arg1 + 0x140) = rcx_8 - 1
                result = sub_1405dac90(arg1 + 0x138)
                i -= 1
                rsi_1 -= 4
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x140))

return result
