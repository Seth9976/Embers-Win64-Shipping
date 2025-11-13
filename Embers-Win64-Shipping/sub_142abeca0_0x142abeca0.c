// 函数: sub_142abeca0
// 地址: 0x142abeca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x1a8)
int32_t rsi = 0
int32_t result

while (true)
    void* rcx = *(arg1 + 0x198)
    int16_t rax_1 = *(rcx + 8)
    
    if (rax_1 s< 0)
        result = *(rcx + 0xc)
    else
        result = sx.d(rax_1) s>> 5
    
    int32_t rdx = *(arg1 + 0x1a0)
    
    if (rdx == result)
        break
    
    result = sub_142a486d0(rcx, rdx)
    
    if (result == 0x23)
        *(rbx + 0x2c) += 1
        *(rbx + 0x20) += 1
        *(rbx + 0x24) += 1
        rsi += 1
    else
        if (result s<= 0x2f)
            break
        
        if (result s> 0x39)
            break
        
        if (*(rbx + 0x20) s> 0)
            *arg2 = 0x10100
            break
        
        *(rbx + 0x2c) += 1
        *(rbx + 0x1c) += 1
        *(rbx + 0x24) += 1
        void* rcx_1 = *(arg1 + 0x198)
        int16_t rax_3 = *(rcx_1 + 8)
        int32_t rax_5
        
        if (rax_3 s< 0)
            rax_5 = *(rcx_1 + 0xc)
        else
            rax_5 = sx.d(rax_3) s>> 5
        
        int32_t rdx_1 = *(arg1 + 0x1a0)
        int32_t rax_6
        
        if (rdx_1 != rax_5)
            rax_6 = sub_142a486d0(rcx_1, rdx_1)
        
        if (rdx_1 != rax_5 && rax_6 == 0x30)
            rsi += 1
        else
            void* rcx_2 = *(arg1 + 0x198)
            int16_t rax_7 = *(rcx_2 + 8)
            int32_t rax_9
            
            if (rax_7 s< 0)
                rax_9 = *(rcx_2 + 0xc)
            else
                rax_9 = sx.d(rax_7) s>> 5
            
            int32_t rdx_2 = *(arg1 + 0x1a0)
            char rax_10
            
            if (rdx_2 != rax_9)
                rax_10 = sub_142a486d0(rcx_2, rdx_2)
            else
                rax_10 = -1
            
            sub_142ab3100(rbx + 0x38, rax_10 - 0x30, rsi, 0)
            rsi = 0
    
    void* rcx_4 = *(arg1 + 0x198)
    int16_t rax_11 = *(rcx_4 + 8)
    int32_t rax_13
    
    if (rax_11 s< 0)
        rax_13 = *(rcx_4 + 0xc)
    else
        rax_13 = sx.d(rax_11) s>> 5
    
    int32_t rdx_4 = *(arg1 + 0x1a0)
    int32_t rax_14
    
    if (rdx_4 != rax_13)
        rax_14 = sub_142a486d0(rcx_4, rdx_4)
    else
        rax_14 = -1
    
    int32_t rcx_5
    rcx_5.b = rax_14 u> 0xffff
    *(arg1 + 0x1a0) += rcx_5 + 1

return result
