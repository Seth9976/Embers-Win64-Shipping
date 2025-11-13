// 函数: sub_141f47ca0
// 地址: 0x141f47ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*(arg1 + 0x14f))

if (arg2 != result)
    void* r14_1 = nullptr
    int32_t var_30 = 0xffffffff
    int64_t var_38_1 = 0
    int32_t var_2c_1 = 0
    void var_28
    sub_140d3a3a0(&var_28, nullptr)
    void* const rbx_1 = nullptr
    char var_3f
    
    if ((arg1[0x11].b & 1) != 0)
        void* rax_1
        
        if (arg1[0x15] == 0)
            rax_1 = sub_141ee69e0(arg1)
        
        if (arg1[0x15] != 0 || rax_1 != 0)
            if ((arg1[0x11].b & 2) != 0)
                sub_141efe1c0(arg1, nullptr)
            
            rbx_1 = arg1[0x15]
            
            if (rbx_1 == 0)
                rbx_1 = sub_141ee69e0(arg1)
            
            void* const var_48_1 = rbx_1
            char var_40_1 = 1
            var_3f = (var_3f & 0xfd) | 1
            sub_141ee0b60(arg1)
            arg1[0x15] = 0
    
    sub_140d3a3a0(&var_28, rbx_1)
    int64_t* rdx_1 = nullptr
    
    if (sub_140d3e110(&var_28) != 0)
        rdx_1 = arg1
    
    sub_140d3a3a0(&var_30, rdx_1)
    *(arg1 + 0x14f) = arg2.b
    
    if (arg2.b == 2)
        int64_t* rbx_2 = arg1[0x1a]
        int64_t rdi_1 = 0
        uint64_t rsi_2 = sx.q(arg1[0x1b].d) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[arg1[0x1b]])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx_9 = *rbx_2
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x4e0))(rcx_9, zx.q(arg2))
                
                rbx_2 = &rbx_2[1]
                rdi_1 += 1
            while (rdi_1 != rsi_2)
    
    result = sub_140d3e110(&var_30)
    
    if (result.b != 0)
        int64_t rax_7 = sub_140d3c6e0(&var_28)
        int64_t* rax_8 = sub_140d3c6e0(&var_30)
        int32_t rax_9 = *(rax_8 + 0xc)
        
        if (rax_9 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_9)
            uint32_t rdx_4 = zx.d(temp0_1)
            int32_t rax_11 = temp1_1 + rdx_4
            r14_1 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                + sx.q(zx.d(rax_11.w) - rdx_4) * 0x18
        
        result = *(r14_1 + 8) u>> 0x1d
        
        if ((result.b & 1) == 0)
            if ((rax_8[0x11].b & 1) != 0)
                sub_141ee0b60(rax_8)
            
            rax_8[0x15] = rax_7
            int64_t var_48_2 = rax_7
            char var_3f_1 = (var_3f & 0xfd) | 1
            char var_40_2 = 1
            sub_141ee0740(rax_8, 0)
            result = sub_141efe1c0(rax_8, nullptr)

return result
