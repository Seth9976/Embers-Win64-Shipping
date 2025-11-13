// 函数: sub_142831534
// 地址: 0x142831534
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    bool cond:0_1 = *(arg1 + 0x68) == 0
    *(arg1 + 0x28) = 3
    
    if (not(cond:0_1))
        int32_t i = 0
        
        if (*(arg1 + 0x64) s> 0)
            int64_t* rdi_1 = nullptr
            
            do
                void* rcx = *(rdi_1 + *(arg1 + 0x68))
                
                if (rcx != 0 && sub_14283908c(rcx) != 0)
                    sub_1428394c0(*(*(arg1 + 0x68) + rdi_1))
                
                i += 1
                rdi_1 = &rdi_1[1]
            while (i s< *(arg1 + 0x64))
    
    int64_t* i_11 = *(arg1 + 0x38)
    
    if (i_11 != 0)
        int64_t* i_1
        
        do
            void* rcx_3 = *i_11
            
            if (rcx_3 != 0)
                int64_t rax_3 = *(rcx_3 + 0x10)
                
                if (rax_3 != 0)
                    rax_3(rcx_3)
            
            i_1 = i_11[1]
            i_11 = i_1
        while (i_1 != 0)
        i_11 = *(arg1 + 0x38)
    
    sub_14283403c(i_11)
    int64_t* i_12 = *(arg1 + 0x48)
    
    if (i_12 != 0)
        int64_t* i_2
        
        do
            free(*i_12)
            
            if (i_12 == 0)
                break
            
            i_2 = i_12[1]
            i_12 = i_2
        while (i_2 != 0)
        i_12 = *(arg1 + 0x48)
    
    sub_14283403c(i_12)
    int64_t* i_13 = *(arg1 + 0x30)
    
    if (i_13 != 0)
        int64_t* i_3
        
        do
            void* rsi_1 = *i_13
            
            if (rsi_1 != 0)
                void* rcx_7 = *(rsi_1 + 0x18)
                
                if (rcx_7 != 0)
                    int64_t rax_4 = *(rcx_7 + 8)
                    
                    if (rax_4 != 0)
                        rax_4(rcx_7)
                
                int64_t rax_5 = *(rsi_1 + 8)
                
                if (rax_5 != 0)
                    rax_5(rsi_1)
            
            i_3 = i_13[1]
            i_13 = i_3
        while (i_3 != 0)
        i_13 = *(arg1 + 0x30)
    
    sub_14283403c(i_13)
    int64_t* rcx_10 = *(arg1 + 0x58)
    
    if (rcx_10 != 0)
        int32_t i_4 = 0
        
        if (*(arg1 + 0x18) s> 0)
            int64_t* rax_6 = rcx_10
            int64_t rdi_2 = 0
            
            do
                void* rdx_1 = *(rcx_10 + rdi_2)
                
                if (rdx_1 != 0)
                    sub_14283ddbc(rdx_1)
                    rcx_10 = *(arg1 + 0x58)
                    rax_6 = rcx_10
                
                i_4 += 1
                rdi_2 += 8
            while (i_4 s< *(arg1 + 0x18))
            
            rcx_10 = rax_6
        
        free(rcx_10)
    
    int64_t* rcx_12 = *(arg1 + 0x68)
    
    if (rcx_12 != 0)
        int32_t i_5 = 0
        
        if (*(arg1 + 0x64) s> 0)
            int64_t* rax_7 = rcx_12
            int64_t rdi_3 = 0
            
            do
                int64_t rdx_2 = *(rcx_12 + rdi_3)
                
                if (rdx_2 != 0)
                    sub_142834408(rdx_2)
                    rcx_12 = *(arg1 + 0x68)
                    rax_7 = rcx_12
                
                i_5 += 1
                rdi_3 += 8
            while (i_5 s< *(arg1 + 0x64))
            
            rcx_12 = rax_7
        
        free(rcx_12)
    
    int64_t* rcx_14 = *(arg1 + 0x80)
    
    if (rcx_14 != 0)
        int32_t i_6 = 0
        
        if (*(arg1 + 0x78) s> 0)
            int64_t* rax_8 = rcx_14
            int64_t rdi_4 = 0
            
            do
                int64_t rdx_3 = *(rcx_14 + rdi_4)
                
                if (rdx_3 != 0)
                    free(rdx_3)
                    rcx_14 = *(arg1 + 0x80)
                    rax_8 = rcx_14
                
                i_6 += 1
                rdi_4 += 8
            while (i_6 s< *(arg1 + 0x78))
            
            rcx_14 = rax_8
        
        free(rcx_14)
    
    int64_t* rcx_16 = *(arg1 + 0x88)
    
    if (rcx_16 != 0)
        int32_t i_7 = 0
        
        if (*(arg1 + 0x78) s> 0)
            int64_t* rax_9 = rcx_16
            int64_t rdi_5 = 0
            
            do
                int64_t rdx_4 = *(rcx_16 + rdi_5)
                
                if (rdx_4 != 0)
                    free(rdx_4)
                    rcx_16 = *(arg1 + 0x88)
                    rax_9 = rcx_16
                
                i_7 += 1
                rdi_5 += 8
            while (i_7 s< *(arg1 + 0x78))
            
            rcx_16 = rax_9
        
        free(rcx_16)
    
    int64_t* rax_10 = *(arg1 + 0x90)
    
    if (rax_10 != 0)
        int64_t* rcx_18 = rax_10
        
        for (int64_t i_8 = 0; i_8 s< 0x10; i_8 += 8)
            int64_t rdx_5 = *(rax_10 + i_8)
            
            if (rdx_5 != 0)
                free(rdx_5)
                rax_10 = *(arg1 + 0x90)
                rcx_18 = rax_10
        
        free(rcx_18)
    
    int64_t* rax_11 = *(arg1 + 0x98)
    
    if (rax_11 != 0)
        int64_t* rcx_20 = rax_11
        
        for (int64_t i_9 = 0; i_9 s< 0x10; i_9 += 8)
            int64_t rdx_6 = *(rax_11 + i_9)
            
            if (rdx_6 != 0)
                free(rdx_6)
                rax_11 = *(arg1 + 0x98)
                rcx_20 = rax_11
        
        free(rcx_20)
    
    int64_t rcx_22 = *(arg1 + 0xa0)
    
    if (rcx_22 != 0)
        free(rcx_22)
    
    void* rcx_23 = *(arg1 + 0xa8)
    
    if (rcx_23 != 0)
        sub_14283d518(rcx_23)
    
    int64_t rcx_24 = *(arg1 + 0x1b8)
    
    if (rcx_24 != 0)
        int64_t rax_12
        
        for (int64_t* i_10 = nullptr; i_10 s< 0x400; i_10 = &i_10[1])
            rax_12 = rcx_24
            
            if (*(rcx_24 + i_10) != 0)
                for (int64_t* j = nullptr; j s< 0x400; j = &j[1])
                    int64_t rax_13 = *(i_10 + rcx_24)
                    
                    if (*(j + rax_13) != 0)
                        free(*(j + rax_13))
                        rcx_24 = *(arg1 + 0x1b8)
                
                free(*(i_10 + rcx_24))
                rcx_24 = *(arg1 + 0x1b8)
                rax_12 = rcx_24
        
        free(rax_12)
    
    free(arg1)

return 0
