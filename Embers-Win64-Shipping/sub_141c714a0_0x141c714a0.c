// 函数: sub_141c714a0
// 地址: 0x141c714a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141c5d7c0(arg1)

if (rax != 0)
    float var_80
    float var_7c
    int64_t* rax_1 = (*(*rax + 0x110))(rax, arg5, &var_80, &var_7c)
    
    if (rax_1[1].d != 0)
        void* rax_2 = j_sub_140a82f30(0xa0)
        void* const rdi_1 = rax_2
        
        if (rax_2 == 0)
            rdi_1 = nullptr
        else
            memset(rax_2 + 0x24, 0, 0x7c)
            __builtin_memset(rdi_1, 0, 0x24)
            sub_1422d9e70(rdi_1 + 0x28, 0x2000)
        
        int64_t* rsi_1 = data_143f34dc8
        
        if (rsi_1 != rdi_1)
            data_143f34dc8 = rdi_1
            
            if (rsi_1 != 0)
                sub_1422dbf10(&rsi_1[5])
                int64_t rcx_4 = *rsi_1
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                j_sub_140a74f90(rsi_1)
        
        int32_t rcx_6 = int.d(fconvert.t(var_80))
        int32_t i_2 = rax_1[1].d
        void (* r15_1)(int64_t* arg1) = nullptr
        uint128_t* rsi_2 = *rax_1
        void (* var_78)(int64_t* arg1) = nullptr
        int32_t var_6c_1 = 0
        void* r14_1 = nullptr
        void* var_a8 = nullptr
        int32_t r8_1 = 0
        int32_t var_9c_1 = 0
        int32_t i_3 = i_2
        int32_t temp0_1 = divs.dp.d(sx.q(i_2), rcx_6)
        int32_t rcx_7 = int.d(fconvert.t(var_7c))
        uint128_t zmm1_1
        zmm1_1.d = _mm_cvtepi32_ps(zx.o(temp0_1)).d f/ _mm_cvtepi32_ps(zx.o(rcx_7)).d
        int32_t var_88_1 = zmm1_1.d
        int32_t rdx_4
        
        if (i_2 s> 0)
            int32_t var_a0_1 = 0
            sub_1405947f0(&var_a8, i_2)
            r8_1 = var_9c_1
            rdx_4 = var_a0_1
            i_2 = i_3
            r14_1 = var_a8
        else
            rdx_4 = 0
        
        int32_t rax_6 = rdx_4 + i_2
        int32_t var_a0_2 = rax_6
        
        if (rax_6 s> r8_1)
            sub_140594770(&var_a8)
            i_2 = i_3
            r14_1 = var_a8
        
        if (i_2 s> 0)
            void* rcx_10 = r14_1
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                rcx_10 += 2
                uint128_t zmm0_1
                zmm0_1.d = (*rsi_2).d f* 32767f
                rsi_2 += 4
                *(rcx_10 - 2) = (int.d(zmm0_1.d)).w
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t rdx_6 = 0
        int32_t var_58_1 = var_88_1.d
        int32_t i_4 = i_2
        
        if (i_2 s> 0)
            int32_t var_70_1 = 0
            sub_1405947f0(&var_78, i_2)
            rdx_6 = var_70_1
            i_2 = i_4
            r15_1 = var_78
        
        int32_t rax_11 = rdx_6 + i_2
        int32_t var_70_2 = rax_11
        
        if (rax_11 s> var_6c_1)
            sub_140594770(&var_78)
            i_2 = i_4
            r15_1 = var_78
        
        memcpy(r15_1, r14_1, i_2 * 2)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int64_t* rsi_3 = data_143f34dc8
        int32_t rdx_9 = 0
        *(rsi_3 + 0x14) = temp0_1
        rsi_3[3].d = rcx_6
        *(rsi_3 + 0x1c) = rcx_7
        rsi_3[4].d = var_58_1
        rsi_3[2].d = i_2
        rsi_3[1].d = 0
        
        if (i_2 s> *(rsi_3 + 0xc))
            sub_1405947f0(rsi_3, i_2)
            rdx_9 = rsi_3[1].d
        
        int32_t r8_5 = rsi_3[2].d + rdx_9
        rsi_3[1].d = r8_5
        
        if (r8_5 s> *(rsi_3 + 0xc))
            sub_140594770(rsi_3)
        
        memcpy(*rsi_3, r15_1, rsi_3[2].d * 2)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        uint32_t rcx_19 = zx.d(arg2)
        
        if (rcx_19 == 0)
            int64_t* rdx_13 = data_143f34dc8
            int64_t result = sub_1422f67b0(&rdx_13[5], rdx_13)
            int64_t* rdi_2 = data_143f34dc8
            
            if (rdi_2 != 0)
                data_143f34dc8 = 0
                sub_1422dbf10(&rdi_2[5])
                int64_t rcx_24 = *rdi_2
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                j_sub_140a74f90(rdi_2)
            
            uint64_t rcx_26 = *arg4
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            return result
        
        if (rcx_19 == 1)
            int64_t* rdx_12 = data_143f34dc8
            int64_t var_50_1 = arg5
            var_58_1.q = &data_142da2668
            var_78 = j_sub_141c53280
            i_4.q = 0
            sub_1422ddff0(&rdx_12[5], rdx_12, arg3, arg4, &var_78)

uint64_t rcx_21 = *arg4

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return 0
