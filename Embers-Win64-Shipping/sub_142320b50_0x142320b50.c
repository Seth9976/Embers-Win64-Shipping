// 函数: sub_142320b50
// 地址: 0x142320b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f64a80(arg1)
uint64_t result_1 = result

if (*(arg1 + 0x430) != 0 && result != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x818) s> 0)
        int64_t rbx_1 = 0
        int64_t arg_10 = 0
        
        do
            result = *(arg1 + 0x810)
            void* rbx_2 = *(rbx_1 + result)
            
            if (rbx_2 != 0)
                result = sub_142233f30(rbx_2)
                
                if (result.b != 0)
                    result = sub_141f5e0e0(arg1, *(rbx_2 + 0x18))
                    int32_t k = result.d
                    
                    if (result.d != 0xffffffff)
                        int32_t j = 0
                        
                        if (*(result_1 + 0x48) s> 0)
                            int64_t* r14_1 = nullptr
                            
                            do
                                void* rdi_1 = *(r14_1 + *(result_1 + 0x40))
                                result = sub_141f5e0e0(arg1, *(rdi_1 + 0x80))
                                
                                if (result.d != 0xffffffff)
                                    if (result.d == k)
                                    label_142320c61:
                                        void* rbx_3 = *(r14_1 + *(arg1 + 0x800))
                                        
                                        if (rbx_3 != 0)
                                            char rax_3 = sub_142222800(rbx_3, arg2)
                                            char rax_4
                                            
                                            if (rax_3 != 0)
                                                rax_4 = sub_14221b2f0(rbx_3)
                                            
                                            if (rax_3 == 0 || rax_4 == 0)
                                                arg2 = sub_142221990(rbx_3, 1, 0, arg2)
                                        
                                        int64_t rbx_4 = *(rdi_1 + 0x80)
                                        result = sub_141f64a80(arg1)
                                        
                                        if (result != 0 && *(result + 0x58) == *(arg1 + 0x818))
                                            result = sub_142249810(result, rbx_4)
                                            
                                            if (result.d != 0xffffffff)
                                                result = sx.q(result.d)
                                                void* rbx_6 = *(*(arg1 + 0x810) + (result << 3))
                                                
                                                if (rbx_6 != 0)
                                                    result = zx.q(*(rbx_6 + 0x118))
                                                    
                                                    if ((result.b & 1) != 0
                                                            || (*(rbx_6 + 0x128) & 1) != 0
                                                            || (*(rbx_6 + 0x138) & 1) != 0)
                                                        sub_142234cb0(rbx_6, 0, 0, 0)
                                                        result = zx.q(*(rbx_6 + 0x118))
                                                    
                                                    if ((result.b & 2) != 0
                                                            || (*(rbx_6 + 0x128) & 2) != 0
                                                            || (*(rbx_6 + 0x138) & 2) != 0)
                                                        result = sub_142234d60(rbx_6, 0, 0, 0)
                                                    
                                                    char rcx_16 = *(rbx_6 + 0x188)
                                                    
                                                    if (rcx_16 != 1)
                                                        result.b = *(rbx_6 + 0x16c) & 1
                                                        
                                                        if (result.b != 0)
                                                            result = sub_142234e60(rbx_6, 0, 0)
                                                            rcx_16 = *(rbx_6 + 0x188)
                                                    else if ((*(rbx_6 + 0x14c) & rcx_16) != 0
                                                            || (*(rbx_6 + 0x15c) & rcx_16) != 0)
                                                        result = sub_142234e60(rbx_6, 0, 0)
                                                        rcx_16 = *(rbx_6 + 0x188)
                                                    
                                                    if (rcx_16 != 1)
                                                        if ((*(rbx_6 + 0x16c) & 2) != 0)
                                                            result = sub_1422349f0(rbx_6, 0, 0)
                                                    else if ((*(rbx_6 + 0x14c) & 2) != 0
                                                            || (*(rbx_6 + 0x15c) & 2) != 0)
                                                        result = sub_1422349f0(rbx_6, 0, 0)
                                    else if (result.d s> k)
                                        int64_t rdx_3 = *(*(arg1 + 0x430) + 0x1a8)
                                        result = zx.q(*(rdx_3 + sx.q(result.d) * 0xc + 8))
                                        
                                        while (result.d != k)
                                            result = zx.q(*(rdx_3 + sx.q(result.d) * 0xc + 8))
                                            
                                            if (result.d == 0xffffffff)
                                                goto label_142320da6
                                        
                                        goto label_142320c61
                                
                            label_142320da6:
                                j += 1
                                r14_1 = &r14_1[1]
                            while (j s< *(result_1 + 0x48))
            
            i += 1
            rbx_1 = arg_10 + 8
            arg_10 = rbx_1
        while (i s< *(arg1 + 0x818))

return result
