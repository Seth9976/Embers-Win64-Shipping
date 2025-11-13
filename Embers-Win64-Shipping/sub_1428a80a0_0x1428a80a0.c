// 函数: sub_1428a80a0
// 地址: 0x1428a80a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rbx = *(arg1 + 0x38)
uint32_t count = 1
int64_t r12 = sx.q(arg3)
int64_t* rcx_2

if (arg2 - 1 u> 0x79)
label_1428a8506:
    rcx_2 = *(arg1 + 0x40)
    
    if (rcx_2 == 0)
        return 0
    
    return zx.q(sub_142899cf0(rcx_2, arg2, r12.d, arg4))

switch (arg2)
    case 1
        *(rbx + 0x10) = 0
        *(rbx + 0x20) = 0
    case 2
        if (rbx[4] s> 0)
            return 0
        
        return zx.q(sub_142899cf0(*(arg1 + 0x40), arg2, r12.d, arg4))
    case 3
        return zx.q(rbx[8])
    case 4, 5, 6, 7, 8, 9, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
            0x1a, 0x1b, 0x1c, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 
            0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
            0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 
            0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
            0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 
            0x61, 0x62, 0x63, 0x64, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 
            0x70, 0x71, 0x72, 0x73, 0x76, 0x77, 0x78, 0x79
        goto label_1428a8506
    case 0xa
        count = rbx[4]
        goto label_1428a818a
    case 0xb
        rcx_2 = *(arg1 + 0x40)
        
        if (rcx_2 == 0)
            return 0
        
        if (rbx[8] s> 0)
            sub_142899cc0(arg1, 0xf)
            
            for (int32_t i = rbx[8]; i s> 0; i = rbx[8])
                count = sub_14289aa40(*(arg1 + 0x40), sx.q(rbx[9]) + *(rbx + 0x18), i)
                sub_142899cd0(arg1)
                
                if (count s<= 0)
                    return zx.q(count)
                
                rbx[9] += count
                rbx[8] -= count
                sub_142899cc0(arg1, 0xf)
            
            *(rbx + 0x20) = 0
            rcx_2 = *(arg1 + 0x40)
        
        return zx.q(sub_142899cf0(rcx_2, arg2, r12.d, arg4))
    case 0xc
        int32_t rax_11 = sub_14289a4d0(arg4, 0x75, *rbx, 0)
        int32_t rax_12
        
        if (rax_11 != 0)
            rax_12 = sub_14289a4d0(arg4, 0x75, rbx[1], 1)
        
        if (rax_11 == 0 || rax_12 == 0)
            count = 0
        
        return zx.q(count)
    case 0xd
        count = rbx[8]
    label_1428a818a:
        
        if (count != 0)
            return zx.q(count)
    case 0x1d
        void arg_10
        void* r15_2 = &arg_10
        int32_t rdi = 0
        
        if (rbx != 0 && *(arg1 + 0x40) != 0)
            sub_142899cc0(arg1, 0xf)
            int32_t rax_13 = rbx[5]
            int32_t r14_2 = rbx[4]
            
            while (true)
                if (r14_2 != 0)
                    int32_t r13_2 = rdi
                    
                    if (r14_2 s<= rdi)
                        r13_2 = r14_2
                    
                    int64_t r14_3 = sx.q(r13_2)
                    memcpy(r15_2, sx.q(rax_13) + *(rbx + 8), r14_3.d)
                    rbx[5] += r13_2
                    rbx[4] -= r13_2
                    
                    if (rdi == r13_2)
                        break
                    
                    rdi -= r13_2
                    r15_2 += r14_3
                
                int32_t r8_14 = *rbx
                
                if (rdi s> r8_14)
                    while (true)
                        int32_t rax_15 = sub_14289a950(*(arg1 + 0x40), r15_2, rdi)
                        int64_t rbp_1 = sx.q(rax_15)
                        
                        if (rax_15 s<= 0)
                            sub_142899cd0(arg1)
                            
                            if (rbp_1.d s< 1)
                                break
                        
                        if (rdi == rbp_1.d)
                            break
                        
                        r15_2 += rbp_1
                        rdi -= rbp_1.d
                    
                    break
                
                int32_t rax_14 = sub_14289a950(*(arg1 + 0x40), *(rbx + 8), r8_14)
                r14_2 = rax_14
                
                if (rax_14 s<= 0)
                    sub_142899cd0(arg1)
                    
                    if (r14_2 s< 1)
                        break
                
                rbx[5] = 0
                rax_13 = 0
                rbx[4] = r14_2
        
        count = r12.d
        
        if (r12.d s> rbx[4])
            count = rbx[4]
        
        memcpy(arg4, sx.q(rbx[5]) + *(rbx + 8), count)
        return zx.q(count)
    case 0x65
        if (*(arg1 + 0x40) == 0)
            return 0
        
        sub_142899cc0(arg1, 0xf)
        count = sub_142899cf0(*(arg1 + 0x40), arg2, r12.d, arg4)
        sub_142899cd0(arg1)
        return zx.q(count)
    case 0x74
        uint64_t i_2 = zx.q(rbx[4])
        count = 0
        
        if (i_2.d s> 0)
            int64_t rcx_4 = *(rbx + 8) + sx.q(rbx[5])
            uint64_t i_1
            
            do
                bool cond:1_1 = *rcx_4 != 0xa
                uint32_t count_1 = count + 1
                rcx_4 += 1
                
                if (cond:1_1)
                    count_1 = count
                
                count = count_1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        return zx.q(count)
    case 0x75
        int32_t r14_1
        int32_t r15_1
        
        if (arg4 == 0)
            r14_1 = r12.d
            r15_1 = r12.d
        else if (*arg4 != 0)
            r15_1 = *rbx
            r14_1 = r12.d
        else
            r14_1 = rbx[1]
            r15_1 = r12.d
        
        int64_t rsi_2 = *(rbx + 8)
        int64_t r13_1 = *(rbx + 0x18)
        int64_t rax_7
        
        if (r15_1 s> 0x1000 && r15_1 != *rbx)
            rax_7 = sub_1428a6730(r12)
            rsi_2 = rax_7
        
        if (r15_1 s> 0x1000 && r15_1 != *rbx && rax_7 == 0)
            sub_1428a5670(0x20, 0x72, 0x41, "crypto\bio\bf_buff.c", 0x197)
            return 0
        
        int64_t rax_8
        
        if (r14_1 s> 0x1000 && r14_1 != rbx[1])
            rax_8 = sub_1428a6730(r12)
            r13_1 = rax_8
        
        if (r14_1 s> 0x1000 && r14_1 != rbx[1] && rax_8 == 0)
            if (rsi_2 != *(rbx + 8))
                sub_1428a6780(rsi_2)
            
            sub_1428a5670(0x20, 0x72, 0x41, "crypto\bio\bf_buff.c", 0x197)
            return 0
        
        int64_t rcx_11 = *(rbx + 8)
        
        if (rcx_11 != rsi_2)
            sub_1428a6780(rcx_11)
            *(rbx + 8) = rsi_2
            *(rbx + 0x10) = 0
            *rbx = r15_1
        
        int64_t rcx_12 = *(rbx + 0x18)
        
        if (rcx_12 != r13_1)
            sub_1428a6780(rcx_12)
            *(rbx + 0x18) = r13_1
            *(rbx + 0x20) = 0
            rbx[1] = r14_1
        
        return zx.q(count)
    case 0x7a
        int64_t rsi_1
        
        if (r12.d s<= *rbx)
            rsi_1 = *(rbx + 8)
        else
            int64_t rax_6 = sub_1428a6730(r12)
            rsi_1 = rax_6
            
            if (rax_6 == 0)
                sub_1428a5670(0x20, 0x72, 0x41, "crypto\bio\bf_buff.c", 0x197)
                return 0
            
            sub_1428a6780(*(rbx + 8))
            *(rbx + 8) = rsi_1
        
        rbx[4] = r12.d
        rbx[5] = 0
        memcpy(rsi_1, arg4, r12.d)
        return zx.q(count)

rcx_2 = *(arg1 + 0x40)

if (rcx_2 == 0)
    return 0

return zx.q(sub_142899cf0(rcx_2, arg2, r12.d, arg4))
