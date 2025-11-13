// 函数: sub_141a07450
// 地址: 0x141a07450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x88]

if (rax != 0)
    int64_t* rax_1 = *(rax + 0x50)
    
    if (rax_1 != 0 && rax_1[1].d != 0 && *(**rax_1 + 0xec) != 0)
        void*** result = j_sub_140a82f30(0x650)
        
        if (result == 0)
            return 0
        
        char rax_3 = arg1[0x97].b
        sub_14237f650(result, arg1, 0)
        *result = &data_14301ec20
        result[0xc8] = 0
        result[0xc9] = 0
        
        if ((result[7].b & 2) == 0)
            *(result + 0x3b) |= 0x20
        
        int32_t rdx_3 = arg1[0x96].d
        result[0xc9].d = 0
        
        if (*(result + 0x64c) != rdx_3)
            sub_140775cf0(&result[0xc8], rdx_3)
        
        int64_t* r14 = arg1[0x95]
        void* r13 = &r14[sx.q(arg1[0x96].d)]
        
        if (r14 == r13)
            return result
        
        do
            int64_t rdi_1 = sx.q(result[0xc9].d)
            int64_t rbx_1 = *r14
            int32_t rax_5 = (rdi_1 + 1).d
            result[0xc9].d = rax_5
            
            if (rax_5 s> *(result + 0x64c))
                sub_1407755b0(&result[0xc8])
            
            void*** rdi_3 = &result[0xc8][rdi_1 * 0xb]
            
            if (rdi_1 * 0x58 != neg.q(result[0xc8]))
                void* rax_6 = arg1[0x15]
                
                if (rax_6 == 0)
                    rax_6 = sub_141ee69e0(arg1)
                
                rdi_3[1] = 0
                *rdi_3 = &data_14301ec18
                rdi_3[2] = rax_6
                *(rdi_3 + 0x18) = *(arg1 + 0x498)
                rdi_3[5] = rbx_1
                rdi_3[0xa].b = rax_3
                *(rdi_3 + 0x51) = 0
                *(rdi_3 + 0x54) = 0xffffffff
                __builtin_memset(&rdi_3[6], 0, 0x20)
            
            r14 = &r14[1]
        while (r14 != r13)
        
        return result

return 0
