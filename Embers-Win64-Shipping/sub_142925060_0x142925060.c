// 函数: sub_142925060
// 地址: 0x142925060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_8 = 0x10
__builtin_memset(&arg1[0xd], 0, 0x30)
arg1[0xa] = 0
arg1[0xb] = 0

if (sub_142924d80(arg1, &arg1[0xd], &arg1[0xa]) != 0)
    *(arg1 + 0x53) = 1
    
    if (sub_142924d80(arg1, &arg1[0xf], &arg1[0xa]) != 0)
        int32_t rax_2
        
        if (arg1[3] != 0x10)
            *(arg1 + 0x53) = 2
            rax_2 = sub_142924d80(arg1, &arg1[0x11], &arg1[0xa])
        
        if (arg1[3] == 0x10 || rax_2 != 0)
            int64_t r8_3 = 0
            
            if (arg2 != 0)
                r8_3 = arg3
            
            int64_t r15_1 = 0
            
            if (arg4 != 0)
                r15_1 = arg5
            
            int64_t r12_1 = 0
            
            if (arg6 != 0)
                r12_1 = arg7
            
            int64_t rcx_3 = r12_1 + r15_1 + r8_3
            arg1[0xa].b = (rcx_3 u>> 0x18).b
            *(arg1 + 0x51) = (rcx_3 u>> 0x10).b
            *(arg1 + 0x52) = (rcx_3 u>> 8).b
            *(arg1 + 0x53) = rcx_3.b
            *(arg1 + 0x54) = 0
            *(arg1 + 0x56) = 0
            *(arg1 + 0x57) = &arg1[3].b[2]
            arg1[0xc] = 8
            
            if (sub_142924eb0(arg1, arg2, r8_3) != 0 && sub_142924eb0(arg1, arg4, r15_1) != 0
                    && sub_142924eb0(arg1, arg6, r12_1) != 0
                    && sub_142924eb0(arg1, &data_143b86258, 1) != 0)
                int64_t rax_14 = arg1[0xc]
                int32_t rax_15
                
                if (rax_14 != 0)
                    memset(&arg1[0xa] + rax_14, 0, 0x10 - rax_14)
                    rax_15 = sub_142924e30(arg1, &arg1[0xa])
                
                if ((rax_14 == 0 || rax_15 != 0)
                        && sub_142892480(*arg1, arg1[2], nullptr, &arg1[0xd], nullptr, 1) != 0
                        && sub_1428927c0(*arg1, &arg1[0xd], &arg_8, &arg1[0xd] + arg1[3], 0x10)
                        != 0 && arg_8 == 0x10
                        && sub_1428927c0(*arg1, &arg1[0xf], &arg_8, &arg1[0xd], 0x10) != 0
                        && arg_8 == 0x10)
                    if (arg1[3] == 0x10)
                        return 1
                    
                    if (sub_1428927c0(*arg1, &arg1[0x11], &arg_8, &arg1[0xf], 0x10) != 0
                            && arg_8 == 0x10)
                        return 1

return 0
