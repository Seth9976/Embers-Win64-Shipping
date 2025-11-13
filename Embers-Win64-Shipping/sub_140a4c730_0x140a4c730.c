// 函数: sub_140a4c730
// 地址: 0x140a4c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x63) == 0)
    void* rbp_1 = *(arg1 + 0x80)
    int32_t rsi_1 = 0
    char r15_1 = *(arg1 + 0x65)
    void* r14_1
    
    if (*(rbp_1 + 0xa1) == 0)
        r14_1 = nullptr
        EnterCriticalSection(rbp_1 + 0x58)
        int32_t rdx_2 = 0
        void* rax = rbp_1 + 0x80
        int64_t rcx_2 = 0
        
        while (true)
            void* r8_1 = *rax
            
            if (r8_1 != 0)
                r14_1 = r8_1
                *(rbp_1 + (sx.q(rdx_2) << 3) + 0x80) = 0
                
                if (r8_1 != 0)
                    break
            else
                rdx_2 += 1
                rcx_2 += 1
                rax += 8
                
                if (rcx_2 s< 4)
                    continue
            
            if (*(rbp_1 + 0xa0) != 0)
                break
            
            int16_t* const rdx_3
            
            if (*(rbp_1 + 0x18) == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *(rbp_1 + 0x10)
            
            int64_t* rcx_3 = *(rbp_1 + 8)
            rax = (*(*rcx_3 + 0xc8))(rcx_3, rdx_3, 0)
            r14_1 = rax
            rax.b = rax == 0
            *(rbp_1 + 0xa0) = rax.b
            break
        
        if (rbp_1 != -0x58)
            LeaveCriticalSection(rbp_1 + 0x58)
    else
        int16_t* const rdx_1
        
        if (*(rbp_1 + 0x18) == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *(rbp_1 + 0x10)
        
        int64_t* rcx = *(rbp_1 + 8)
        r14_1 = (*(*rcx + 0xc8))(rcx, rdx_1, 0)
    
    if (r14_1 != 0)
        int64_t rax_3 = *(arg1 + 0x90)
        
        if (rax_3 == 0x7fffffffffffffff)
            rax_3 = (*(*r14_1 + 0x40))(r14_1) - *(arg1 + 0x88)
            *(arg1 + 0x90) = rax_3
        
        if (r15_1 == 0)
            *(arg1 + 0x10) = sub_140a82f30(rax_3, 0)
        
        (*(*r14_1 + 0x10))(r14_1, *(arg1 + 0x88))
        (*(*r14_1 + 0x20))(r14_1, *(arg1 + 0x10), *(arg1 + 0x90))
        void* rbp_2 = *(arg1 + 0x80)
        
        if (*(rbp_2 + 0xa1) == 0)
            EnterCriticalSection(rbp_2 + 0x58)
            int64_t i = 0
            void* rax_9 = rbp_2 + 0x80
            
            do
                if (*rax_9 == 0)
                    *(rbp_2 + (sx.q(rsi_1) << 3) + 0x80) = r14_1
                    
                    if (rbp_2 != -0x58)
                        LeaveCriticalSection(rbp_2 + 0x58)
                    
                    goto label_140a4c946
                
                rsi_1 += 1
                i += 1
                rax_9 += 8
            while (i s< 4)
            
            if (rbp_2 != -0x58)
                LeaveCriticalSection(rbp_2 + 0x58)
        
        (**r14_1)(r14_1, 1)
    else if (*(arg1 + 0x65) == 0 && r15_1 != 0)
        sub_140a74f90(*(arg1 + 0x10))
        *(arg1 + 0x10) = 0

label_140a4c946:
*(arg1 + 0x60) = 1

if (*(arg1 + 0x20) != 0)
    void* rcx_14 = arg1 + 0x40
    char arg_8 = *(arg1 + 0x63)
    void* rax_12 = *(arg1 + 0x30)
    void* arg_10 = arg1
    
    if (rax_12 != 0)
        rcx_14 = rax_12
    
    (*(arg1 + 0x20))((*(*rcx_14 + 8))(rcx_14), &arg_8, &arg_10)

*(arg1 + 0x61) = 1
