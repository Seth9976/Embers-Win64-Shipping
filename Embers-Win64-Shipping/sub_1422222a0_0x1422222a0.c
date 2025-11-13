// 函数: sub_1422222a0
// 地址: 0x1422222a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t result = sub_142192ca0(*(arg1 + 0x10), 0)
uint64_t rbp = 0
int64_t result_2 = result
uint64_t arg_10 = 0

if (*(result + 0x40) s> 0)
    int64_t r13_1 = 0
    int64_t arg_18 = 0
    
    do
        void* r13_2 = *(*(result_2 + 0x38) + r13_1)
        
        if (r13_2 != 0)
            void* rax = sub_142556a90()
            void* rdx_1 = *(r13_2 + 0x10)
            result = sx.q(*(rax + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                int64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax + 0x30)
                    *(rbx + 0x240) = r13_2
                    int32_t rbx_1 = *(result_2 + 0x88)
                    int32_t rbx_2 = rbx_1 - 1
                    
                    if (rbx_1 - 1 s>= 0)
                        int64_t rsi_1 = sx.q(rbx_2) << 3
                        int64_t r15_1 = rsi_1
                        int64_t r14_2 = sx.q(rbx_2 + 1) << 3
                        int32_t temp3_1
                        
                        do
                            result = *(result_2 + 0x80)
                            
                            if (*(rsi_1 + result) == r13_2)
                                int32_t rdx_2 = *(result_2 + 0x88)
                                int32_t rcx_3 = rdx_2 - rbx_2
                                
                                if (rcx_3 != 1)
                                    memmove(r15_1 + result, r14_2 + result, (rcx_3 - 1) << 3)
                                    rdx_2 = *(result_2 + 0x88)
                                
                                *(result_2 + 0x88) = rdx_2 - 1
                                result = sub_1405c53d0(result_2 + 0x80)
                            
                            r14_2 -= 8
                            r15_1 -= 8
                            rsi_1 -= 8
                            temp3_1 = rbx_2
                            rbx_2 -= 1
                        while (temp3_1 - 1 s>= 0)
                    
                    int32_t rbx_3 = *(result_2 + 0x78)
                    int32_t rbx_4 = rbx_3 - 1
                    
                    if (rbx_3 - 1 s>= 0)
                        void* rsi_2 = sx.q(rbx_4) << 3
                        void* r15_2 = rsi_2
                        int64_t r14_4 = sx.q(rbx_4 + 1) << 3
                        int32_t temp5_1
                        
                        do
                            result = *(result_2 + 0x70)
                            
                            if (*(rsi_2 + result) == r13_2)
                                int32_t rdx_4 = *(result_2 + 0x78)
                                int32_t rcx_8 = rdx_4 - rbx_4
                                
                                if (rcx_8 != 1)
                                    memmove(r15_2 + result, r14_4 + result, (rcx_8 - 1) << 3)
                                    rdx_4 = *(result_2 + 0x78)
                                
                                *(result_2 + 0x78) = rdx_4 - 1
                                result = sub_1405c53d0(result_2 + 0x70)
                            
                            r14_4 -= 8
                            r15_2 -= 8
                            rsi_2 -= 8
                            temp5_1 = rbx_4
                            rbx_4 -= 1
                        while (temp5_1 - 1 s>= 0)
                    
                    int32_t rbx_5 = *(result_2 + 0x68)
                    int32_t rbx_6 = rbx_5 - 1
                    
                    if (rbx_5 - 1 s>= 0)
                        int64_t* rsi_3 = sx.q(rbx_6) << 3
                        int64_t* r14_5 = rsi_3
                        int64_t rbp_2 = sx.q(rbx_6 + 1) << 3
                        int32_t temp7_1
                        
                        do
                            result = *(result_2 + 0x60)
                            
                            if (*(rsi_3 + result) == r13_2)
                                int32_t rdx_6 = *(result_2 + 0x68)
                                int32_t rcx_13 = rdx_6 - rbx_6
                                
                                if (rcx_13 != 1)
                                    memmove(result + r14_5, result + rbp_2, (rcx_13 - 1) << 3)
                                    rdx_6 = *(result_2 + 0x68)
                                
                                *(result_2 + 0x68) = rdx_6 - 1
                                result = sub_1405c53d0(result_2 + 0x60)
                            
                            rbp_2 -= 8
                            r14_5 -= 8
                            rsi_3 -= 8
                            temp7_1 = rbx_6
                            rbx_6 -= 1
                        while (temp7_1 - 1 s>= 0)
                        rbp = arg_10
                    
                    rbx = arg1
        
        rbp = zx.q(rbp.d + 1)
        r13_1 = arg_18 + 8
        arg_10 = rbp
        arg_18 = r13_1
    while (rbp.d s< *(result_2 + 0x40))

return result
