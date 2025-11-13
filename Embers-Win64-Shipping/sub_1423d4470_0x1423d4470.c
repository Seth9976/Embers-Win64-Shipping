// 函数: sub_1423d4470
// 地址: 0x1423d4470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x788)
int32_t rdi = 0

if (*(result + 0x50) s> 0)
    int32_t rbp_1 = 1
    int64_t* r14_1 = nullptr
    
    while (true)
        int64_t r9_1 = *(result + 0x48)
        void* rbx_1 = *(r14_1 + r9_1)
        void* rcx_4
        
        if (rbx_1 != 0)
            while (true)
                void* rax_4 = sub_142527690()
                void* rdx_4 = *(rbx_1 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    void* rax_7 = sub_1425be5e0()
                    void* rdx_5 = *(rbx_1 + 0x10)
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s> *(rdx_5 + 0x38)
                            || *(*(rdx_5 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                        void* rax_10 = sub_142452380()
                        void* rdx_6 = *(rbx_1 + 0x10)
                        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                        
                        if (rax_11.d s> *(rdx_6 + 0x38)
                                || *(*(rdx_6 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                            rbx_1 = *(rbx_1 + 0x20)
                            
                            if (rbx_1 == 0)
                                break
                            
                            continue
                
                void* rbx_2 = *(arg1 + 0x788)
                int32_t rax_13 = *(rbx_2 + 0x50)
                int32_t rcx_9 = rax_13 - rdi
                
                if (rcx_9 != 1)
                    memmove((sx.q(rdi) << 5) + *(rbx_2 + 0x48), 
                        (sx.q(rbp_1) << 5) + *(rbx_2 + 0x48), (rcx_9 - 1) << 5)
                    rax_13 = *(rbx_2 + 0x50)
                
                rcx_4 = rbx_2 + 0x48
                *(rbx_2 + 0x50) = rax_13 - 1
                goto label_1423d45b5
        else
            int32_t rcx = *(result + 0x50)
            int32_t rax_1 = rcx - rdi
            
            if (rax_1 != 1)
                memmove((sx.q(rdi) << 5) + r9_1, (sx.q(rbp_1) << 5) + r9_1, (rax_1 - 1) << 5)
                rcx = *(result + 0x50)
            
            rcx_4 = result + 0x48
            *(result + 0x50) = rcx - 1
        label_1423d45b5:
            sub_1405dad20(rcx_4)
            rdi -= 1
            rbp_1 -= 1
            r14_1 -= 0x20
        result = *(arg1 + 0x788)
        rdi += 1
        rbp_1 += 1
        r14_1 = &r14_1[4]
        
        if (rdi s>= *(result + 0x50))
            break

return result
