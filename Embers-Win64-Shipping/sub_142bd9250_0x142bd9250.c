// 函数: sub_142bd9250
// 地址: 0x142bd9250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t r10 = arg4
int32_t arg_18 = 0
int32_t rbp = arg3
int32_t r15 = arg2

if (arg3 s< 0)
    arg_18 = 1
    
    if (arg3 == 0xffffffeb)
        arg_18 = 3
        r15 -= 0x15
    
    rbp = 0

int32_t* arg_28
int32_t* r12 = arg_28

if (r12 != 0)
    *r12 = 0xffffffff

int32_t rcx = *arg1
int32_t rdi = 0
int32_t* r9 = *(arg1 + 8)
int32_t* rax = r9

if (rcx != 0)
    while (*rax != r15 || rax[1] != rbp)
        rdi += 1
        rax = &rax[3]
        
        if (rdi u>= rcx)
            goto label_142bd92e4

if (rcx != 0 && rdi u< rcx)
    goto label_142bd9394

label_142bd92e4:
int32_t r8 = arg1[1]
int32_t rdx = 0
int32_t* r14_1 = nullptr
uint64_t r13_1 = zx.q(rcx + 1)

if (r13_1.d u< r8)
label_142bd9353:
    int64_t rax_5 = *(arg1 + 8)
    *(rax_5 + ((r13_1 * 3 - 3) << 2)) = 0
    r14_1 = rax_5 + ((r13_1 * 3 - 3) << 2)
    r14_1[2] = 0
    *arg1 = r13_1.d
else
    arg_28.d = 0
    
    if (r13_1.d u<= r8)
        goto label_142bd934f
    
    int32_t rax_2 = (r13_1 + 7).d & 0xfffffff8
    int64_t rax_3 = sub_142b99a90(r10, 0xc, r8, rax_2, r9, &arg_28)
    rdx = arg_28.d
    r10 = arg4
    *(arg1 + 8) = rax_3
    
    if (rdx == 0)
        arg1[1] = rax_2
    label_142bd934f:
        
        if (rdx == 0)
            goto label_142bd9353

if (rdx == 0)
    r14_1[2] = arg_18
    *r14_1 = r15
    r14_1[1] = rbp
label_142bd9394:
    uint64_t rax_7 = zx.q(arg1[4])
    rdx = 0
    int32_t* r14_9
    
    if (rax_7.d != 0)
        r14_9 = *(arg1 + 0x18) + ((rax_7 * 3 - 3) << 3)
    label_142bd942c:
        
        if (rdx == 0)
            char* r8_5
            
            if (rdi u< *r14_9)
                r8_5 = (zx.q(rdi) u>> 3) + *(r14_9 + 8)
                *r8_5 |= (0x80 s>> (rdi.b & 7)).b
            else
                int32_t rax_12 = sub_142bd9f00(r14_9, rdi + 1, arg4)
                rbx = rax_12
                
                if (rax_12 == 0)
                    *r14_9 = rdi + 1
                    r8_5 = (zx.q(rdi) u>> 3) + *(r14_9 + 8)
                    *r8_5 |= (0x80 s>> (rdi.b & 7)).b
            
            if (rbx == 0 && r12 != 0)
                *r12 = rdi
            
            return zx.q(rbx)
    else
        int32_t r8_1 = arg1[5]
        uint64_t rbp_1 = zx.q((rax_7 + 1).d)
        
        if (rbp_1.d u<= r8_1)
            goto label_142bd93f8
        
        arg_18 = 0
        int32_t r15_2 = (rbp_1 + 7).d & 0xfffffff8
        int64_t rax_9 = sub_142b99a90(r10, 0x18, r8_1, r15_2, *(arg1 + 0x18), &arg_18)
        rdx = arg_18
        *(arg1 + 0x18) = rax_9
        
        if (rdx == 0)
            arg1[5] = r15_2
        label_142bd93f8:
            int64_t rax_10 = *(arg1 + 0x18)
            *(rax_10 + ((rbp_1 * 3 - 3) << 3)) = 0
            r14_9 = rax_10 + ((rbp_1 * 3 - 3) << 3)
            r14_9[4] = 0
            arg1[4] = rbp_1.d
            goto label_142bd942c

return zx.q(rdx)
