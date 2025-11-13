// 函数: sub_142a4e420
// 地址: 0x142a4e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r13 = arg1
char* r12 = arg2
void* i = nullptr
int32_t rbp = 0
int64_t r14 = sx.q(arg3)
int32_t arg_8 = 0

if (*arg1 != 0)
    char* rbx_1 = arg1
    
    do
        uint32_t rcx = zx.d(*rbx_1)
        
        if (rcx.b - 0x2d u<= 0x32 && test_bit(0x4000000080003, sx.q(rcx.b - 0x2d)))
            break
        
        if (&rbx_1[neg.q(arg1)] s< 3)
            *(&arg_8 - arg1 + rbx_1) = sub_142a863a0(rcx)
        
        rbx_1 = &rbx_1[1]
        rbp += 1
    while (*rbx_1 != 0)

if (*arg1 == 0 || rbp - 2 u> 1)
    rbp = 0
else if (rbp != 3)
label_142a4e59e:
    
    if (rbp s> 0)
        do
            if (i s< r14)
                void* rbx_2 = i + r12
                *rbx_2 = sub_142a863a0(zx.d(*(r13 - r12 + rbx_2)))
            
            i += 1
        while (i s< sx.q(rbp))
    
    r13 = &r13[sx.q(rbp)]
else
    int32_t r11_1 = 0
    void** const r9 = &data_143610ea0
    int16_t r9_1
    int64_t r10_1
    
    while (true)
        void* r8 = *r9
        r11_1 += 1
        r10_1 = -1
        
        if (r8 != 0)
            while (true)
                void* rax_6 = &arg_8
                uint32_t i_1
                uint32_t rdx
                
                do
                    rdx = zx.d(*rax_6)
                    i_1 = zx.d(*(rax_6 + r8 - &arg_8))
                    
                    if (rdx != i_1)
                        break
                    
                    rax_6 += 1
                while (i_1 != 0)
                
                if (rdx - i_1 == 0)
                    r9_1 = ((r9 - &data_143610ea0) s>> 3).w
                    break
                
                r8 = r9[1]
                r9 = &r9[1]
                
                if (r8 == 0)
                    goto label_142a4e524
            
            break
        
    label_142a4e524:
        r9 = &r9[1]
        
        if (r11_1 s>= 2)
            r9_1 = -1
            break
    
    int64_t rax_7 = sx.q(r9_1)
    
    if (rax_7.d s< 0)
        goto label_142a4e59e
    
    char* rcx_1 = (&data_14360f2d0)[rax_7]
    int32_t rdx_2 = rcx_1.d
    char rax_8 = *rcx_1
    
    if (rax_8 == 0)
    label_142a4e569:
        int32_t rcx_2 = rcx_1.d - rdx_2
        rbp = rcx_2
        r13 = &r13[sx.q(rcx_2)]
    else
        while (r14.d s> 0)
            rcx_1 = &rcx_1[1]
            *r12 = rax_8
            r12 = &r12[1]
            r14 = zx.q(r14.d - 1)
            rax_8 = *rcx_1
            
            if (rax_8 == 0)
                goto label_142a4e569
        
        bool cond:0_1
        
        do
            cond:0_1 = rcx_1[r10_1 + 1] != 0
            r10_1 += 1
        while (cond:0_1)
        rbp = rcx_1.d - rdx_2 + r10_1.d
        r13 = &r13[sx.q(rbp)]

if (arg4 != 0)
    *arg4 = r13

return zx.q(rbp)
