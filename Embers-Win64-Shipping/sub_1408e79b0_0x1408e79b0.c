// 函数: sub_1408e79b0
// 地址: 0x1408e79b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
uint64_t var_28 = __security_cookie ^ &var_158
uint64_t result

if (arg2 == arg1[0x86])
    result.b = 0
else
    int64_t rbx_1 = arg1[0x14]
    char rax_1 = sub_141ee76e0(arg1)
    
    if (rax_1 != 0 || (arg1[0x11].b & 1) == 0 || *(arg1 + 0x14f) != rax_1 || rbx_1 == 0)
        arg1[0x86] = 0
        *(arg1 + 0x444) = 0
        arg1[0x8e].d = 0
        
        if (*(arg1 + 0x474) != 0)
            sub_1408e7380(&arg1[0x8d], 0)
        
        sub_141997ac0(&arg1[0x7e], 0, arg3, arg4)
        float zmm1_2[0x4] = sub_1419ba820(&arg1[0x7e], 0)
        arg1[0x86] = arg2
        *(arg1 + 0x444) = 0
        arg1[0x8e].d = 0
        
        if (*(arg1 + 0x474) != 0)
            sub_1408e7380(&arg1[0x8d], 0)
        
        sub_1408e7f80(arg1, zmm1_2)
        void*** rax_42 = sub_1408e4100()
        void** r8_3 = *rax_42
        r8_3[0x19](rax_42, arg1, r8_3)
        sub_141ee8490(arg1)
        sub_141ef1240(arg1)
        void*** rax_43 = sub_141f88540()
        void** r8_4 = *rax_43
        r8_4[0xe](rax_43, arg1, r8_4)
        (*(*arg1 + 0x498))(arg1)
        result.b = 1
    else
        void var_128
        sub_140b58170(&var_128, "PIE", 1)
        int64_t var_e8
        void var_70
        int64_t* rax_3 = sub_140aae2f0(&var_70, sub_140d21e10(arg1, &var_e8, 0))
        void var_c0
        char* var_a8
        char** rax_5 = sub_140a96390(&var_a8, 
            _vfprintf_p_l(&var_c0, Calling SetGeometryCache on '{0}' but Mobility is Static.", 
            GeometryCacheComponent"))
        int64_t rcx_5 = *rax_3
        int64_t* rcx_6 = rax_3[1]
        int32_t var_58_1 = 4
        
        if (rcx_6 != 0)
            rcx_6[1].d += 1
        
        int32_t rcx_7 = rax_3[2].d
        char var_30_1 = 1
        int32_t* var_138 = nullptr
        int32_t var_130_1 = 1
        sub_1405a4b40(&var_138, 1, 0)
        int32_t* rcx_9 = var_138
        *rcx_9 = var_58_1
        int64_t var_50
        *(rcx_9 + 8) = var_50
        *(rcx_9 + 8) = var_50
        rcx_9[2] = var_50.d
        *(rcx_9 + 8) = var_50
        rcx_9[0xa].b = 0
        
        if (var_30_1 != 0)
            *(rcx_9 + 0x10) = rcx_5
            *(rcx_9 + 0x18) = rcx_6
            
            if (rcx_6 != 0)
                rcx_6[1].d += 1
            
            rcx_9[8] = rcx_7
            rcx_9[0xa].b = 1
        
        char* var_108 = *rax_5
        void* rax_13 = rax_5[1]
        void* var_100_1 = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        void var_d8
        int64_t* rax_14 = sub_140aac870(&var_d8, &var_108, &var_138)
        int64_t var_120 = *rax_14
        int64_t* rcx_12 = rax_14[1]
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
        
        int32_t var_110_1 = rax_14[2].d
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_18 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        sub_140596f50(&var_138)
        
        if (var_30_1 != 0)
            char var_30_2 = 0
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    (**rcx_6)(rcx_6)
                    int32_t rax_22 = *(rcx_6 + 0xc)
                    *(rcx_6 + 0xc) -= 1
                    
                    if (rax_22 == 1)
                        (*(*rcx_6 + 8))(rcx_6, 1)
        
        int64_t* rdi_3 = rax_5[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_26 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_3[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_30 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        void var_f8
        void var_98
        sub_140ae44d0(sub_140accdf0(&var_98, &var_128), &var_f8, &var_120)
        int64_t* var_f0
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t temp3_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        sub_140acd9c0(&var_98)
        
        if (rcx_12 != 0)
            rcx_12[1].d -= 1
            
            if (rcx_12[1].d == 1)
                (**rcx_12)(rcx_12)
                int32_t rax_37 = *(rcx_12 + 0xc)
                *(rcx_12 + 0xc) -= 1
                
                if (rax_37 == 1)
                    (*(*rcx_12 + 8))(rcx_12, 1)
        
        int64_t* var_b8
        
        if (var_b8 != 0)
            var_b8[1].d -= 1
            
            if (var_b8[1].d == 1)
                (**var_b8)(var_b8)
                int32_t rbx_2 = *(var_b8 + 0xc)
                *(var_b8 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_b8 + 8))(var_b8, zx.q(rbx_2))
        
        int64_t rcx_31 = var_e8
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result.b = 0

__security_check_cookie(var_28 ^ &var_158)
return result
