// 函数: sub_141b20d50
// 地址: 0x141b20d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x11) = 0

if (sub_141b0f4a0(arg1, arg2, arg3) != 0)
    uint32_t rcx = zx.d(arg1[1].b)
    void var_48
    
    if (rcx == 0)
        int128_t* rax_8 = sub_141af0180(arg3, &var_48, arg2)
        int128_t* rcx_10 = *(rax_8 + 0x18)
        int128_t zmm0_3
        
        if (rcx_10 == 0)
            zmm0_3 = *rax_8
        else
            zmm0_3 = *rcx_10
        
        *arg1 = zmm0_3
        int64_t* var_28
        
        if (var_28 != 0)
            var_28[1].d -= 1
            
            if (var_28[1].d == 1)
                (**var_28)(var_28)
                int32_t temp6_1 = *(var_28 + 0xc)
                *(var_28 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_28 + 8))(var_28, 1)
    else
        int128_t var_58
        int64_t var_30
        int64_t var_20
        
        if (rcx == 1)
            sub_1405bb0c0(arg3, &var_48, arg2)
            void* rax_5 = sub_1405bdd80(&var_48)
            
            if (rax_5 != 0)
                int64_t rax_6 = sx.q(*(rax_5 + 0x4c))
                
                if (rax_6 != neg.q(var_20))
                    var_58 = *(rax_6 + var_20)
            
            if (var_30 != 0)
                sub_140a74f90(var_30)
            
            *arg1 = var_58
        else if (rcx == 2)
            sub_1405bb0c0(arg3, &var_48, arg2)
            void* rax_1 = sub_1405bdd80(&var_48)
            int64_t rax_2
            
            if (rax_1 != 0)
                rax_2 = sx.q(*(rax_1 + 0x4c))
            
            int32_t arg_8
            int32_t rax_4
            
            if (rax_1 == 0 || rax_2 == neg.q(var_20))
                rax_4 = arg_8
            else
                rax_4 = *(rax_2 + var_20)
            
            arg_8 = rax_4
            
            if (var_30 != 0)
                sub_140a74f90(var_30)
            
            sub_140acc920(&var_58, &arg_8)
            *arg1 = var_58

return arg1
