// 函数: sub_1419a1e40
// 地址: 0x1419a1e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (*arg1 != 0)
    uint128_t zmm0 = *arg1
    uint128_t var_1d8_1 = zmm0
    uint128_t var_158 = zmm0
    zmm0 = arg1[1]
    uint128_t var_1c8_1 = zmm0
    uint128_t var_148_1 = zmm0
    zmm0 = arg1[2]
    uint128_t var_1b8_1 = zmm0
    uint128_t var_138_1 = zmm0
    zmm0 = arg1[3]
    uint128_t var_1a8_1 = zmm0
    uint128_t var_128_1 = zmm0
    zmm0 = arg1[4]
    uint128_t var_198_1 = zmm0
    uint128_t var_118_1 = zmm0
    zmm0 = arg1[5]
    uint128_t var_188_1 = zmm0
    uint128_t var_108_1 = zmm0
    zmm0 = arg1[6]
    uint128_t var_178_1 = zmm0
    uint128_t var_f8_1 = zmm0
    zmm0 = arg1[7]
    uint128_t var_168_1 = zmm0
    uint128_t var_e8_1 = zmm0
    zmm0 = zx.o(arg1[8].q)
    uint64_t arg_8 = zmm0.q
    uint64_t var_d8_1 = zmm0.q
    
    if (sub_140a80f40() == 0)
        uint32_t rax_2
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
            void var_38
            void** rax_4 = sub_14199b5d0(&var_38, nullptr, 0xff)
            void* rcx_3 = *rax_4
            *(rcx_3 + 0x10) = var_1d8_1
            *(rcx_3 + 0x20) = var_1c8_1
            *(rcx_3 + 0x30) = var_1b8_1
            *(rcx_3 + 0x40) = var_1a8_1
            *(rcx_3 + 0x50) = var_198_1
            *(rcx_3 + 0x60) = var_188_1
            *(rcx_3 + 0x70) = var_178_1
            *(rcx_3 + 0x80) = var_168_1
            *(rcx_3 + 0x90) = arg_8
            void* rcx_4 = *rax_4
            int32_t r8_1 = rax_4[2].d
            int64_t* rdx_1 = rax_4[1]
            int64_t* rbx_3 = *(rcx_4 + 0xa0)
            int64_t* arg_10 = rbx_3
            int32_t* rdi_3 = &rbx_3[9]
            
            if (rbx_3 != 0)
                *rdi_3 += 1
                rbx_3 = arg_10
            
            result = sub_1419ae430(rcx_4, rdx_1, r8_1, 1)
            
            if (rbx_3 != 0)
                result = *rdi_3
                *rdi_3 -= 1
                
                if (result == 1)
                    result = sub_140a2f6e0(arg_10)
        else
            uint128_t var_b8_1 = var_1c8_1
            uint128_t var_a8_1 = var_1b8_1
            uint128_t var_98_1 = var_1a8_1
            uint128_t var_88_1 = var_198_1
            uint128_t var_78_1 = var_188_1
            result = var_1d8_1.d
            uint128_t var_68_1 = var_178_1
            uint128_t var_58_1 = var_168_1
            uint128_t var_c8 = var_1d8_1
            uint64_t var_48_1 = arg_8
            
            if (result s> 0)
                void* rbx_2 = &var_c8:8
                uint64_t rdi_2 = zx.q(result)
                uint64_t i
                
                do
                    int64_t* rcx_1 = *rbx_2
                    result = (*(*rcx_1 + 0x30))(rcx_1)
                    rbx_2 += 8
                    i = rdi_2
                    rdi_2 -= 1
                while (i != 1)
    else
        result = var_158.d
        
        if (result s> 0)
            void* rbx_1 = &var_158:8
            uint64_t rdi_1 = zx.q(result)
            uint64_t i_1
            
            do
                int64_t* rcx = *rbx_1
                result = (*(*rcx + 0x30))(rcx)
                rbx_1 += 8
                i_1 = rdi_1
                rdi_1 -= 1
            while (i_1 != 1)
    
    *arg1 = 0

return result
