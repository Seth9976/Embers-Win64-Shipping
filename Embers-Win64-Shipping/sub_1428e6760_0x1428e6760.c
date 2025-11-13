// 函数: sub_1428e6760
// 地址: 0x1428e6760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rbp = arg1
void* r14 = *arg1
int32_t i_1 = 1
void** j_1 = r14 + 0x20

if (arg1[1].d s> 1)
    int64_t* r14_1 = r14 + 8
    int32_t i
    
    do
        int64_t* rax_1 = sub_1428f28b0(*j_1)
        int32_t r15_1 = 0
        
        if (sub_142898c70(rax_1[1]) s> 0)
            int32_t rax_10
            
            do
                void* rax_3 = sub_142898ea0(rax_1[1], r15_1)
                int32_t rsi_1 = 0
                int32_t rbx_1 = 0
                int32_t rax_4 = sub_142898c70(*r14_1)
                
                if (rax_4 s> 0)
                    int32_t rax_8
                    
                    do
                        int64_t* rax_5 = sub_142898ea0(*r14_1, rbx_1)
                        
                        if (sub_14292b900(&r14_1[-1], rax_5, *(rax_3 + 8)) != 0)
                            if (sub_14292b660(j_1, rax_3, rax_5, nullptr) == 0)
                                return 0
                            
                            rsi_1 = 1
                        
                        rbx_1 += 1
                        rax_8 = sub_142898c70(*r14_1)
                    while (rbx_1 s< rax_8)
                
                if (rax_4 s<= 0 || rsi_1 == 0)
                    void* r8_3 = r14_1[1]
                    
                    if (r8_3 != 0 && sub_14292b660(j_1, rax_3, r8_3, nullptr) == 0)
                        return 0
                
                r15_1 += 1
                rax_10 = sub_142898c70(rax_1[1])
            while (r15_1 s< rax_10)
            rbp = arg1
        
        if ((r14_1[6].d & 0x200) == 0 && sub_1428e6d20(j_1, rax_1, rbp) == 0)
            return 0
        
        void** j = j_1
        
        if ((r14_1[6].d & 0x400) != 0)
            int32_t* rdi_2 = r14_1[4]
            int32_t rax_12 = sub_142898c70(rdi_2)
            int32_t rbx_3 = rax_12 - 1
            
            if (rax_12 - 1 s>= 0)
                int32_t temp3_1
                
                do
                    int64_t* rax_13 = sub_142898ea0(rdi_2, rbx_3)
                    
                    if ((**rax_13 & 3) != 0)
                        void* rax_15 = rax_13[1]
                        *(rax_15 + 0x10) -= 1
                        sub_1428a6780(rax_13)
                        sub_142898840(rdi_2, rbx_3)
                    
                    temp3_1 = rbx_3
                    rbx_3 -= 1
                while (temp3_1 - 1 s>= 0)
        
        void* const rax_19
        
        do
            int32_t* rdi_3 = j[-3]
            j = &j[-4]
            int32_t rax_16 = sub_142898c70(rdi_3)
            int32_t rbx_5 = rax_16 - 1
            
            if (rax_16 - 1 s>= 0)
                int32_t temp2_1
                
                do
                    void* rax_17 = sub_142898ea0(rdi_3, rbx_5)
                    
                    if (*(rax_17 + 0x10) == 0)
                        void* rax_18 = *(rax_17 + 8)
                        *(rax_18 + 0x10) -= 1
                        sub_1428a6780(rax_17)
                        sub_142898840(rdi_3, rbx_5)
                    
                    temp2_1 = rbx_5
                    rbx_5 -= 1
                while (temp2_1 - 1 s>= 0)
            
            void* rcx_19 = j[2]
            rax_19 = rcx_19
            
            if (rcx_19 != 0 && *(rcx_19 + 0x10) == 0)
                void* rax_20 = *(rcx_19 + 8)
                
                if (rax_20 != 0)
                    *(rax_20 + 0x10) -= 1
                    rcx_19 = j[2]
                
                sub_1428a6780(rcx_19)
                rax_19 = nullptr
                j[2] = 0
        while (j != *rbp)
        
        if (rax_19 == 0)
            return 2
        
        j_1 = &j_1[4]
        i = i_1 + 1
        r14_1 = &r14_1[4]
        i_1 = i
    while (i s< rbp[1].d)

return 1
