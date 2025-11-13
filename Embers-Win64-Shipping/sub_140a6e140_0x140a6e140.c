// 函数: sub_140a6e140
// 地址: 0x140a6e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a54810() == 0)
    if ((*(*arg1 + 0x20))(arg1) != 0)
        void*** rax_6 = j_sub_140a82f30(0x58)
        void*** rbx_1 = rax_6
        
        if (rax_6 == 0)
            rbx_1 = nullptr
        else
            __builtin_memset(&rax_6[1], 0, 0x20)
            rax_6[5] = -1
            __builtin_memset(&rax_6[6], 0, 0x19)
            *rbx_1 = &data_142e61fc8
            rbx_1[0xa] = 0
            *(rbx_1 + 0x44) = data_14399eaa0
            data_14399eaa0 += 1
            int64_t r14_1 = sx.q(*(rbx_1 + 0x44))
            sub_140a755d0()
            EnterCriticalSection(&data_143db7b50)
            
            if (data_143db9380 == data_143db93bc)
            label_140a6e2d2:
                int32_t var_40
                sub_140a694e0(&data_143db7b78, &var_40)
                int32_t rax_9 = var_40
                int32_t* var_38
                *var_38 = r14_1.d
                *(var_38 + 8) = rbx_1
                var_38[4] = 0xffffffff
                void var_48
                sub_140a6f7b0(&data_143db7b78, &var_48, r14_1.d, var_38, rax_9, nullptr)
            else
                void* rdx_1 = data_143db95c0
                void* r9_1 = &data_143db93c0
                
                if (rdx_1 != 0)
                    r9_1 = rdx_1
                
                int32_t rax_8 = *(r9_1 + (((sx.q(data_143db95c8) - 1) & r14_1) << 2))
                
                if (rax_8 == 0xffffffff)
                    goto label_140a6e2d2
                
                void* r9_2 = data_143db9378
                
                while (true)
                    void* r8_4 = &data_143db7b78
                    
                    if (r9_2 != 0)
                        r8_4 = r9_2
                    
                    int64_t rdx_2 = sx.q(rax_8) * 3
                    
                    if (*(r8_4 + (rdx_2 << 3)) == r14_1.d)
                        break
                    
                    rax_8 = *(r8_4 + (rdx_2 << 3) + 0x10)
                    
                    if (rax_8 == 0xffffffff)
                        goto label_140a6e2d2
                
                if (rax_8 == 0xffffffff)
                    goto label_140a6e2d2
            
            LeaveCriticalSection(&data_143db7b50)
        
        if ((*rbx_1)[5](rbx_1, arg1, arg2, zx.q(arg3), arg4, 0, 0) != 0)
            return rbx_1
        
        void** r8_7 = *rbx_1
        r8_7[4](rbx_1, 1, r8_7)
else
    void*** rax_1 = sub_140b66270()
    
    if (rax_1 == 0)
        return rax_1
    
    if ((*rax_1)[5](rax_1, arg1, arg2, zx.q(arg3), arg4, arg5, arg6) != 0)
        return rax_1
    
    (*rax_1)[4](rax_1, 1)

return nullptr
