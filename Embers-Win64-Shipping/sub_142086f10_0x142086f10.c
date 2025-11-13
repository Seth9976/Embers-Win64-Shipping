// 函数: sub_142086f10
// 地址: 0x142086f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 0x10)

if (((result[0x33] u>> 0x17).b & 1) != 0)
    result = *(arg2 + 0x10)
    
    if (((result[0x33] u>> 0x17).b & 1) != 0)
        int64_t* var_70 = nullptr
        int32_t i_4 = 0
        result = sub_142075130(arg1, &var_70)
        
        if (i_4 s> 0)
            void** var_60 = nullptr
            int32_t var_58_1 = 0
            result = sub_142075130(arg2, &var_60)
            void** rdi_1 = var_60
            int64_t rbx_1 = sx.q(var_58_1)
            void* r12_1 = &rdi_1[rbx_1 * 3]
            
            if (rdi_1 != r12_1)
                do
                    void* i = *rdi_1
                    
                    if (*(i + 0x20) == arg1)
                        int64_t* rax = var_70
                        void* rcx_3 = &rax[sx.q(i_4) * 3]
                        char rsi_1
                        
                        if (rax == rcx_3)
                        label_142086ff5:
                            rsi_1 = 0
                        else
                            while (*rax != i)
                                rax = &rax[3]
                                
                                if (rax == rcx_3)
                                    goto label_142086ff5
                            
                            rsi_1 = 1
                        
                        void arg_8
                        result = sub_140865c40(arg3, &arg_8, i)
                        
                        if (rsi_1 != 0 && *result == 0xffffffff)
                            int32_t var_98_1 = 0x7f800000
                            void* result_1 = sub_140d2e1f0(i, arg2, *(i + 0x18), 0xfffffff, 0, 0)
                            void* var_78 = *rdi_1
                            void** var_50 = &var_78
                            void** var_48_1 = &result_1
                            void var_88
                            sub_140bd2cc0(arg3, &var_88, &var_50, nullptr)
                            int64_t rbx_2 = sx.q(arg4[1].d)
                            int32_t rax_3 = (rbx_2 + 1).d
                            arg4[1].d = rax_3
                            
                            if (rax_3 s> *(arg4 + 0xc))
                                sub_1405a4d70(arg4)
                            
                            result = result_1
                            *(*arg4 + (rbx_2 << 3)) = result
                    
                    rdi_1 = &rdi_1[3]
                while (rdi_1 != r12_1)
                
                rbx_1 = zx.q(var_58_1)
                rdi_1 = var_60
            
            if (rbx_1.d != 0)
                void* rdi_2 = &rdi_1[1]
                int32_t i_1
                
                do
                    int64_t rcx_9 = *rdi_2
                    
                    if (rcx_9 != 0)
                        result = sub_140a74f90(rcx_9)
                    
                    rdi_2 += 0x18
                    i_1 = rbx_1.d
                    rbx_1 = zx.q(rbx_1.d - 1)
                while (i_1 != 1)
                rdi_1 = var_60
            
            if (rdi_1 != 0)
                result = sub_140a74f90(rdi_1)
        
        int32_t i_3 = i_4
        
        if (i_3 != 0)
            void* rbx_4 = &var_70[1]
            int32_t i_2
            
            do
                int64_t rcx_11 = *rbx_4
                
                if (rcx_11 != 0)
                    result = sub_140a74f90(rcx_11)
                
                rbx_4 += 0x18
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        int64_t* rcx_12 = var_70
        
        if (rcx_12 != 0)
            return sub_140a74f90(rcx_12)

return result
