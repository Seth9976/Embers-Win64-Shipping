// 函数: sub_142222520
// 地址: 0x142222520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142192ca0(*(arg1 + 0x10), 0)
void* result_2 = result
int32_t i_1 = 0

if (*(result + 0x40) s> 0)
    result = nullptr
    void* result_1 = nullptr
    int32_t i
    
    do
        void* rbp_1 = *(result + *(result_2 + 0x38))
        void* rax
        int64_t rax_1
        void* rdx_1
        
        if (rbp_1 != 0)
            rax = sub_142556a90()
            rdx_1 = *(rbp_1 + 0x10)
            rax_1 = sx.q(*(rax + 0x38))
        
        void* rbx_1
        
        if (rbp_1 == 0 || rax_1.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
            rbx_1 = nullptr
        else
            rbx_1 = rbp_1
        
        void* rax_3
        int64_t rax_4
        void* rdx_2
        
        if (rbp_1 != 0)
            rax_3 = sub_142556f30()
            rdx_2 = *(rbp_1 + 0x10)
            rax_4 = sx.q(*(rax_3 + 0x38))
        
        void* const r8_3
        
        if (rbp_1 == 0 || rax_4.d s> *(rdx_2 + 0x38)
                || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            r8_3 = nullptr
        else
            r8_3 = rbp_1
        
        if (rbx_1 != 0)
            *(arg1 + 0x240) = rbx_1
        label_142222635:
            int32_t rbx_3 = *(result_2 + 0x88)
            int32_t rbx_4 = rbx_3 - 1
            
            if (rbx_3 - 1 s>= 0)
                int64_t rsi_1 = sx.q(rbx_4) << 3
                int64_t r15_1 = rsi_1
                int64_t r14_2 = sx.q(rbx_4 + 1) << 3
                int32_t temp4_1
                
                do
                    int64_t rax_13 = *(result_2 + 0x80)
                    
                    if (*(rsi_1 + rax_13) == rbp_1)
                        int32_t rdx_5 = *(result_2 + 0x88)
                        int32_t rcx_6 = rdx_5 - rbx_4
                        
                        if (rcx_6 != 1)
                            memmove(r15_1 + rax_13, r14_2 + rax_13, (rcx_6 - 1) << 3)
                            rdx_5 = *(result_2 + 0x88)
                        
                        *(result_2 + 0x88) = rdx_5 - 1
                        sub_1405c53d0(result_2 + 0x80)
                    
                    r14_2 -= 8
                    r15_1 -= 8
                    rsi_1 -= 8
                    temp4_1 = rbx_4
                    rbx_4 -= 1
                while (temp4_1 - 1 s>= 0)
            
            int32_t rbx_5 = *(result_2 + 0x78)
            int32_t rbx_6 = rbx_5 - 1
            
            if (rbx_5 - 1 s>= 0)
                int64_t rsi_2 = sx.q(rbx_6) << 3
                int64_t r15_2 = rsi_2
                int64_t r14_4 = sx.q(rbx_6 + 1) << 3
                int32_t temp6_1
                
                do
                    int64_t rax_17 = *(result_2 + 0x70)
                    
                    if (*(rsi_2 + rax_17) == rbp_1)
                        int32_t rdx_7 = *(result_2 + 0x78)
                        int32_t rcx_11 = rdx_7 - rbx_6
                        
                        if (rcx_11 != 1)
                            memmove(r15_2 + rax_17, r14_4 + rax_17, (rcx_11 - 1) << 3)
                            rdx_7 = *(result_2 + 0x78)
                        
                        *(result_2 + 0x78) = rdx_7 - 1
                        sub_1405c53d0(result_2 + 0x70)
                    
                    r14_4 -= 8
                    r15_2 -= 8
                    rsi_2 -= 8
                    temp6_1 = rbx_6
                    rbx_6 -= 1
                while (temp6_1 - 1 s>= 0)
            
            int32_t rbx_7 = *(result_2 + 0x68)
            int32_t rbx_8 = rbx_7 - 1
            
            if (rbx_7 - 1 s>= 0)
                int64_t* rsi_3 = sx.q(rbx_8) << 3
                int64_t* r15_3 = rsi_3
                int64_t r14_6 = sx.q(rbx_8 + 1) << 3
                int32_t temp8_1
                
                do
                    int64_t rax_21 = *(result_2 + 0x60)
                    
                    if (*(rsi_3 + rax_21) == rbp_1)
                        int32_t rdx_9 = *(result_2 + 0x68)
                        int32_t rcx_16 = rdx_9 - rbx_8
                        
                        if (rcx_16 != 1)
                            memmove(r15_3 + rax_21, r14_6 + rax_21, (rcx_16 - 1) << 3)
                            rdx_9 = *(result_2 + 0x68)
                        
                        *(result_2 + 0x68) = rdx_9 - 1
                        sub_1405c53d0(result_2 + 0x60)
                    
                    r14_6 -= 8
                    r15_3 -= 8
                    rsi_3 -= 8
                    temp8_1 = rbx_8
                    rbx_8 -= 1
                while (temp8_1 - 1 s>= 0)
        else if (r8_3 != 0)
            void* rbx_2 = *(arg1 + 0x10)
            *(arg1 + 0x248) = r8_3
            int32_t arg_10
            sub_140865c40(rbx_2 + 0x60, &arg_10, r8_3)
            int64_t rax_6 = sx.q(arg_10)
            
            if (rax_6.d != 0xffffffff)
                void* rax_8 = *(rbx_2 + 0x60) + rax_6 * 0x18
                
                if (rax_8 != 0 && rax_8 != -8)
                    *(arg1 + 0x250) = *(rax_8 + 8)
            
            goto label_142222635
        
        i = i_1 + 1
        result = result_1 + 8
        i_1 = i
        result_1 = result
    while (i s< *(result_2 + 0x40))

return result
