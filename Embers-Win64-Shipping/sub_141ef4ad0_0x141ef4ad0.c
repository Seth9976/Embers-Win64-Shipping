// 函数: sub_141ef4ad0
// 地址: 0x141ef4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = data_143f3a9b8
sub_140b34200("CharacterMovementServerMove", r12)

if ((*(*arg1 + 0x5c0))(arg1) != 0 && (*(arg1 + 0x8a) & 1) != 0)
    void* rsi_1 = arg1[0x98]
    
    if (rsi_1 == 0)
        void* rax_3 = (*(arg1[0x28] + 0x30))(&arg1[0x28])
        arg1[0x98] = rax_3
        rsi_1 = rax_3
    
    if ((*(*arg1 + 0x9c8))(arg1, arg2, rsi_1) != 0)
        uint64_t rbp
        rbp.b = 1
        int64_t* rdi_1 = *(arg1[0x29] + 0x258)
        void* rax_7
        int64_t rax_8
        void* rdx_1
        
        if (rdi_1 != 0)
            rax_7 = sub_14256a090()
            rdx_1 = rdi_1[2]
            rax_8 = sx.q(*(rax_7 + 0x38))
        
        int512_t zmm2
        
        if (rdi_1 == 0 || rax_8.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
            rdi_1 = nullptr
        else
            zmm2.o = arg2
            char rax_11 = (*(*rdi_1 + 0xcf8))(rdi_1, arg1[0x29], zmm2)
            rbp = zx.q(rax_11)
            
            if (rax_11 == 0)
                int32_t rcx_5 = data_143dbb200
                *arg3 = data_143dbb1f8.q
                arg3[1].d = rcx_5
        
        int32_t rax_12 = arg3[1].d
        int64_t var_58 = *arg3
        int32_t var_50_1 = rax_12
        void* rax_13 = sub_1405be820(arg1)
        uint128_t zmm0_2 = sub_141dc5440(arg1[0x29], rax_13)
        uint128_t zmm6
        
        if (*(rsi_1 + 0x8c) == 0)
            zmm0_2.d = zmm0_2.d f* *(rsi_1 + 0x7c)
            zmm6.d = arg2.d f- *(rsi_1 + 0x60)
            zmm6 = _mm_min_ss(zmm6.d, zmm0_2.d)
        else
            zmm6 = *(rsi_1 + 0x90)
        
        *(rsi_1 + 0x60) = arg2.d
        zmm0_2.q = fconvert.d(zmm6.d)
        zmm0_2.q = zmm0_2.q f+ *(rsi_1 + 0x68)
        *(rsi_1 + 0x68) = zmm0_2.q
        uint128_t zmm1 = *(rax_13 + 0x520)
        *(rsi_1 + 8) = zmm1.d
        *(rsi_1 + 0x74) = zmm1.d
        zmm0_2.d = _mm_cvtepi32_ps(zx.o(arg7.w)).d f* 0.00549316406f
        zmm1 = _mm_cvtepi32_ps(zx.o(arg6))
        int32_t var_68 = zmm0_2.d
        zmm1.d = zmm1.d f* 1.40625f
        int32_t var_60_1 = zmm1.d
        zmm0_2.d = _mm_cvtepi32_ps(zx.o(arg7 u>> 0x10)).d f* 0.00549316406f
        int32_t var_64_1 = zmm0_2.d
        
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x668))(rdi_1, &var_68)
        
        if (rbp.b != 0)
            if (*(sub_142437e30(rax_13, 0, 1) + 0x370) == 0 && not(zmm6.d f<= 0f))
                if (rdi_1 != 0)
                    (*(*rdi_1 + 0xac0))(rdi_1, zmm6)
                
                zmm2.o = zmm6
                (*(*arg1 + 0x998))(arg1, arg2, zmm2, zx.q(arg5), &var_58)
            
            zmm2.o = zmm6
            (*(*arg1 + 0x978))(arg1, arg2, zmm2, &var_58, arg4, arg8, arg9, arg10)

return sub_140b38680("CharacterMovementServerMove", r12)
