// 函数: sub_140a18be0
// 地址: 0x140a18be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0xb]

if (rdi != 0)
    if (*(rdi + 0x28) == 0xffffffff)
        (*(*(rdi + 0x20) + 0x28))(rdi + 0x20)
    
    void* rcx_1 = arg1[0x11]
    bool z_1
    
    if (0 == *(rcx_1 + 0xc))
        *(rcx_1 + 0xc) = 0
        z_1 = true
    else
        *(rcx_1 + 0xc)
        z_1 = false
    
    if (not(z_1))
        void* rcx_2 = arg1[0x10]
        
        if (*(rcx_2 + 0x3c) != 2 || *(rcx_2 + 0x28) != *(rcx_2 + 0x34)
                || *(rcx_2 + 0x2c) != *(rcx_2 + 0x38))
            sub_140a16b90(arg1)
        else
            int64_t* rcx_3 = data_143f0f180
            void arg_8
            memcpy((*(*rcx_3 + 0x510))(rcx_3, &data_143f02b98, *(rdi + 8), 0, 1, &arg_8, 0, 1), 
                arg1[7], arg1[8].d)
            int64_t* rcx_5 = data_143f0f180
            void* var_50_1
            var_50_1.b = 1
            (*(*rcx_5 + 0x518))(rcx_5, &data_143f02b98, *(rdi + 8), 0, 0, var_50_1)
        
        int64_t* rcx_7 = arg1[9]
        
        if ((*(*rcx_7 + 0x18))(rcx_7) == 0)
            int64_t var_38 = arg1[0xb]
            void* rax_11 = arg1[0xc]
            void* var_30_1 = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 0xc) += 1
            
            sub_140a0e3b0(arg1[9], &var_38)
        
        void* rcx_9 = arg1[0x11]
        *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) = 0

void* rcx_10 = arg1[0x10]
bool z_2

if (0 == *(rcx_10 + 0x20))
    *(rcx_10 + 0x20) = 0
    z_2 = true
else
    *(rcx_10 + 0x20)
    z_2 = false

if (not(z_2))
    if (*(arg1[0x10] + 0x40) != 0 && arg1[0x12].b != 0)
        *(arg1 + 0x34) -= 1
        arg1[0x12].b = 0
    
    sub_140a169c0(arg1)
    int32_t rdx_3 = arg1[5].d
    int32_t result = *(arg1 + 0x34) + 1
    
    if (result s>= rdx_3)
        char rcx_14 = arg1[6].b
        
        if (rcx_14 == 0)
            result.b = 1
            return result
        
        int32_t rax_18 = rdx_3 - 1
        
        if (rcx_14 != 2)
            rax_18 = 0
        
        *(arg1 + 0x34) = rax_18
        
        if (sub_140a183c0(arg1) != 0)
            int64_t var_18 = arg1[0xb]
            void* rax_20 = arg1[0xc]
            void* var_10_1 = rax_20
            
            if (rax_20 != 0)
                *(rax_20 + 0xc) += 1
            
            sub_140a0e3b0(arg1[9], &var_18)
    else
        *(arg1 + 0x34) = result
        
        if (sub_140a183c0(arg1) != 0)
            int64_t var_28 = arg1[0xb]
            void* rax_17 = arg1[0xc]
            void* var_20_1 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 0xc) += 1
            
            sub_140a0e3b0(arg1[9], &var_28)

return 0
