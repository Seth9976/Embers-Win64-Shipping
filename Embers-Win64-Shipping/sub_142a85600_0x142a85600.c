// 函数: sub_142a85600
// 地址: 0x142a85600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x30))(arg1, arg3)

if (*arg3 s<= 0 && rax_1 != 0)
    sub_142a48100(&arg1[1], rax_1)
    int16_t rax_2 = arg1[2].w
    int32_t rdx_3
    
    if (rax_2 s< 0)
        rdx_3 = *(arg1 + 0x14)
    else
        rdx_3 = sx.d(rax_2) s>> 5
    
    sub_142a85570(arg1, rdx_3 + 1, arg3)
    
    if (*arg3 s<= 0)
        if (arg2 != 0)
            int16_t rax_3 = arg1[2].w
            int32_t rax_5
            
            if (rax_3 s< 0)
                rax_5 = *(arg1 + 0x14)
            else
                rax_5 = sx.d(rax_3) s>> 5
            
            *arg2 = rax_5
        
        int32_t var_10_1 = 0
        sub_142a49990(&arg1[1], 0, 0x7fffffff, arg1[0xd], arg1[0xe].d)
        return arg1[0xd]

return 0
