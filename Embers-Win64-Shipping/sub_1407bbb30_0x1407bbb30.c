// 函数: sub_1407bbb30
// 地址: 0x1407bbb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (data_1439c7a0c != 0)
    uint64_t rbx_1 = 0
    int64_t rsi_1 = *(arg1 + 0x30)
    int64_t rdi_1 = sx.q(*(arg1 + 0x38))
    int64_t r15_1 = *(arg1 + 0x28)
    int128_t zmm6 = *(arg1 + 0x40)
    int128_t zmm7 = *(arg1 + 0x44)
    int128_t zmm8 = *(arg1 + 0x48)
    int128_t zmm9 = *(arg1 + 0x4c)
    int32_t var_ac_1 = zmm9.d
    int32_t var_b8_1 = zmm6.d
    int32_t var_b4_1 = zmm7.d
    int32_t var_b0_1 = zmm8.d
    int64_t var_c0 = r15_1
    uint64_t var_a8 = 0
    int32_t var_a0_1 = rdi_1.d
    int32_t r14_1
    
    if (rdi_1.d != 0)
        sub_140638750(&var_a8, rdi_1.d, 0)
        rbx_1 = var_a8
        memcpy(rbx_1, rsi_1, (rdi_1 << 2).d)
        int32_t var_9c
        r14_1 = var_9c
        rdi_1 = zx.q(var_a0_1)
        zmm9 = var_ac_1
        zmm8 = var_b0_1
        zmm7 = var_b4_1
        zmm6 = var_b8_1
        r15_1 = var_c0
    else
        r14_1 = 0
        int32_t var_9c_1 = 0
    
    if (sub_140a80f40() == 0)
        uint32_t rax_1
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
            void var_d8
            void** rax_2
            int32_t zmm6_1
            rax_2, zmm6_1 = sub_140789780(&var_d8, nullptr, 0xff)
            void* rcx_7 = *rax_2
            *(rcx_7 + 0x18) = zmm6_1
            *(rcx_7 + 0x1c) = zmm7.d
            *(rcx_7 + 0x20) = zmm8.d
            *(rcx_7 + 0x24) = zmm9.d
            *(rcx_7 + 0x10) = r15_1
            *(rcx_7 + 0x28) = rbx_1
            *(rcx_7 + 0x30) = rdi_1.d
            *(rcx_7 + 0x34) = r14_1
            void* rcx_8 = *rax_2
            int32_t r8_3 = rax_2[2].d
            int64_t* rdx_3 = rax_2[1]
            int64_t* rbx_2 = *(rcx_8 + 0x40)
            int64_t* arg_18 = rbx_2
            int32_t* rdi_2 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rdi_2 += 1
                rbx_2 = arg_18
            
            result = sub_1405e4b20(rcx_8, rdx_3, r8_3, 1)
            
            if (rbx_2 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    return sub_140a2f6e0(arg_18)
        else
            int32_t var_90_1 = zmm6.d
            int32_t var_8c_1 = zmm7.d
            int32_t var_88_1 = zmm8.d
            int32_t var_84_1 = zmm9.d
            int64_t var_98 = r15_1
            uint64_t var_80_1 = rbx_1
            int32_t var_78_1 = rdi_1.d
            int32_t var_74_1 = r14_1
            result = sub_140781900(&var_98, &data_143f02b98)
            
            if (rbx_1 != 0)
                return sub_140a74f90(rbx_1)
    else
        result = sub_140781900(&var_c0, &data_143f02b98)
        
        if (rbx_1 != 0)
            return sub_140a74f90(rbx_1)

return result
