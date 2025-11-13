// 函数: sub_142a81060
// 地址: 0x142a81060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = sx.q(*(arg1 + 0x98))
int64_t r14 = *(arg1 + 0x90)
int32_t result

if (i s> 0)
    int16_t* rsi_2 = r14 + ((i - 1) << 1)
    
    do
        uint32_t rdi_1 = zx.d(*(r14 + (i << 1) - 2))
        i -= 1
        rsi_2 -= 2
        
        if ((rdi_1 & 0xfffffc00) == 0xdc00 && i s> 0)
            uint32_t rcx = zx.d(*rsi_2)
            
            if ((rcx & 0xfffffc00) == 0xd800)
                i -= 1
                rsi_2 -= 2
                rdi_1 += (rcx - 0xd7f7) << 0xa
        
        int64_t rax_6 = *(arg1 + 0x1c0)
        bool cond:0_1
        
        if (rax_6 != 0)
            result = rax_6(*(arg1 + 0x1c8), zx.q(rdi_1))
            cond:0_1 = result s>= 0x17
        
        if (rax_6 == 0 || result == 0x17)
            result = sub_142af5c70(rdi_1)
            cond:0_1 = result s>= 0x17
        
        if (not(cond:0_1))
            if (result.b == 0)
                result.b = 0
                return result
            
            if (result.b == 1 || result.b == 0xd)
                result.b = 1
                return result
            
            if (result.b == 7)
                break
    while (i s> 0)

result.b = 4
return result
