// 函数: sub_140964bc0
// 地址: 0x140964bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 4))

if (result.d == 0)
    arg1[0x351] = 0
    return result

if (result.d != 7)
    float zmm2[0x2] = arg1[0x350].d
    
    if (zmm2[0] <= 0f)
    label_140964c56:
        
        if (*(arg1 + 0x199d) == 0)
            if (arg1[0x359].d s< arg1[0x358].d)
                char rax_1 = *(arg1 + 0x1acc)
                
                if (rax_1 != 1 && rax_1 - 6 u> 1)
                    sub_142155880(arg1)
                    arg1[0x351] = 0
                    *(arg1 + 0x1acc) = 4
                    return rax_1 - 6
            
            *(arg1 + 0x1acc) = 7
            sub_142155880(arg1)
            int64_t var_18
            int64_t* rax_3 = (*(*arg1 + 0x280))(arg1, &var_18)
            int16_t* const rdi_1
            
            if (rax_3[1].d == 0)
                rdi_1 = &data_142d40450
            else
                rdi_1 = *rax_3
            
            sub_140fc89f0(arg3, *(arg2 + 4))
            int16_t* const var_38_1 = rdi_1
            int64_t var_28
            sub_140a2e390(&var_28, 
                UIpNetConnection::HandleSocketSendResult: Socket->SendTo failed with error %i (%s). %s ", 
                zx.q(*(arg2 + 4)))
            int64_t rcx_3 = var_18
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            void* rdx_2 = arg1[0xb]
            result = sub_1423d2710(data_143f5b298, *(rdx_2 + 0x140), rdx_2, 3, &var_28)
            int64_t rcx_5 = var_28
            
            if (rcx_5 != 0)
                return sub_140a74f90(rcx_5)
    else
        result = arg1[0xb]
        double zmm3 = arg1[0x351]
        double zmm1 = *(result + 0x218)
        
        if (not(zmm3 != 0.0))
            arg1[0x351] = zmm1
            return result
        
        if (not(zmm1 - zmm3 f< _mm_cvtps_pd(zmm2)))
            goto label_140964c56

return result
