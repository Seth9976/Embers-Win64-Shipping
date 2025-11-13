// 函数: sub_1410272e0
// 地址: 0x1410272e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (*(arg1 + 0x30) != 0)
    rax = zx.q(*(arg1 + 0x50))
    
    if (rax.d != 0)
        uint64_t rbx_1 = 0
        void** const var_68 = &data_142efcd90
        uint64_t var_60_1 = 0
        
        if (&var_68 != arg1 + 0x28)
            uint64_t rcx = *(arg1 + 0x30)
            
            if (rcx != 0)
                var_60_1 = rcx
                *(rcx + 0x14) += 1
                rax = zx.q(*(arg1 + 0x50))
                rbx_1 = var_60_1
        
        void* rsi_1 = *(arg1 + 0x30)
        
        if (rsi_1 != 0)
            rsi_1 = *(rsi_1 + 0x60)
        
        void* var_58_1 = rsi_1
        int64_t* rax_1 = j_sub_140a82f30(0x28)
        
        if (rax_1 != 0)
            *rax_1 = 0
            rax_1[1] = &data_142efcd90
            rax_1[2] = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 0x14) += 1
                rsi_1 = var_58_1
            
            rax_1[1] = &data_142efcd90
            rax_1[3] = rsi_1
            rax_1[4].d = (rax - 1).d
            void** rax_2 = *(arg1 + 0x80)
            *(arg1 + 0x80) = rax_1
            *rax_2 = rax_1
        
        sub_1410101f0(arg1 + 0x98, arg1 + 0x28)
        uint64_t rbx_3
        
        while (true)
            if (**(arg1 + 0x88) == 0)
                rbx_3 = var_60_1
                break
            
            void* rbx_2 = **(arg1 + 0x88)
            sub_141010280(&var_68, rbx_2 + 8)
            rbx_3 = var_60_1
            int32_t var_50_2 = *(rbx_2 + 0x20)
            
            if (rbx_3 != 0 && sub_1410270d0(rbx_3, var_58_1).b == 0)
                break
            
            void* r14_2 = **(arg1 + 0x88)
            
            if (r14_2 != 0)
                sub_141010280(&var_68, r14_2 + 8)
                void* rsi_2 = *(arg1 + 0x88)
                var_50_2 = *(r14_2 + 0x20)
                *(arg1 + 0x88) = r14_2
                void** const var_48 = &data_142efcd90
                int64_t* var_40
                __builtin_memset(&var_40, 0, 0x14)
                sub_141010280(r14_2 + 8, &var_48)
                int64_t* rcx_8 = var_40
                int32_t var_30
                *(r14_2 + 0x20) = var_30
                
                if (rcx_8 != 0)
                    int32_t rax_8 = *(rcx_8 + 0x14)
                    *(rcx_8 + 0x14) -= 1
                    
                    if (rax_8 == 1)
                        sub_141011360(var_40, rax_8.b)
                
                if (rsi_2 != 0)
                    void* rcx_10 = *(rsi_2 + 0x10)
                    *(rsi_2 + 8) = &data_142efcd90
                    
                    if (rcx_10 != 0)
                        int32_t rax_9 = *(rcx_10 + 0x14)
                        *(rcx_10 + 0x14) -= 1
                        
                        if (rax_9 == 1)
                            int64_t* rcx_11 = *(rsi_2 + 0x10)
                            
                            if (rcx_11 != 0)
                                sub_141011360(rcx_11, rax_9.b)
                    
                    j_sub_140a74f90(rsi_2)
            
            *(arg1 + 0x54) = var_50_2 + 1
        
        if (rbx_3 != 0)
            rax = zx.q(*(rbx_3 + 0x14))
            *(rbx_3 + 0x14) -= 1
            
            if (rax.d == 1)
                sub_141011360(var_60_1, rax.b)

if (arg1 + 0x28 == arg2)
    return 

void* rax_12 = *(arg1 + 0x30)

if (rax_12 != 0)
    int32_t r15_1 = *(rax_12 + 0x14)
    *(rax_12 + 0x14) -= 1
    
    if (r15_1 == 1)
        int64_t* rcx_14 = *(arg1 + 0x30)
        
        if (rcx_14 != 0)
            sub_141011360(rcx_14, r15_1.b)

*(arg1 + 0x30) = 0
rax = *(arg2 + 8)

if (rax != 0)
    *(arg1 + 0x30) = rax
    *(rax + 0x14) += 1
