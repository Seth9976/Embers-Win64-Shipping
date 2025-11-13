// 函数: sub_141017de0
// 地址: 0x141017de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rdi = *(arg1 + 0x290)
void var_78
void* var_68
int64_t var_30

if (*(rdi + 0xe8) != 0)
    char rsi_1 = *(arg1 + 0x3b79)
    sub_14103f450(&var_78, *(arg1 + 0x260))
    uint64_t rdx_2 = zx.q(*(arg1 + 0x4bc0))
    
    if (rdx_2.d != 0)
        if (rsi_1 == 0)
            int32_t rax = *(arg1 + 0x4bc4)
            int32_t rcx_1 = rdx_2.d
            rdx_2 = zx.q(rax)
            
            if (rcx_1 u>= rax)
                rdx_2 = zx.q(rcx_1)
        
        int64_t* rcx_2 = *(arg1 + 0x4bd0)
        *(arg1 + 0x4bc4) = rdx_2.d
        arg2 = memcpy(sub_141013310(rcx_2, rdx_2.d, &var_78, arg2), arg1 + 0x3bc0, *(arg1 + 0x4bc4))
        *(arg1 + 0x4bc8) = 0
        *(arg1 + 0x22c0) = var_30
        rdx_2 = *(var_68 + 0x28)
        void* rcx_4 = rdx_2 + 0x28
        
        if (rdx_2 == 0)
            rcx_4 = var_68 + 0x30
        
        *(arg1 + 0x25c0) = rcx_4
        *(arg1 + 0x22b0) |= 1
    
    result, arg2 = j_sub_141059a80(&var_78, arg2, rdx_2)

if (*(arg1 + 0x3b7a) != 0)
    if (*(rdi + 0xe9) != 0)
        char rsi_2 = *(arg1 + 0x3b79)
        sub_14103f450(&var_78, *(arg1 + 0x260))
        uint64_t rdx_5 = zx.q(*(arg1 + 0x5c00))
        
        if (rdx_5.d != 0)
            if (rsi_2 == 0)
                int32_t rax_5 = *(arg1 + 0x5c04)
                int32_t rcx_7 = rdx_5.d
                rdx_5 = zx.q(rax_5)
                
                if (rcx_7 u>= rax_5)
                    rdx_5 = zx.q(rcx_7)
            
            int64_t* rcx_8 = *(arg1 + 0x5c10)
            *(arg1 + 0x5c04) = rdx_5.d
            arg2 = memcpy(sub_141013310(rcx_8, rdx_5.d, &var_78, arg2), arg1 + 0x4c00, 
                *(arg1 + 0x5c04))
            *(arg1 + 0x5c08) = 0
            *(arg1 + 0x2340) = var_30
            rdx_5 = *(var_68 + 0x28)
            void* rcx_10 = rdx_5 + 0x28
            
            if (rdx_5 == 0)
                rcx_10 = var_68 + 0x30
            
            *(arg1 + 0x2640) = rcx_10
            *(arg1 + 0x22b2) |= 1
        
        result, arg2 = j_sub_141059a80(&var_78, arg2, rdx_5)
    
    if (*(rdi + 0xea) != 0)
        char rsi_3 = *(arg1 + 0x3b79)
        sub_14103f450(&var_78, *(arg1 + 0x260))
        uint64_t rdx_8 = zx.q(*(arg1 + 0x6c40))
        
        if (rdx_8.d != 0)
            if (rsi_3 == 0)
                int32_t rax_10 = *(arg1 + 0x6c44)
                int32_t rcx_13 = rdx_8.d
                rdx_8 = zx.q(rax_10)
                
                if (rcx_13 u>= rax_10)
                    rdx_8 = zx.q(rcx_13)
            
            int64_t* rcx_14 = *(arg1 + 0x6c50)
            *(arg1 + 0x6c44) = rdx_8.d
            arg2 = memcpy(sub_141013310(rcx_14, rdx_8.d, &var_78, arg2), arg1 + 0x5c40, 
                *(arg1 + 0x6c44))
            *(arg1 + 0x6c48) = 0
            *(arg1 + 0x23c0) = var_30
            rdx_8 = *(var_68 + 0x28)
            void* rcx_16 = rdx_8 + 0x28
            
            if (rdx_8 == 0)
                rcx_16 = var_68 + 0x30
            
            *(arg1 + 0x26c0) = rcx_16
            *(arg1 + 0x22b4) |= 1
        
        result, arg2 = j_sub_141059a80(&var_78, arg2, rdx_8)

if (*(rdi + 0xec) != 0)
    char rsi_4 = *(arg1 + 0x3b79)
    sub_14103f450(&var_78, *(arg1 + 0x260))
    uint64_t rdx_11 = zx.q(*(arg1 + 0x8cc0))
    
    if (rdx_11.d != 0)
        if (rsi_4 == 0)
            int32_t rax_15 = *(arg1 + 0x8cc4)
            int32_t rcx_19 = rdx_11.d
            rdx_11 = zx.q(rax_15)
            
            if (rcx_19 u>= rax_15)
                rdx_11 = zx.q(rcx_19)
        
        int64_t* rcx_20 = *(arg1 + 0x8cd0)
        *(arg1 + 0x8cc4) = rdx_11.d
        arg2 =
            memcpy(sub_141013310(rcx_20, rdx_11.d, &var_78, arg2), arg1 + 0x7cc0, *(arg1 + 0x8cc4))
        *(arg1 + 0x8cc8) = 0
        *(arg1 + 0x24c0) = var_30
        rdx_11 = *(var_68 + 0x28)
        void* rcx_22 = rdx_11 + 0x28
        
        if (rdx_11 == 0)
            rcx_22 = var_68 + 0x30
        
        *(arg1 + 0x27c0) = rcx_22
        *(arg1 + 0x22b8) |= 1
    
    result, arg2 = j_sub_141059a80(&var_78, arg2, rdx_11)

if (*(rdi + 0xeb) != 0)
    char rdi_1 = *(arg1 + 0x3b79)
    sub_14103f450(&var_78, *(arg1 + 0x260))
    uint64_t rdx_14 = zx.q(*(arg1 + 0x7c80))
    
    if (rdx_14.d != 0)
        if (rdi_1 == 0)
            int32_t rax_20 = *(arg1 + 0x7c84)
            int32_t rcx_25 = rdx_14.d
            rdx_14 = zx.q(rax_20)
            
            if (rcx_25 u>= rax_20)
                rdx_14 = zx.q(rcx_25)
        
        int64_t* rcx_26 = *(arg1 + 0x7c90)
        *(arg1 + 0x7c84) = rdx_14.d
        arg2 =
            memcpy(sub_141013310(rcx_26, rdx_14.d, &var_78, arg2), arg1 + 0x6c80, *(arg1 + 0x7c84))
        *(arg1 + 0x7c88) = 0
        *(arg1 + 0x2440) = var_30
        rdx_14 = *(var_68 + 0x28)
        void* rcx_28 = rdx_14 + 0x28
        
        if (rdx_14 == 0)
            rcx_28 = var_68 + 0x30
        
        *(arg1 + 0x2740) = rcx_28
        *(arg1 + 0x22b6) |= 1
    
    result = j_sub_141059a80(&var_78, arg2, rdx_14)

*(arg1 + 0x3b79) = 0
return result
