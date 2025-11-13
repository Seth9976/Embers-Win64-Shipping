// 函数: sub_14291b540
// 地址: 0x14291b540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t r12 = arg2
int32_t var_48 = 0xffffffff
int32_t* r13 = nullptr
int64_t* rbp = arg3
int32_t rax = sub_1428902d0(arg1, 2)

if (rax == 0 && sub_1428902d0(arg1, zx.q(rax + 3)) == 0)
    if (sub_142890290(arg1) != 0 && sub_14288fc80(arg1, &data_1434e8ea8) s> 0)
        if (r12 == 0)
            if (sub_142890560(arg1) s< 0xea3)
                if (sub_142890560(arg1) s< 0x541)
                    if (sub_142890560(arg1) s< 0x1dc)
                        if (sub_142890560(arg1) s< 0x190)
                            if (sub_142890560(arg1) s< 0x15b)
                                if (sub_142890560(arg1) s< 0x134)
                                    r12 = 0x22
                                    
                                    if (sub_142890560(arg1) s>= 0x37)
                                        r12 = 0x1b
                                else
                                    r12 = 8
                            else
                                r12 = 7
                        else
                            r12 = 6
                    else
                        r12 = 5
                else
                    r12 = 4
            else
                r12 = 3
        
        int32_t rax_12
        
        if (arg4 != 0)
            int32_t rdi_1 = 1
            
            for (void* const i = &data_143520be2; i s< "crypto\bn\bn_prime.c"; i += 2)
                uint64_t rax_11 = sub_1428f51c0(arg1, zx.q(*i))
                
                if (rax_11 == -1)
                    goto label_14291b902
                
                if (rax_11 == 0)
                    return sub_1428902d0(arg1, zx.q(*(&data_143520be0 + (sx.q(rdi_1) << 1))))
                
                rdi_1 += 1
            
            rax_12 = sub_14291af30(arg5, 1, 0xffffffff)
        
        if (arg4 == 0 || rax_12 != 0)
            if (rbp != 0)
            label_14291b6fd:
                sub_1428d8e50(rbp)
                int64_t* rax_14 = sub_1428d8ba0(rbp)
                int64_t* rax_15 = sub_1428d8ba0(rbp)
                int64_t* rdi_2 = rax_15
                int64_t* rax_16 = sub_1428d8ba0(rbp)
                int64_t* rax_17 = sub_1428d8ba0(rbp)
                
                if (rax_17 != 0 && sub_142890040(rax_14, arg1) != 0 && sub_1428f53f0(rax_14, 1) != 0
                        && sub_142890040(rdi_2, arg1) != 0 && sub_1428f53f0(rdi_2, 3) != 0)
                    int32_t r13_1 = 1
                    
                    if (sub_142890240(rax_14, 1) == 0)
                        int32_t i_1
                        
                        do
                            r13_1 += 1
                            i_1 = sub_142890240(rax_14, r13_1)
                        while (i_1 == 0)
                    
                    if (sub_1428f5760(rax_16, rax_14, r13_1) == 0)
                    label_14291b8d2:
                        r13 = nullptr
                    else
                        int32_t* rax_24 = sub_1428cc660()
                        
                        if (rax_24 == 0)
                            r13 = rax_24
                        else
                            if (sub_1428cc700(rax_24, arg1, rbp) != 0)
                                int32_t r15_2 = 0
                                
                                if (r12 s> 0)
                                    do
                                        if (sub_1429198c0(rax_17, rdi_2) == 0)
                                            goto label_14291b8d2_1
                                        
                                        if (sub_1428f4ee0(rax_17, 2) == 0)
                                            goto label_14291b8d2_1
                                        
                                        if (sub_1429060f0(rax_17, rax_17, rax_16, arg1, rbp, rax_24)
                                                == 0)
                                            goto label_14291b8d2_1
                                        
                                        if (sub_1428902b0(rax_17) == 0
                                                && sub_14288fc80(rax_17, rax_14) != 0)
                                            int32_t i_3 = r13_1 - 1
                                            
                                            if (i_3 != 0)
                                                int32_t i_2
                                                
                                                do
                                                    if (sub_1429082e0(rax_17, rax_17, rax_17, arg1, 
                                                            rbp) == 0)
                                                        goto label_14291b8d2_1
                                                    
                                                    if (sub_1428902b0(rax_17) != 0)
                                                        break
                                                    
                                                    if (sub_14288fc80(rax_17, rax_14) == 0)
                                                        rdi_2 = rax_15
                                                        goto label_14291b954
                                                    
                                                    i_2 = i_3
                                                    i_3 -= 1
                                                while (i_2 != 1)
                                            
                                            var_48 = 0
                                            goto label_14291b8d2_1
                                        
                                    label_14291b954:
                                        
                                        if (sub_14291af30(arg5, 1, zx.q(r15_2)) == 0)
                                            goto label_14291b8d2_1
                                        
                                        r15_2 += 1
                                    while (r15_2 s< r12)
                                
                                var_48 = 1
                            
                        label_14291b8d2_1:
                            r13 = rax_24
                
                if (rbp != 0)
                    sub_1428d8a60(rbp)
                    
                    if (arg3 == 0)
                        sub_1428d8ae0(rbp)
            else
                int64_t* rax_13 = sub_1428d8d60()
                rbp = rax_13
                
                if (rax_13 != 0)
                    goto label_14291b6fd
        
    label_14291b902:
        sub_1428cc600(r13)
        return zx.q(var_48)
    
    return 0

return 1
