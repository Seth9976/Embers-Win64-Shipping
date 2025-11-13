// 函数: sub_140bb4090
// 地址: 0x140bb4090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    uint64_t rax = zx.q(*(arg1 + 0x29))
    
    if ((rax.b & 1) == 0)
        int32_t rcx = *(arg1 + 0x110)
        
        if (rcx == 0)
            *(arg1 + 0x110) = 1
            int64_t rbx_1 = -1
            
            if (*(arg3 + 0x63) == rcx.b)
                rbx_1 = *(arg3 + 0x10)
            
            *(arg1 + 0xd0) = rbx_1
            
            if (rbx_1 s< 0x20)
                rax.b |= 1
                *(arg1 + 0x29) = rax.b
            else if (data_143de5452 == 0)
                int64_t rax_1 = sx.q(data_1439a9658)
                int32_t rdi_1 = 5
                
                if (rax_1 s<= rbx_1)
                    rbx_1 = rax_1
                
                int32_t rax_2 = data_143e1a334
                uint64_t r9_2
                
                if (rax_2 s>= 0)
                    r9_2 = 5
                    
                    if (rax_2 s< 5)
                        r9_2 = zx.q(rax_2)
                else
                    r9_2 = 0
                
                int64_t* rcx_2 = *(arg1 + 0x90)
                *(arg1 + 0xa8) = (*(*rcx_2 + 0x10))(rcx_2, 0, rbx_1, r9_2, arg1 + 0x120, 0)
                int32_t rax_5 = data_143e1a334
                
                if (rax_5 s< 0)
                    rdi_1 = 0
                else if (rax_5 s< 5)
                    rdi_1 = rax_5
                
                int64_t* rcx_3 = *(arg1 + 0x90)
                *(arg1 + 0xb0) = (*(*rcx_3 + 0x10))(rcx_3, 0, rbx_1, zx.q(rdi_1) | 0x100, 0, 0)
            else
                EnterCriticalSection(&data_143e1a588)
                uint64_t r8 = *(arg1 + 0xd0)
                *(arg1 + 0x100) = r8
                sub_140bb0fd0(arg1, 0, r8, 1, 0)
                *(arg1 + 0x110) = 2
                LeaveCriticalSection(&data_143e1a588)
        else if (rcx == 1)
            int64_t r14_1 = *(arg3 + 0x10)
            
            if (*(arg3 + 0x63) == 0 || r14_1 == 0)
                *(arg3 + 0x10) = 0
            
            if ((*(arg3 + 0x63) == 0 || r14_1 == 0) && r14_1 != 0)
                int64_t rdi_3 = *(arg1 + 0xd0)
                int64_t rbx_2 = sx.q(data_1439a9658)
                void** var_1e8
                sub_140b4c2a0(&var_1e8)
                int64_t var_150_1 = 0
                
                if (rbx_2 s<= rdi_3)
                    rdi_3 = rbx_2
                
                var_1e8 = &data_142d84578
                int64_t var_148_1 = rdi_3
                char var_140_1 = 0
                sub_140b55290(&var_1e8, 1)
                var_1e8[0x1b](&var_1e8, 1)
                var_1e8 = &data_142d847a8
                void var_138
                sub_140cd3be0(&var_138)
                sub_140cd4b90(&var_1e8, &var_138, arg4)
                char var_1bf
                int32_t var_134
                int32_t var_118
                
                if ((var_1bf & 1) != 0 || sx.q(var_118) s> *(arg1 + 0xd0) || var_134 s< 0xd6)
                    *(arg1 + 0x29) |= 1
                else
                    EnterCriticalSection(&data_143e1a588)
                    uint64_t r8_3 = sx.q(var_118)
                    *(arg1 + 0x100) = r8_3
                    *(arg1 + 0x114) = 0
                    sub_140bb0fd0(arg1, 0, r8_3, 1, 0)
                    *(arg1 + 0x110) = 2
                    LeaveCriticalSection(&data_143e1a588)
                
                sub_140a74f90(r14_1)
                sub_140b977c0(&var_138)
                var_1e8 = &data_142d84578
                
                if (var_140_1 != 0)
                    sub_140a74f90(r14_1)
                    int64_t var_158_2 = 0
                
                sub_140b4cb40(&var_1e8)
            else
                *(arg1 + 0x29) |= 1
                *(arg1 + 0x110) = 2
        
        return 

*(arg1 + 0x29) |= 1
