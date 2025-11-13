// 函数: sub_142aa8f70
// 地址: 0x142aa8f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
void* rbx = arg2

while (true)
    void* rax_1 = sub_142a86c30(*arg1, rbx)
    rbx = rax_1
    
    if (rax_1 == 0)
        return zx.q(rsi)
    
    bool cond:0_1
    
    if ((*(rax_1 + 8) & 1) == 0)
        int16_t rax_3 = *(rax_1 + 8)
        int32_t r8_2
        
        if (rax_3 s< 0)
            r8_2 = *(rbx + 0xc)
        else
            r8_2 = sx.d(rax_3) s>> 5
        
        int16_t rax_4 = *(arg2 + 8)
        int32_t rax_6
        
        if (rax_4 s< 0)
            rax_6 = *(arg2 + 0xc)
        else
            rax_6 = sx.d(rax_4) s>> 5
        
        if ((*(arg2 + 8) & 1) == 0 && r8_2 == rax_6)
            cond:0_1 = sub_142a490e0(rbx, arg2, r8_2) != 0
            goto label_142aa8ff2
    else
        cond:0_1 = (*(arg2 + 8) & 1) != 0
    label_142aa8ff2:
        
        if (cond:0_1)
            return zx.q(rsi)
    rsi += 1
