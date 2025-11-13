// 函数: sub_1419c02f0
// 地址: 0x1419c02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
int64_t* rcx = data_143f0f180
(*(*rcx + 0x160))(rcx, &data_143f02b98, *arg1)
int64_t* rcx_1 = data_143f0f180
int128_t* result = (*(*rcx_1 + 0x160))(rcx_1, &data_143f02b98, arg1[3])
int32_t r9 = arg1[8].d
int32_t r14 = 0
arg1[6] = 0
arg1[7] = 0

if (r9 != 0)
    int32_t r8_2 = *(arg1 + 0x4c)
    char rax_2 = 2
    
    if ((r8_2.b & 0xf) == 0)
        rax_2 = 4
    
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    uint32_t r8_3 = r8_2 u>> rax_2
    int32_t rcx_3 = data_1439c7a6c
    int64_t var_60_1 = 0
    int64_t var_50_1 = 0
    uint32_t var_94_1 = r8_3
    int32_t var_68_1 = r9
    uint32_t r15_4 = (r9 * r8_3 + 0x3f) u>> 6
    uint32_t var_e8_1 = r15_4
    uint32_t temp0_1 = divu.dp.d(0:(rcx_3 - 1 + r15_4), rcx_3)
    int32_t rcx_4 = data_1439c7a78
    
    if (rcx_4 s>= 0xffff)
        rcx_4 = 0xffff
    
    int64_t var_58_1 = arg1[4]
    int64_t var_48_1 = arg1[1]
    int32_t var_88_1 = zx.d((rcx_4 s/ 0x23).w) * 0x23
    int64_t var_70_1 = *(rdi + 8)
    uint128_t var_d8
    result = sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_d8, 
        &data_143f20820, 0)
    var_d8 = var_d8
    
    if (temp0_1 != 0)
        void* r8_4 = var_d8:8.q
        void* r13_1 = var_d8.q
        void* var_c8_1 = r8_4
        
        do
            if (r14 != 0)
                int64_t rax_14 = *(rdi + 8)
                int64_t* rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_8 = &rdi_3[1]
                
                if (rcx_8 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x10)
                    rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_8 = &rdi_3[1]
                
                *(arg2 + 0x30) = rcx_8
                *rdi_3 = rax_14
                void*** rax_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_10 = &rax_17[6]
                
                if (rcx_10 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rax_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_10 = &rax_17[6]
                
                *(arg2 + 0x30) = rcx_10
                void**** rcx_12 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                r8_4 = var_c8_1
                *rcx_12 = rax_17
                *(arg2 + 8) = &rax_17[1]
                rax_17[1] = 0
                *rax_17 = &data_142da7798
                rax_17[2].d = 1
                rax_17[3] = rdi_3
                rax_17[4].d = 3
                *(rax_17 + 0x24) = 3
                rax_17[5] = 0
            
            int32_t rax_20 = data_1439c7a6c
            int32_t rdx_7 = r14 * rax_20
            void* rdi_6 = nullptr
            int32_t var_b4_1 = 1
            int32_t var_90_1 = rdx_7 << 6
            int32_t rcx_17 = r15_4 - rdx_7
            
            if (rcx_17 u<= rax_20)
                rax_20 = rcx_17
            
            uint64_t var_a8_1 = rax_20.q
            
            if (r13_1 != 0)
                rdi_6 = sub_1410970c0(*(r8_4 + 0x10), *(r13_1 + 0x10c))
            
            *(arg2 + 0x1b0) = rdi_6
            sub_14198aa60(rdi_6)
            void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_22 = &rcx_22[3]
            
            if (rax_22 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_22 = &rcx_22[3]
            
            *(arg2 + 0x30) = rax_22
            void**** rax_23 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_23 = rcx_22
            *(arg2 + 8) = &rcx_22[1]
            rcx_22[1] = 0
            *rcx_22 = &data_142dd5b40
            rcx_22[2] = rdi_6
            void var_98
            arg5, arg6 = sub_1419c0cb0(arg2, &var_d8, rdi_6, &var_98)
            void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_25 = &rcx_29[4]
            
            if (rax_25 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x28)
                rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_25 = &rcx_29[4]
            
            *(arg2 + 0x30) = rax_25
            int64_t* rax_26 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_26 = rcx_29
            *(arg2 + 8) = &rcx_29[1]
            rcx_29[1] = 0
            *rcx_29 = &data_142ef57a8
            rcx_29[2].d = var_a8_1.d
            *(rcx_29 + 0x14) = var_a8_1:4.d
            rcx_29[3].d = 1
            result = sub_14116d320(arg2, &var_d8, rdi_6)
            rdi = arg3
            r14 += 1
            r8_4 = var_c8_1
            r15_4 = var_e8_1
        while (r14 u< temp0_1)
    
    if (arg4 != 0 && data_143f02bac u> 0)
        return j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)

return result
