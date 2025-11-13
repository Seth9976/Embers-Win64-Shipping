// 函数: sub_142c556d0
// 地址: 0x142c556d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a0) != 0)
    int32_t arg_8
    sub_142c55200(arg1, &arg_8)
    int128_t zmm0
    
    if (arg_8 s>= 0)
        void* rcx = *(arg1 + 0xb0)
        int64_t r8_1 = *(arg1 + 0x1b0)
        int64_t rax_4 = *(rcx + 0x20)
        
        if (rax_4 s< r8_1 || rax_4 s> r8_1)
        label_142c55761:
            zmm0 = *(rcx + 0x20)
        label_142c55765:
            *(arg1 + 0x1a8)
            *(arg1 + 0x1b0) = zmm0
            jump(*(arg1 + 0x1a0))
        
        int32_t r8_2 = *(rcx + 0x28)
        int32_t r9_1 = *(arg1 + 0x1b8)
        
        if (r8_2 u< r9_1)
            goto label_142c55761
        
        int32_t rax_5
        rax_5.b = r8_2 u> r9_1
        
        if (rax_5 != 0)
            goto label_142c55761
    else if (*(arg1 + 0x1b0) != 0 || sbb.d(0, 0, 0 u< *(arg1 + 0x1b8)) != 0)
        zmm0 = data_1436b1068
        goto label_142c55765

return 0
