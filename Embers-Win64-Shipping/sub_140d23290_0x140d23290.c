// 函数: sub_140d23290
// 地址: 0x140d23290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (Concurrency::details::LockQueueNode::IsTicketValid(arg1)
        == Concurrency::details::LockQueueNode::IsTicketValid(arg2)
        && sub_140ab3ed0(arg1) == sub_140ab3ed0(arg2))
    char rax_3 = sub_140ab3dc0(arg1)
    uint8_t rax_1 = sub_140ab3dc0(arg2)
    
    if (rax_3 == rax_1)
        if (sub_140ab3dc0(arg1) != 0)
            return true
        
        if (sub_140ab25c0(arg1, arg2, arg4) != 0)
            if (sub_140ab3e50(arg1) != 0)
                int64_t rax_6 = sub_140ab1d50(arg1)
                sub_140a7b410()
                
                if (rax_6 == &data_143db99c8)
                    char rbx_4 = 0
                    int64_t var_38
                    __builtin_memset(&var_38, 0, 0x14)
                    uint64_t var_30
                    sub_140ab2150(arg1, &var_38, &var_30, arg4, arg3)
                    int64_t arg_20 = 0
                    uint64_t var_20 = 0
                    int32_t var_18 = 0
                    sub_140ab2150(arg2, &arg_20, &var_20, arg4, arg3)
                    uint64_t r9 = var_30
                    uint64_t r10 = var_20
                    
                    if (var_38 == arg_20)
                        uint64_t rax_8 = &data_142d40450
                        uint64_t r8_2 = &data_142d40450
                        
                        if (var_18 != 0)
                            r8_2 = r10
                        
                        int32_t var_28
                        
                        if (var_28 != 0)
                            rax_8 = r9
                        
                        uint64_t r8_3 = r8_2 - rax_8
                        uint32_t i
                        uint32_t rdx_3
                        
                        do
                            rdx_3 = zx.d(*rax_8)
                            i = zx.d(*(rax_8 + r8_3))
                            
                            if (rdx_3 != i)
                                break
                            
                            rax_8 += 2
                        while (i != 0)
                        
                        if (rdx_3 - i == 0)
                            rbx_4 = 1
                    
                    if (r10 != 0)
                        sub_140a74f90(r10)
                        r9 = var_30
                    
                    if (r9 != 0)
                        sub_140a74f90(r9)
                    
                    return zx.q(rbx_4)
            
            return true
        
        uint8_t rax_10 = Concurrency::details::LockQueueNode::IsTicketValid(arg1)
        
        if (rax_10 == 0)
            rax_1 = sub_140ab3ed0(arg1)
        
        if (rax_10 != 0 || rax_1 != 0)
            int64_t* rax_11 = sub_140a4c340(arg2)
            int16_t** rax_12 = sub_140a4c340(arg1)
            int16_t* const result = &data_142d40450
            int16_t* const r8_4
            
            if (rax_11[1].d == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *rax_11
            
            if (rax_12[1].d != 0)
                result = *rax_12
            
            void* r8_5 = r8_4 - result
            uint32_t i_1
            uint32_t rdx_5
            
            do
                rdx_5 = zx.d(*result)
                i_1 = zx.d(*(result + r8_5))
                
                if (rdx_5 != i_1)
                    break
                
                result = &result[1]
            while (i_1 != 0)
            
            result.b = rdx_5 - i_1 == 0
            return result

return 0
