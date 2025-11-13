// 函数: sub_141a4c090
// 地址: 0x141a4c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[1].d)

if (rax.d s> 0)
    int64_t* r11_1 = *arg1
    int64_t r10_1 = 0
    
    do
        void* result = *r11_1
        char arg_8 = 1
        int32_t arg_c = arg2
        char rcx = *(result + 0x90)
        
        if (rcx == 2)
        label_141a4c0f5:
            char r8_2 = *(result + 0x98)
            void* rcx_2 = result + 0x98
            char arg_18 = 1
            int32_t arg_1c = arg2
            
            if (r8_2 == 2)
            label_141a4c12d:
                
                if ((*(result + 0xb0) & 1) != 0)
                    return result
            else
                int32_t temp0_1 = *(rcx_2 + 4)
                
                if (temp0_1 s> arg2 || (temp0_1 s>= arg2 && r8_2 == 1))
                    goto label_141a4c128
                
                if (r8_2 == 1)
                    rcx_2 = &arg_18
                label_141a4c128:
                    
                    if (*(rcx_2 + 4) == *(result + 0x9c))
                        goto label_141a4c12d
        else
            int32_t r8_1 = *(result + 0x94)
            char* rcx_1
            
            if (r8_1 s< arg2)
                rcx_1 = result + 0x90
            label_141a4c0ef:
                
                if (*(rcx_1 + 4) == r8_1)
                    goto label_141a4c0f5
            else if (r8_1 s> arg2)
                if (rcx == 1)
                    rcx_1 = &arg_8
                    goto label_141a4c0ef
            else if (rcx == 1)
                rcx_1 = result + 0x90
                goto label_141a4c0ef
        
        r10_1 += 1
        r11_1 = &r11_1[1]
    while (r10_1 s< rax)

return 0
