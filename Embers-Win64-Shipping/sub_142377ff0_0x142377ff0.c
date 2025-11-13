// 函数: sub_142377ff0
// 地址: 0x142377ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx_1

if (arg2 == 0)
    rcx_1 = *arg5
else
    float var_80
    float arg_10
    int64_t* rax_2 = (*(*arg2 + 0x110))(arg2, arg1, &arg_10, &var_80)
    
    if (rax_2[1].d != 0)
        void* rax_3 = j_sub_140a82f30(0xa0)
        void* const rdi_1 = rax_3
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        else
            memset(rax_3 + 0x24, 0, 0x7c)
            __builtin_memset(rdi_1, 0, 0x24)
            sub_1422d9e70(rdi_1 + 0x28, 0x2000)
        
        int64_t* rsi_1 = *(arg1 + 0x80)
        
        if (rsi_1 != rdi_1)
            *(arg1 + 0x80) = rdi_1
            
            if (rsi_1 != 0)
                sub_1422dbf10(&rsi_1[5])
                int64_t rcx_5 = *rsi_1
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                j_sub_140a74f90(rsi_1)
        
        int32_t rcx_7 = int.d(fconvert.t(arg_10))
        int32_t i_2 = rax_2[1].d
        void (* r12_1)(int64_t* arg1) = nullptr
        uint128_t* rsi_2 = *rax_2
        void (* var_78)(int64_t* arg1) = nullptr
        int32_t var_6c_1 = 0
        void* r15_1 = nullptr
        void* var_a8 = nullptr
        int32_t r8_1 = 0
        int32_t var_9c_1 = 0
        int32_t i_3 = i_2
        int32_t temp0_1 = divs.dp.d(sx.q(i_2), rcx_7)
        int32_t rcx_8 = int.d(fconvert.t(var_80))
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(temp0_1)).d f/ _mm_cvtepi32_ps(zx.o(rcx_8)).d
        int32_t var_88_1 = zmm1.d
        int32_t rdx_4
        
        if (i_2 s> 0)
            int32_t var_a0_1 = 0
            sub_1405947f0(&var_a8, i_2)
            r8_1 = var_9c_1
            rdx_4 = var_a0_1
            i_2 = i_3
            r15_1 = var_a8
        else
            rdx_4 = 0
        
        int32_t rax_7 = rdx_4 + i_2
        int32_t var_a0_2 = rax_7
        
        if (rax_7 s> r8_1)
            sub_140594770(&var_a8)
            i_2 = i_3
            r15_1 = var_a8
        
        if (i_2 s> 0)
            void* rcx_11 = r15_1
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                rcx_11 += 2
                uint128_t zmm0_1
                zmm0_1.d = (*rsi_2).d f* 32767f
                rsi_2 += 4
                *(rcx_11 - 2) = (int.d(zmm0_1.d)).w
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
            r12_1 = var_78
        
        int32_t rax_12 = rdx_6 + i_2
        int32_t var_70_2 = rax_12
        
        if (rax_12 s> var_6c_1)
            sub_140594770(&var_78)
            i_2 = i_4
            r12_1 = var_78
        
        memcpy(r12_1, r15_1, i_2 * 2)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        uint64_t* rsi_3 = *(arg1 + 0x80)
        int32_t rdx_9 = 0
        *(rsi_3 + 0x14) = temp0_1
        rsi_3[3].d = rcx_7
        *(rsi_3 + 0x1c) = rcx_8
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
        
        memcpy(*rsi_3, r12_1, rsi_3[2].d * 2)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        uint32_t rcx_20 = zx.d(arg3)
        
        if (rcx_20 == 0)
            int64_t* rdx_13 = *(arg1 + 0x80)
            var_58_1.q = &data_142da2668
            i_4.q = 0
            void* var_50_2 = arg1
            var_78 = sub_14235b390
            sub_1422ddd90(&rdx_13[5], rdx_13, nullptr, &var_78)
        else if (rcx_20 == 1)
            int64_t* rdx_12 = *(arg1 + 0x80)
            var_58_1.q = &data_142da2668
            var_78 = sub_14235b3d0
            i_4.q = 0
            void* var_50_1 = arg1
            sub_1422ddff0(&rdx_12[5], rdx_12, arg4, arg5, &var_78)
        
        rcx_1 = *arg5
    else
        rcx_1 = *arg5

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
