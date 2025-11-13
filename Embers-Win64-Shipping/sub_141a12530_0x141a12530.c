// 函数: sub_141a12530
// 地址: 0x141a12530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x52) == 0)
    int32_t arg_8
    sub_141a0a4e0(&data_1439cbfb0, &arg_8, arg1 + 0x10)
    int64_t rax = sx.q(arg_8)
    void* rdi_1 = nullptr
    int64_t rdx_2
    
    if (rax.d == 0xffffffff)
        rdx_2 = 0
    else
        rdx_2 = rax * 0x70 + data_1439cbfb0
    
    int64_t rax_1 = rdx_2 + 0x18
    
    if (rdx_2 == 0)
        rax_1 = 0
    
    if (rax_1 == 0)
        int64_t* rax_2 = j_sub_140a82f30(0x298)
        int64_t* rax_3
        
        if (rax_2 == 0)
            rax_3 = nullptr
        else
            rax_3 = sub_1419fc270(rax_2)
        
        arg_8.q = rax_3
        sub_1419f6710(&data_1439cc030, arg1 + 0x10, &arg_8)
        int64_t* rax_4 = sub_142006940()
        int64_t r8_3 = *rax_4
        (*(r8_3 + 0x180))(rax_4, &data_1439cc140, r8_3)
    
    void* rax_6 = sub_1419f6f20(&data_1439cbfb0, sub_141a0f5f0(arg1 + 0x10), arg1 + 0x10)
    sub_1419eda60(rax_6, &arg_8, *(arg1 + 0x28))
    int64_t rcx_4 = sx.q(arg_8)
    
    if (rcx_4.d != 0xffffffff)
        result = *rax_6 + rcx_4 * 0x18
    
    if (rcx_4.d == 0xffffffff || result == 0 || result[1] == 0)
        void* arg_18
        int64_t* var_40_1 = &arg_18
        arg_18 = arg1
        void* var_48 = arg1 + 0x28
        sub_1419f6c00(rax_6, &arg_8, &var_48, nullptr)
        int64_t rax_7 = *(arg1 + 0x28)
        arg_8.q = rax_7
        arg3 -= 1
        arg_8 = rax_7.d
        int64_t r8_8 = arg_8.q
        *(arg1 + 0x52) = 1
        sub_1419eda60(rax_6, &arg_8, r8_8)
        int64_t rax_8 = sx.q(arg_8)
        void* r15_1
        
        if (rax_8.d != 0xffffffff)
            r15_1 = *rax_6 + rax_8 * 0x18
        
        void* const r15_2
        
        if (rax_8.d == 0xffffffff || r15_1 == 0)
            r15_2 = nullptr
        else
            r15_2 = *(r15_1 + 8)
        
        *(arg1 + 0x30) = r15_2
        int64_t rax_10 = *(arg1 + 0x28)
        arg_8.q = rax_10
        arg_8 = rax_10.d - 1
        sub_1419eda60(rax_6, &arg_8, arg_8.q)
        int64_t rax_12 = sx.q(arg_8)
        void* r14_1
        
        if (rax_12.d != 0xffffffff)
            r14_1 = *rax_6 + rax_12 * 0x18
        
        void* const r14_2
        
        if (rax_12.d == 0xffffffff || r14_1 == 0)
            r14_2 = nullptr
        else
            r14_2 = *(r14_1 + 8)
        
        *(arg1 + 0x38) = r14_2
        int64_t rax_14 = *(arg1 + 0x28)
        arg_8.q = rax_14
        arg_8 = rax_14.d + 1
        sub_1419eda60(rax_6, &arg_8, arg_8.q)
        int64_t rax_16 = sx.q(arg_8)
        void* rax_18
        
        if (rax_16.d != 0xffffffff)
            rax_18 = *rax_6 + rax_16 * 0x18
        
        int64_t rax_19
        
        if (rax_16.d == 0xffffffff || rax_18 == 0)
            rax_19 = 0
        else
            rax_19 = *(rax_18 + 8)
        
        *(arg1 + 0x40) = rax_19
        int64_t rax_20 = *(arg1 + 0x28)
        arg_8.q = rax_20
        arg3 += 1
        arg_8 = rax_20.d
        sub_1419eda60(rax_6, &arg_8, arg_8.q)
        int64_t rax_21 = sx.q(arg_8)
        void* rax_23
        
        if (rax_21.d != 0xffffffff)
            rax_23 = *rax_6 + rax_21 * 0x18
        
        int64_t rax_24
        
        if (rax_21.d == 0xffffffff || rax_23 == 0)
            rax_24 = 0
        else
            rax_24 = *(rax_23 + 8)
        
        *(arg1 + 0x48) = rax_24
        
        if (r15_2 != 0)
            *(r15_2 + 0x48) = arg1
            r14_2 = *(arg1 + 0x38)
        
        if (r14_2 != 0)
            *(r14_2 + 0x40) = arg1
        
        void* rax_25 = *(arg1 + 0x40)
        
        if (rax_25 != 0)
            *(rax_25 + 0x38) = arg1
        
        result = *(arg1 + 0x48)
        
        if (result != 0)
            result[6] = arg1
        
        if (arg2 != 0)
            uint32_t r8_13 = sub_141a0a410(&data_1439cc030, &arg_8, arg1 + 0x10)
            int64_t rax_26 = sx.q(arg_8)
            
            if (rax_26.d != 0xffffffff)
                rdi_1 = data_1439cc030 + rax_26 * 0x28
            
            return sub_141a12290(*(rdi_1 + 0x18), arg2, r8_13)

return result
