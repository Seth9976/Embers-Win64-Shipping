// 函数: sub_14232fbf0
// 地址: 0x14232fbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x27f) != 0 || *(arg1 + 0x280) != 0)
    int64_t rax_4 = *(arg1 + 0x2e0)
    int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_4 = &rbx_3[1]
    
    if (rcx_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_4 = &rbx_3[1]
    
    *(arg2 + 0x30) = rcx_4
    *rbx_3 = rax_4
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_8[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142d549c8
    rcx_8[2].d = 1
    rcx_8[3] = rbx_3
    rcx_8[4].d = 1
else
    int64_t r8_1 = *(arg1 + 0x98)
    
    if (r8_1 != 0)
        int64_t* rcx = data_143f0f180
        void arg_8
        (*(*rcx + 0x338))(rcx, &arg_8, r8_1)
        sub_1405d1600(arg1 + 0x2e0, &arg_8)
        sub_1405d1550(&arg_8)
        void* rax_2 = *(arg1 + 0x2e0)
        int32_t r9 = *(rax_2 + 0x64)
        int32_t r8_2 = *(rax_2 + 0x60)
        void* arg_18 = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        sub_142376dc0(*(arg1 + 0x2e8), &arg_18, r8_2, r9)
