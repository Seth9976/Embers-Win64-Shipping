// 函数: sub_142082830
// 地址: 0x142082830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x520) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rcx = *(r14_1 + *(arg1 + 0x518))
        
        if (rcx != 0)
            sub_142225820(rcx, 0)
            void* rsi_1 = *(r14_1 + *(arg1 + 0x518))
            
            if (rsi_1 != 0)
                int64_t* rbx_1 = *(rsi_1 + 0x128)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                sub_1407481d0(rsi_1 + 0x108, *(rsi_1 + 0x108))
                int32_t j_2 = *(rsi_1 + 0xe8)
                void* rcx_4 = *(rsi_1 + 0xe0)
                
                if (j_2 != 0)
                    void* rbx_2 = rcx_4 + 0x50
                    int32_t j
                    
                    do
                        int64_t rcx_5 = *(rbx_2 + 0x10)
                        
                        if (rcx_5 != 0)
                            sub_140a74f90(rcx_5)
                        
                        int64_t rcx_6 = *rbx_2
                        
                        if (rcx_6 != 0)
                            sub_140a74f90(rcx_6)
                        
                        rbx_2 += 0x70
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    rcx_4 = *(rsi_1 + 0xe0)
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                int32_t j_3 = *(rsi_1 + 0xd8)
                void* rcx_7 = *(rsi_1 + 0xd0)
                
                if (j_3 != 0)
                    void* rbx_3 = rcx_7 + 0x50
                    int32_t j_1
                    
                    do
                        int64_t rcx_8 = *(rbx_3 + 0x10)
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                        
                        int64_t rcx_9 = *rbx_3
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        rbx_3 += 0x70
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    rcx_7 = *(rsi_1 + 0xd0)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int64_t rcx_10 = *(rsi_1 + 0x48)
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                j_sub_140a74f90(rsi_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x520))

bool cond:0 = *(arg1 + 0x524) == 0
*(arg1 + 0x520) = 0

if (cond:0)
    return 

return sub_1405c5570(arg1 + 0x518, 0) __tailcall
