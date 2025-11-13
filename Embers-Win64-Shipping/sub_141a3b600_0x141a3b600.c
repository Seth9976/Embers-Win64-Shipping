// 函数: sub_141a3b600
// 地址: 0x141a3b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0)
    int64_t rbx_1 = sx.q(*(arg2 + 0x48))
    
    if (rbx_1.d != 0)
        void* i_1 = *(arg2 + 0x40)
        void* i = arg2
        int32_t rbp_1 = 0x7fffffff
        
        if (i_1 != 0)
            i = i_1
        
        for (void* r8_3 = (rbx_1 << 4) + i; i != r8_3; i += 0x10)
            void* rdx = *i
            
            if ((*(rdx + 0xc9) u>> 8).b == 0 && (*(i + 0xc) & 3) == 0)
                int32_t rax_2 = *(rdx + 0xa8)
                
                if (rbp_1 s<= rax_2)
                    rax_2 = rbp_1
                
                rbp_1 = rax_2
        
        int32_t rbx_2 = rbx_1.d - 1
        
        if (rbx_1.d - 1 s>= 0)
            int64_t rsi_2 = sx.q(rbx_2) << 4
            int64_t r15_1 = rsi_2
            int64_t r14_2 = sx.q(rbx_2 + 1) << 4
            int32_t temp1_1
            
            do
                void* rax_4 = *(arg2 + 0x40)
                void* rcx = arg2
                
                if (rax_4 != 0)
                    rcx = rax_4
                
                void* rax_5 = *(rsi_2 + rcx)
                
                if (*(rax_5 + 0xa8) s> rbp_1 && (*(rax_5 + 0xc9) u>> 8).b == 0
                        && (*(rsi_2 + rcx + 0xc) & 3) == 0)
                    int32_t rdx_1 = *(arg2 + 0x48)
                    int32_t rax_8 = rdx_1 - rbx_2
                    
                    if (rax_8 != 1)
                        memmove(rcx + r15_1, r14_2 + rcx, (rax_8 - 1) << 4)
                        rdx_1 = *(arg2 + 0x48)
                    
                    *(arg2 + 0x48) = rdx_1 - 1
                
                r14_2 -= 0x10
                r15_1 -= 0x10
                rsi_2 -= 0x10
                temp1_1 = rbx_2
                rbx_2 -= 1
            while (temp1_1 - 1 s>= 0)

void* rax_11 = *(arg2 + 0x40)
void* rcx_2 = arg2

if (rax_11 != 0)
    rcx_2 = rax_11

return sub_141a2c400(rcx_2, *(arg2 + 0x48), 0, arg3) __tailcall
