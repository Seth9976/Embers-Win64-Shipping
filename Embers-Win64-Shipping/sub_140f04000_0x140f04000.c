// 函数: sub_140f04000
// 地址: 0x140f04000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
float arg_18
(*(*rcx + 0x38))(rcx, &arg_18)
int64_t* rcx_1 = *arg2
float var_68
(*(*rcx_1 + 0x18))(rcx_1, &var_68)
int32_t zmm1 = *arg3
float zmm2 = arg_18

if (not(zmm1 f< zmm2) && not(zmm1 f>= var_68 + zmm2))
    zmm1 = arg3[1]
    float var_64
    
    if (not(zmm1 f< arg6) && not(zmm1 f>= var_64 + arg6))
        int64_t* rcx_2 = *arg2
        int32_t arg_10
        (*(*rcx_2 + 0x10))(rcx_2, &arg_10, arg6)
        int64_t* rcx_3 = *arg2
        void var_40
        (*(*rcx_3 + 0x20))(rcx_3, &var_40)
        int64_t var_60
        sub_140eec190(&var_60, arg5 - arg_10)
        int64_t* var_50
        sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_50)
        int64_t* rcx_7 = var_50
        int32_t rdi_1 =
            (*(*rcx_7 + 0x30))(rcx_7, &var_60, arg1 + 0x90, zx.q(int.d(*arg3 - arg_18)), arg4.d)
        int64_t* var_48
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                int64_t rdx_8 = *var_48
                (*rdx_8)(var_48, rdx_8)
                int32_t temp1_1 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_48 + 8))(var_48, 1)
        
        char rcx_10 = 0
        char var_28
        
        if (var_28 == 1)
            int32_t var_58
            int32_t rax_9
            
            if (var_58 == 0)
                rax_9 = 0
            else
                rax_9 = var_58 - 1
            
            rdi_1 = rax_9 - rdi_1
        
        int32_t rdi_2 = rdi_1 + arg_10
        
        if (arg7 != 0)
            if (rdi_2 == arg5)
                rcx_10 = 2
            
            *arg7 = rcx_10
        
        int64_t rcx_11 = var_60
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp3_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        return zx.q(rdi_2)

return 0xffffffff
