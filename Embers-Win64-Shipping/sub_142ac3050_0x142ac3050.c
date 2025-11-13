// 函数: sub_142ac3050
// 地址: 0x142ac3050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[2].d

if (rdx - 8 u<= 1)
    void var_20
    int64_t* rax_6 = (*(*arg1 + 0x48))(arg5, &var_20, arg4)
    return sub_142ac2eb0(arg1[1], rax_6, arg2, arg3, arg4)

if (*arg4 s<= 0)
    uint32_t rax_1
    
    if (arg2 != 0)
        rax_1 = arg3 u>> 0x1f
    else
        rax_1.b = arg3 != 0
    
    if (rax_1 == 0)
        if (arg3 s< 1)
            *arg4 = 0xf
            return 1
        
        int32_t arg_8
        void* rax_4 = sub_142ac3aa0(arg1[1], rdx, &arg_8)
        
        if (rax_4 == 0)
            *arg4 = 0x11
            return 0
        
        rdx.b = 1
        sub_142a4aa20(arg2, rdx.b, rax_4, arg_8)
        return 1
    
    *arg4 = 1

return 0
