// 函数: sub_142907980
// 地址: 0x142907980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0
char* rax = arg4
int64_t r9 = sx.q(*arg1)
void* r15 = arg2
int32_t rdx = 0
int32_t arg_8 = 0
int32_t rbx = 0
int32_t r14 = 0

if (r9.d s> 0)
    rax = arg4
    
    if (*(r9 + arg1 + 7) == 0x3d)
        rbx = 1
        
        if (r9.d s> 1 && *(r9 + arg1 + 6) == 0x3d)
            rbx = 2

if (arg5 != 0)
    void* const rcx = &data_14351b650
    
    if ((arg1[0x17].b & 2) == 0)
        rcx = &data_14351b5d0
    
    int32_t rsi_1 = 0
    void* const var_48_1 = rcx
    
    if (arg5 s> 0)
        int64_t r8 = r9
        
        while (true)
            char rdx_1 = *rax
            uint64_t rax_1
            
            if (rdx_1 s>= 0)
                rax_1 = zx.q(*(zx.q(rdx_1) + rcx))
            else
                rax_1.b = 0xff
            
            uint32_t rcx_1 = zx.d(rax_1.b)
            
            if (rcx_1 == 0xff)
                goto label_142907b6d_1
            
            if (rdx_1 == 0x3d)
                rbx += 1
            else if (rbx s> 0 && (rcx_1 | 0x13) != 0xf3)
                goto label_142907b6d_1
            
            if (rbx s> 2)
                goto label_142907b6d_1
            
            if (rcx_1 == 0xf2)
                rdx = 1
                arg_8 = 1
                break
            
            if ((rcx_1 | 0x13) != 0xf3)
                if (r9.d s>= 0x40)
                    goto label_142907b6d_1
                
                r9 = zx.q(r9.d + 1)
                *(r8 + arg1 + 8) = rdx_1
                r8 += 1
            
            if (r9.d == 0x40)
                int32_t rax_5 = sub_142907e30(arg1, r15, &arg1[2], r9.d)
                r9 = 0
                r8 = 0
                
                if (rax_5 s< 0)
                    goto label_142907b6d_1
                
                if (rbx s> rax_5)
                    goto label_142907b6d_1
                
                int32_t rax_6 = rax_5 - rbx
                r14 += rax_6
                r15 += sx.q(rax_6)
            
            rsi_1 += 1
            
            if (rsi_1 s>= arg5)
                rdx = 0
                break
            
            rax = &rax[1]
            rcx = var_48_1
    
    if (r9.d s<= 0)
        goto label_142907b2f
    
    if ((r9.b & 3) != 0)
        if (rdx == 0)
            goto label_142907b35
        
    label_142907b6d:
        rdi = -1
    else
        int32_t rax_8 = sub_142907e30(arg1, r15, &arg1[2], r9.d)
        r9 = 0
        
        if (rax_8 s< 0 || rbx s> rax_8)
        label_142907b6d_1:
            rdi = -1
        else
            r14 += rax_8 - rbx
        label_142907b2f:
            
            if (arg_8 == 0)
            label_142907b35:
                
                if (r9.d != 0 || rbx == 0)
                    rdi = 1

*arg3 = r14
*arg1 = r9.d
return zx.q(rdi)
