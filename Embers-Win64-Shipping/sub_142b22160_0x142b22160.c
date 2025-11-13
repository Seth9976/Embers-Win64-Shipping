// 函数: sub_142b22160
// 地址: 0x142b22160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
uint32_t rbx = arg4
int32_t rbp = arg3
int64_t* r10 = arg2
bool cond:5 = arg4.b u< 0xc0
void* rax_4

while (true)
    int64_t rdx_16
    
    if (cond:5)
        rdx_16 = zx.q(((rbx & 0xffffff00) << 8 | zx.d(rbx.b)) << 8)
            | (zx.q(rbx) & 0xffffffffffff0000) << 0x20
    else
        rax_4 = &__dos_header.e_magic[zx.q(jump_table_142b228d4[sx.q(rbx & 0xf)])]
        int32_t* var_38
        
        switch (rax_4)
            case 0x142b221aa
                rax_4 = (*(*arg1 + 0x70))(arg1, zx.q(rbx), arg6)
                rbx = rax_4.d
                
                if (*arg6 s> 0)
                    break
                
                if (rax_4.d != 0xc0)
                label_142b22571:
                    r10 = arg_10
                    cond:5 = rbx.b u< 0xc0
                    continue
                
                int64_t* rcx_2 = *(arg1[2] + 0x20)
                arg_10 = rcx_2
                r10 = arg_10
                rbx = sub_142aa3ce0(rcx_2, rbp)
                cond:5 = rbx.b u< 0xc0
                continue
            case 0x142b221ee
                if (arg5 != 0)
                    (*(*arg1 + 0x60))(arg1, 1, arg6)
                    r10 = arg_10
                
                rbx = sub_142b23270(arg1, r10, rbx, arg6)
                
                if (arg5 == 0)
                    goto label_142b22571
                
                (*(*arg1 + 0x58))(arg1, 1, arg6)
                r10 = arg_10
                cond:5 = rbx.b u< 0xc0
                continue
            case 0x142b2224d
                int16_t* rax_12 = r10[3] + (zx.q(rbx) u>> 0xd << 1)
                uint32_t rcx_10 = zx.d(*rax_12) << 0x10 | zx.d(rax_12[1])
                
                if (arg5 != 0)
                    uint32_t rax_15
                    
                    if (arg1[0x2f] != 0 || arg1[0x30].d s>= 0)
                        rax_15 = sub_142b23e00(arg1)
                        
                        if (rax_15 s< 0)
                            rbx = rcx_10
                            cond:5 = rbx.b u< 0xc0
                            r10 = arg_10
                            continue
                        else if (test_bit(rbx, 9))
                            if (sub_142b23470(rax_15) == 0)
                                sub_142b22ec0(arg1, 1, arg6)
                                rbx = rcx_10
                                cond:5 = rbx.b u< 0xc0
                                r10 = arg_10
                                continue
                            
                            rax_15 = rax_15
                    else
                        rax_15 = (*(*arg1 + 0x28))(arg1, arg6)
                        
                        if (rax_15 s< 0)
                            rbx = rcx_10
                            cond:5 = rbx.b u< 0xc0
                            r10 = arg_10
                            continue
                        else if (test_bit(rbx, 9))
                            if (sub_142b23470(rax_15) == 0)
                                (*(*arg1 + 0x60))(arg1, 1, arg6)
                                rbx = rcx_10
                                cond:5 = rbx.b u< 0xc0
                                r10 = arg_10
                                continue
                            
                            rax_15 = rax_15
                    
                    var_38 = arg6
                    int32_t* var_40
                    var_40.d = rax_15
                    char var_48
                    var_48.d = rcx_10
                    rax_4 = sub_142b234d0(arg1, arg_10, rbx, &rax_12[2], var_48, var_40.d, var_38)
                    rbx = rax_4.d
                    
                    if (rax_4.d == 1)
                        break
                    
                    r10 = arg_10
                    cond:5 = rbx.b u< 0xc0
                    continue
                else
                    rbx = rcx_10
                    cond:5 = rbx.b u< 0xc0
                    continue
            case 0x142b223a5
                if (*(arg1 + 0x184) != 0)
                    return sub_142b22920(arg1, rbx, arg5, arg6) __tailcall
                
                rbx = *(r10[1] + (zx.q(rbx) u>> 0xd << 2))
                cond:5 = rbx.b u< 0xc0
                continue
            case 0x142b223c7
                if (arg5 == 0)
                    goto label_142b223eb
                
                if ((*(*arg1 + 0x48))(arg1, &__dos_header) == 0)
                    r10 = arg_10
                label_142b223eb:
                    rbx = *r10[1]
                    cond:5 = rbx.b u< 0xc0
                    continue
                
                rdx_16 = 0x101000100
            case 0x142b223f5
                int64_t rcx_21 = r10[5]
                int32_t r8_9 = (rbp - 0xac00) s/ 0x1c
                int32_t rbp_2 = (rbp - 0xac00) s% 0x1c
                int32_t rdx_9 = r8_9 s/ 0x15
                uint32_t r8_10 = r8_9 s% 0x15
                
                if (not(test_bit(rbx, 8)))
                    sub_142b22160(arg1, r10, 0xffffffff, zx.q(*(rcx_21 + (sx.q(rdx_9) << 2))), 
                        arg5, arg6, var_38)
                    rax_4 = sub_142b22160(arg1, arg_10, 0xffffffff, 
                        zx.q(*(rcx_21 + (sx.q(r8_10 + 0x13) << 2))), arg5, arg6)
                    
                    if (rbp_2 == 0)
                        break
                    
                    r10 = arg_10
                    rbp = -1
                    rbx = *(rcx_21 + (sx.q(rbp_2 + 0x27) << 2))
                    cond:5 = rbx.b u< 0xc0
                    continue
                
                int32_t rdx_17
                rdx_17.b = rbp_2 != 0
                rax_4 = sub_142b22f80(&arg1[3], rdx_17 + 2, arg6)
                
                if (rax_4.b != 0)
                    *(arg1[4] + (sx.q(arg1[3].d) << 3)) =
                        sub_142b22f30(*(rcx_21 + (sx.q(rdx_9) << 2)))
                    rax_4 = sub_142b22f30(*(rcx_21 + (sx.q(r8_10 + 0x13) << 2)))
                    *(arg1[4] + (sx.q(arg1[3].d + 1) << 3)) = rax_4
                    arg1[3].d += 2
                    
                    if (rbp_2 != 0)
                        int64_t rax_52 = sub_142b22f30(*(rcx_21 + (sx.q(rbp_2 + 0x27) << 2)))
                        int64_t rcx_40 = sx.q(arg1[3].d)
                        arg1[3].d = rcx_40.d + 1
                        *(arg1[4] + (rcx_40 << 3)) = rax_52
                        return rax_52
                
                break
            case 0x142b224c8
                uint32_t rcx_27 = zx.d((*(*arg1 + 0x40))(arg1, &__dos_header))
                int32_t rbx_3
                
                if ((rcx_27 & 0xfffffc00) == 0xdc00)
                    rbp = ((rbp - 0xd7f7) << 0xa) + rcx_27
                    rbx_3 = rbx & 0x300
                
                if ((rcx_27 & 0xfffffc00) != 0xdc00 || rbx_3 == 0)
                    r10 = arg_10
                    rbx = -1
                    cond:5 = false
                    continue
                
                uint32_t rax_38
                
                if (rbx_3 != 0x100)
                    rax_38 = sub_142b233b0(arg_10, rbp)
                    rbx = rax_38
                
                if (rbx_3 != 0x100 && rax_38 != 0xc0)
                    goto label_142b22571
                
                int64_t* rax_40 = arg_10[4]
                arg_10 = rax_40
                r10 = arg_10
                rbx = sub_142b233b0(rax_40, rbp)
                cond:5 = rbx.b u< 0xc0
                continue
            case 0x142b22549
                char rax_45
                
                if ((rbp & 0xfffff800) == 0xd800)
                    rax_45 = (*(*arg1 + 0x50))(arg1, &__dos_header)
                
                if ((rbp & 0xfffff800) == 0xd800 && rax_45 != 0)
                    rbx = -0x2fafb
                    goto label_142b22571
                
                int32_t rax_53 = sub_142b2c470(rbp)
                
                if (arg1[3].d s>= 0x28)
                    rax_4 = sub_142b22f80(&arg1[3], 1, arg6)
                
                if (arg1[3].d s>= 0x28 && rax_4.b == 0)
                    break
                
                int64_t rax_54 = sx.q(arg1[3].d)
                arg1[3].d = rax_54.d + 1
                int64_t rax_56 = arg1[4]
                *(rax_56 + (rax_54 << 3)) = zx.q(rax_53) << 0x20 | 0x5000500
                return rax_56
            case 0x142b226a2
                if (*arg6 s> 0)
                    break
                
                *arg6 = 5
                return rax_4
            case 0x142b226be
                rdx_16 = (zx.q(rbx) & 0xffffffffffffff00) << 0x20 | 0x5000500
            case 0x142b226d7
                rdx_16 = zx.q(rbx) & 0xffffff00
            case 0x142b226e7
                rax_4 = sub_142b22f80(&arg1[3], 2, arg6)
                
                if (rax_4.b == 0)
                    break
                
                *(arg1[4] + (sx.q(arg1[3].d) << 3)) = ((zx.q(rbx) & 0xff0000) | 0x500000000) u>> 8
                    | (zx.q(rbx) & 0xffffffffff000000) << 0x20
                int64_t rax_63 = arg1[4]
                *(rax_63 + (sx.q(arg1[3].d + 1) << 3)) = zx.q((0xffffff00 & rbx) << 0x10) | 0x500
                arg1[3].d += 2
                return rax_63
            case 0x142b22766
                int32_t i = rbx u>> 8 & 0x1f
                int32_t* rbp_5 = r10[1] + (zx.q(rbx) u>> 0xd << 2)
                rax_4 = sub_142b22f80(&arg1[3], i, arg6)
                
                if (rax_4.b == 0)
                    break
                
                int64_t rax_73
                
                do
                    int32_t rcx_54 = *rbp_5
                    uint32_t rdx_38 = zx.d(rcx_54.b)
                    int64_t rdx_41
                    
                    if (rdx_38 u>= 0xc0)
                        int32_t rcx_55 = rcx_54 - rdx_38
                        rdx_38.b &= 0xf
                        rdx_41 = zx.q(rcx_55)
                        
                        if (rdx_38.b == 1)
                            rdx_41 = rdx_41 << 0x20 | 0x5000500
                    else
                        rdx_41 = zx.q((rdx_38 | (rcx_54 & 0xffffff00) << 8) << 8)
                            | (zx.q(rcx_54) & 0xffffffffffff0000) << 0x20
                    
                    int64_t rax_71 = sx.q(arg1[3].d)
                    rbp_5 = &rbp_5[1]
                    i -= 1
                    arg1[3].d = rax_71.d + 1
                    rax_73 = arg1[4]
                    *(rax_73 + (rax_71 << 3)) = rdx_41
                while (i s> 0)
                
                return rax_73
            case 0x142b2280e
                int32_t i_1 = rbx u>> 8 & 0x1f
                int64_t* rbp_6 = r10[2] + (zx.q(rbx) u>> 0xd << 3)
                rax_4 = sub_142b22f80(&arg1[3], i_1, arg6)
                
                if (rax_4.b == 0)
                    break
                
                int64_t rax_77
                
                do
                    int64_t rax_75 = sx.q(arg1[3].d)
                    i_1 -= 1
                    int64_t rdx_44 = *rbp_6
                    rbp_6 = &rbp_6[1]
                    arg1[3].d = rax_75.d + 1
                    rax_77 = arg1[4]
                    *(rax_77 + (rax_75 << 3)) = rdx_44
                while (i_1 s> 0)
                
                return rax_77
            case 0x142b2286f
                rdx_16 = zx.q(sub_142b2c2e0(rbp, *(r10[2] + (zx.q(rbx) u>> 0xd << 3)))) << 0x20
                    | 0x5000500
    
    return sub_142b22120(&arg1[3], rdx_16, arg6)

return rax_4
