// 函数: sub_14076e7d0
// 地址: 0x14076e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x8a) & 1) != 0 && arg1[0xa5] == 0)
    sub_141ef4e60(arg1, 0)

if ((*(arg1 + 0x54c) & 4) != 0 && (*(arg1 + 0x8a) & 1) == 0)
    if (arg1[0x18] != 0)
        if (sub_140d3e110(&arg1[0xad]) == 0)
            sub_140d3a3a0(&arg1[0xad], arg1[0x18])
        
        int32_t rcx_2
        rcx_2.b = *(arg1 + 0x574) == 0
        
        if ((rcx_2.b & sub_140b5b8a0(arg1[0xae].d, 0)) != 0)
            arg1[0xae] = arg1[0x19]
        
        void* r8_1 = arg1[0x18]
        int64_t* rcx_3 = *(r8_1 + 0xd0)
        void* rdx_2 = &rcx_3[sx.q(*(r8_1 + 0xd8))]
        int64_t arg_8
        
        if (rcx_3 == rdx_2)
        label_14076e8ae:
            arg_8 = 0
            sub_141f4a650(arg1, nullptr, 0)
        else
            while (true)
                if (*rcx_3 == arg1)
                    if (*(arg1 + 0x89) s>= 0)
                        arg_8.d = 0
                        (*(*arg1 + 0x400))(arg1, &arg_8)
                    else if (arg1[0xaf].b != 0 && *(arg1 + 0x579) != 0)
                        if (*(arg1 + 0x57a) == 0 && arg1[0xae] == arg1[0x19])
                            goto label_14076e95f
                        
                        arg_8.d = 0
                        (*(*arg1 + 0x400))(arg1, &arg_8)
                    else if (arg1[0xae] != arg1[0x19])
                        arg_8.d = 0
                        (*(*arg1 + 0x400))(arg1, &arg_8)
                    else
                    label_14076e95f:
                        
                        if (sub_1406ee470(&arg1[0xad], r8_1, r8_1.d) != 0)
                            arg_8.d = 0
                            (*(*arg1 + 0x400))(arg1, &arg_8)
                    
                    break
                
                rcx_3 = &rcx_3[1]
                
                if (rcx_3 == rdx_2)
                    goto label_14076e8ae
    
    int32_t rax_5 = *(arg1 + 0x124)
    arg1[0xb0] = *(arg1 + 0x11c)
    *(arg1 + 0x58c) = arg1[0x25]
    int64_t zmm0 = *(arg1 + 0x134)
    arg1[0xb1].d = rax_5
    *(arg1 + 0x594) = arg1[0x26].d
    int32_t rax_7 = *(arg1 + 0x13c)
    arg1[0xb3] = zmm0
    arg1[0xb4].d = rax_7

return sub_141f20900(arg1) __tailcall
