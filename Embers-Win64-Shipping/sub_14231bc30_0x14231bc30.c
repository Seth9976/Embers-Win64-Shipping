// 函数: sub_14231bc30
// 地址: 0x14231bc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = sub_141f64a80(arg1)
char* result_1 = result

if (result != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x818) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            if (arg5 == 0)
                result = sub_1422348a0(*(*(arg1 + 0x810) + rdi_1), arg2.d, arg3.d, arg4.d)
            else
                int32_t rax_1 = sub_142249710(result_1, *(*(rdi_1 + *(arg1 + 0x810)) + 0x18))
                
                if (rax_1 == 0xffffffff)
                    result = sub_1422348a0(*(*(arg1 + 0x810) + rdi_1), arg2.d, arg3.d, arg4.d)
                else
                    result = *(result_1 + 0x40)
                    
                    if (*(*(result + (sx.q(rax_1) << 3)) + 0x88) == 0)
                        result = sub_1422348a0(*(*(arg1 + 0x810) + rdi_1), arg2.d, arg3.d, arg4.d)
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(arg1 + 0x818))

return result
