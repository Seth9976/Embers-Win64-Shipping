// 函数: sub_1421cea30
// 地址: 0x1421cea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result = (*(*arg2 + 0x150))(arg2)

if (result != 0)
    void* rcx_1 = arg1
    int64_t rbp_1 = arg2[0x1e]
    int64_t r12_1 = arg2[0x1f]
    int64_t result_2 = sx.q(result)
    result = arg2[0x23].d - 1
    int32_t r15_1 = *(arg2 + 0x114)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int64_t result_1 = sx.q(result)
    void var_48
    uint128_t zmm2
    
    if ((*(rcx_1 + 0x78) & 1) != 0)
        if (result s>= 0)
            int64_t result_3
            
            do
                void* rdi_6 = zx.q(zx.d(*(r12_1 + (result_1 << 1))) * r15_1) + rbp_1
                
                if ((*(rdi_6 + 0x5c) & 0x4000000) == 0)
                    int64_t var_60_2 = 0
                    int64_t* rax_3
                    rax_3, zmm6 = sub_141fe56b0(rcx_1 + 0x30, &var_48, *(rdi_6 + 0xc), arg3, 
                        (arg2[3]).d, nullptr)
                    rcx_1 = arg1
                    zmm2 = zx.o(*rax_3)
                    result = rax_3[1].d
                    arg3.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f* zmm6.d
                    arg3.d = arg3.d f* *(result_2 + rdi_6 + 0x34)
                    *(result_2 + rdi_6 + 0x30) = zmm2.d f* zmm6.d f* *(result_2 + rdi_6 + 0x30)
                    *(result_2 + rdi_6 + 0x34) = arg3.d
                    *(result_2 + rdi_6 + 0x38) = result f* zmm6.d f* *(result_2 + rdi_6 + 0x38)
                
                result_3 = result_1
                result_1 -= 1
            while (result_3 - 1 s>= 0)
    else if (result s>= 0)
        int64_t result_4
        
        do
            void* rdi_3 = zx.q(zx.d(*(r12_1 + (result_1 << 1))) * r15_1) + rbp_1
            
            if ((*(rdi_3 + 0x5c) & 0x4000000) == 0)
                int64_t var_60_1 = 0
                int64_t* rax_2
                rax_2, zmm6 =
                    sub_141fe56b0(rcx_1 + 0x30, &var_48, *(rdi_3 + 0xc), arg3, (arg2[3]).d, nullptr)
                rcx_1 = arg1
                zmm2 = zx.o(*rax_2)
                result = rax_2[1].d
                arg3.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f* zmm6.d
                arg3.d = arg3.d f+ *(result_2 + rdi_3 + 0x34)
                *(result_2 + rdi_3 + 0x30) = zmm2.d f* zmm6.d f+ *(result_2 + rdi_3 + 0x30)
                *(result_2 + rdi_3 + 0x34) = arg3.d
                *(result_2 + rdi_3 + 0x38) = result f* zmm6.d f+ *(result_2 + rdi_3 + 0x38)
            
            result_4 = result_1
            result_1 -= 1
        while (result_4 - 1 s>= 0)

return result
