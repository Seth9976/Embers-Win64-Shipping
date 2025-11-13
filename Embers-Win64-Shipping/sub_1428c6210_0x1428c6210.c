// 函数: sub_1428c6210
// 地址: 0x1428c6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* r10 = *(arg3 + 0x18)
int32_t i_1 = 0
char rcx = *arg3
int32_t rdx = 1
int32_t var_38 = 1
int64_t rbp = 0

if (rcx == 0 || *arg1 != 0)
    if (r10 != 0)
        int64_t rax_1 = *(r10 + 0x18)
        
        if (rax_1 != 0)
            rbp = rax_1
    
    int64_t rax_2 = sx.q(rcx)
    
    if (rax_2.d u<= 6)
        switch (rax_2)
            case 0
                int32_t* r8 = *(arg3 + 8)
                int64_t* rcx_3 = arg1
                
                if (r8 == 0)
                    return sub_1428c6780(rcx_3, arg2, arg3, arg4, arg5.b)
                
                return sub_1428c6c20(rcx_3, arg2, r8, arg4, arg5)
            case 1
            label_1428c63af:
                int32_t arg_18
                int32_t rax_10 = sub_14291be40(&arg_18, arg2, arg1, arg3)
                
                if (rax_10 s>= 0)
                    if (rax_10 s> 0)
                        return arg_18
                    
                    int32_t rax_11 = 0x10
                    int32_t rdx_9 = 0
                    
                    if (arg4 != 0xffffffff)
                        rax_11 = arg4
                    
                    arg_18 = 0
                    int32_t r12_2 = arg5 & 0xffffff3f
                    
                    if (arg4 != 0xffffffff)
                        r12_2 = arg5
                    
                    if (rbp == 0)
                        goto label_1428c6415
                    
                    if (rbp(6, arg1, arg3, 0) != 0)
                        rdx_9 = arg_18
                    label_1428c6415:
                        int32_t* r14_2 = *(arg3 + 8)
                        int32_t i = 0
                        
                        if (*(arg3 + 0x10) s> 0)
                            do
                                int32_t* rax_13 = sub_14291bb90(arg1, r14_2, 1)
                                
                                if (rax_13 == 0)
                                    return 0
                                
                                int32_t rax_15 = sub_1428c6c20(sub_14291bff0(arg1, rax_13), 
                                    nullptr, rax_13, 0xffffffff, r12_2)
                                int32_t rdx_13
                                
                                if (rax_15 != 0xffffffff)
                                    rdx_13 = arg_18
                                
                                if (rax_15 == 0xffffffff || rax_15 s> 0x7fffffff - rdx_13)
                                    return -1
                                
                                rdx_9 = rdx_13 + rax_15
                                r14_2 = &r14_2[8]
                                i += 1
                                arg_18 = rdx_9
                            while (i s< *(arg3 + 0x10))
                        
                        uint64_t rbx_4 = zx.q(var_38)
                        int32_t rax_4 = sub_1428f30c0(rbx_4.d, rdx_9, rax_11)
                        
                        if (arg2 == 0 || rax_4 == 0xffffffff)
                            return rax_4
                        
                        int32_t var_48_5 = r12_2
                        sub_1428f3130(arg2, rbx_4.d, arg_18, rax_11, rbx_4, var_48_5.b)
                        int32_t* r14_4 = *(arg3 + 8)
                        
                        if (*(arg3 + 0x10) s> 0)
                            do
                                int32_t* rax_16 = sub_14291bb90(arg1, r14_4, 1)
                                
                                if (rax_16 == 0)
                                    return 0
                                
                                var_48_5 = r12_2
                                sub_1428c6c20(sub_14291bff0(arg1, rax_16), arg2, rax_16, 
                                    0xffffffff, var_48_5)
                                r14_4 = &r14_4[8]
                                i_1 += 1
                            while (i_1 s< *(arg3 + 0x10))
                            
                            rbx_4 = zx.q(var_38)
                        
                        if (rbx_4.d == 2)
                            sub_1428f3110(arg2)
                        
                        int32_t rax_18
                        
                        if (rbp != 0)
                            rax_18 = rbp(7, arg1, arg3, 0, var_48_5)
                        
                        if (rbp == 0 || rax_18 != 0)
                            return rax_4
            case 2
                int32_t rax_6
                
                if (rbp != 0)
                    rax_6 = rbp(6, arg1, arg3, 0)
                
                if (rbp == 0 || rax_6 != 0)
                    int32_t rax_7 = sub_14291bfe0(arg1, arg3)
                    
                    if (rax_7 s>= 0 && rax_7 s< *(arg3 + 0x10))
                        int32_t* rbx_3 = (sx.q(rax_7) << 5) + *(arg3 + 8)
                        return sub_1428c6c20(sub_14291bff0(arg1, rbx_3), arg2, rbx_3, -1, arg5)
                    
                    if (rbp != 0)
                        rbp(7, arg1, arg3, 0)
            case 4
                int32_t var_48_3 = arg5
                return (*(r10 + 0x28))(arg1, arg2, arg3)
            case 5
                return sub_1428c6780(arg1, arg2, arg3, 0xffffffff, arg5.b)
            case 6
                if (test_bit(arg5, 0xb))
                    rdx = 2
                
                var_38 = rdx
                goto label_1428c63af

return 0
