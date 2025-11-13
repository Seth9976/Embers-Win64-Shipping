// 函数: sub_141402dc0
// 地址: 0x141402dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg2[0x56] != 0)
    (*(*arg2 + 0x570))(arg2)
    void var_70
    int32_t* rax_1 = sub_140acc920(&var_70, &arg2[0x41])
    bool cond:1_1 = (*(arg2 + 0x22c) & 1) == 0
    uint128_t zmm0 = arg2[0x42].d
    float zmm1[0x4] = *(arg2 + 0x214)
    int128_t zmm7
    zmm7.d = arg1.d f* *rax_1
    int128_t zmm8
    zmm8.d = arg1.d f* rax_1[1]
    int128_t zmm9
    zmm9.d = arg1.d f* rax_1[2]
    int128_t zmm6
    zmm6.d = arg1.d f* rax_1[3]
    int32_t var_d8 = zmm7.d
    int32_t var_d4_1 = zmm8.d
    int32_t var_d0_1 = zmm9.d
    int32_t var_cc_1 = zmm6.d
    int32_t var_c8_1 = zmm0.d
    float var_c4_1 = zmm1[0]
    
    if (not(cond:1_1))
        void var_60
        int32_t* rax_2
        float zmm6_1
        rax_2, zmm6_1 = sub_140ad9f00(&var_60, arg2[0x44].d)
        zmm7.d = zmm7.d f* *rax_2
        zmm8.d = zmm8.d f* rax_2[1]
        zmm9.d = zmm9.d f* rax_2[2]
        zmm6_1 = zmm6_1 f* rax_2[3]
        var_d8 = zmm7.d
        int32_t var_d4_2 = zmm8.d
        int32_t var_d0_2 = zmm9.d
        float var_cc_2 = zmm6_1
    
    zmm0 = var_d8.o
    int64_t rcx
    int64_t var_b8_1 = rcx
    int64_t var_c0 = *(arg2[0x56] + 0xc0)
    int64_t var_a0_1 = var_c8_1.q
    
    if (sub_140a80f40() != 0)
        return sub_1413c8e40(&var_c0)
    
    if (data_143f138f4 == 0)
        uint32_t rax_5
        
        if (data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_5.b != 0)
            uint128_t var_98 = var_c0.o
            uint64_t var_78_1 = var_a0_1
            float var_88_1[0x4] = zmm0
            return sub_1413c8e40(&var_98)
    
    void** rax_6 = sub_1413dda90(&var_d8, nullptr, 0xff)
    void* rcx_8 = *rax_6
    *(rcx_8 + 0x10) = var_c0.o
    *(rcx_8 + 0x20) = zmm0
    *(rcx_8 + 0x30) = var_a0_1
    void* rcx_9 = *rax_6
    int32_t r8_1 = rax_6[2].d
    int64_t* rdx_3 = rax_6[1]
    int64_t* rbx_1 = *(rcx_9 + 0x40)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_18
    
    result = sub_1405e4b20(rcx_9, rdx_3, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_18)

return result
