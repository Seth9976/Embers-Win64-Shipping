// 函数: sub_1419bfef0
// 地址: 0x1419bfef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg3
int64_t* rcx = data_143f0f180
(*(*rcx + 0x160))(rcx, &data_143f02b98, *arg1)
int64_t* rcx_1 = data_143f0f180
int128_t* result = (*(*rcx_1 + 0x160))(rcx_1, &data_143f02b98, arg1[3])
int32_t r9 = arg1[8].d
arg1[6] = 0
arg1[7] = 0

if (r9 != 0)
    int32_t r8_2 = *(arg1 + 0x4c)
    int32_t rdi_2 = r8_2 & 0xf
    int128_t var_78_1 = zx.o(0)
    char rax_2 = 2
    int64_t var_60_1 = 0
    
    if (rdi_2 == 0)
        rax_2 = 4
    
    int64_t var_50_1 = 0
    int32_t var_68_1 = r9
    uint32_t r8_3 = r8_2 u>> rax_2
    int32_t rcx_3 = data_1439c7a6c
    uint32_t var_94_1 = r8_3
    uint32_t r12_4 = (r9 * r8_3 + 0x3f) u>> 6
    uint32_t var_e8_1 = r12_4
    uint32_t temp0_1 = divu.dp.d(0:(rcx_3 - 1 + r12_4), rcx_3)
    int64_t var_58_1 = arg1[4]
    char rbx_1 = arg1[0xa].b
    int64_t var_48_1 = arg1[1]
    int64_t var_80_1 = *(r15 + 8)
    int64_t* rax_7 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
    int32_t r9_1
    r9_1.b = rbx_1 != 0
    int32_t rcx_8 = 0
    
    if (rdi_2 == 0)
        rcx_8 = 2
    
    uint128_t var_d8
    result = sub_1419a2ec0(rax_7, &var_d8, &data_143f20620, r9_1 + rcx_8)
    int32_t r14_1 = 0
    var_d8 = var_d8
    
    if (temp0_1 != 0)
        void* r8_4 = var_d8:8.q
        void* r13_2 = var_d8.q
        void* var_c8_1 = r8_4
        
        do
            if (r14_1 != 0)
                int64_t rax_8 = *(r15 + 8)
                int64_t* rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_10 = &rdi_5[1]
                
                if (rcx_10 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x10)
                    rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_10 = &rdi_5[1]
                
                *(arg2 + 0x30) = rcx_10
                *rdi_5 = rax_8
                void*** rax_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_12 = &rax_11[6]
                
                if (rcx_12 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rax_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_12 = &rax_11[6]
                
                *(arg2 + 0x30) = rcx_12
                void**** rcx_14 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                r8_4 = var_c8_1
                *rcx_14 = rax_11
                *(arg2 + 8) = &rax_11[1]
                rax_11[1] = 0
                *rax_11 = &data_142da7798
                rax_11[2].d = 1
                rax_11[3] = rdi_5
                rax_11[4].d = 3
                *(rax_11 + 0x24) = 3
                rax_11[5] = 0
            
            int32_t rax_14 = data_1439c7a6c
            int32_t rdx_3 = r14_1 * rax_14
            void* rdi_8 = nullptr
            int32_t var_b4_1 = 1
            int32_t var_90_1 = rdx_3 << 6
            int32_t rcx_19 = r12_4 - rdx_3
            
            if (rcx_19 u<= rax_14)
                rax_14 = rcx_19
            
            uint64_t var_a8_1 = rax_14.q
            
            if (r13_2 != 0)
                rdi_8 = sub_1410970c0(*(r8_4 + 0x10), *(r13_2 + 0x10c))
            
            *(arg2 + 0x1b0) = rdi_8
            sub_14198aa60(rdi_8)
            void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rcx_24[3]
            
            if (rax_16 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_16 = &rcx_24[3]
            
            *(arg2 + 0x30) = rax_16
            void**** rax_17 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_17 = rcx_24
            *(arg2 + 8) = &rcx_24[1]
            rcx_24[1] = 0
            *rcx_24 = &data_142dd5b40
            rcx_24[2] = rdi_8
            void var_98
            arg5, arg6 = sub_1419c0cb0(arg2, &var_d8, rdi_8, &var_98)
            void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_19 = &rcx_31[4]
            
            if (rax_19 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x28)
                rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_19 = &rcx_31[4]
            
            *(arg2 + 0x30) = rax_19
            int64_t* rax_20 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_20 = rcx_31
            *(arg2 + 8) = &rcx_31[1]
            rcx_31[1] = 0
            *rcx_31 = &data_142ef57a8
            rcx_31[2].d = var_a8_1.d
            *(rcx_31 + 0x14) = var_a8_1:4.d
            rcx_31[3].d = 1
            result = sub_14116d320(arg2, &var_d8, rdi_8)
            r15 = arg3
            r14_1 += 1
            r8_4 = var_c8_1
            r12_4 = var_e8_1
        while (r14_1 u< temp0_1)
    
    if (arg4 != 0 && data_143f02bac u> 0)
        return j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)

return result
