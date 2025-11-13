// 函数: sub_140f77530
// 地址: 0x140f77530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if ((**rcx)(rcx) == 0)
    int64_t* rcx_1 = *arg1
    
    if ((*(*rcx_1 + 0x10))(rcx_1) != 0)
        int64_t* rcx_2 = *arg1
        
        if ((*(*rcx_2 + 0x48))(rcx_2) != 0)
            char rdx = arg1[0xf3].b
            int32_t r8 = *(arg1 + 0x794)
            int32_t r9 = arg1[0xf2].d
            int32_t rax_4
            rax_4.b = rdx == 1
            int32_t arg_18 = r9
            int32_t rcx_3 = 0
            
            if (rax_4 + r8 s>= 0)
                rcx_3 = rax_4 + r8
            
            void* rax_6 = &arg1[0xf0]
            int32_t arg_1c = rcx_3
            
            if (arg1[0xf1].b == 0)
                rax_6 = &arg_18
            
            int64_t rax_7 = *rax_6
            
            if (rax_7.d != r9 || (rax_7 u>> 0x20).d != rcx_3)
                sub_140f74180(arg1)
                rdx = arg1[0xf3].b
                r8 = *(arg1 + 0x794)
            
            int32_t arg_8 = arg1[0xf2].d
            int32_t rcx_5
            rcx_5.b = rdx == 1
            int32_t rax_10 = 0
            
            if (rcx_5 + r8 s>= 0)
                rax_10 = rcx_5 + r8
            
            int32_t arg_c = rax_10
            char rax_11
            char rdx_2
            uint32_t r8_1
            int64_t zmm0
            rax_11, rdx_2, r8_1, zmm0 = sub_140f18650(arg1[9], &arg_8, r8)
            void var_58
            
            if (rax_11 != 0)
                void* rdx_3 = arg1[9]
                arg_1c = 0
                arg_18 = arg_8 + 1
                int64_t arg_20 = arg_18.q
                rdx_2, r8_1 = sub_140f8af60(&arg1[0xf2], rdx_3, &arg_20, false, zmm0, var_58)
            
            if (&var_58 != &arg1[0xf0] && arg1[0xf1].b != 0)
                arg1[0xf1].b = 0
            
            sub_140f8fc70(arg1, rdx_2, r8_1)
            int64_t* result
            result.b = 1
            return result
    
    if (arg2 == 0)
        sub_140f6bd90(arg1)
        int64_t* rcx_11 = arg1[3]
        int64_t r8_3 = arg1[9]
        int64_t var_48 = 0
        int64_t var_40 = 0
        (*(*rcx_11 + 0x10))(rcx_11, &var_48, r8_3)
        void var_38
        sub_140aae2f0(&var_38, &var_48)
        int64_t rcx_13 = var_48
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t* rcx_14 = *arg1
        (*(*rcx_14 + 0xa0))(rcx_14, &var_38, 1)
        int64_t zmm0_1 = sub_140f7c1d0(arg1)
        int64_t* rcx_16 = *arg1
        
        if ((*(*rcx_16 + 0x40))(rcx_16) != 0)
            sub_140f89df0(arg1, arg1.d, zmm0_1)
        
        int64_t* rcx_18 = *arg1
        
        if ((*(*rcx_18 + 0x38))(rcx_18) != 0)
            sub_140e5acb0(data_143e29f28, 3)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t rdi_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_30 + 8))(var_30, zx.q(rdi_1))
        
        return 1

return 0
