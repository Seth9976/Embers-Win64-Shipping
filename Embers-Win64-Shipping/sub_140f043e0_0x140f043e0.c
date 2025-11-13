// 函数: sub_140f043e0
// 地址: 0x140f043e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int32_t arg_10
(*(*rcx + 0x38))(rcx, &arg_10)
int64_t* rcx_1 = *arg2
float arg_18
(*(*rcx_1 + 0x18))(rcx_1, &arg_18)
int32_t zmm1 = *arg3
int128_t zmm7 = arg_10

if (not(zmm1 f< zmm7.d) && not(zmm1 f>= zmm7.d + arg_18))
    zmm1 = arg3[1]
    
    if (not(zmm1 f< arg5) && not(zmm1 f>= arg6 + arg5))
        void var_58
        int128_t zmm6
        zmm6.d = arg4.d f* *sub_140e13cf0(*(arg1 + 0xa0), &var_58)
        zmm6.d = zmm6.d f* 0.5f
        zmm6.d = zmm6.d f+ zmm7.d
        int32_t rdi_1
        
        if (zmm6.d f< *arg3)
            rdi_1 = *(arg1 + 0x9c)
        else
            rdi_1 = *(arg1 + 0x98)
        
        if (arg7 != 0)
            int64_t* rcx_3 = *arg2
            (*(*rcx_3 + 0x10))(rcx_3, &var_58)
            int64_t* rcx_4 = *arg2
            void var_50
            (*(*rcx_4 + 0x20))(rcx_4, &var_50)
            char rax_5 = 0
            int32_t var_54
            
            if (rdi_1 == var_54)
                rax_5 = 2
            
            *arg7 = rax_5
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    int64_t rdx_5 = *var_40
                    (*rdx_5)(var_40, rdx_5)
                    int32_t temp1_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8 = *var_40
                        (*(r8 + 8))(var_40, 1, r8)
        
        return zx.q(rdi_1)

return 0xffffffff
