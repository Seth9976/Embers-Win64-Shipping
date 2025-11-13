// 函数: sub_140f55870
// 地址: 0x140f55870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x76].b != 0 || *(arg1 + 0x3b2) == 0)
    int128_t zmm0 = zx.o(0)
    int512_t zmm1
    zmm1.o = zx.o(0)
    int128_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    char var_68_1 = 0
    
    if (arg1[0x6f].d != 0)
        int64_t* rcx = arg1[0x6e]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x6f].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x6e]
            
            (*(*rcx_1 + 0x48))(rcx_1)
            arg1[0x6d].d = 0
    
    int128_t zmm6 = arg1[0x6d].d
    char rax_4 = *(arg4 + 0x18)
    bool cond:1_1
    
    if (arg1[0x5c].d == 0)
        if (rax_4 == 0)
            goto label_140f55961
        
        cond:1_1 = rax_4 != 1
        goto label_140f559df
    
    int128_t var_60
    
    if (rax_4 != 3)
        cond:1_1 = rax_4 != 2
    label_140f559df:
        
        if (not(cond:1_1))
            char var_30_2 = 3
            zmm6.d = zmm6.d f+ *sub_140eff5d0(&arg1[0x72], zmm0.d)
            __builtin_memset(&var_60, 0, 0x2c)
            sub_140f259f0(&var_98, &var_60)
            zmm0, zmm1 = sub_140f24d00(&var_60)
    else
    label_140f55961:
        char var_30_1 = 3
        zmm6.d = zmm6.d f- *sub_140eff5d0(&arg1[0x72], zmm0.d)
        __builtin_memset(&var_60, 0, 0x2c)
        sub_140f259f0(&var_98, &var_60)
        int64_t var_40
        zmm0, zmm1 = sub_140745b20(&var_40)
        int128_t var_50
        int64_t* rdi_1 = var_50:8.q
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_58
        
        if (var_58 != 0)
            var_58[1].d -= 1
            
            if (var_58[1].d == 1)
                (**var_58)(var_58)
                int32_t temp3_1 = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_58 + 8))(var_58, 1)
    
    if (arg1[0x6f].d != 0)
        int64_t* rcx_12 = arg1[0x6e]
        
        if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
            int64_t* rcx_13
            
            if (arg1[0x6f].d == 0)
                rcx_13 = nullptr
            else
                rcx_13 = arg1[0x6e]
            
            (*(*rcx_13 + 0x48))(rcx_13)
            arg1[0x6d].d = zmm0.d
    
    int128_t var_88
    int64_t var_78
    
    if (zmm6.d f== arg1[0x6d].d)
        sub_140745b20(&var_78)
        int64_t* rdi_3 = var_88:8.q
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp6_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = var_98:8.q
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp8_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        sub_140dc1a00(arg1, arg2, arg3, arg4)
    else
        zmm0 = arg1[0x75].d
        
        if (not(zmm6.d f< zmm0.d))
            zmm0 = _mm_min_ss((*(arg1 + 0x3ac)).d, zmm6.d)
        
        zmm1.o = zmm0
        (*(*arg1 + 0x240))(arg1, zmm1)
        *arg2 = var_98.q
        arg2[1] = var_98:8.q
        __builtin_memset(&arg2[2], 0, 0x1c)
        __builtin_memset(&var_98, 0, 0x20)
        sub_1407473e0(&arg2[4], &var_78)
        arg2[6].b = var_68_1
        sub_140745b20(&var_78)
        int64_t* rbx_1 = var_88:8.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp10_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = var_98:8.q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp11_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
else
    sub_140dc1a00(arg1, arg2, arg3, arg4)

return arg2
