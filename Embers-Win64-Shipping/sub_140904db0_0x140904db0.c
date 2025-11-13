// 函数: sub_140904db0
// 地址: 0x140904db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(**arg1)()

if (arg2[1].d s> 1 && sub_140a32ae0(arg2, u"img://", 1) != 0)
    *(arg1 + 0x3c) = 4
    sub_140597df0(&arg1[9], arg2)
    uint64_t var_148 = 0
    int32_t var_140 = 0
    
    if (arg3 != 0)
        int64_t rax_2 = *arg3
        int64_t var_f8 = 0
        int64_t var_f0_1 = 0
        int64_t var_88
        int64_t* rax_3 = (*(rax_2 + 0x10))(arg3, &var_88, &data_143cec9b0, &var_f8)
        
        if (&var_148 != rax_3)
            uint64_t rcx_3 = *rax_3
            *rax_3 = 0
            var_148 = rcx_3
            var_140 = rax_3[1].d
            rax_3[1] = 0
        
        int64_t rcx_5 = var_88
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = var_f8
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    if (arg3 == 0 || var_140 s<= 1)
        int64_t* rax_4 = sub_140908320()
        void* rcx_7 = rax_4[0x23]
        
        if (rcx_7 == 0)
            int64_t rdx_2 = *rax_4
            (*(rdx_2 + 0x390))(rax_4, rdx_2)
            rcx_7 = rax_4[0x23]
        
        uint64_t rdi_1 = 0
        uint64_t var_128 = 0
        int32_t rbx_2
        
        if (*(rcx_7 + 0x60) == 0)
            rbx_2 = 0
            int32_t var_120_2 = 0
        else
            rbx_2 = *(rcx_7 + 0x58)
            int64_t r14_1 = *(rcx_7 + 0x50)
            
            if (rbx_2 != 0)
                sub_1405a4c70(&var_128, rbx_2, 0)
                rdi_1 = var_128
                memcpy(rdi_1, r14_1, rbx_2 * 2)
        
        uint64_t rcx_11 = var_148
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        var_148 = rdi_1
        var_140 = rbx_2
    
    int64_t arg_8 = 0
    
    if (arg3 != 0)
        arg_8:4.d = (*(*arg3 + 0x18))(arg3, &data_143cec9a0, 0)
        arg_8.d = (*(*arg3 + 0x18))(arg3, &data_143cec9a8, 0)
    
    int64_t var_108 = arg1[0x14]
    int64_t* rax_10 = arg1[0x15]
    
    if (rax_10 != 0)
        rax_10[1].d += 1
    
    int64_t var_118 = arg1[0x11]
    int64_t* rax_12 = arg1[0x12]
    
    if (rax_12 != 0)
        rax_12[1].d += 1
    
    void*** rax_13 = j_sub_140a82f30(0x180)
    void*** rdi_2 = rax_13
    
    if (rax_13 == 0)
        rdi_2 = nullptr
    else
        rax_13[1].d = 1
        *(rax_13 + 0xc) = 1
        *rdi_2 = &data_142e1b240
        arg5 = sub_1408ff890(&rdi_2[2], &var_118, &var_108)
    
    void*** var_90 = rdi_2
    void* var_98 = &rdi_2[2]
    sub_1408ff3c0(&var_98, &rdi_2[2])
    void* var_138 = &rdi_2[2]
    void*** rcx_16 = rdi_2
    void*** var_130 = rcx_16
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
        rcx_16 = var_130
    
    if (&arg1[0xe] != &var_138)
        arg1[0xe] = &rdi_2[2]
        var_138 = nullptr
        sub_1405aeff0(&arg1[0xf], &var_130)
        rcx_16 = var_130
    
    if (rcx_16 != 0)
        rcx_16[1].d -= 1
        
        if (rcx_16[1].d == 1)
            void*** rbx_4 = var_130
            (**rbx_4)(rbx_4)
            int32_t rax_16 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_16 == 1)
                void*** rcx_19 = var_130
                (*rcx_19)[1](rcx_19, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rax_20 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*rdi_2)[1](rdi_2, 1)
    
    if (rax_12 != 0)
        rax_12[1].d -= 1
        
        if (rax_12[1].d == 1)
            (**rax_12)(rax_12)
            int32_t rax_24 = *(rax_12 + 0xc)
            *(rax_12 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*(*rax_12 + 8))(rax_12, 1)
    
    if (rax_10 != 0)
        rax_10[1].d -= 1
        
        if (rax_10[1].d == 1)
            (**rax_10)(rax_10)
            int32_t rax_28 = *(rax_10 + 0xc)
            *(rax_10 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rax_10 + 8))(rax_10, 1)
    
    int64_t* rdi_3 = arg1[0xf]
    int64_t rax_30 = arg1[0xe]
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    void* r14_2 = arg1[0x11]
    EnterCriticalSection(r14_2 + 0x30)
    
    if (rdi_3 != 0)
        *(rdi_3 + 0xc) += 1
    
    int64_t r13 = sx.q(*(r14_2 + 0x60))
    int32_t rax_31 = (r13 + 1).d
    *(r14_2 + 0x60) = rax_31
    
    if (rax_31 s> *(r14_2 + 0x64))
        sub_1405a4f90(r14_2 + 0x58)
    
    int64_t* rax_34 = (r13 << 4) + *(r14_2 + 0x58)
    *rax_34 = rax_30
    rax_34[1] = rdi_3
    
    if (r14_2 != -0x30)
        LeaveCriticalSection(r14_2 + 0x30)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_37 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int32_t rax_39 = arg2[1].d
    int32_t rcx_34 = rax_39 - 1
    
    if (rax_39 == 0)
        rcx_34 = 0
    
    int16_t* const r8_4
    
    if (rax_39 == 0)
        r8_4 = &data_142d40450
    else
        r8_4 = *arg2
    
    int32_t rax_40
    
    if (rcx_34 - 6 s>= 0)
        rax_40 = rcx_34
        
        if (rcx_34 - 6 s< rcx_34)
            rax_40 = rcx_34 - 6
    else
        rax_40 = 0
    
    int32_t rdi_4 = 0
    int64_t var_158 = 0
    int32_t rax_42 = 0
    int32_t var_150 = 0
    int32_t var_14c = 0
    int16_t* r14_3 = &r8_4[sx.q(rcx_34) - sx.q(rax_40)]
    
    if (r14_3 != 0 && *r14_3 != 0)
        int64_t rbx_8 = -1
        
        do
            rbx_8 += 1
        while (r14_3[rbx_8] != 0)
        
        if (rbx_8.d + 1 s> 0)
            sub_1405947f0(&var_158, rbx_8.d + 1)
            rax_42 = var_14c
            rdi_4 = var_150
        
        rdi_4 += rbx_8.d + 1
        var_150 = rdi_4
        
        if (rdi_4 s> rax_42)
            sub_140594770(&var_158)
            rdi_4 = var_150
        
        UnDecorator::getReferenceType(var_158, r14_3, (rbx_8.d + 1) * 2)
    
    int64_t* rcx_40 = arg1[0xf]
    int64_t rdx_13 = arg1[0xe]
    int64_t var_78[0x2]
    var_78[0] = 0
    int64_t var_68 = 0
    
    if (rcx_40 != 0)
        *(rcx_40 + 0xc) += 1
        rdi_4 = var_150
    
    char r14_4 = *(arg1 + 0x9c)
    int64_t var_e8 = arg_8
    int64_t var_e0 = rdx_13
    uint64_t var_d0 = 0
    int32_t var_c8 = var_140
    
    if (var_140 != 0)
        sub_1405a4c70(&var_d0, var_140, 0)
        memcpy(var_d0, var_148, var_140 * 2)
    else
        int32_t var_c4_1 = 0
    
    uint64_t var_c0 = 0
    int32_t var_b8 = rdi_4
    
    if (rdi_4 != 0)
        sub_1405a4c70(&var_c0, rdi_4, 0)
        memcpy(var_c0, var_158, rdi_4 * 2)
    else
        int32_t var_b4_1 = 0
    
    char var_b0 = r14_4
    void* var_a8
    sub_1408fe840(&var_a8, 3, &var_e8, &var_78, arg5, arg4)
    int64_t* var_a0
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            (**var_a0)(var_a0)
            int32_t rax_46 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (rax_46 == 1)
                (*(*var_a0 + 8))(var_a0, 1)
    
    uint64_t rcx_49 = var_c0
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
    
    uint64_t rcx_50 = var_d0
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    if (rcx_40 != 0)
        int32_t rsi_1 = *(rcx_40 + 0xc)
        *(rcx_40 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rcx_40 + 8))(rcx_40, zx.q(rsi_1))
    
    int64_t rcx_52 = var_158
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    uint64_t rcx_53 = var_148
    
    if (rcx_53 != 0)
        sub_140a74f90(rcx_53)
    
    int64_t* result
    result.b = 1
    return result

return 0
