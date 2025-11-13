// 函数: sub_142398310
// 地址: 0x142398310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x440)

if (rcx != 0)
    char rax = *(arg1 + 0x44c)
    
    if (arg2 == 1)
        if (arg3 != 0)
            *(arg1 + 0x450) = arg3
        label_142398462:
            rax |= 0x80
        label_142398467:
            *(arg1 + 0x44c) = rax
            sub_140d25500(arg1)
            uint64_t rax_6
            rax_6.b = 1
            return rax_6
        
        int32_t arg_8
        
        if (rax s>= 0)
            if (*(rcx + 0x7c) == 0)
                if (*(arg1 + 0x450) != 0)
                    goto label_142398462
                
                void* rcx_3 = data_143ddb400
                arg_8 = 0
                sub_140af3c10(rcx_3, DevOptions.StaticLighting", DefaultStaticMeshLightingRes", 
                    &arg_8, &data_143de57f0)
                int32_t rax_3 = arg_8
                *(arg1 + 0x44c) |= 0x80
                *(arg1 + 0x450) = rax_3
                sub_140d25500(arg1)
                uint64_t rax_4
                rax_4.b = 1
                return rax_4
        else if (*(arg1 + 0x450) == arg3)
            if (*(rcx + 0x7c) != arg3)
                rax &= 0x7f
                goto label_142398467
            
            void* rcx_1 = data_143ddb400
            arg_8 = 0
            sub_140af3c10(rcx_1, DevOptions.StaticLighting", DefaultStaticMeshLightingRes", &arg_8, 
                &data_143de57f0)
            *(arg1 + 0x450) = arg_8
            sub_140d25500(arg1)
            uint64_t rax_2
            rax_2.b = 1
            return rax_2
    else if (rax s>= 0)
        if (*(rcx + 0x7c) != 0)
            *(arg1 + 0x450) = 0
            goto label_142398462
    else if (*(arg1 + 0x450) != 0)
        if (*(rcx + 0x7c) == 0)
            rax &= 0x7f
            goto label_142398467
        
        *(arg1 + 0x450) = 0
        sub_140d25500(arg1)
        uint64_t rax_5
        rax_5.b = 1
        return rax_5

return 0
