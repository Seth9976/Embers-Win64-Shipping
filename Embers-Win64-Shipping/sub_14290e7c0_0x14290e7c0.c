// 函数: sub_14290e7c0
// 地址: 0x14290e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbx = 0
int64_t* var_18 = nullptr

if (arg2 - 1 u<= 7)
    switch (arg2)
        case 1
            if (arg3 != 0)
                return 1
            
            sub_14292e640(arg4, nullptr, nullptr, &var_18)
        label_14290e847:
            
            if (var_18 == 0)
                return 1
            
            void* rax_3 = sub_1428a9570(6)
            sub_1428dafb0(var_18, rax_3, 5, 0)
            return 1
        case 2
            if (**(arg1 + 0x10) != 0x390)
                if (arg3 != 0)
                    return 1
                
                sub_14292e630(arg4, &var_18)
                goto label_14290e847
        case 3
            *arg4 = 0x2a0
            return 1
        case 5
            int64_t* var_10
            int32_t arg_10
            
            if (arg3 != 0)
                if (arg3 == 1)
                    int64_t* rax_11 = sub_1427ec3c0(arg4)
                    sub_14293c8e0(arg4, nullptr, nullptr, nullptr, &var_10)
                    int32_t rax_12 = sub_1428a96d0(*var_10)
                    
                    if (rax_12 == 0x390)
                        return sub_142910560(nullptr, rax_11, var_10, 0)
                    
                    if (**rax_11 == 0x390)
                        int64_t* var_28_2
                        var_28_2.d = 0x2e0
                        sub_1428a5670(4, 0x9e, 0x90, "crypto\rsa\rsa_ameth.c", var_28_2.d)
                        return 0
                    
                    if (rax_12 == 6)
                        return 1
                    
                    if (sub_1428e38e0(rax_12, nullptr, &arg_10) != 0 && arg_10 == 6)
                        return 1
                    
                    return zx.q(rbx)
                
                return 1
            
            arg_10 = 1
            int64_t* rax_5 = sub_1427ec3c0(arg4)
            sub_14293c8e0(arg4, nullptr, nullptr, nullptr, &var_10)
            int32_t rax_6
            
            if (rax_5 != 0)
                rax_6 = sub_1428973a0(rax_5, 0xffffffff, 0x1006, 0, &arg_10)
            
            if (rax_5 != 0 && rax_6 s<= 0)
                return zx.q(rbx)
            
            int32_t rax_7 = arg_10
            void* rax_8
            int32_t r8
            int32_t* r9_1
            
            if (rax_7 != 1)
                if (rax_7 != 6)
                    return zx.q(rbx)
                
                int32_t* rax_9 = sub_14290fc60(rax_5)
                
                if (rax_9 == 0)
                    return zx.q(rbx)
                
                rax_8 = sub_1428a9570(0x390)
                r9_1 = rax_9
                r8 = 0x10
            else
                rax_8 = sub_1428a9570(rax_7 + 5)
                r9_1 = nullptr
                r8 = 5
            
            sub_1428dafb0(var_10, rax_8, r8, r9_1)
            return 1
        case 7
            if (**(arg1 + 0x10) != 0x390)
                if (arg3 == 0)
                    return sub_14290f9f0(arg4)
                
                if (arg3 == 1)
                    return sub_14290f740(arg4)
                
                return 1
        case 8
            if (**(arg1 + 0x10) != 0x390)
                *arg4 = 0
                return 1

return 0xfffffffe
