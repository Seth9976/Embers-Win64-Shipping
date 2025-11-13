// 函数: sub_142ac4910
// 地址: 0x142ac4910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xd].b != 0)
    int32_t arg_8 = 0
    sub_142ac4290(arg1, &arg_8)
    
    if (arg_8 s<= 0)
        double zmm0 = sub_142ad1130(arg1[0x11])
        
        if (zmm0 f> arg2.q)
            sub_142ad0f90(arg4, arg1[0x11])
        else if (arg3 != 0)
            arg2.q f- zmm0
            
            if (not(is_unordered.q(arg2.q, zmm0)) && not(arg2.q f!= zmm0))
                sub_142ad0f90(arg4, arg1[0x11])
        
        int64_t rdi = *arg1[0x12]
        int32_t rax_1 = sub_141b60020(arg1[0x13])
        int32_t rax_2 = sub_1405f8de0(arg1[0x13])
        double var_38
        char rax_3 = (*(rdi + 0x40))(arg1[0x12], arg2.q, zx.q(rax_2), zx.q(rax_1), arg3, &var_38)
        int64_t rdi_1 = *arg1[0x13]
        int32_t rax_4 = sub_141b60020(arg1[0x12])
        int32_t rax_5 = sub_1405f8de0(arg1[0x12])
        double var_30
        char rax_6 = (*(rdi_1 + 0x40))(arg1[0x13], arg2.q, zx.q(rax_5), zx.q(rax_4), arg3, &var_30)
        zmm0 = var_38
        double zmm1 = var_30
        
        if (rax_3 != 0 && (rax_6 == 0 || not(zmm1 <= zmm0)))
            sub_142838410(arg4, zmm0)
            sub_142ad1140(arg4, arg1[0x13])
            sub_142ad1180(arg4, arg1[0x12])
            return 1
        
        if (rax_6 == 0 || (rax_3 != 0 && zmm0 <= zmm1))
            return 0
        
        sub_142838410(arg4, zmm1)
        sub_142ad1140(arg4, arg1[0x12])
        sub_142ad1180(arg4, arg1[0x13])
        return 1

int64_t result
result.b = 0
return result
