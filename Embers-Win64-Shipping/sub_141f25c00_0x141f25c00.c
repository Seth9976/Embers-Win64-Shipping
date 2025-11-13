// 函数: sub_141f25c00
// 地址: 0x141f25c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140ae16d0(arg2, &result_1, arg3)
int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (*(arg1 + 0x88) & 1) == 0 || *(arg1 + 0x14f) != result.b)
    result = result_1
    
    if (*(arg1 + 0x208) != result)
        *(arg1 + 0x208) = result
        void* rax_1 = *(arg1 + 0xa8)
        
        if (rax_1 != 0)
        label_141f25c61:
            int64_t* rcx_3 = *(rax_1 + 0x1b0)
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x160))(rcx_3, arg1)
        else
            rax_1 = sub_141ee69e0(arg1)
            
            if (rax_1 != 0)
                goto label_141f25c61
        
        return sub_140920c10(&data_143a2d768, arg1)

return result
