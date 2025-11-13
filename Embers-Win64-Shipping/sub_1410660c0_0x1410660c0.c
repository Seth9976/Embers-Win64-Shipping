// 函数: sub_1410660c0
// 地址: 0x1410660c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg3 + 0x18))
int64_t* result = arg2

if (r9 == 0)
    void* rdx_11 = *arg3
    uint64_t var_68_1 = arg3[1].q
    
    if (rdx_11 != 0)
        int64_t* rax_23 = *(arg1 + 0x20)
        int64_t zmm1 = arg3[1].q
        uint128_t var_78 = *arg3
        int64_t var_68_2 = zmm1
        void*** rax_24 = sub_14105ce40(*rax_23, rdx_11, &var_78)
        *result = rax_24
        
        if (rax_24 != 0)
            rax_24[1].d += 1
    else
    label_141066432:
        void*** rax_21 = j_sub_140a82f30(0xa8)
        void*** rbx_1
        
        if (rax_21 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = sub_14100d6c0(rax_21, nullptr)
        
        *result = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
else if (r9 == 1)
    uint128_t zmm0 = *arg3
    void* i = *arg3
    void*** r15_2 = nullptr
    void*** r14_2 = nullptr
    
    while (i != 0)
        void*** rax_11 = j_sub_140a82f30(0xa8)
        void*** rdi_2
        
        if (rax_11 == 0)
            rdi_2 = nullptr
        else
            rdi_2 = sub_14100d6c0(rax_11, *(i + 0x30))
        
        if (data_143f02ba8 != 0 || (*(i + 0x20) & 6) == 0)
            int32_t var_80_1 = zmm0:8.d
            int32_t var_7c_1 = zmm0:0xc.d
            int64_t var_98_1 = 0
            void** const var_a0 = &data_142f03548
            void* i_2 = i
            void*** var_88_1 = rdi_2
            sub_141060840(&var_a0)
        else
            void*** rax_15 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rcx_5 = &rax_15[5]
            
            if (rcx_5 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x30)
                rax_15 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rcx_5 = &rax_15[5]
            
            data_143f02bac += 1
            data_143f02bc8 = rcx_5
            *data_143f02ba0 = rax_15
            data_143f02ba0 = &rax_15[1]
            rax_15[1] = 0
            rax_15[4].d = zmm0:8.d
            *(rax_15 + 0x24) = zmm0:0xc.d
            *rax_15 = &data_142f03548
            rax_15[2] = i
            rax_15[3] = rdi_2
            int64_t* arg_20
            sub_141980430(&data_143f02b98, &arg_20, 1)
            int64_t* rcx_10 = arg_20
            
            if (rcx_10 != 0)
                rcx_10[9].d -= 1
                
                if (rcx_10[9].d == 1)
                    sub_140a2f6e0(rcx_10)
        
        if (r14_2 != 0)
            sub_1405d16e0(&r14_2[0x12], rdi_2)
            
            if (rdi_2 != 0)
                rdi_2[0x13].b = 0
        else
            r15_2 = rdi_2
        
        i = *(i + 0xe0)
        r14_2 = rdi_2
    
    *result = r15_2
    
    if (r15_2 != 0)
        r15_2[1].d += 1
else if (r9 == 2)
    void* i_1 = *arg3
    
    if (i_1 == 0)
        goto label_141066432
    
    void*** r12_1 = nullptr
    void*** r14_1 = nullptr
    uint128_t var_c0_1 = *arg3
    int32_t r10_1 = var_c0_1:0xc.d
    int32_t r9_2 = var_c0_1:8.d
    
    do
        int32_t rcx = *(i_1 + 0x1c)
        uint64_t r15_1 = zx.q(*(i_1 + 0x18))
        uint32_t temp0_1 = divu.dp.d(0:rcx, r15_1.d)
        int64_t var_dc_1 = 0
        int32_t var_d4_1 = 0
        
        if (r9_2 u<= rcx)
            rcx = r9_2
        
        int64_t var_c8_1 = 0
        int32_t var_e0_1 = 0x1688
        int32_t var_e4_1 = 1
        uint64_t r9_3 = zx.q(divu.dp.d(0:rcx, r15_1.d))
        int32_t var_e8_1
        
        if ((*(i_1 + 0x20) & 0x20) == 0)
            int32_t rax_5 = 0x2a
            
            if (r15_1.d == 2)
                rax_5 = 0x39
            
            var_e8_1 = rax_5
        else
            var_e8_1 = 0x27
            var_c8_1.d = 1
        
        int32_t r8_1 = temp0_1 - r9_3.d
        int32_t var_cc_1 = 0
        int32_t rax_6 = r10_1
        
        if (r8_1 u<= r10_1)
            rax_6 = r8_1
        
        int32_t var_d0_1 = rax_6
        
        if (*(i_1 + 0x80) != 0)
            var_dc_1 = divu.dp.q(0:(*(i_1 + 0xc0)), r15_1) + r9_3
        
        uint128_t var_60 = var_e8_1.o
        uint64_t var_40_1 = var_c8_1
        int128_t var_50_1 = 0
        void*** rax_10 = j_sub_140a82f30(0xa8)
        void*** rdi_1 = rax_10
        
        if (rax_10 == 0)
            rdi_1 = nullptr
        else
            sub_14100d6c0(rax_10, *(i_1 + 0x30))
            *rdi_1 = &data_142efcd08
            rdi_1[3] = &data_142efcd10
            sub_141025d40(rdi_1, &var_60, i_1 + 0x70, r15_1.d, 0)
        
        if (r14_1 != 0)
            sub_1405d16e0(&r14_1[0x12], rdi_1)
            
            if (rdi_1 != 0)
                rdi_1[0x13].b = 0
        else
            r12_1 = rdi_1
        
        i_1 = *(i_1 + 0xe0)
        r14_1 = rdi_1
        r10_1 = var_c0_1:0xc.d
        r9_2 = var_c0_1:8.d
    while (i_1 != 0)
    
    result = arg2
    *result = r12_1
    
    if (r12_1 != 0)
        r12_1[1].d += 1
else
    *arg2 = 0

return result
