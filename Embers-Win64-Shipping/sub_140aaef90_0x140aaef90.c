// 函数: sub_140aaef90
// 地址: 0x140aaef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
EnterCriticalSection(arg1 + 8)

if (**arg3 != 0 || **arg4 != 0)
    int128_t zmm1 = *arg4
    int128_t var_58 = *arg3
    int128_t var_48_1 = zmm1
    int32_t r13_1
    
    if (arg5 == 0)
        r13_1 = 0
    else if (arg5[1].d == 0)
        r13_1 = sub_140a5ff80(&data_142d40450, 0)
    else
        r13_1 = sub_140a5ff80(*arg5, 0)
    
    sub_140aaaf00(arg1 + 0x30, &arg_18, &var_58)
    int64_t rax_7 = sx.q(arg_18)
    void* const rcx_13
    
    if (rax_7.d == 0xffffffff)
        rcx_13 = nullptr
    else
        rcx_13 = (rax_7 << 6) + *(arg1 + 0x30)
    
    int64_t* rdi_3 = rcx_13 + 0x20
    
    if (rcx_13 == 0)
        rdi_3 = nullptr
    
    if (rdi_3 == 0)
        uint64_t var_a8
        uint64_t var_88
        uint64_t rdi_4
        uint64_t* r12_2
        int32_t r14_5
        uint64_t r15_4
        
        if (arg5 == 0)
            rdi_4 = var_a8
            r15_4 = 0
            var_88 = 0
            r14_5 = 8
            int64_t var_80_1 = 0
            r12_2 = &var_88
        else
            int32_t r15_3 = arg5[1].d
            rdi_4 = 0
            int64_t r14_4 = *arg5
            var_a8 = 0
            int32_t var_a0_1 = r15_3
            
            if (r15_3 != 0)
                sub_1405a4c70(&var_a8, r15_3, 0)
                rdi_4 = var_a8
                memcpy(rdi_4, r14_4, r15_3 * 2)
                r15_4 = var_88
                r12_2 = &var_a8
                r14_5 = 4
            else
                int32_t var_9c_1 = 0
                r14_5 = r15_3 + 4
                r15_4 = var_88
                r12_2 = &var_a8
        
        void*** rax_10 = j_sub_140a82f30(0x20)
        void*** r8_6 = rax_10
        
        if (rax_10 == 0)
            r8_6 = nullptr
        else
            uint64_t rcx_18 = *r12_2
            rax_10[1].d = 1
            *(rax_10 + 0xc) = 1
            *r8_6 = &data_142df7bd8
            *r12_2 = 0
            int32_t rax_11 = r12_2[1].d
            r8_6[2] = rcx_18
            r8_6[3].d = rax_11
            int32_t rax_12 = *(r12_2 + 0xc)
            r12_2[1] = 0
            rdi_4 = var_a8
            r15_4 = var_88
            *(r8_6 + 0x1c) = rax_12
        
        if ((r14_5.b & 8) != 0)
            r14_5 &= 0xfffffff7
            
            if (r15_4 != 0)
                sub_140a74f90(r15_4)
        
        if ((r14_5.b & 4) != 0 && rdi_4 != 0)
            sub_140a74f90(rdi_4)
        
        void* var_78 = &r8_6[2]
        
        if (r8_6 != 0)
            r8_6[1].d += 1
        
        int32_t var_68_1 = r13_1
        char var_64_1 = 0
        sub_140a91a20(arg1 + 0x30, &var_58, &var_78)
        sub_140a914d0(arg1 + 0x80, &var_78, &var_58)
        int64_t* rdi_5 = r8_6
        *arg2 = &r8_6[2]
        arg2[1] = rdi_5
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
            rdi_5 = r8_6
        
        if (r8_6 != 0)
            r8_6[1].d -= 1
            
            if (r8_6[1].d == 1)
                (**r8_6)(r8_6)
                int32_t rax_18 = *(r8_6 + 0xc)
                *(r8_6 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*r8_6)[1](r8_6, 1)
            
            rdi_5 = r8_6
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t r14_6 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (r14_6 == 1)
                    (*(*rdi_5 + 8))(rdi_5, zx.q(r14_6))
    else
        if (r13_1 != rdi_3[2].d && arg5 != 0)
            rdi_3[2].d = r13_1
            sub_140597df0(*rdi_3, arg5)
            sub_140aa6510(arg1, rdi_3)
            *(rdi_3 + 0x14) = 0
        
        *arg2 = *rdi_3
        void* rax_9 = rdi_3[1]
        arg2[1] = rax_9
        
        if (rax_9 != 0)
            *(rax_9 + 8) += 1
    
    if (arg1 != -8)
        LeaveCriticalSection(arg1 + 8)
else
    uint64_t var_b8
    uint64_t var_98
    uint64_t rdi_1
    uint64_t* r12_1
    int32_t r14_2
    uint64_t r15_2
    
    if (arg5 == 0)
        rdi_1 = var_b8
        r15_2 = 0
        var_98 = 0
        r14_2 = 2
        int64_t var_90_1 = 0
        r12_1 = &var_98
    else
        int32_t r14_1 = arg5[1].d
        rdi_1 = 0
        int64_t r15_1 = *arg5
        var_b8 = 0
        int32_t var_b0_1 = r14_1
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_b8, r14_1, 0)
            rdi_1 = var_b8
            memcpy(rdi_1, r15_1, r14_1 * 2)
            r15_2 = var_98
            r12_1 = &var_b8
            r14_2 = 1
        else
            r15_2 = var_98
            r14_2 = 1
            int32_t var_ac_1 = 0
            r12_1 = &var_b8
    
    void*** rax_3 = j_sub_140a82f30(0x20)
    void*** r8_2 = rax_3
    
    if (rax_3 == 0)
        r8_2 = nullptr
    else
        uint64_t rcx_3 = *r12_1
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *r12_1 = 0
        *r8_2 = &data_142df7bd8
        int32_t rax_4 = *(r12_1 + 0xc)
        r8_2[2] = rcx_3
        int32_t rcx_4 = r12_1[1].d
        r12_1[1] = 0
        rdi_1 = var_b8
        r15_2 = var_98
        r8_2[3].d = rcx_4
        *(r8_2 + 0x1c) = rax_4
    
    *arg2 = &r8_2[2]
    arg2[1] = r8_2
    
    if ((r14_2.b & 2) != 0)
        r14_2 &= 0xfffffffd
        
        if (r15_2 != 0)
            sub_140a74f90(r15_2)
    
    if ((r14_2.b & 1) != 0 && rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (arg1 != -8)
        LeaveCriticalSection(arg1 + 8)

return arg2
