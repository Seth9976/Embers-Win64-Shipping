// 函数: sub_142a808b0
// 地址: 0x142a808b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0xa8))
int64_t rdi = 0
int64_t r14 = *(arg1 + 0xa0)
int32_t result

if (rsi s> 0)
    do
        uint32_t rbx_3 = zx.d(*(r14 + (rdi << 1)))
        rdi += 1
        
        if ((rbx_3 & 0xfffffc00) == 0xd800 && rdi != rsi)
            uint32_t rcx = zx.d(*(r14 + (rdi << 1)))
            
            if ((rcx & 0xfffffc00) == 0xdc00)
                rdi += 1
                rbx_3 = ((rbx_3 - 0xd7f7) << 0xa) + rcx
        
        int64_t rax_4 = *(arg1 + 0x1c0)
        bool cond:0_1
        
        if (rax_4 != 0)
            result = rax_4(*(arg1 + 0x1c8), zx.q(rbx_3))
            cond:0_1 = result s>= 0x17
        
        if (rax_4 == 0 || result == 0x17)
            result = sub_142af5c70(rbx_3)
            cond:0_1 = result s>= 0x17
        
        if (not(cond:0_1))
            if (result.b == 0)
                result.b = 0
                return result
            
            if (result.b == 1 || result.b == 0xd)
                result.b = 1
                return result
            
            if (result.b == 2)
                result.b = 2
                return result
            
            if (result.b == 5)
                result.b = 3
                return result
    while (rdi s< rsi)

result.b = 4
return result
