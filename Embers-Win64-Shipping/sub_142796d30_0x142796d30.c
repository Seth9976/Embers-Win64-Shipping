// 函数: sub_142796d30
// 地址: 0x142796d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
void* rbp = arg2

if (*(arg1 + 0x168) != 0)
    int64_t* rsi_1 = *(arg1 + 0x708)
    int64_t i = 0x28
    
    if (rsi_1 != 0)
        int64_t rcx = rsi_1[2]
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rsi_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        j_sub_140a74f90(rsi_1)
    
    bool cond:1_1 = *(arg1 + 0x468) == 0
    *(arg1 + 0x708) = rbp
    
    if (cond:1_1)
        int64_t* rcx_25 = data_143f0f180
        int64_t arg_20 = (*(*rcx_25 + 0x130))(rcx_25, &data_143f02b98, *(arg1 + 0x508), 0, 
            *(arg1 + 0x528) * *(arg1 + 0x52c), 1)
        int32_t r8_18 = *(*(arg1 + 0x710) + 8)
        void* rax_42 = data_143f88558
        int32_t arg_18 = r8_18
        int32_t rcx_26 = *(rax_42 + 4)
        int32_t arg_8 = rcx_26
        int32_t temp0_3 = divs.dp.d(sx.q(r8_18), rcx_26)
        int32_t r9_1 = temp0_3 + 1
        
        if (r8_18 == rcx_26)
            r9_1 = temp0_3
        
        int32_t rax_46 = 0
        
        if (rcx_26 s> r8_18)
            arg_8 = r8_18
            rax_46 = 1
        
        void* var_50_1 = arg1
        int32_t* var_58 = &arg_8
        void* var_38_1 = arg1 + 0x4f8
        int32_t* var_48_1 = &arg_18
        int64_t* var_40_1 = &arg_20
        void* const var_68 = &data_14278e9f0
        int32_t** var_60_1 = &var_58
        sub_14077b750(r9_1, &var_68, rax_46)
        int64_t* rcx_28 = data_143f0f180
        return (*(*rcx_28 + 0x138))(rcx_28, &data_143f02b98, *(arg1 + 0x508))
    
    result = data_143b71614
    int64_t r14
    r14.b = result != 0
    
    if (result != 0 && *(arg1 + 0x660) == 1)
        sub_14278a440(arg1 + 0x5e0, 2)
        sub_14278a440(arg1 + 0x668, 2)
        
        do
            void* rax = *(arg1 + 0x658)
            void* rdx_1 = arg1 + 0x5e0
            
            if (rax != 0)
                rdx_1 = rax
            
            *(rdx_1 + i + 0x18) = *(*(arg1 + 0x710) + 0xa0)
            void* rdx_2 = arg1 + 0x668
            void* rax_2 = *(arg1 + 0x6e0)
            
            if (rax_2 != 0)
                rdx_2 = rax_2
            
            void* rcx_7 = arg1 + 0x5e0
            *(rdx_2 + i + 0x18) = *(*(arg1 + 0x710) + 0xa0)
            void* rax_4 = *(arg1 + 0x658)
            
            if (rax_4 != 0)
                rcx_7 = rax_4
            
            void* rcx_8 = rcx_7 + i
            (*(*rcx_8 + 0x28))(rcx_8)
            void* rax_6 = *(arg1 + 0x6e0)
            void* rcx_9 = arg1 + 0x668
            
            if (rax_6 != 0)
                rcx_9 = rax_6
            
            void* rcx_10 = rcx_9 + i
            result = (*(*rcx_10 + 0x28))(rcx_10)
            i += 0x28
        while (i s< 0x78)
        
        rbp = *(arg1 + 0x708)
    
    if (*(rbp + 0x20) != 0)
        int32_t rdx_3 = *(arg1 + 0x6f0)
        
        if (r14.b != 0)
            *(arg1 + 0x660)
            rdx_3 = mods.dp.d(sx.q(rdx_3 + 1), *(arg1 + 0x660))
            *(arg1 + 0x6f0) = rdx_3
        
        void* rdi_1 = arg1 + 0x5e0
        void* rcx_11 = *(rdi_1 + 0x78)
        void* rsi_2 = arg1 + 0x668
        void* rax_12 = *(rsi_2 + 0x78)
        int64_t rdx_6 = sx.q(rdx_3) * 0x28
        
        if (rcx_11 != 0)
            rdi_1 = rcx_11
        
        void* rdi_2 = rdi_1 + rdx_6
        
        if (rax_12 != 0)
            rsi_2 = rax_12
        
        void* rsi_3 = rsi_2 + rdx_6
        *(arg1 + 0x450) = *(rdi_2 + 0x20)
        *(arg1 + 0x458) = *(rsi_3 + 0x20)
        int64_t* rcx_12 = data_143f0f180
        int64_t rax_17 = (*(*rcx_12 + 0x130))(rcx_12, &data_143f02b98, *(rdi_2 + 0x10), 0, 
            *(rbp + 8) << 6, zx.d(r14.b) + 1)
        int64_t* rdx_7 = *(arg1 + 0x708)
        memcpy(rax_17, *rdx_7, rdx_7[1].d << 6)
        int64_t* rcx_14 = data_143f0f180
        (*(*rcx_14 + 0x138))(rcx_14, &data_143f02b98, *(rdi_2 + 0x10))
        int64_t* rcx_15 = data_143f0f180
        int64_t rax_21 = (*(*rcx_15 + 0x130))(rcx_15, &data_143f02b98, *(rsi_3 + 0x10), 0, 
            *(*(arg1 + 0x708) + 0x18) << 6, zx.d(r14.b) + 1)
        void* rdx_11 = *(arg1 + 0x708)
        memcpy(rax_21, *(rdx_11 + 0x10), *(rdx_11 + 0x18) << 6)
        int64_t* rcx_17 = data_143f0f180
        result = (*(*rcx_17 + 0x138))(rcx_17, &data_143f02b98, *(rsi_3 + 0x10))
        *(arg1 + 0x720) = 0
    else if (*(arg1 + 0x720) == 0)
        int32_t rdx_13 = *(arg1 + 0x6f0)
        
        if (r14.b != 0)
            *(arg1 + 0x660)
            rdx_13 = mods.dp.d(sx.q(rdx_13 + 1), *(arg1 + 0x660))
            *(arg1 + 0x6f0) = rdx_13
        
        void* rdi_3 = arg1 + 0x5e0
        void* rcx_18 = *(rdi_3 + 0x78)
        void* rsi_4 = arg1 + 0x668
        void* rax_27 = *(rsi_4 + 0x78)
        int64_t rdx_16 = sx.q(rdx_13) * 0x28
        
        if (rcx_18 != 0)
            rdi_3 = rcx_18
        
        void* rdi_4 = rdi_3 + rdx_16
        
        if (rax_27 != 0)
            rsi_4 = rax_27
        
        void* rsi_5 = rsi_4 + rdx_16
        *(arg1 + 0x450) = *(rdi_4 + 0x20)
        *(arg1 + 0x458) = *(rsi_5 + 0x20)
        int64_t* rcx_19 = data_143f0f180
        int64_t rax_32 = (*(*rcx_19 + 0x130))(rcx_19, &data_143f02b98, *(rdi_4 + 0x10), 0, 
            *(*(arg1 + 0x710) + 0xe8) << 6, zx.d(r14.b) + 1)
        void* rdx_19 = *(arg1 + 0x710)
        memcpy(rax_32, *(rdx_19 + 0xe0), *(rdx_19 + 0xe8) << 6)
        int64_t* rcx_21 = data_143f0f180
        (*(*rcx_21 + 0x138))(rcx_21, &data_143f02b98, *(rdi_4 + 0x10))
        int64_t* rcx_22 = data_143f0f180
        int64_t rax_36 = (*(*rcx_22 + 0x130))(rcx_22, &data_143f02b98, *(rsi_5 + 0x10), 0, 
            *(*(arg1 + 0x710) + 0xe8) << 6, zx.d(r14.b) + 1)
        void* rdx_23 = *(arg1 + 0x710)
        memcpy(rax_36, *(rdx_23 + 0xe0), *(rdx_23 + 0xe8) << 6)
        int64_t* rcx_24 = data_143f0f180
        result = (*(*rcx_24 + 0x138))(rcx_24, &data_143f02b98, *(rsi_5 + 0x10))
        *(arg1 + 0x720) = 1

return result
