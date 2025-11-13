// 函数: sub_142c4d380
// 地址: 0x142c4d380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x120) = *arg3
*(arg1 + 0x128) = arg3[1]
int64_t rax_2 = GetProcAddress(*(arg1 + 0x118), "AmdDxExtCreate11")

if (rax_2 != 0 && rax_2(*(arg1 + 0x120), arg1 + 0x138) == 0)
    int64_t* rcx_2 = *(arg1 + 0x138)
    
    if (rcx_2 != 0)
        int32_t arg_20
        (*(*rcx_2 + 0x18))(rcx_2, &arg_20)
        *(arg3 + 0x1c) |= 1
        int64_t* rcx_3 = *(arg1 + 0x138)
        int32_t r14_1 = arg_20
        int32_t arg_8 = 0
        
        if ((*(*rcx_3 + 0x48))(rcx_3, 1, &arg_8, 4) == 0 && arg_8 != 0)
            *(arg3 + 0x1c) |= 2
        
        int64_t* rcx_4 = *(arg1 + 0x138)
        int64_t rax_8 = (*(*rcx_4 + 0x20))(rcx_4, 0xf)
        *(arg1 + 0x140) = rax_8
        int64_t arg_18
        
        if (rax_8 != 0)
            *(arg3 + 0x1c) |= 4
            int64_t* rcx_5 = *(arg1 + 0x140)
            arg_18 = 0
            (*(*rcx_5 + 0x28))(rcx_5, &arg_18)
            
            if (((arg_18.d << 0xa | arg_18:4.d) & 0xfffff) u>= 0x404)
                *(arg3 + 0x1c) |= 0x400000
        
        int64_t* rcx_6 = *(arg1 + 0x138)
        int64_t rax_15 = (*(*rcx_6 + 0x20))(rcx_6, 0xb)
        *(arg1 + 0x148) = rax_15
        
        if (rax_15 != 0)
            *(arg3 + 0x1c) |= 8
            
            if ((r14_1 << 0xa | arg4) << 0xc u>= 0x2401000)
                int64_t* rcx_7 = *(arg1 + 0x148)
                arg_18 = 0
                (*(*rcx_7 + 0x20))(rcx_7, &arg_18)
                
                if (((arg_18.d << 0xa | arg_18:4.d) & 0xfffff) u>= 0x401)
                    *(arg3 + 0x1c) |= 0x800000
        
        int64_t* rcx_8 = *(arg1 + 0x138)
        int64_t rax_22 = (*(*rcx_8 + 0x20))(rcx_8, 0x11)
        *(arg1 + 0x150) = rax_22
        
        if (rax_22 != 0)
            *(arg3 + 0x1c) |= 0x10
            int64_t* rcx_9 = *(arg1 + 0x150)
            arg_18 = 0
            (*(*rcx_9 + 0x18))(rcx_9, &arg_18)
            int32_t rax_27 = (arg_18.d << 0xa | arg_18:4.d) << 0xc
            
            if (rax_27 u>= 0x402000)
                *(arg3 + 0x1c) |= 0x20
            
            if (rax_27 u>= 0x404000)
                *(arg3 + 0x1c) |= 0x200000
        
        int64_t* rcx_10 = *(arg1 + 0x138)
        int64_t* rax_29 = (*(*rcx_10 + 0x20))(rcx_10, 0x18)
        *(arg1 + 0x170) = rax_29
        
        if (rax_29 != 0)
            arg_18 = 0
            int64_t r8_1 = *rax_29
            (*(r8_1 + 0x18))(rax_29, &arg_18, r8_1)
            
            if (((arg_18.d << 0xa | arg_18:4.d) & 0xfffff) u>= 0x400)
                *(arg3 + 0x1c) |= 0x20000
        
        int64_t* rcx_12 = *(arg1 + 0x138)
        int64_t rax_35 = (*(*rcx_12 + 0x20))(rcx_12, 0x17)
        int64_t* rcx_13 = *(arg1 + 0x138)
        *(arg1 + 0x178) = rax_35
        int64_t* rax_37 = (*(*rcx_13 + 0x20))(rcx_13, 0x15)
        *(arg1 + 0x168) = rax_37
        
        if (rax_37 != 0)
            arg_18 = 0
            int64_t r8_2 = *rax_37
            
            if ((*(r8_2 + 0x18))(rax_37, &arg_18, r8_2) == 0 && arg_18.d u>= 2)
                int64_t* rcx_15 = *(arg1 + 0x168)
                
                if ((*(*rcx_15 + 0x28))(rcx_15, 1) == 0)
                    *(arg3 + 0x1c) |= 0x80
                
                int64_t* rcx_16 = *(arg1 + 0x168)
                
                if ((*(*rcx_16 + 0x28))(rcx_16, 2) == 0)
                    *(arg3 + 0x1c) |= 0x100
                
                int64_t* rcx_17 = *(arg1 + 0x168)
                
                if ((*(*rcx_17 + 0x28))(rcx_17, 3) == 0)
                    *(arg3 + 0x1c) |= 0x200
                
                int64_t* rcx_18 = *(arg1 + 0x168)
                
                if ((*(*rcx_18 + 0x28))(rcx_18, 4) == 0)
                    *(arg3 + 0x1c) |= 0x400
                
                int64_t* rcx_19 = *(arg1 + 0x168)
                
                if ((*(*rcx_19 + 0x28))(rcx_19, 5) == 0)
                    *(arg3 + 0x1c) |= 0x800
                
                int64_t* rcx_20 = *(arg1 + 0x168)
                
                if ((*(*rcx_20 + 0x28))(rcx_20, 6) == 0)
                    *(arg3 + 0x1c) |= 0x1000
                
                int64_t* rcx_21 = *(arg1 + 0x168)
                
                if ((*(*rcx_21 + 0x28))(rcx_21, 8) == 0)
                    *(arg3 + 0x1c) |= 0x2000
                
                int64_t* rcx_22 = *(arg1 + 0x168)
                
                if ((*(*rcx_22 + 0x28))(rcx_22, 9) == 0)
                    *(arg3 + 0x1c) |= 0x4000
                
                int64_t* rcx_23 = *(arg1 + 0x168)
                
                if ((*(*rcx_23 + 0x28))(rcx_23, 0xb) == 0)
                    *(arg3 + 0x1c) |= 0x8000
                
                int64_t* rcx_24 = *(arg1 + 0x168)
                
                if ((*(*rcx_24 + 0x28))(rcx_24, 0xc) == 0)
                    *(arg3 + 0x1c) |= 0x10000
                
                int64_t* rcx_25 = *(arg1 + 0x168)
                
                if ((*(*rcx_25 + 0x28))(rcx_25, 0xa) == 0 && *(arg1 + 0x178) != 0)
                    *(arg3 + 0x1c) |= 0x40000
                
                int64_t* rcx_26 = *(arg1 + 0x168)
                
                if ((*(*rcx_26 + 0x28))(rcx_26, 0xd) == 0)
                    *(arg3 + 0x1c) |= 0x1000000
                
                int64_t* rcx_27 = *(arg1 + 0x168)
                
                if ((*(*rcx_27 + 0x28))(rcx_27, 0xe) == 0)
                    *(arg3 + 0x1c) |= 0x2000000
                
                int64_t* rcx_28 = *(arg1 + 0x168)
                
                if ((*(*rcx_28 + 0x30))(rcx_28) != 0)
                    *(arg3 + 0x1c) &= 0xfcfa007f
                else if (arg2 != 0)
                    int32_t rdx_7 = *(arg2 + 0x1c)
                    
                    if (rdx_7 != 0)
                        int64_t* rcx_29 = *(arg1 + 0x168)
                        
                        if ((*(*rcx_29 + 0x38))(rcx_29, rdx_7) != 0)
                            *(arg3 + 0x1c) &= 0xfcfa007f
        
        int64_t* rcx_30 = *(arg1 + 0x138)
        int64_t rax_70 = (*(*rcx_30 + 0x20))(rcx_30, 0x14)
        *(arg1 + 0x158) = rax_70
        
        if (rax_70 != 0)
            *(arg3 + 0x1c) |= 0x40
            int64_t* rcx_31 = *(arg1 + 0x158)
            arg3[4].d = (*(*rcx_31 + 0x48))(rcx_31)
            int64_t* rcx_32 = *(arg1 + 0x158)
            (*(*rcx_32 + 0x18))(rcx_32, &arg_18)
            bool cond:1_1 = *(arg1 + 0x100) != 1
            *(arg1 + 0x160) = (arg_18.d << 0xa | arg_18:4.d) << 0xc
            
            if (not(cond:1_1))
                int64_t* rcx_33 = *(arg1 + 0x158)
                (*(*rcx_33 + 0x20))(rcx_33)
        
        int64_t* rcx_34 = *(arg1 + 0x138)
        int64_t rax_80 = (*(*rcx_34 + 0x20))(rcx_34, 0x1d)
        *(arg1 + 0x180) = rax_80
        
        if (rax_80 != 0)
            *(arg3 + 0x1c) |= 0x100000
            
            if (arg2 != 0)
                uint64_t rax_81 = zx.q(*(arg2 + 0x18))
                
                if (rax_81.d != 0)
                    int64_t rax_82 = sub_142c4c1b0(zx.q((rax_81 << 3).d) + 0x1000)
                    *(arg1 + 0x188) = rax_82
                    int64_t var_48_1 = 0
                    int64_t rax_84 = (rax_82 + 0xfff) & 0xfffffffffffff000
                    uint64_t var_50_1 = zx.q((rax_81 << 3).d) + 0x1000
                    arg3[5] = rax_84
                    int64_t* rcx_36 = *(arg1 + 0x180)
                    int64_t var_58 = rax_84
                    
                    if ((*(*rcx_36 + 0x20))(rcx_36, &var_58) != 0)
                        arg3[5] = 0
                    else
                        *(arg1 + 0x190) = var_48_1
                        *(arg1 + 0x198) = *(arg2 + 0x18)

int32_t result = *(arg3 + 0x1c)

if (*(arg1 + 0x100) == 2)
    arg3[4].d = 1

*(arg1 + 0x130) = result
return result
