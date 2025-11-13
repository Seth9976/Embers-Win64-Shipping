// 函数: sub_1411d5720
// 地址: 0x1411d5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x80)
int32_t r12 = 0
int64_t arg_10 = 0
int64_t* result = (*(*rcx + 0x40))(rcx, zx.q(*(arg1 + 0x10)), &arg_10)
int64_t* result_1 = result

if (*(arg1 + 0x10) == 3 && result != 0)
    result = (*(*result + 0x158))(result_1)
    
    if (result.b != 0)
        int64_t arg_8
        result = (*(*result_1 + 0x1e8))(result_1, &arg_8)
        
        if ((*result u>> 7 & 1) != 0)
            result = (*(*result_1 + 0x1d8))(result_1)
            
            if (result.d == 0)
            label_1411d57cb:
                
                if (arg4 == 0 || *(arg4 + 0x37) s< 0)
                    result = (*(*result_1 + 0x20))(result_1)
                    
                    if (result.d != 3)
                        int64_t rdi_1 = arg_10
                        
                        if (rdi_1 == 0)
                            rdi_1 = *(arg2 + 0x80)
                        
                        arg_8 = sub_141261c60(arg2)
                        result = sub_141261c10(arg2, result_1, &arg_8)
                        char rcx_9 = *(arg1 + 0x28)
                        int32_t r15_1 = result.d
                        int128_t zmm6
                        
                        if (rcx_9 == 0)
                            result = sub_141261bd0(arg2, result_1, &arg_8)
                            rcx_9 = *(arg1 + 0x28)
                            r12 = result.d
                            
                            if (rcx_9 == 0)
                                return sub_1411b8f20(arg1, arg2, arg3, arg4, arg5, zmm6, arg6, 
                                    rdi_1, result_1, r15_1, result.d)
                        
                        if (rcx_9 == 1)
                            return sub_1411b9200(arg1, arg2, arg3, arg4, arg5, zmm6, arg6, rdi_1, 
                                result_1, r15_1, r12)
                        
                        if (rcx_9 == 2)
                            if (arg7 == 0)
                                return sub_1411b8c40(arg1, arg2, arg3, arg4, arg5, zmm6, arg6, 
                                    rdi_1, result_1, r15_1, r12)
                            
                            return sub_1411b8960(arg1, arg2, arg3, arg4, arg5, zmm6, arg6, rdi_1, 
                                result_1, r15_1, r12)
            else
                result = (*(*result_1 + 0x1d8))(result_1)
                
                if (result.d == 1)
                    goto label_1411d57cb

return result
