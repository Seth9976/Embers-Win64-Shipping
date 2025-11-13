// 函数: sub_141eea2a0
// 地址: 0x141eea2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x212) & 8) != 0 && (*(arg1 + 0x8a) & 1) == 0)
    if (arg1[0x18] != 0)
        if (sub_140d3e110(&arg1[0xe6]) == 0)
            sub_140d3a3a0(&arg1[0xe6], arg1[0x18])
        
        int32_t rcx_2
        rcx_2.b = *(arg1 + 0x73c) == 0
        
        if ((rcx_2.b & sub_140b5b8a0(arg1[0xe7].d, 0)) != 0)
            arg1[0xe7] = arg1[0x19]
        
        if (sub_14243ade0(sub_1405be820(arg1)) != 0)
            void* r8_1 = arg1[0x18]
            int64_t* rcx_5 = *(r8_1 + 0xd0)
            void* rdx_2 = &rcx_5[sx.q(*(r8_1 + 0xd8))]
            int64_t arg_8
            
            if (rcx_5 == rdx_2)
            label_141eea379:
                arg_8 = 0
                sub_141f4a650(arg1, nullptr, 0)
            else
                while (true)
                    if (*rcx_5 == arg1)
                        if (*(arg1 + 0x89) s>= 0)
                            arg_8.d = 0
                            (*(*arg1 + 0x400))(arg1, &arg_8)
                        else if (*(arg1 + 0x66c) != 0 && *(arg1 + 0x66d) != 0)
                            if (*(arg1 + 0x66e) == 0 && arg1[0xe7] == arg1[0x19])
                                goto label_141eea42a
                            
                            arg_8.d = 0
                            (*(*arg1 + 0x400))(arg1, &arg_8)
                        else if (arg1[0xe7] != arg1[0x19])
                            arg_8.d = 0
                            (*(*arg1 + 0x400))(arg1, &arg_8)
                        else
                        label_141eea42a:
                            
                            if (sub_1406ee470(&arg1[0xe6], r8_1, r8_1.d) != 0)
                                arg_8.d = 0
                                (*(*arg1 + 0x400))(arg1, &arg_8)
                        
                        break
                    
                    rcx_5 = &rcx_5[1]
                    
                    if (rcx_5 == rdx_2)
                        goto label_141eea379
    
    int32_t rax_7 = *(arg1 + 0x124)
    arg1[0xea] = *(arg1 + 0x11c)
    *(arg1 + 0x75c) = arg1[0x25]
    int64_t zmm0 = *(arg1 + 0x134)
    arg1[0xeb].d = rax_7
    *(arg1 + 0x764) = arg1[0x26].d
    int32_t rax_9 = *(arg1 + 0x13c)
    arg1[0xed] = zmm0
    arg1[0xee].d = rax_9

return sub_141f435c0(arg1) __tailcall
