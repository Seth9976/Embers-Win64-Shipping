// 函数: sub_141425720
// 地址: 0x141425720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s> 0)
    int64_t r15_1 = 0
    
    do
        int32_t rdi_1 = 0
        int64_t* rsi_2 = *arg1 + r15_1
        int32_t j_3 = rsi_2[5].d
        
        if (j_3 s> 0)
            int64_t rbp_1 = 0
            
            do
                int64_t* rax_1 = rsi_2[4]
                int64_t* rdx_1 = rsi_2
                
                if (rax_1 != 0)
                    rdx_1 = rax_1
                
                int64_t* rcx = *(rdx_1 + rbp_1)
                *(rdx_1 + rbp_1) = 0
                
                if (rcx != 0)
                    (*(*rcx + 0x38))(rcx)
                
                j_3 = rsi_2[5].d
                rdi_1 += 1
                rbp_1 += 8
            while (rdi_1 s< j_3)
        
        int64_t* rax_3 = rsi_2[4]
        int64_t* rdi_2 = rsi_2
        
        if (rax_3 != 0)
            rdi_2 = rax_3
        
        if (j_3 != 0)
            int32_t j
            
            do
                int64_t* rcx_1 = *rdi_2
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x38))(rcx_1)
                
                rdi_2 = &rdi_2[1]
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        rsi_2[5].d = 0
        
        if (*(rsi_2 + 0x2c) != 0)
            sub_141427a80(rsi_2, 0)
        
        int64_t* rcx_3 = rsi_2[6]
        rsi_2[6] = 0
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3)
        
        i += 1
        r15_1 += 0x48
    while (i s< arg1[1].d)

int32_t i_1 = 0

if (arg1[3].d s> 0)
    int64_t r15_2 = 0
    
    do
        int32_t rdi_3 = 0
        int64_t* rsi_4 = arg1[2] + r15_2
        int32_t j_4 = rsi_4[5].d
        
        if (j_4 s> 0)
            int64_t rbp_2 = 0
            
            do
                int64_t* rax_6 = rsi_4[4]
                int64_t* rdx_2 = rsi_4
                
                if (rax_6 != 0)
                    rdx_2 = rax_6
                
                int64_t* rcx_4 = *(rdx_2 + rbp_2)
                *(rdx_2 + rbp_2) = 0
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x38))(rcx_4)
                
                j_4 = rsi_4[5].d
                rdi_3 += 1
                rbp_2 += 8
            while (rdi_3 s< j_4)
        
        int64_t* rax_8 = rsi_4[4]
        int64_t* rdi_4 = rsi_4
        
        if (rax_8 != 0)
            rdi_4 = rax_8
        
        if (j_4 != 0)
            int32_t j_1
            
            do
                int64_t* rcx_5 = *rdi_4
                
                if (rcx_5 != 0)
                    (*(*rcx_5 + 0x38))(rcx_5)
                
                rdi_4 = &rdi_4[1]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        rsi_4[5].d = 0
        
        if (*(rsi_4 + 0x2c) != 0)
            sub_141427a80(rsi_4, 0)
        
        int64_t* rcx_7 = rsi_4[6]
        rsi_4[6] = 0
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7)
        
        i_1 += 1
        r15_2 += 0x48
    while (i_1 s< arg1[3].d)

int32_t i_2 = 0

if (arg1[5].d s> 0)
    int64_t r15_3 = 0
    
    do
        int32_t rdi_5 = 0
        int64_t* rsi_6 = arg1[4] + r15_3
        int32_t j_5 = rsi_6[5].d
        
        if (j_5 s> 0)
            int64_t rbp_3 = 0
            
            do
                int64_t* rax_11 = rsi_6[4]
                int64_t* rdx_3 = rsi_6
                
                if (rax_11 != 0)
                    rdx_3 = rax_11
                
                int64_t* rcx_8 = *(rdx_3 + rbp_3)
                *(rdx_3 + rbp_3) = 0
                
                if (rcx_8 != 0)
                    (*(*rcx_8 + 0x38))(rcx_8)
                
                j_5 = rsi_6[5].d
                rdi_5 += 1
                rbp_3 += 8
            while (rdi_5 s< j_5)
        
        int64_t* rax_13 = rsi_6[4]
        int64_t* rdi_6 = rsi_6
        
        if (rax_13 != 0)
            rdi_6 = rax_13
        
        if (j_5 != 0)
            int32_t j_2
            
            do
                int64_t* rcx_9 = *rdi_6
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x38))(rcx_9)
                
                rdi_6 = &rdi_6[1]
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
        
        rsi_6[5].d = 0
        
        if (*(rsi_6 + 0x2c) != 0)
            sub_141427a80(rsi_6, 0)
        
        int64_t* rcx_11 = rsi_6[6]
        rsi_6[6] = 0
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x38))(rcx_11)
        
        i_2 += 1
        r15_3 += 0x48
    while (i_2 s< arg1[5].d)

return sub_141425640(&arg1[6]) __tailcall
