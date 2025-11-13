// 函数: sub_142c699b0
// 地址: 0x142c699b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0

if (*(arg1 + 0xf8) == 0 && *(arg1 + 0x100) == 0)
    arg4 = sub_142c6f300(arg1, 7)

*arg3 |= 2
int32_t rax_5

if (*(arg1 + 0x238) != 0)
label_142c69bcc:
    *(arg1 + 0x238)
    uint64_t arg_18
    uint64_t* var_38_1 = &arg_18
    int64_t r8_4
    rax_5, r8_4 = sub_142c64d60(arg2, arg2[0x8b], arg4, *(arg1 + 0x240))
    
    if (rax_5 == 0)
        if (*(arg1 + 0x5f0) != rax_5.b)
            r8_4, arg5 = sub_142c64600(arg1, rax_5 + 4, *(arg1 + 0x240), arg_18, arg5, arg2)
        
        uint64_t rcx_11 = arg_18
        *(arg1 + 0x100) += rcx_11
        
        if (*(arg1 + 0x100) == *(arg1 + 0x4e68))
            *(arg1 + 0x224) = 1
            sub_142c64850(arg1, "We are completely uploaded and fine\n", r8_4, arg5)
            rcx_11 = arg_18
        
        int64_t rax_18 = *(arg1 + 0x238)
        
        if (rax_18 != rcx_11)
            *(arg1 + 0x240) += rcx_11
            *(arg1 + 0x238) = rax_18 - rcx_11
            sub_142c6f1b0(arg1, *(arg1 + 0x100))
            return 0
        
        bool cond:3_1 = *(arg1 + 0x224) == 0
        *(arg1 + 0x240) = arg1 + 0xa88
        *(arg1 + 0x238) = 0
        
        if (cond:3_1)
            sub_142c6f1b0(arg1, *(arg1 + 0x100))
            return 0
        
        *(arg1 + 0x220) &= 0xfffffffd
        
        if (*(arg2 + 0x403) == 0)
            sub_142c6f1b0(arg1, *(arg1 + 0x100))
            return 0
        
        rax_5 = sub_142c687e0(arg2)
        
        if (rax_5 == 0)
            sub_142c6f1b0(arg1, *(arg1 + 0x100))
            return 0
else
    bool cond:1_1 = *(arg1 + 0x224) != 0
    *(arg1 + 0x240) = arg1 + 0xa88
    
    if (cond:1_1)
    label_142c69c75:
        
        if ((*(arg1 + 0x220) & 0x20) != 0)
            return 0
        
    label_142c69c7e:
        *(arg1 + 0x220) &= 0xfffffffd
        
        if (*(arg2 + 0x403) != 0)
            int32_t rax_20 = sub_142c687e0(arg2)
            
            if (rax_20 != 0)
                return rax_20
        
        return 0
    
    void* rcx = *(arg1 + 0x250)
    
    if (*(arg1 + 0x198) == 2 && *(rcx + 0x78) == 2)
        *(arg1 + 0x220) &= 0xfffffffd
        *(arg1 + 0x198) = 1
        uint64_t var_28[0x2]
        arg4.o = *sub_142c59600(&var_28)
        *(arg1 + 0x188) = arg4.o
        *arg3 &= 0xfffffffd
        sub_142c52ab0(arg1, sx.q(*(arg1 + 0x854)), 0, arg5)
        return 0
    
    if ((*(arg2[0x87] + 0x7c) & 0x40003) != 0)
        rbp.b = *(rcx + 0x78) == 1
    
    int32_t arg_8
    rax_5, arg4, arg5 = sub_142c68080(arg2, 0x4000, &arg_8, arg5)
    
    if (rax_5 == 0)
        int64_t rdi_1 = sx.q(arg_8)
        
        if (rdi_1 == 0)
            goto label_142c69c75
        
        if (rdi_1 s<= 0)
            goto label_142c69c7e
        
        *(arg1 + 0x238) = rdi_1
        
        if (rbp.b == 0 && *(arg1 + 0x3da) != rbp.b)
            if (*(arg1 + 0x4b08) == 0)
                int64_t rax_8
                int64_t r8_1
                rax_8, r8_1 = data_143ccb898(sx.q(*(arg1 + 0x598) * 2))
                *(arg1 + 0x4b08) = rax_8
                
                if (rax_8 == 0)
                    sub_142c64760(arg1, "Failed to alloc scratch buffer!", r8_1, arg5)
                    return 0x1b
            
            int64_t rcx_6 = 0
            char* rdx_1 = nullptr
            
            if (rdi_1 s> 0)
                do
                    char r8_2 = rdx_1[*(arg1 + 0x240)]
                    int64_t rax_11 = *(arg1 + 0x4b08)
                    
                    if (r8_2 != 0xa)
                        *(rcx_6 + rax_11) = r8_2
                    else
                        *(rcx_6 + rax_11) = 0xd
                        rcx_6 += 1
                        *(rcx_6 + *(arg1 + 0x4b08)) = r8_2
                        
                        if (*(arg1 + 0x3da) == 0)
                            int64_t rax_13 = *(arg1 + 0x4e68)
                            
                            if (rax_13 != -1)
                                *(arg1 + 0x4e68) = rax_13 + 1
                    
                    rdx_1 = &rdx_1[1]
                    rcx_6 += 1
                while (rdx_1 s< rdi_1)
            
            if (rcx_6 != rdi_1)
                rdi_1 = rcx_6
                *(arg1 + 0x240) = *(arg1 + 0x4b08)
                *(arg1 + 0x238) = rcx_6
        
        if ((*(arg2[0x87] + 0x7c) & 0x30000) == 0)
            goto label_142c69bcc
        
        rax_5, arg4, arg5 = sub_142c7bff0(arg2, rdi_1, arg5)
        
        if (rax_5 == 0)
            goto label_142c69bcc

return rax_5
