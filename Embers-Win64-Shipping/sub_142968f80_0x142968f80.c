// 函数: sub_142968f80
// 地址: 0x142968f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rdi = arg3
int32_t r15 = 0

if (sub_142898c70(arg1) s> 0)
    int32_t rax_20
    
    do
        int64_t* rax_1 = sub_142898ea0(arg1, r15)
        int32_t* rbp_1 = nullptr
        int32_t* r14_1 = nullptr
        void* rax_2 = sub_142975b70(rax_1, 0x9c)
        
        if (rax_2 != 0)
            rbp_1 = *(rax_2 + 8)
        
        void* rax_3 = sub_142975b70(rax_1, 0x9d)
        
        if (rax_3 != 0)
            r14_1 = *(rax_3 + 8)
        
        int32_t rax_4 = sub_142975cb0(rax_1)
        bool cond:0_1
        
        if (rax_4 == 0x96)
            if (arg4 != 0 && *arg4 == 0)
                int64_t* rax_19 = sub_1428f1170(sub_142975b90(rax_1))
                *arg4 = rax_19
                cond:0_1 = rax_19 == 0
            label_142969169:
                
                if (cond:0_1)
                    return 0
        else if (rax_4 == 0x97)
            if (arg4 != 0 && *arg4 == 0)
                void* rax_16 = sub_142975cd0(rax_1, arg2, rdi)
                
                if (rax_16 == 0)
                    return 0
                
                *arg4 = sub_1428f1170(rax_16)
                sub_1428f1010(rax_16)
                cond:0_1 = *arg4 == 0
                goto label_142969169
        else if (rax_4 == 0x98)
            if (sub_142975c70(rax_1) == 0x9e)
                void* rax_11 = sub_142975c10(rax_1)
                
                if (rax_11 == 0)
                    return 0
                
                int32_t rax_12
                
                if (r14_1 != 0)
                    rax_12 = sub_1428f14a0(rax_11, *(r14_1 + 8), *r14_1)
                
                if (r14_1 != 0 && rax_12 == 0)
                    sub_1428a2c50(rax_11)
                    return 0
                
                if (rbp_1 != 0)
                    int64_t var_48
                    int32_t rax_13 = sub_1428f6be0(&var_48, rbp_1)
                    
                    if (rax_13 s>= 0)
                        int32_t rax_14 = sub_1428f1340(rax_11, var_48, rax_13)
                        sub_1428a6780(var_48)
                        
                        if (rax_14 == 0)
                            sub_1428a2c50(rax_11)
                            return 0
                
                if (sub_142898d50(arg5, rax_11) == 0)
                    sub_1428a2c50(rax_11)
                    return 0
                
                rdi = arg3
        else if (rax_4 == 0x9b)
            cond:0_1 = sub_142968f80(sub_142975bd0(rax_1), arg2, zx.q(rdi), arg4, arg5) == 0
            goto label_142969169
        r15 += 1
        rax_20 = sub_142898c70(arg1)
    while (r15 s< rax_20)

return 1
