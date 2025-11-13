// 函数: sub_140387ee0
// 地址: 0x140387ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 1)
    if (*(arg1 + 4) == 0)
        *arg1 = *arg2
        *(arg1 + 0x1e8) = opus_packet_get_samples_per_frame(arg2, 0x1f40)
    label_140387f45:
        int32_t rax_5 = opus_packet_get_nb_frames(arg2, arg3)
        
        if (rax_5 s>= 1)
            int64_t rcx_2 = sx.q(*(arg1 + 4))
            
            if ((rax_5 + rcx_2.d) * *(arg1 + 0x1e8) s<= 0x3c0)
                void arg_18
                int32_t result = sub_140386c90(arg2, arg3, arg4, &arg_18, &arg1[8 + (rcx_2 << 3)], 
                    &arg1[0x188 + (rcx_2 << 1)], nullptr, nullptr)
                
                if (result s< 1)
                    return result
                
                *(arg1 + 4) += rax_5
                return 0
        
        return -4
    
    if (((*arg1 ^ *arg2) & 0xfc) == 0)
        goto label_140387f45

return 0xfffffffc
