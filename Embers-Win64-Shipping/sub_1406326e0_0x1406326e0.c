// 函数: sub_1406326e0
// 地址: 0x1406326e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 != 0)
    result = sub_141c122a0()
    
    if (result != 0)
        int64_t rdx = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (result << 3)) == rdx && arg1 != 0)
            result = sub_1423de540(data_143f5b298, arg1, 0)
            int64_t result_1 = result
            
            if (result != 0)
                int32_t var_18_1 = 0xffffffff
                int64_t var_28 = 0
                int32_t var_20_1 = 0
                sub_140d3cc80(sub_141c122a0(), &var_28, 1, 0x10, 0)
                int32_t r8_2 = var_20_1
                int32_t rcx_4 = var_18_1 + 1
                int64_t rdx_3 = var_28
                int32_t var_18_2 = rcx_4
                
                if (rcx_4 s< r8_2)
                    while (*(rdx_3 + (sx.q(rcx_4) << 3)) == 0)
                        result = zx.q(rcx_4 + 1)
                        var_18_2 = result.d
                        rcx_4 = result.d
                        
                        if (result.d s>= r8_2)
                            break
                
                while (true)
                    if (rcx_4 s>= 0 && rcx_4 s< r8_2)
                        int64_t* rcx_5 = *(rdx_3 + (sx.q(rcx_4) << 3))
                        
                        if ((*(*rcx_5 + 0x150))(rcx_5) == result_1)
                            void* rdi_1 = *(var_28 + (sx.q(var_18_2) << 3))
                            void* rax_4 = sub_141c122a0()
                            void* const rax_7
                            
                            if (rax_4 == 0)
                                rax_7 = nullptr
                            else
                                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                                
                                if (rax_5.d s> *(arg2 + 0x38))
                                    rax_7 = nullptr
                                else
                                    rax_7 = arg2
                                    
                                    if (*(*(arg2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                                        rax_7 = nullptr
                            
                            void* rdx_5 = *(rdi_1 + 0x10)
                            result = sx.q(*(rax_7 + 0x38))
                            
                            if (result.d s<= *(rdx_5 + 0x38)
                                    && *(*(rdx_5 + 0x30) + (result << 3)) == rax_7 + 0x30
                                    && sub_141bae2b0(*(var_28 + (sx.q(var_18_2) << 3))).b != 0)
                                int64_t rcx_12 = var_28
                                
                                if (rcx_12 != 0)
                                    sub_140a74f90(rcx_12)
                                
                                result.b = 1
                                goto label_1406328c6
                        
                        r8_2 = var_20_1
                        rcx_4 = var_18_2 + 1
                        rdx_3 = var_28
                        var_18_2 = rcx_4
                        
                        if (rcx_4 s>= r8_2)
                            continue
                        else
                            while (*(rdx_3 + (sx.q(rcx_4) << 3)) == 0)
                                result = zx.q(rcx_4 + 1)
                                var_18_2 = result.d
                                rcx_4 = result.d
                                
                                if (result.d s>= r8_2)
                                    break
                            
                            continue
                    
                    if (rdx_3 == 0)
                        break
                    
                    sub_140a74f90(rdx_3)
                    break

result.b = 0
label_1406328c6:
return result
