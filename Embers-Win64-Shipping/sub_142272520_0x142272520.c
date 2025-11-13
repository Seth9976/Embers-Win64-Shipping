// 函数: sub_142272520
// 地址: 0x142272520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1 + 0x14)

if (result != 0)
    int32_t r9_1 = 0
    int32_t rsi_1 = *(arg1 + 0x30)
    int64_t* rdi_1 = result + 0x370
    int32_t i_2 = rdi_1[1].d
    int32_t i = i_2
    int64_t r11_1 = *rdi_1
    
    if (i_2 s> 0)
        do
            int32_t rcx_2 = i & 0x80000001
            
            if (rcx_2 s< 0)
                rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_1) s>> 1
            i = i_1
            result = zx.q(i_1 + r9_1)
            
            if (*(r11_1 + sx.q(result.d) * 0x10) s< rsi_1)
                r9_1 = result.d + rcx_2
        while (i s> 0)
    
    if (r9_1 s< i_2)
        int32_t* rcx_9 = (sx.q(r9_1) << 4) + r11_1
        
        if (rsi_1 s>= *rcx_9 && r9_1 != 0xffffffff)
            int32_t rax_4 = i_2 - r9_1
            
            if (rax_4 != 1)
                memmove(rcx_9, (sx.q(r9_1 + 1) << 4) + r11_1, (rax_4 - 1) << 4)
                i_2 = rdi_1[1].d
            
            rdi_1[1].d = i_2 - 1
            result = sub_1405a5010(rdi_1)
    
    *(arg1 + 0x10) &= 0xfd

return result
