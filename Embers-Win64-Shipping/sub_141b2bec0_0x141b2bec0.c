// 函数: sub_141b2bec0
// 地址: 0x141b2bec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x2a].d != 0)
    void var_88
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_88, &arg1[0x2c], &arg1[0x30])
    int64_t arg_18
    sub_141a514d0(&arg_18)
    int64_t* i = arg1[0x29]
    
    for (void* r12_1 = i + sx.q(arg1[0x2a].d) * 0xc; i != r12_1; i += 0xc)
        int64_t zmm0_1 = *i
        int128_t zmm3_1
        zmm3_1.q = fconvert.d(zmm0_1.d)
        int32_t var_90_1 = i[1].d
        int32_t arg_8
        sub_141a6d2f0(&arg_8, arg1, arg_18, zmm3_1)
        int32_t rdx_3 = arg_8
        int64_t var_70_1 = zmm0_1
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x24)
        int32_t rax_4 = sub_141a376d0(&var_88, rdx_3)
        int32_t r8_3 = rax_4
        int32_t r13_1 = arg1[0x2f].d
        arg1[0x2f].d = r13_1 + 1
        
        if (r13_1 + 1 s> *(arg1 + 0x17c))
            sub_1405c4f50(&arg1[0x2e])
            r8_3 = rax_4
        
        int64_t rsi_2 = sx.q(r8_3) * 0x30
        int64_t rdx_6 = arg1[0x2e] + rsi_2
        memmove(rdx_6 + 0x30, rdx_6, (r13_1 - r8_3) * 0x30)
        void* rdi_2 = arg1[0x2e]
        int64_t rax_7 = var_68
        *(rsi_2 + rdi_2) = zmm0_1
        *(rsi_2 + rdi_2 + 8) = rax_7
        int64_t var_60
        sub_140596d10(rdi_2 + 0x10 + rsi_2, &var_60)
        void* rbx_2 = rsi_2 + rdi_2
        *(rbx_2 + 0x20) = 0
        uint32_t count
        *(rbx_2 + 0x28) = count
        int64_t var_50
        
        if (count != 0)
            sub_1405da9e0(rbx_2 + 0x20, count, 0)
            memcpy(*(rbx_2 + 0x20), var_50, count)
        else
            *(rbx_2 + 0x2c) = 0
        
        if (var_50 != 0)
            sub_140a74f90(var_50)
        
        int64_t rcx_13 = var_60
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    sub_141a58a10(arg1)

return j_sub_140ce3290(arg1) __tailcall
