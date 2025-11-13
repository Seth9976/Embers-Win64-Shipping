// 函数: sub_14231bde0
// 地址: 0x14231bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = sub_141f64a80(arg1)
char* result_1 = result

if (result != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x818) s> 0)
        int64_t* rbx_1 = nullptr
        
        do
            if (arg4 == 0)
                result = sub_1422349f0(*(*(arg1 + 0x810) + rbx_1), arg3, arg2)
            else
                int32_t rax_1 = sub_142249710(result_1, *(*(rbx_1 + *(arg1 + 0x810)) + 0x18))
                
                if (rax_1 == 0xffffffff)
                    result = sub_1422349f0(*(*(arg1 + 0x810) + rbx_1), arg3, arg2)
                else
                    result = *(result_1 + 0x40)
                    
                    if (*(*(result + (sx.q(rax_1) << 3)) + 0x88) == 0)
                        result = sub_1422349f0(*(*(arg1 + 0x810) + rbx_1), arg3, arg2)
            
            i += 1
            rbx_1 = &rbx_1[1]
        while (i s< *(arg1 + 0x818))

return result
