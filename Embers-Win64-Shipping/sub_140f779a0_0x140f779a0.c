// 函数: sub_140f779a0
// 地址: 0x140f779a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg1[0x111].b == 0)
    if (arg1[0x112] != 0)
        rax = arg1[0x113]
    
    if (arg1[0x112] == 0 || rax == 0 || *(rax + 8) s<= 0)
        int64_t* rcx = data_143e20d18
        int64_t* rax_2 = (*(*rcx + 0xe8))(rcx)
        
        if (rax_2 != 0 && arg1[0xde].b != 0)
            int64_t* rdi_1 = arg1[0xe0]
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            int64_t var_48 = arg1[0xdf]
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            (*(*rax_2 + 0x28))(rax_2, &var_48)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rcx_6 = *arg1
        void var_68
        
        if ((*(*rcx_6 + 0x28))(rcx_6) != 0 && *arg2 != 5 && &var_68 != &arg1[0xf0]
                && arg1[0xf1].b != 0)
            arg1[0xf1].b = 0
        
        char rax_12 = *arg2
        int32_t rdi_2
        
        if (rax_12 u<= 1)
            rdi_2 = 2
        else if (rax_12 != 3)
            rdi_2 = 0
        else
            rdi_2 = 3
        
        sub_140f6bd90(arg1)
        int64_t* rcx_8 = arg1[3]
        int64_t r8 = arg1[9]
        int64_t var_58 = 0
        int64_t var_50 = 0
        (*(*rcx_8 + 0x10))(rcx_8, &var_58, r8)
        void var_28
        sub_140aae2f0(&var_28, &var_58)
        int64_t rcx_10 = var_58
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t* rcx_11 = *arg1
        char rdx_4
        uint32_t r8_2
        rdx_4, r8_2 = (*(*rcx_11 + 0xa0))(rcx_11, &var_28, zx.q(rdi_2))
        
        if (arg1[0xab].d != 0)
            int64_t* rcx_12 = arg1[0xaa]
            
            if (rcx_12 != 0)
                char rax_16
                rax_16, rdx_4, r8_2 = (*(*rcx_12 + 0x28))(rcx_12)
                
                if (rax_16 != 0)
                    sub_140f8cfc0(arg1, &arg1[0xa6])
                    int64_t* rcx_14 = arg1[9]
                    rdx_4, r8_2 = (*(*rcx_14 + 8))(rcx_14)
        
        sub_140f8fc70(arg1, rdx_4, r8_2)
        
        if (*(arg1 + 0x77c) != 0)
            *(arg1 + 0x77c) = 0
        
        int64_t* rcx_16 = *arg1
        void var_38
        sub_140e19ef0(*(*(*rcx_16 + 0x80))(rcx_16, &var_38), 5)
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp7_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rdi_3 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    (*(*var_20 + 8))(var_20, zx.q(rdi_3))
        
        uint64_t rax_20
        rax_20.b = 1
        return rax_20

rax.b = 0
return rax
