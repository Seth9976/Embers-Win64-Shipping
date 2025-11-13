// 函数: sub_142673070
// 地址: 0x142673070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
void* rbp = *(*(*(arg1 + 0xe8) + 0x4a8) + 8)
int64_t rax_1 = sub_142610fe0(rbp, *(arg3 + 0x60), *(arg3 + 0x64), rsi.d)
int32_t* r8_1 = *(arg3 + 0x2d0)
int32_t* rdx_1 = r8_1
void* rax_3 = sx.q(*(arg3 + 0x2d8)) * 0x38 + r8_1
int32_t rdx_7

if (r8_1 != rax_3)
    while (*rdx_1 != rsi.d)
        rdx_1 = &rdx_1[0xe]
        
        if (rdx_1 == rax_3)
            goto label_1426730e9
    
    rdx_7 = ((rdx_1 - r8_1) s/ 0x38).d

int64_t rax_29

if (r8_1 == rax_3 || rdx_7 == 0xffffffff)
label_1426730e9:
    sub_142615c20(rbp, rax_1, nullptr, nullptr)
    int32_t i = (rax_1 u>> (*(rbp + 0xa0)).b).d & ((1 << (*(rbp + 0x9c)).b).d - 1)
    int32_t* rdx_3 = *arg5
    int64_t r8_2 = sx.q(arg5[1].d)
    int32_t* rax_4 = rdx_3
    void* rcx_5 = &rdx_3[r8_2]
    
    if (rdx_3 != rcx_5)
        while (*rax_4 != i)
            rax_4 = &rax_4[1]
            
            if (rax_4 == rcx_5)
                goto label_142673435
        
        rax_29 = (rax_4 - rdx_3) s>> 2
    
    if (rdx_3 == rcx_5 || rax_29.d == 0xffffffff)
    label_142673435:
        int32_t rax_31 = (r8_2 + 1).d
        arg5[1].d = rax_31
        
        if (rax_31 s> *(arg5 + 0xc))
            sub_1405a4cf0(arg5)
        
        int64_t rax_32 = *arg5
        *((r8_2 << 2) + rax_32) = i
        return rax_32
else
    int32_t* r15_2 = sx.q(rdx_7) * 0x38 + r8_1
    int64_t r12_5
    
    if (rax_1 != 0)
        *(arg1 + 0xac) -= 1
        sub_142615c20(rbp, rax_1, nullptr, nullptr)
        char r10_1 = (*(rbp + 0xa0)).b
        char rdx_9 = (*(rbp + 0x9c)).b
        char r9_1 = r10_1 + rdx_9
        char rdx_10 = (*(rbp + 0x98)).b
        int32_t i_1 = (rax_1 u>> r10_1).d & ((1 << rdx_9).d - 1)
        uint64_t rdx_11 = 1
        int32_t r8_7 = (((rax_1 u>> r9_1).d & ((1 << rdx_10).d - 1)) + 1) & ((1 << rdx_10) - 1)
        
        if (r8_7 != 0)
            rdx_11 = zx.q(r8_7)
        
        int32_t* r8_8 = *arg5
        int64_t rdx_13 = sx.q(arg5[1].d)
        r12_5 = (zx.q((1 << r10_1).d - 1) & zx.q(rax_1.d)) | rdx_11 << r9_1 | zx.q(i_1) << r10_1
        int32_t* rcx_14 = r8_8
        void* rax_18 = &r8_8[rdx_13]
        
        if (r8_8 != rax_18)
            while (*rcx_14 != i_1)
                rcx_14 = &rcx_14[1]
                
                if (rcx_14 == rax_18)
                    goto label_14267325f
        
        if (r8_8 == rax_18 || ((rcx_14 - r8_8) s>> 2).d == 0xffffffff)
        label_14267325f:
            int32_t rax_19 = (rdx_13 + 1).d
            arg5[1].d = rax_19
            
            if (rax_19 s> *(arg5 + 0xc))
                sub_1405a4cf0(arg5)
            
            *((rdx_13 << 2) + *arg5) = i_1
    else if (arg4[1].d == *(arg4 + 0x34))
    labelid_45:
        r12_5 = 0
    else
        void* rcx_18 = arg4[8]
        void* r8_9 = &arg4[7]
        
        if (rcx_18 != 0)
            r8_9 = rcx_18
        
        int32_t rax_22 = *(r8_9 + (((sx.q(arg4[9].d) - 1) & rsi) << 2))
        
        if (rax_22 == 0xffffffff)
        label_1426732cc:
            r12_5 = 0
        else
            int64_t r8_10 = *arg4
            int64_t rdx_17
            
            while (true)
                rdx_17 = sx.q(rax_22)
                int64_t rcx_19 = rdx_17 * 3
                
                if (*(r8_10 + (rcx_19 << 3)) == rsi.d)
                    break
                
                rax_22 = *(r8_10 + (rcx_19 << 3) + 0x10)
                
                if (rax_22 == 0xffffffff)
                    goto label_1426732cc_2
            
            if (rax_22 == 0xffffffff)
            label_1426732cc_1:
                r12_5 = 0
            else
                void* r12_7 = r8_10 + rdx_17 * 0x18
                
                if (r12_7 == 0)
                label_1426732cc_2:
                    r12_5 = 0
                else
                    r12_5 = *(r12_7 + 8)
    
    rax_29 = *(r15_2 + 0x28)
    
    if (rax_29 != 0)
        void* rdx_18 = *rax_29
        
        if (rdx_18 != 0)
            int32_t r8_11 = r15_2[8]
            
            if (r8_11 s> 0)
                int64_t arg_8 = 0
                int32_t rax_23
                int64_t r12_6
                void* r13_1
                int64_t* r14_2
                rax_23, r12_6, r13_1, r14_2 = sub_142602d30(rbp, rdx_18, r8_11, 1, r12_5, &arg_8)
                
                if ((rax_23 & 0x80000004) == 0x80000004 && r12_6 != 0)
                    rax_23, r13_1, r14_2 =
                        sub_142602d30(rbp, **(r15_2 + 0x28), r15_2[8], 1, 0, &arg_8)
                
                rax_29 = zx.q(rax_23 u>> 0x1f)
                
                if (rax_29.b == 0)
                    int32_t* rdx_20 = *r14_2
                    int64_t r8_13 = sx.q(r14_2[1].d)
                    int32_t* rcx_26 = rdx_20
                    int32_t i_2 = (arg_8 u>> (*(rbp + 0xa0)).b).d & ((1 << (*(rbp + 0x9c)).b).d - 1)
                    void* rax_25 = &rdx_20[r8_13]
                    
                    if (rdx_20 != rax_25)
                        while (*rcx_26 != i_2)
                            rcx_26 = &rcx_26[1]
                            
                            if (rcx_26 == rax_25)
                                goto label_1426733d0
                    
                    if (rdx_20 == rax_25 || ((rcx_26 - rdx_20) s>> 2).d == 0xffffffff)
                    label_1426733d0:
                        int32_t rax_27 = (r8_13 + 1).d
                        r14_2[1].d = rax_27
                        
                        if (rax_27 s> *(r14_2 + 0xc))
                            sub_1405a4cf0(r14_2)
                        
                        *((r8_13 << 2) + *r14_2) = i_2
                    
                    *(r13_1 + 0xac) += 1
                    rax_29 = *(r15_2 + 0x28)
                    
                    if (rax_29 != 0 && *rax_29 != 0)
                        *rax_29 = 0
                    
                    r15_2[8] = 0
                    *r15_2 = 0

return rax_29
