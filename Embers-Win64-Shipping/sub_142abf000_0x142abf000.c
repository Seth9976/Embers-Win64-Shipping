// 函数: sub_142abf000
// 地址: 0x142abf000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x198)
int16_t rax = *(rcx + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(rcx + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

int32_t rdx = *(arg1 + 0x1a0)

if (rdx != rax_2)
    rax_2 = sub_142a486d0(rcx, rdx)
    
    if (rax_2 != 0xffffffff)
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
        
        int32_t rax_17
        
        if (rdx_1 == rax_5 || rax_6 != 0x27)
            void* rcx_9 = *(arg1 + 0x198)
            int16_t rax_21 = *(rcx_9 + 8)
            
            if (rax_21 s< 0)
                rax_17 = *(rcx_9 + 0xc)
            else
                rax_17 = sx.d(rax_21) s>> 5
            
            int32_t rdx_6 = *(arg1 + 0x1a0)
            int32_t rsi_1
            
            if (rdx_6 != rax_17)
                rax_17 = sub_142a486d0(rcx_9, rdx_6)
                rsi_1 = rax_17
            else
                rsi_1 = -1
            
            int32_t rdi_1
            rdi_1.b = rsi_1 u> 0xffff
            *(arg1 + 0x1a0) += rdi_1 + 1
        else
            void* rcx_2 = *(arg1 + 0x198)
            int16_t rax_7 = *(rcx_2 + 8)
            int32_t rax_9
            
            if (rax_7 s< 0)
                rax_9 = *(rcx_2 + 0xc)
            else
                rax_9 = sx.d(rax_7) s>> 5
            
            int32_t rdx_2 = *(arg1 + 0x1a0)
            int32_t rax_10
            
            if (rdx_2 != rax_9)
                rax_10 = sub_142a486d0(rcx_2, rdx_2)
            else
                rax_10 = -1
            
            while (true)
                int32_t rcx_3
                rcx_3.b = rax_10 u> 0xffff
                *(arg1 + 0x1a0) += rcx_3 + 1
                void* rcx_5 = *(arg1 + 0x198)
                int16_t rax_11 = *(rcx_5 + 8)
                int32_t rax_13
                
                if (rax_11 s< 0)
                    rax_13 = *(rcx_5 + 0xc)
                else
                    rax_13 = sx.d(rax_11) s>> 5
                
                int32_t rdx_3 = *(arg1 + 0x1a0)
                
                if (rdx_3 != rax_13 && sub_142a486d0(rcx_5, rdx_3) == 0x27)
                    return sub_142ac0290(arg1 + 0x198)
                
                void* rcx_6 = *(arg1 + 0x198)
                int16_t rax_15 = *(rcx_6 + 8)
                
                if (rax_15 s< 0)
                    rax_17 = *(rcx_6 + 0xc)
                else
                    rax_17 = sx.d(rax_15) s>> 5
                
                int32_t rdx_4 = *(arg1 + 0x1a0)
                
                if (rdx_4 == rax_17)
                    break
                
                rax_17 = sub_142a486d0(rcx_6, rdx_4)
                
                if (rax_17 == 0xffffffff)
                    break
                
                void* rcx_7 = *(arg1 + 0x198)
                int16_t rax_18 = *(rcx_7 + 8)
                int32_t rax_20
                
                if (rax_18 s< 0)
                    rax_20 = *(rcx_7 + 0xc)
                else
                    rax_20 = sx.d(rax_18) s>> 5
                
                int32_t rdx_5 = *(arg1 + 0x1a0)
                
                if (rdx_5 != rax_20)
                    rax_10 = sub_142a486d0(rcx_7, rdx_5)
                else
                    rax_10 = -1
            
            *arg2 = 0x10107
        
        return rax_17

*arg2 = 0x10107
return rax_2
