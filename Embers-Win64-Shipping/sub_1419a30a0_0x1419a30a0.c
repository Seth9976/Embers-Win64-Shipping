// 函数: sub_1419a30a0
// 地址: 0x1419a30a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x48)
char r11 = *(arg1 + 0x48) & 1
void* rsi_1

if (r11 == 0)
    rsi_1 = r9
else
    rsi_1 = arg1 + 0x48 + (r9 s>> 1)

int32_t i = *(arg1 + 0x50)
int32_t r8 = 0

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    i = i_1
    int32_t rax_6 = i_1 + r8
    int64_t rax_7 = sx.q(rax_6)
    void* rax_8 = *(rsi_1 + (rax_7 << 3))
    
    if ((rax_8.b & 1) != 0)
        rax_8 = (rax_8 s>> 1) + rsi_1 + (rax_7 << 3)
    
    if (*rax_8 u< *(arg2 + 0x10))
        r8 = rax_6 + rcx_1

if (r8 s< *(arg1 + 0x50))
    void* rcx_6
    
    if (r11 == 0)
        rcx_6 = r9
    else
        rcx_6 = arg1 + 0x48 + (r9 s>> 1)
    
    int64_t rdx_1 = sx.q(r8)
    void* rax_12 = *(rcx_6 + (rdx_1 << 3))
    
    if ((rax_12.b & 1) != 0)
        rax_12 = (rax_12 s>> 1) + rcx_6 + (rdx_1 << 3)
    
    if (*(arg2 + 0x10) u>= *rax_12 && r8 != 0xffffffff)
        if (r11 != 0)
            r9 = (r9 s>> 1) + 0x48 + arg1
        
        int64_t result = *(r9 + (rdx_1 << 3))
        
        if ((result.b & 1) == 0)
            return result
        
        return (result s>> 1) + r9 + (rdx_1 << 3)

return 0
