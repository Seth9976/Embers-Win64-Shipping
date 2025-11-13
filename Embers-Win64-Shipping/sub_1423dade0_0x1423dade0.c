// 函数: sub_1423dade0
// 地址: 0x1423dade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("DebugHUD")

if (arg3 != 0)
    int64_t* rcx = *(arg3 + 0x58)
    int32_t var_40
    (*(*rcx + 0x18))(rcx, &var_40)
    int32_t var_48 = 0x64
    int32_t rax_2
    
    if (arg4 == 0)
        rax_2 = var_40
    else
        rax_2 = *(arg4 + 0x40)
    
    char rcx_1 = *(arg3 + 0x94)
    int32_t zmm2 = 0x3f800000
    uint128_t zmm1_1
    
    if (rcx_1 == 0)
        zmm1_1 = *(arg3 + 0xa4)
    else
        zmm1_1 = 0x3f800000
    
    uint128_t zmm0_1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f/ zmm1_1.d
    zmm0_1.d = zmm0_1.d f- 110f
    int32_t r13_1 = int.d(zmm0_1.d)
    int32_t var_3c
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_3c)).d f* 0.200000003f
    
    if (rcx_1 == 0)
        zmm2 = *(arg3 + 0xa4)
    
    int64_t rax_3 = *arg2
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d))).d f/ zmm2
    int32_t rax_4 = (*(rax_3 + 0x190))(arg2, arg3, zx.q(r13_1), zx.q(int.d(zmm0_1.d)))
    void* r14_1 = data_143f5b298
    int32_t i = 0
    int32_t arg_18 = rax_4
    
    if (*(r14_1 + 0xd20) s> 0)
        int64_t rdi_1 = 0
        
        do
            int64_t rbp_1 = *(r14_1 + 0xd18)
            
            if (*(rdi_1 + rbp_1 + 0x38) != 0)
                int64_t* rcx_3 = arg2[6]
                char rax_6
                
                if (rcx_3 != 0)
                    rax_6 = (*(*rcx_3 + 0x168))(rcx_3, rbp_1 + 8 + rdi_1)
                
                if (rcx_3 == 0 || rax_6 != 0)
                    char rax_7 = *(rdi_1 + rbp_1 + 0x58)
                    int32_t* rbx_1 = &arg_18
                    int32_t rdx_5 = 0x64
                    
                    if (rax_7 == 0)
                        rbx_1 = &var_48
                    
                    if (rax_7 != 0)
                        rdx_5 = r13_1
                    
                    *rbx_1 = (*(rdi_1 + rbp_1 + 0x38))(sx.q(*(rdi_1 + rbp_1 + 0x40)) + r14_1, arg1, 
                        arg2, arg3, rdx_5, *rbx_1, arg5, arg6)
            
            i += 1
            rdi_1 += 0x60
        while (i s< *(r14_1 + 0xd20))

return sub_140b37f60("DebugHUD")
